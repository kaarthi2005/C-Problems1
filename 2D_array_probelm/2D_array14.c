#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int arr[R][C];
   

 
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < R; i++) {
        int isPalindrome = 1;
        for (int j = 0; j < C / 2; j++) {
            if (arr[i][j] != arr[i][C - 1 - j]) {
                isPalindrome = 0;
                break;
            }
        }
        if (isPalindrome) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
