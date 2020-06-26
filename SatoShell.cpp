/////////////////////////////////////////////////////////////////////////
// Sato Shell Information                                               /
//                                                                      /
// Hello and welcome to SatoShell! This is pretty much a fake command   /
// prompt, designed to make you look like a hacker.                     /
//                                                                      /
// While this is really for pranks, there are a few cool features.      /
// See the README.md file for more.                                     /
/////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <windows.h>
#include <Lmcons.h>
#include <stdlib.h>
#include "copyright.h"

using namespace std;

// Namespaces that hold functions:

namespace l {
    string nothing;
    int isView;
    int number;
    int show(){
    cout << "SEE: www.apache.org/licenses/LICENSE-2.0.txt \n";
    return 0;
    }
    int help() {
        cout << "See riverside.rocks/satoshell for help docs. \n";
        return 0;
    }
    int view() {
        cout << "Waiting for connection in port " << rand() % 10000 + 1000 << "\n";
        cout << "Error, the status code of " << rand() % 600 + 100 << " was returned. Press A to try again. \n";
        cin >> nothing;
        cout << "Waiting for connection in port " << rand() % 10000 + 1000 << "\n";
        cout << "Connection Established. \n \n Ready to view SQL records. \n";
        isView = 1;
        return 0;
    }
    int record() {
        if (isView == 1) {
            int port = rand() % 10000 + 1000;
            cout << "SQL Viewer connected on port " << port << " \n";
            cout << "Type 'ok' to scan records. \n";
            cin;
            while (200 > number) {
                cout << "Preparing to connect to SQL server on port << " << port;
                cout << "Collecting data " << rand() % 10000 + 1000 << " bytes reviewed. \n \n";
                number = number + 1;
            }
        }
        else {
            cout << "ERR: No connection established. Do this by running 'view'.  \n";
        }
        return 0;
    }
}


namespace general {
    int welcome() {
        cout << "\n";
        cout << "(c) 2020 Riverside Rocks. All rights reserved.\n";
        cout << "Sato Shell / RCommand [v0.1.1]\n";
        cout << "For help, type help. For license details, please type licence.";
        return 0;
    }

    int _break() {
        int num = 0;
        while (num < 3) {
            cout << "\n";
            num = num + 1;
        }
        return 0;
    }

    int asklogic() {
        string q;
        cout << "Admin>";
        cin >> q;
        if (q == "licence") {
            l::show();
        }else if (q == "help") {
            l::help();
        }
        else if (q == "view") {
            l::view();
        }
        else if (q == "record") {
            l::record();
        }
        else {
            cout << "'" << q << "' is not a valid command. \n";
        }
        return 0;
    }
}

using namespace general;

// Builds all functions, this part is generaly not touched.

int main()
{
    welcome();
    _break();
    while (true) {
        asklogic();
    }
}