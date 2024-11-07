#include <stdio.h>

int main() {
    int i, j;
    char arr[5][20];
    
    for (i = 0; i < 5; i++) {
        printf("Enter string %d: ", i + 1);
        scanf(" %[^\n]",&arr[i]);
            }
        
    
    for (i = 0; i < 5; i++) {
        int size = 0;
        while (arr[i][size] != '\0') {
            size++;
        }

        int count = 0;
    
        for (j = 0; j < size / 2; j++) {
            if (arr[i][j] == arr[i][size - j - 1]) {
                count++;
            }
        }

        if (count == size / 2) {
            printf("String %d is a palindrome\n", i + 1);
        } else {
            printf("String %d is not a palindrome\n", i + 1);
        }
        
    }
    
    return 0;
}
