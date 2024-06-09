#include <stdio.h>

int main() {
    unsigned int num = 1;
    char *ptr = (char *)&num;
    
    if (*ptr == 0)
        printf("Little-endian\n");
    else
        printf("Big-endian\n");
    
    return 0;
}
