#include <stdio.h>

int main()
{
    char *a = "abc";
    //wrong
    printf("abc"[1]);
    //right
    printf("char is %c\n","abc"[1]);
}
