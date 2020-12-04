// CMD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//function to restart an .exe program by killing the task then starting it
void  restart(string program) {
    //killing the program
    string kill_cmd = "TASKKILL /F /IM " + program + ".exe /T";
    system(kill_cmd.c_str());
    //system("TASKKILL / F / IM" + program + ".exe/ T");

    //starting the program
    string start_cmd = "start " + program + ".exe";
    system(start_cmd.c_str());
    
}

int main()
{
    bool running = true;
    while (running) {
        string choice;
        cout << "Enter the name of the .exe program or Q to exit:";
        cin >> choice;
        if (choice != "Q") {
            restart(choice);
        }
        else {
            running = false;
        }
    }
}

