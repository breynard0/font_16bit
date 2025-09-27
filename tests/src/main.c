#include "raylib.h"
#include "font_16.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 448;

    const int size = 32;

    char text[256] = {};
    int text_len = 0;

    int proportional = 0;

    InitWindow(screenWidth, screenHeight, "letter_drawing");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // Handle input
        do
        {
            const char pressed_char = (char)GetCharPressed();
            if (pressed_char == 0)
            {
                break;
            }
            text[text_len] = pressed_char;
            text_len++;
        }
        while (true);

        if (IsKeyPressed(KEY_BACKSPACE) && text_len > 0)
        {
            text_len--;
        }

        if (IsKeyPressed(KEY_TAB))
        {
            proportional = !proportional;
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        int i = 32;
        for (int y = 0; y < screenHeight; y += size)
        {
            int place_width = 0;
            for (int x = 0; x < screenWidth; x += size)
            {
                unsigned short buffer[16];
                int place_width_update = size - (16 - populate_letter_buffer((char)i, buffer)) * (size / 16) + 4;
                if (i <= 126)
                {
                    if (!proportional)
                    {
                        place_width = x;
                    }
                    for (int x1 = 0; x1 < 16; x1++)
                    {
                        for (int y1 = 0; y1 < 16; y1++)
                        {
                            const unsigned short filled = get_pixel(buffer, x1, y1);
                            if (filled)
                            {
                                DrawRectangle(place_width + x1 * (size / 16), y + y1 * (size / 16), size / 16,
                                              size / 16, BLACK);
                            }
                        }
                    }
                    place_width += place_width_update;
                }

                i++;
            }
        }

        DrawText("Try typing some letters! <TAB> toggles proportional.", size, screenHeight - size - 4, 20, BLACK);

        int place_width = 0;
        for (int idx = 0; idx < text_len; idx++)
        {
            unsigned short buffer[16];

            int place_width_update = size - (16 - populate_letter_buffer(text[idx], buffer)) * (size / 16) + 4;

            if (text[idx] < 126)
            {
                if (!proportional)
                {
                    place_width = idx * size;
                }
                for (int x1 = 0; x1 < 16; x1++)
                {
                    for (int y1 = 0; y1 < 16; y1++)
                    {
                        const unsigned short filled = get_pixel(buffer, x1, y1);
                        if (filled)
                        {
                            DrawRectangle(size + place_width + x1 * (size / 16), screenHeight / 2 + y1 * (size / 16),
                                          size / 16, size / 16, BLACK);
                        }
                    }
                }
                place_width += place_width_update;
            }
        }

        EndDrawing();
    }

    CloseWindow();
}
