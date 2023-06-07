#include <stdio.h>

int main(void){
    int n = 23;
    int d;    
    for (d=2;d<=n;d++){
        if (n % d == 0){
         goto done;
	}
    }
    done:
    if (d < n){
        printf("%d is divided by %d\n",n,d);
    }else{
        printf("%d is prime\n",n);
    }	   
}
