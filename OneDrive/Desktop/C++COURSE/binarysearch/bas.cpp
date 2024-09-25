#include <iostream>
#include <graphics.h>
#include <cmath> // for math functions like sin()

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set the viewport and window
    setviewport(0, 0, 639, 479, 1);
    setbkcolor(WHITE);

    // Draw X and Y axes
    line(320, 0, 320, 480); // Y-axis
    line(0, 240, 640, 240); // X-axis

    // Plot sine graph
    for (int x = 0; x < 640; x++) {
        double y = 240 - 100 * sin((x - 320) * 3.14 / 180); // Amplitude = 100
        putpixel(x, y, RED);
    }

    getch();
    closegraph();

    return 0;
}
