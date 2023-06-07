#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part)
{	
    *int_part = (long)x;
    *frac_part = x - *int_part;
}

int main(){
    double x = 3.14;
    long y;
    double z;
    decompose(x,&y,&z);
    printf("%f,%ld,%f\n",x,y,z);    
    return 0;
}
