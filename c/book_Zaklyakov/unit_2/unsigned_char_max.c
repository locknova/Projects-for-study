#include <stdio.h>
#include <limits.h>

int main ()
{
    printf("unsigned char size: %d\n", sizeof(unsigned char));
    unsigned char a = ~0;
    printf("unsigned char max value = %d\n", a);
    printf("unsigned charmax= %d\n", UCHAR_MAX);
    printf("char bit count = %d\n", CHAR_BIT);
    printf("char suze = %d", sizeof(char));
    return 0;
}