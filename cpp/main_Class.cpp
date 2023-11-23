#pragma once
#define Sucsess_Exit_Code 0
#define Error_Exit_Code 1

class Storage
{
    /** Storage */
    bool main_loop;
    unsigned int cycles;
    std::string user_Input;
    std::string title = "System-Menu";

public:
    Storage(bool Loop,int Cycles): main_loop(Loop),cycles(Cycles)
    {
        std::cout << "Loading up.." << std::endl;
        clear();
    }

    int main_Loop();
    void clear()
    {system("cls");}

    ~Storage()
    {
        std::cout << "Freeing up allocaded memory.." << std::endl;
        main_loop = 0;
        cycles = 0;
        user_Input = "0";
    }
    
};

int Storage::main_Loop()
{
    while(main_loop)
    {
        std::cout << "***** SYSTEM-CLI-MENU ****" << std::endl << std::endl;
        std::cout << "System hardware info: I" << std::endl;
        std::cout << "System shutdown: S" << std::endl;
        std::cout << "Cancel system shutdown: C" << std::endl;
        std::cout << "Terminate: T" << std::endl << std::endl;
        std::cout << "Field: ";
        std::cin >> user_Input;

        if(user_Input == "I" || user_Input == "i")
        {
            clear();
            system("systeminfo");
            system("pause");
            clear();
        }
        else if(user_Input == "S" || user_Input == "s")
        {
            clear();
            std::cout << "Shutdown command executing.. \n\n";
            system("shutdown -s -t 600");
            system("pause");
            clear();
        }

        else if(user_Input == "C" || user_Input == "c")
        {
            clear();
            std::cout << "Shutdown command executing.. \n\n";
            system("shutdown -a");
            system("pause");
            clear();
        }

        else if(user_Input == "T" || user_Input == "t")
        {
            clear();
            std::cout << "Terminating software..\n\n";

            return Sucsess_Exit_Code;
        }

        else
        {
            std::cout << "Error invalid input";
            system("pause");
            return Error_Exit_Code;
        }

    }
    return Sucsess_Exit_Code;
}

