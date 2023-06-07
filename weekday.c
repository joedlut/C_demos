#include <stdio.h>

int main(void){
    printf("Enter number of days in one month:");
    int n;
    scanf("%d",&n);
    printf("Enter the starting day of the week(1=Sun,7=Sat)");
    int week;
    scanf("%d",&week);    
    int spaces = week - 1;
    for (int j = 1;j <= spaces;j++){
        printf("   ");
    }
    for(int i = 1;i <= n;i++){
	printf("%2d ",i);    
	int k = i + spaces;
	if (k % 7 == 0){		
            printf("\n");
	}
    }
    printf("\n");
}

