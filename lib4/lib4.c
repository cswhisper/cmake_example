#include "lib4.h"

static int l4_test( void )
{
    return 4;
}

int Lib4_test( void )
{
    return l4_test();
}
