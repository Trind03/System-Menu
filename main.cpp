/** Software - by - Torstein */
#include <iostream>
#include <string>
#include "./header/main_Class.h"

/** Macro declaration */
#define Sucsess_Exit_Code 0
#define Error_Exit_Code 1

int main()
{
    Storage *storage = new Storage(true,0);

    while(storage->main_loop)
    {
        std::cout << "***** SYSTEM-CLI-MENU ****" << std::endl << std::endl;
        std::cout << "System hardware info: I" << std::endl;
        std::cout << "System shutdown: S" << std::endl;
        std::cout << "Cancel system shutdown: C" << std::endl;
        std::cout << "Terminate: T" << std::endl << std::endl;
        std::cout << "Field: ";
        std::cin >> storage->user_Input;

        if(storage->user_Input == "I" || storage->user_Input == "i")
        {
            storage->clear();
            system("systeminfo");
        }
        else if(storage->user_Input == "S" || storage->user_Input == "s")
        {
            storage->clear();
            std::cout << "Shutdown command executing.. ";
            system("shutdown -s -t 600");
            system("pause>null");
        }

        else if(storage->user_Input == "C" || storage->user_Input == "c")
        {
            storage->clear();
            std::cout << "Shutdown command executing.. ";
            system("shutdown -a");
            system("pause>null");
        }

        else if(storage->user_Input == "T" || storage->user_Input == "t")
        {
            storage->clear();
            std::cout << "Terminating software..";
            delete(storage);
            return Sucsess_Exit_Code;
        }

        else
        {
            std::cout << "Error invalid input";
            system("pause>null");
            delete(storage);
            return Error_Exit_Code;
        }

    }
    delete(storage);
    return Sucsess_Exit_Code;
}