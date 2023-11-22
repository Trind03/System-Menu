/** Software - by - Torstein */

/** System CLI Menu*/
#include <iostream>
#include <string>
#include "main_Class.h"

/** Macro declaration */
#define Sucsess_Exit_Code 0
#define Error_Exit_Code 1


int main()
{
    Storage *storage = new Storage(true,0);

    while(storage->main_loop)
    {
        std::cout << "SYSTEM-CLI-MENU" << std::endl;
        std::cout << "System hardware info: S" << std::endl;
        std::cout << "System shutdown: A" << std::endl << std::endl;
        std::cout << "Field: ";
        std::cin >> storage->user_Input;

        if(storage->user_Input == "S")
        {
            storage->clear();
            system("systeminfo");
        }
        else if(storage->user_Input == "A")
        {
            storage->clear();
            std::cout << "Shutdown command executing.. ";
            system("pause>0");
        }

        else
        {
            std::cout << "Error invalid input";
            system("pause>0");
            return Error_Exit_Code;
        }

    }
    return Sucsess_Exit_Code;
}