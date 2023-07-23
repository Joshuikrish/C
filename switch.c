#include <stdio.h>
int main(){
    int a;
    printf("enter a day of the week:\n");
    scanf("%d",&a);

    switch (a)
    {
    case /* constant-expression */(1):
    printf("Sunday");
        /* code */
        break;
    case (2):
        printf("Monday");
        break;
    case /* constant-expression */(3):
    printf("tuesday");
        /* code */
        break;
    case (4):
        printf("wednesday");
        break;
    case /* constant-expression */(5):
    printf("thursday");
        /* code */
        break;
    case (6):
        printf("friday");
        break;
    case /* constant-expression */(7):
    printf("saturday");
        /* code */
        break;
    default:
        break;
    }
    return 0;
}