#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h> // For Sleep and gotoxy

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int screenWidth = 80;
    int screenHeight = 24;
    int heartSize = 10;
    int centerX = screenWidth / 2;
    int centerY = screenHeight / 2;

    char heart[12][25] = {
        "  ******   ******  ",
        " ******** ******** ",
        " ************** ",
        " ************ ",
        " ********** ",
        " ******** ",
        " ****** ",
        " **** ",
        " ** ",
        " ",
        " "
    };

    int heartRows = 10;
    int heartCols = 18;

    int currentScale = 0;
    int maxScale = 5;

    for (int scale = 0; scale <= maxScale; scale++) {
        system("cls");

        int currentWidth = heartCols + (scale * 2);
        int currentHeight = heartRows + (scale * 1);
        int startX = centerX - currentWidth / 2;
        int startY = centerY - currentHeight / 2;

        for (int i = 0; i < currentHeight; i++) {
            for (int j = 0; j < currentWidth; j++) {
                int heartRow = i - (currentHeight - heartRows) / 2;
                int heartCol = j - (currentWidth - heartCols) / 2;

                if (heartRow >= 0 && heartRow < heartRows && heartCol >= 0 && heartCol < heartCols) {
                    char c = heart[heartRow][heartCol];
                    if (c == '*') {
                        gotoxy(startX + j, startY + i);
                        printf("*");
                    }
                }
            }
        }
        Sleep(100);
    }


    for (int scale = maxScale; scale >= 0; scale--) {
        system("cls");

        int currentWidth = heartCols + (scale * 2);
        int currentHeight = heartRows + (scale * 1);
        int startX = centerX - currentWidth / 2;
        int startY = centerY - currentHeight / 2;


        for (int i = 0; i < currentHeight; i++) {
            for (int j = 0; j < currentWidth; j++) {
                int heartRow = i - (currentHeight - heartRows) / 2;
                int heartCol = j - (currentWidth - heartCols) / 2;

                if (heartRow >= 0 && heartRow < heartRows && heartCol >= 0 && heartCol < heartCols) {
                    char c = heart[heartRow][heartCol];
                    if (c == '*') {
                        gotoxy(startX + j, startY + i);
                        printf("*");
                    }
                }
            }
        }
        Sleep(100);
    }


    system("cls");
    int finalWidth = heartCols;
    int finalHeight = heartRows;
    int finalStartX = centerX - finalWidth / 2;
    int finalStartY = centerY - finalHeight / 2;

    for (int i = 0; i < finalHeight; i++) {
        for (int j = 0; j < finalWidth; j++) {
            char c = heart[i][j];
            if (c == '*') {
                gotoxy(finalStartX + j, finalStartY + i);
                printf("*");
            }
        }
    }
    printf("\n\n\n");

    return 0;
}