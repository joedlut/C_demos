#include <stdio.h>

//only in order to save time and space, do not want to change the value of p
void f(const int *p){
    *p = 0;
}

int main(){
    int i = 10;
    int *p = &i;
    f(p);
    return 0;
}
