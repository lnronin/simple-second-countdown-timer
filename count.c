#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () {
    int count;
    system("cls");
    printf("Enter Numbers in Seconds : ");
    scanf("%d",&count);
    while (count >= 0) {
        system("cls");
        printf("Time Left : %d",count);
        Sleep(1000);
        count--;
    }
    printf("\nCountdown Completed!");
    return 0;
}