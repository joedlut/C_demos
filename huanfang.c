#include <stdio.h>

int main(void){
    int n=0,row=0,col=0,num=1;
    int magic[13][13]={0};
    printf("Enter the magic rank(odd number):");scanf("%d",&n);
   
    col=n/2;
    magic[row][col]=num;
    while(magic[row][col]<n*n)
    {
        row--;
        col++;
        num++;
        if(row<0)
            row=n-1;//到最后一行
        if(col>n-1)
         col=0;
        if(magic[row][col]!=0)
        {
            row+=2;col--;
            if(row>n-1) row=row-n;
            if(col<0) col=col+n;
        }
        magic[row][col]=num;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t",magic[i][j]);
        }
        printf("\n");
}
