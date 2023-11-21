/** System CLI Menu*/
#include <iostream>
#include <memory>
#include "main_Class.h"
/** Macro declaration */
#define Sucsess_Exit_Code 0
#define Error_Exit_Code 1


int main()
{
    std::unique_ptr<storage>(Ptr) = std::make_unique<storage>();

    while(Ptr->main_loop)
    {

    }
    return Sucsess_Exit_Code;
}