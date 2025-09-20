#include "characters/uppercase.h"
#include "characters/lowercase.h"
#include "characters/other.h"

int populate_letter_buffer(const char letter, short buffer[16])
{
    const short* reference;
    int out_width = 16;

    switch (letter)
    {
    case 'A':
        reference = &LETTER_UPPER_A[0];
        out_width = LETTER_UPPER_A_WIDTH;
        break;
    case 'B':
        reference = &LETTER_UPPER_B[0];
        out_width = LETTER_UPPER_B_WIDTH;
        break;
    case 'C':
        reference = &LETTER_UPPER_C[0];
        out_width = LETTER_UPPER_C_WIDTH;
        break;
    case 'D':
        reference = &LETTER_UPPER_D[0];
        out_width = LETTER_UPPER_D_WIDTH;
        break;
    case 'E':
        reference = &LETTER_UPPER_E[0];
        out_width = LETTER_UPPER_E_WIDTH;
        break;
    case 'F':
        reference = &LETTER_UPPER_F[0];
        out_width = LETTER_UPPER_F_WIDTH;
        break;
    case 'G':
        reference = &LETTER_UPPER_G[0];
        out_width = LETTER_UPPER_G_WIDTH;
        break;
    case 'H':
        reference = &LETTER_UPPER_H[0];
        out_width = LETTER_UPPER_H_WIDTH;
        break;
    case 'I':
        reference = &LETTER_UPPER_I[0];
        out_width = LETTER_UPPER_I_WIDTH;
        break;
    case 'J':
        reference = &LETTER_UPPER_J[0];
        out_width = LETTER_UPPER_J_WIDTH;
        break;
    case 'K':
        reference = &LETTER_UPPER_K[0];
        out_width = LETTER_UPPER_K_WIDTH;
        break;
    case 'L':
        reference = &LETTER_UPPER_L[0];
        out_width = LETTER_UPPER_L_WIDTH;
        break;
    case 'M':
        reference = &LETTER_UPPER_M[0];
        out_width = LETTER_UPPER_M_WIDTH;
        break;
    case 'N':
        reference = &LETTER_UPPER_N[0];
        out_width = LETTER_UPPER_N_WIDTH;
        break;
    case 'O':
        reference = &LETTER_UPPER_O[0];
        out_width = LETTER_UPPER_O_WIDTH;
        break;
    case 'P':
        reference = &LETTER_UPPER_P[0];
        out_width = LETTER_UPPER_P_WIDTH;
        break;
    case 'Q':
        reference = &LETTER_UPPER_Q[0];
        out_width = LETTER_UPPER_Q_WIDTH;
        break;
    case 'R':
        reference = &LETTER_UPPER_R[0];
        out_width = LETTER_UPPER_R_WIDTH;
        break;
    case 'S':
        reference = &LETTER_UPPER_S[0];
        out_width = LETTER_UPPER_S_WIDTH;
        break;
    case 'T':
        reference = &LETTER_UPPER_T[0];
        out_width = LETTER_UPPER_T_WIDTH;
        break;
    case 'U':
        reference = &LETTER_UPPER_U[0];
        out_width = LETTER_UPPER_U_WIDTH;
        break;
    case 'V':
        reference = &LETTER_UPPER_V[0];
        out_width = LETTER_UPPER_V_WIDTH;
        break;
    case 'W':
        reference = &LETTER_UPPER_W[0];
        out_width = LETTER_UPPER_W_WIDTH;
        break;
    case 'X':
        reference = &LETTER_UPPER_X[0];
        out_width = LETTER_UPPER_X_WIDTH;
        break;
    case 'Y':
        reference = &LETTER_UPPER_Y[0];
        out_width = LETTER_UPPER_Y_WIDTH;
        break;
    case 'Z':
        reference = &LETTER_UPPER_Z[0];
        out_width = LETTER_UPPER_Z_WIDTH;
        break;
    case 'a':
        reference = &LETTER_LOWER_A[0];
        out_width = LETTER_LOWER_A_WIDTH;
        break;
    case 'b':
        reference = &LETTER_LOWER_B[0];
        out_width = LETTER_LOWER_B_WIDTH;
        break;
    case 'c':
        reference = &LETTER_LOWER_C[0];
        out_width = LETTER_LOWER_C_WIDTH;
        break;
    case 'd':
        reference = &LETTER_LOWER_D[0];
        out_width = LETTER_LOWER_D_WIDTH;
        break;
    case 'e':
        reference = &LETTER_LOWER_E[0];
        out_width = LETTER_LOWER_E_WIDTH;
        break;
    case 'f':
        reference = &LETTER_LOWER_F[0];
        out_width = LETTER_LOWER_F_WIDTH;
        break;
    case 'g':
        reference = &LETTER_LOWER_G[0];
        out_width = LETTER_LOWER_G_WIDTH;
        break;
    case 'h':
        reference = &LETTER_LOWER_H[0];
        out_width = LETTER_LOWER_H_WIDTH;
        break;
    case 'i':
        reference = &LETTER_LOWER_I[0];
        out_width = LETTER_LOWER_I_WIDTH;
        break;
    case 'j':
        reference = &LETTER_LOWER_J[0];
        out_width = LETTER_LOWER_J_WIDTH;
        break;
    case 'k':
        reference = &LETTER_LOWER_K[0];
        out_width = LETTER_LOWER_K_WIDTH;
        break;
    case 'l':
        reference = &LETTER_LOWER_L[0];
        out_width = LETTER_LOWER_L_WIDTH;
        break;
    case 'm':
        reference = &LETTER_LOWER_M[0];
        out_width = LETTER_LOWER_M_WIDTH;
        break;
    case 'n':
        reference = &LETTER_LOWER_N[0];
        out_width = LETTER_LOWER_N_WIDTH;
        break;
    case 'o':
        reference = &LETTER_LOWER_O[0];
        out_width = LETTER_LOWER_O_WIDTH;
        break;
    case 'p':
        reference = &LETTER_LOWER_P[0];
        out_width = LETTER_LOWER_P_WIDTH;
        break;
    case 'q':
        reference = &LETTER_LOWER_Q[0];
        out_width = LETTER_LOWER_Q_WIDTH;
        break;
    case 'r':
        reference = &LETTER_LOWER_R[0];
        out_width = LETTER_LOWER_R_WIDTH;
        break;
    case 's':
        reference = &LETTER_LOWER_S[0];
        out_width = LETTER_LOWER_S_WIDTH;
        break;
    case 't':
        reference = &LETTER_LOWER_T[0];
        out_width = LETTER_LOWER_T_WIDTH;
        break;
    case 'u':
        reference = &LETTER_LOWER_U[0];
        out_width = LETTER_LOWER_U_WIDTH;
        break;
    case 'v':
        reference = &LETTER_LOWER_V[0];
        out_width = LETTER_LOWER_V_WIDTH;
        break;
    case 'w':
        reference = &LETTER_LOWER_W[0];
        out_width = LETTER_LOWER_W_WIDTH;
        break;
    case 'x':
        reference = &LETTER_LOWER_X[0];
        out_width = LETTER_LOWER_X_WIDTH;
        break;
    case 'y':
        reference = &LETTER_LOWER_Y[0];
        out_width = LETTER_LOWER_Y_WIDTH;
        break;
    case 'z':
        reference = &LETTER_LOWER_Z[0];
        out_width = LETTER_LOWER_Z_WIDTH;
        break;
    default:
        reference = &LETTER_UNKNOWN[0];
        out_width = LETTER_UNKNOWN_WIDTH;
    }
    for (int i = 0; i < 16; i++)
    {
        buffer[i] = reference[i];
    }
    return out_width;
}

short get_pixel(const short buffer[16], const unsigned short x, const unsigned short y)
{
    const short row = buffer[y];
    return (short)(row & 0x1 << (16 - x));
}
