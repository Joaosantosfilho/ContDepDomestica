#ifndef DB_H
#define DB_H
#pragma once
#include <string>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlServerCe;
using namespace System::IO;


ref class DB
{
private:
    static String^ conec;
    static System::Data::SqlServerCe::SqlCeConnection^ ligacao;
public:
    static void iniciarDB();
    static void execComandNQDB(String^ str);
    static DataTable^ execDataReaderDB(String^ str);
    //static int execDataReaderIntDB(String^ str);
};

#endif //endif DB_H

