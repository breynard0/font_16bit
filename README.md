# 16 Bit Binary Bitmap Font

## What is included?

ASCII characters 40 through 126 are included here

For each character, a short array with length of 16 encodes the letter in its bits, and there is also another short that
says the maximum width of that character. This width value is rounded up to the nearest even number, and the left and
right padding will be equal. This can be used to turn this into a proportional font, though it should also
work great monospaced.

Functionality for bold and italic characters is not included in this library, but feel free to bit fiddle your way into
it. There are functions for adding underline and strikethrough effects to the letters.

## Conventions

- Uppercase letters and tall punctuation are 12 tall (margin 1 on top 3 on bottom), 8-14 wide
- Lowercase letters are 8 tall (margin 5 on top 3 on bottom), 8-12 wide
- Other characters such as periods or commas are smaller