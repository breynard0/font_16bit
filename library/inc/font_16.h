#ifndef FONT_16BIT_FONT_16_H
#define FONT_16BIT_FONT_16_H
// Populates the buffer that is passed in with the bitmap letter corresponding to the 'letter' field.
void populate_letter_buffer(char letter, short buffer[16]);
// Helper function to get a pixel (bit) at specified x and y coordinates in buffer. Does not modify buffer. Returns '0' if the bit is not set, and '1' otherwise.
short get_pixel(short buffer[16], unsigned short x, unsigned short y);
#endif //FONT_16BIT_FONT_16_H