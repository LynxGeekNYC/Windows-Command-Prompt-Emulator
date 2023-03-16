#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {

    while (true) {

        string command;
        cout << ">> ";
        getline(cin, command);

        if (command == "DIR") {
            system("dir");
        }
        else if (command.find("COPY ") == 0) {
            string source = command.substr(5);
            string cmd = "copy " + source + " destination.txt";
            system(cmd.c_str());
            cout << "File copied successfully." << endl;
        }
        else if (command.find("FORMAT ") == 0) {
            string drive = command.substr(7, 2);
            string cmd = "format " + drive + " /FS:NTFS /Q";
            system(cmd.c_str());
            cout << "Drive formatted successfully." << endl;
        }
        else {
            cout << "Invalid command." << endl;
        }

    }

    return 0;
}
