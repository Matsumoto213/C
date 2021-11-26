#include <stdio.h>

int main(void)
{
    int num;

    printf("Input: ");
    if (scanf("%d%*[^\n]", &num) != 1) {
        return 1;
    }
    scanf("%*c");

    printf("Output: %d\n", buffer);
    return 0;
}