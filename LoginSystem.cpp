#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <unistd.h>
#include <sys/stat.h>
#include <sstream>
using namespace std;
using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream; using std::ostringstream;

string readFileIntoString(const string& path) {
    ifstream input_file(path);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
             << path << "'" << endl;
        exit(EXIT_FAILURE);
    }
    return string((std::istreambuf_iterator<char>(input_file)), std::istreambuf_iterator<char>());
}

void TitleOutput();

int main() {
    string User, Password, FolderName, FolderName_L, Password_N, R_directory, M_Directory="User-Data/";
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
        FolderName_L = "mkdir " + FolderName;

        system(FolderName_L.c_str());

        cout << endl << "What will be your password?: ";
        cin >> Password;
        string Password_F;
        Password_F = FolderName + "/Password.txt";

        ofstream FilePassword(Password_F.c_str());
        FilePassword << Password;
        FilePassword.close();

        cout << "Account Creation success" << endl;

    } else if (AccountCreation == 2) {
        cout << "Make Sure you have a account before you Log-In!" << endl;

    } else if (AccountCreation == 3) {
        cout << "What is your account name?: ";

        cin >> User;
        R_directory = "rm -r " + M_Directory + User;
        system(R_directory.c_str());
    }
    cout << "What is your Username?: ";
    cin >> User;

    FolderName = M_Directory + User;
    Password_N = FolderName + "/Password.txt";

    string Password_F(Password_N.c_str());
    string FileOutput;
    FileOutput = readFileIntoString(Password_F.c_str());

    cout << endl << "What is your password: ";
    cin >> Password;

    if (Password == FileOutput) {
        cout << "Your password is correct" << endl;

    }
    else {
        cout << "Your password is incorrect" << endl;

    }

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