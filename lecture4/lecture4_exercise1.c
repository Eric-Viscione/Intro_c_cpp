#include <stdlib.h>
#include <stdio.h>

void fn()
{
    int* x = malloc(11 * sizeof(int));
    for (int i = 0; i < 11; i++) {
        x[i] = 0; // Initialize all elements to 0
    }

    x[10] = 0;
    printf("%d\n",*x);
    free(x);
}

int main()
{
    fn();
    return 0;
}
