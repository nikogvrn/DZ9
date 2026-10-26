#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_CTYPE, "RUS");
    int r;
    char symbol;

    printf("Введите радиус r: ");
    scanf("%d", &r);

    printf("Введите символ для рисования: ");
    scanf(" %c", &symbol);

    for (int y = 2 * r; y >= -2 * r; y--) {
        for (int xScreen = -3 * r; xScreen <= 3 * r; xScreen++) {
            double x = xScreen / 2.0;

            double circle = fabs(x * x + y * y - r * r);

            double absX = fabs(x);
            double absY = fabs(y);

            double rhomb = fabs(absX + absY - sqrt(2) * r);

            if (circle <= r or rhomb < 0.5)
                putchar(symbol);
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}