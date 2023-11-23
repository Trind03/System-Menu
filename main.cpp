/** Software - by - Torstein */
#include <iostream>
#include <string>
#include "./header/main_Class.h"



int main()
{
    Storage *Ptr = new Storage(true,0);

    int ret_value = Ptr->main_Loop();

    delete(Ptr);
    return ret_value;
}