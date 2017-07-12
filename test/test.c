#include <stdio.h>

#include "lib1.h"
#include "lib2.h"

int main( void )
{
    printf("%d %d\n", Lib1_test(), Lib2_test());
    return 0;
}
