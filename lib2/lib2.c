#include "lib2.h"

#include <lib4/lib4.h>

static int l2_test( void )
{
    return Lib4_test();
}

int Lib2_test( void )
{
    return l2_test();
}
