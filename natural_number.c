#include <stdio.h>
int main(){
    int a,sum=0;
    printf("Enter a number: \n");
    scanf("%d",&a);
    for(int i=0; i<=a; i++)
    {
        sum=sum+i;
    }
    printf("\n");
    printf("sum is %d\n",sum);
    return 0;
}