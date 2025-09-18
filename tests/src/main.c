#include "raylib.h"
#include "font_16.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 448;

    const int size = 32;

    InitWindow(screenWidth, screenHeight, "letter_drawing");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        int i = 40;
        for (int y = 0; y < screenHeight; y += size)
        {
            for (int x = 0; x < screenWidth; x += size)
            {
                short buffer[16];
                populate_letter_buffer((char)i, buffer);
                if (i <= 126)
                {
                    for (int x1 = 0; x1 < 16; x1++)
                    {
                        for (int y1 = 0; y1 < 16; y1++)
                        {
                            const short filled = get_pixel(buffer, x1, y1);
                            if (filled)
                            {
                                DrawRectangle(x + x1 * (size / 16), y + y1 * (size / 16), size / 16, size / 16, BLACK);
                            }
                        }
                    }
                }

                i++;
            }
        }

        EndDrawing();
    }

    CloseWindow();
}
