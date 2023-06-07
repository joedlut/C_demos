#include <stdio.h>

void f(int n)
{
    printf("n=%d\n",n);
    int a[n],*p;
    printf("n=%d\n",n);
    p = a;
    int b = n;
    for (;p<p+n-1;)
    {
        *p++ = 0;
    }
    // why n becomes 0 ?
    printf("n=%d\n",n);
    for (int i = 0;i<b;i++)
    {
        printf("%d\n",a[i]);
    }
}

int main()
{
    f(10);

    int a[10];
    int *p = a;
    // 10 * 4
    printf("%ld\n",sizeof(a));
    // 8 64bits  the pointer storage
    printf("%ld\n",sizeof(p));
}
