#include "CheckStatic.h"

static int foo = 10;

int increaseFoo()
{
    ++foo;
    return foo;
}