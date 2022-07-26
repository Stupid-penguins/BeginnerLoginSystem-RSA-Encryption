#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <direct.h>
#include<unistd.h>
#include <sys/stat.h>

using namespace std;

void TitleOutput();

int main() {
    string User, Password, FolderName, Password_N, Password_F,R_directory ,M_Directory="User-Data/";
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
    cout << "2: Log In" << endl;
    usleep(800000);
    cout << "3: Remove Account" << endl;
    usleep(800000);
    cout << endl << "Choose: ";
    cin >> AccountCreation;

    if (AccountCreation == 0) {

        cout << "Account Creation fail";
        return 3;

    } else if (AccountCreation == 1) {

        cout << endl << "Account Creation, Please choose a Username: ";
        cin >> User;
        FolderName = M_Directory + User;


        if (mkdir(FolderName.c_str()) == -1)
            cout << "Error creating User directory" << endl;
        else

            cout << endl << "What will be your password?: ";
            cin >> Password;
            Password_F = FolderName + "/Password.txt";

            ofstream FilePassword(Password_F.c_str());
            FilePassword << Password;
            FilePassword.close();

            cout << "Account Creation success" << endl;

    } else if (AccountCreation == 2) {
        cout << "Log In" << endl;
    } else if (AccountCreation == 3) {
        cout << "What is your account name?: ";
        cin >> User;
        R_directory = "rm -r " + M_Directory + User;
        system(R_directory.c_str());
    }



    system("pause");


    return 0;
};


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