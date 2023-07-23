#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a<0)
    {
        printf("Negative number");
    }
    else if (a>0)
    {
        /* code */
        printf("Postive number");
    }
    else{
        printf("Zero number");
    }
    

    return 0;
}