/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ** fizzBuzz(int n, int* returnSize) {
    char **result = (char **)malloc(n * sizeof(char *));
    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0) {
            result[i - 1] = strdup("FizzBuzz");
        } else if (i % 3 == 0) {
            result[i - 1] = strdup("Fizz");
        } else if (i % 5 == 0) {
            result[i - 1] = strdup("Buzz");
        } else {
            char number[12];
            snprintf(number, sizeof(number), "%d", i);
            result[i - 1] = strdup(number);
        }
    }
    *returnSize = n;
    return result;
}
