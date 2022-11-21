#include <iostream>
#include "DataBase.h"
#include <filesystem>
#include "CadCateg.h"
#include "InserDespesas.h"

using namespace std;
//#include "SQLite/sqlite3.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlServerCe;
using namespace System::IO;

extern std::string conector;
extern std::string caminho;

inline void DB::iniciarDB()
{
    String^ con = gcnew String((conector).c_str());
    conec = con;
    ligacao = gcnew SqlCeConnection(conec);
    bool existe = std::filesystem::exists(caminho);

    if (!existe) {
        SqlCeEngine^ motor = gcnew SqlCeEngine(conec);
        motor->CreateDatabase();

        System::String^ str = "CREATE TABLE categoria("
            + "idCategoria INTEGER IDENTITY NOT NULL PRIMARY KEY,"
            + "categoria   NVARCHAR(20) NOT NULL,"
            + "tipoRecDesp INTEGER)";// TINYINT   NOT NULL)";

        DB::execComandNQDB(str);

        str = "CREATE TABLE transacao("
            + "idTransacao INTEGER   PRIMARY KEY IDENTITY NOT NULL,"
            + "idCategoria INTEGER   REFERENCES categoria(idCategoria) NOT NULL,"
            + "valor       MONEY   NOT NULL,"
            + "date        DATETIME  NOT NULL)";

        DB::execComandNQDB(str);

        str = "CREATE TABLE usuario("
            + "idSenha INTEGER   PRIMARY KEY IDENTITY NOT NULL,"
            + "nome   NVARCHAR(20) NOT NULL,"
            + "senha  NVARCHAR(20) NOT NULL,"
            + "date   DATETIME  NOT NULL)";

        DB::execComandNQDB(str);
    }
}

inline void DB::execComandNQDB(String^ strcom)
{
    ligacao->Open();
    SqlCeCommand^ comando = gcnew SqlCeCommand(strcom, ligacao);
    comando->ExecuteNonQuery();
    ligacao->Close();
}

inline DataTable^ DB::execDataReaderDB(String^ strcom)
{
    ligacao->Open();
    SqlCeCommand cmd(strcom, ligacao);
    SqlCeDataAdapter^ adaptador = gcnew  SqlCeDataAdapter(strcom, ligacao);
    DataTable^ dt = gcnew DataTable("Records");
    adaptador->Fill(dt);
    ligacao->Close();
    return dt;
}

//inline int DB::execDataReaderIntDB(String^ strcom)
//{
//    ligacao->Open();
//    SqlCeCommand cmd(strcom, ligacao);
////    SqlCeDataAdapter^ adaptador = gcnew  SqlCeDataAdapter(strcom, ligacao);
////    DataTable^ dt = gcnew DataTable("Records");
////    adaptador->Fill(dt);
//    ligacao->Close();
//    return dt;
//
//}

