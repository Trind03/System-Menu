/** System CLI Menu*/
#include <iostream>
#include <memory>
#include "main_Class.h"

/** Macro declaration */
#define Sucsess_Exit_Code 0
#define Error_Exit_Code 1


int main()
{
    storage ptr(true,0);

    while(ptr.main_loop)
    {
        ptr.main_menu(&ptr);

    }
    return Sucsess_Exit_Code;
}