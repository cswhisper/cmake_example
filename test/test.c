#include <stdio.h>

#include <lib1/lib1.h>
#include <lib2/lib2.h>

#ifdef BUILD_WITH_LIB3
    #include <lib3/lib3.h>
#endif

int main( void )
{
    printf("%d %d\n", Lib1_test(), Lib2_test());
#ifdef BUILD_WITH_LIB3
    printf("%d\n", Lib3_test());
#endif
    return 0;
}
