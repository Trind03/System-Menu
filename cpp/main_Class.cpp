#pragma once

class Storage
{
    public:
    /** Storage */
    bool main_loop;
    unsigned int cycles;
    std::string user_Input;
    std::string title = "System-Menu";

    /** Methods */

    void clear();

// public:
    Storage(bool Loop,int Cycles): main_loop(Loop),cycles(Cycles)
    {
        std::cout << "Loading up.." << std::endl;
        system("clear");
    }


    ~Storage()
    {
        std::cout << "Deleting.." << std::endl;
        main_loop = 0;
        cycles = 0;
        user_Input = "0";
    }
    
};

void Storage::clear()
{system("clear");}