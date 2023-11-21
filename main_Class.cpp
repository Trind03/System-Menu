#pragma once

class storage
{
    public:
    /** Storage */
    bool main_loop;
    unsigned int cycles;
    std::string user_Input;
    std::string title = "System-Menu";

    /** Methods */

    void clear();
    void main_menu(storage &ref);

// public:
    storage(bool Loop,int Cycles): main_loop(Loop),cycles(Cycles)
    {
        std::cout << "Loading up.." << std::endl;
        system("clear");
    }


    ~storage()
    {
        std::cout << "Deleting.." << std::endl;
        main_loop = 0;
        cycles = 0;
        user_Input = "0";
    }
    
};

void main_menu(storage &ref)
{
    std::cout << ref.title;
}

void clear()
{system("clear");}