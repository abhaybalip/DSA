// String Matching Algorithm - KMP Algo
// 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void KMP(char* str, char* word, int* ptr) {
    int i = 0, j = 0;
    while (i < strlen(str)) {
        if (word[j] == str[i]) {
            if (j == strlen(word) - 1) {
                printf("%s located at Index : %d \n", word, i - j + 1);
                j = ptr[j];
            }
            i++;
            j++;
        }
        else {
            if (j > 0) {
                j = ptr[j - 1];
            }
            else {
                i++;
            }
        }
    }
}

void FindOverlap(char* word, int* ptr) {
    int i = 1, j = 0, len = strlen(word);
    ptr[0] = 0;
    while (i < len) {
        if (word[i] == word[j]) {
            j++;
            ptr[i] = j;
            i++;
        }
        else {
            if (j != 0) {
                j = ptr[j - 1];
            }
            else {
                ptr[i] = 0;
                i++;
            }
        }
    }
}

int main() {
    char word[256], str[1024];
    int* ptr;

    printf("Enter Text : ");
    fgets(str, 1024, stdin);
    str[strlen(str) - 1] = '\0';

    printf("Enter Pattern : ");
    fgets(word, 256, stdin);
    word[strlen(word) - 1] = '\0';

    ptr = (int*)malloc(strlen(word) * sizeof(int));
    FindOverlap(word, ptr);

    printf("\nMatching positions:\n");
    KMP(str, word, ptr);

    free(ptr);

    return 0;
}
