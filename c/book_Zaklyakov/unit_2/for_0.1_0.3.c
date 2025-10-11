#include <stdio.h>

int main ()
{
    float x = 0.1;
    for (; x <= 0.3; x += 0.1)
    {
        printf("x=%.3f\n", x);
    }
    return 0;
}