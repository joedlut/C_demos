#include <stdio.h>

int main()
{
    int a[3];
    *a=111;
    *(a+1)=123;
    for(int j=0;j<3;j++){
        printf("%d\n",a[j]);
    }
}
