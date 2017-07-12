#include "lib3.h"

static int l3_test( void )
{
    return 3;
}

int Lib3_test( void )
{
    return l3_test();
}
