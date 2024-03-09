#include <iostream>
#include "CheckStatic.h"

int main(int argc, char const *argv[])
{
    for (int i = 0; i < RANGE; i++)
    {
        std::cout << increaseFoo() << '\t';
    }
    
    return 0;
}
