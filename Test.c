#include <stdio.h>

int main()
{
    static const unsigned short int a = 123;
    static const unsigned short int b = 321;
    printf("Hello World!\n");
    printf("a = %hu, b = %hu\n", a,b);

    return 0;
}
