#include "lib1.h"

static int l1_test( void )
{
    return 1;
}

int Lib1_test( void )
{
    return l1_test();
}
