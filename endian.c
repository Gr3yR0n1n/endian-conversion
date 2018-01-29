#include "endian.h"

uint32_t big_endian2_little_endian(uint32_t s)
{
    uint32_t b1 = (s & 0xff000000) >> 24u;
    uint32_t b2 = (s & 0x00ff0000) >> 16u;
    uint32_t b3 = (s & 0x0000ff00) >> 8u;
    uint32_t b4 = (s & 0x000000ff);

    return (b4 << 24u)
            | (b3 << 16u)
            | (b2 << 8u )
            |  b1;
}

uint32_t little_endian2_big_endian(uint32_t s)
{
    uint32_t b1 = (s & 0x000000ff);
    uint32_t b2 = (s & 0x0000ff00);
    uint32_t b3 = (s & 0x00ff0000);
    uint32_t b4 = (s & 0xff000000);

    return (b1 << 24u)
            | (b2 << 8u)
            | (b3 >> 8u)
            | (b4 >> 24u);
}


