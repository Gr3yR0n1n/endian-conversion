#include <stdio.h>
#include "endian.h"

int main()
{
    uint32_t b = 0x10203040; //example

    printf("0x%x\n",b);

    uint32_t l = big_endian2_little_endian(b);

    printf("0x%x\n", l);

    uint32_t ba = little_endian2_big_endian(l);

    printf("0x%x\n",ba);

    return 0;
}

