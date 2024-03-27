/* Software - by - Torstein */
#include <future>
#include <memory>
#include "main_Class.cpp"
#define Version 2.2

int main()
{
    std::unique_ptr<Storage>storage = std::make_unique<Storage>(true);
    return storage->main_Loop();
}