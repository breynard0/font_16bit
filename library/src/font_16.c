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
    case 'G':
        reference = &LETTER_UPPER_G[0];
        break;
    case 'H':
        reference = &LETTER_UPPER_H[0];
        break;
    case 'I':
        reference = &LETTER_UPPER_I[0];
        break;
    case 'J':
        reference = &LETTER_UPPER_J[0];
        break;
    case 'K':
        reference = &LETTER_UPPER_K[0];
        break;
    case 'L':
        reference = &LETTER_UPPER_L[0];
        break;
    case 'M':
        reference = &LETTER_UPPER_M[0];
        break;
    case 'N':
        reference = &LETTER_UPPER_N[0];
        break;
    case 'O':
        reference = &LETTER_UPPER_O[0];
        break;
    case 'P':
        reference = &LETTER_UPPER_P[0];
        break;
    case 'Q':
        reference = &LETTER_UPPER_Q[0];
        break;
    case 'R':
        reference = &LETTER_UPPER_R[0];
        break;
    case 'S':
        reference = &LETTER_UPPER_S[0];
        break;
    case 'T':
        reference = &LETTER_UPPER_T[0];
        break;
    case 'U':
        reference = &LETTER_UPPER_U[0];
        break;
    case 'V':
        reference = &LETTER_UPPER_V[0];
        break;
    case 'W':
        reference = &LETTER_UPPER_W[0];
        break;
    case 'X':
        reference = &LETTER_UPPER_X[0];
        break;
    case 'Y':
        reference = &LETTER_UPPER_Y[0];
        break;
    case 'Z':
        reference = &LETTER_UPPER_Z[0];
        break;
        // case 'a':
        //     reference = &LETTER_LOWER_A[0];
        //     break;
        // case 'b':
        //     reference = &LETTER_LOWER_B[0];
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
    return (short)(row & 0x1 << (16 - x));
}
