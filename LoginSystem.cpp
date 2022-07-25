#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include<unistd.h>
#include <sys/stat.h>

using namespace std;

void TitleOutput();

int main() {
    string User, Password, FolderName, M_Directory="mkdir User-Data/";
    int AccountCreation;
    bool AccountCreated;

    TitleOutput();

    usleep(600000);
    cout << endl << "Welcome what would you like to do today" << endl;
    usleep(800000);
    cout<< endl << "0: Cancel" << endl;
    usleep(800000);
    cout << "1: Create account" << endl;
    usleep(800000);
    cout << "2: Log In";
    usleep(800000);
    cout << endl << endl << "Cnhoose: ";
    cin >> AccountCreation;

    if (AccountCreation == 0) {
        cout << "Account Creation fail";
        return 3;
    } else if (AccountCreation == 1) {
        cout << endl << "Account Creation, Please choose a Username: ";
        cin >> User;
        FolderName = M_Directory + User;
        system(FolderName.c_str());



        cout << "Account Creation success" << endl;

    } else if (AccountCreation == 2) {
        cout << "Log In" << endl;
    }




    return 0;
}


void TitleOutput() {
    usleep(200000);
    cout << endl << "██╗      ██████╗  ██████╗ ██╗███╗   ██╗    ███████╗██╗   ██╗███████╗████████╗███████╗███╗   ███╗";
    usleep(200000);
    cout << endl << "██║     ██╔═══██╗██╔════╝ ██║████╗  ██║    ██╔════╝╚██╗ ██╔╝██╔════╝╚══██╔══╝██╔════╝████╗ ████║";
    usleep(200000);
    cout << endl << "██║     ██║   ██║██║  ███╗██║██╔██╗ ██║    ███████╗ ╚████╔╝ ███████╗   ██║   █████╗  ██╔████╔██║";
    usleep(200000);
    cout << endl << "██║     ██║   ██║██║   ██║██║██║╚██╗██║    ╚════██║  ╚██╔╝  ╚════██║   ██║   ██╔══╝  ██║╚██╔╝██║";
    usleep(200000);
    cout << endl << "███████╗╚██████╔╝╚██████╔╝██║██║ ╚████║    ███████║   ██║   ███████║   ██║   ███████╗██║ ╚═╝ ██║";
    usleep(200000);
    cout << endl << "╚══════╝ ╚═════╝  ╚═════╝ ╚═╝╚═╝  ╚═══╝    ╚══════╝   ╚═╝   ╚══════╝   ╚═╝   ╚══════╝╚═╝     ╚═╝" << endl << endl;

}