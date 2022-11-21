#include "PagPrincipal.h"
#include "DataBase.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include "DataBase.cpp"

//#include "SQLite/sqlite3.h"

using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlServerCe;

void MarshalString(String^ s, string& os) {
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
}

[STAThread]

void main(){ //array<String^>^ args) {

    auto pastaDB = Application::StartupPath + "\\";
    auto nomeDB = pastaDB + "dados.sdf";
    auto strconect = "Data Source=" + nomeDB;

    MarshalString(strconect, conector);
    MarshalString(nomeDB, caminho);

    DB::iniciarDB();

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ContDepDomestica::PagPrincipal form;
    Application::Run(% form);
}
