#include "characters/other.h"

void populate_letter_buffer(const char letter, short buffer[16])
{
    const short* reference;
    switch (letter)
    {
    default:
        reference = &LETTER_UNKNOWN[0];
    }
    for (int i = 0; i < 16; i++)
    {
        buffer[i] = reference[i];
    }
}

short get_pixel(const short buffer[16], const unsigned short x, const unsigned short y)
{
    const short row = buffer[y];
    return (short)(row & 0x1 << (16-x));
}