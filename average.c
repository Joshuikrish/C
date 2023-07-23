#include <stdio.h>
int main(){
    int a,b,c,sum,avg;
    printf("Enter a number a , b, c:\n");
    scanf("%d %d %d",&a,&b,&c);
    sum = a+b+c;
    avg = sum / 3;
    printf("sum is %d\n",sum);
    printf("Average is %d\n",avg);

    

    return 0;
}