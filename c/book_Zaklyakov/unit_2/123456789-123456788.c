#include <stdio.h>

int main ()
{
    float a, b, f;
    a = 123456789;
    b = 123456788;
    f = a - b;
    printf ("a-b=%.2f\n", f);
    return 0;
}