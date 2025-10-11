#include <stdio.h>
#include <limits.h>

void PrintByteType (unsigned char c)
{
    unsigned char highBit = 1 << (CHAR_BIT - 1);
    for (int i = 0; i < CHAR_BIT; ++i)
    {
        bool isSet = (i & highBit) != 0;
        printf ("%d", isSet ? 1 : 0);
        c << 1;
    }
}