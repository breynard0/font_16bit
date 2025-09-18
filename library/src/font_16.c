#include "characters/uppercase.h"
#include "characters/other.h"

void populate_letter_buffer(const char letter, short buffer[16])
{
    const short* reference;
    switch (letter)
    {
    case 'A':
        reference = &LETTER_UPPER_A[0];
        break;
    case 'B':
        reference = &LETTER_UPPER_B[0];
        break;
    case 'C':
        reference = &LETTER_UPPER_C[0];
        break;
    case 'D':
        reference = &LETTER_UPPER_D[0];
        break;
    case 'E':
        reference = &LETTER_UPPER_E[0];
        break;
    case 'F':
        reference = &LETTER_UPPER_F[0];
        break;
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