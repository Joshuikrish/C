#include <stdio.h>
int main(){
    char op;
    int a,b;
    printf("Enter a character + - * /: \n");
    scanf("%c",&op);
    printf("Enter a two numbers : \n");
    scanf("%d %d",&a,&b);
    switch (op)
    {
    case ('+')/* constant-expression */:
        /* code */
        printf("%d %c %d = %d",a,op,b,a+b);
        break;
    
    case ('-')/* constant-expression */:
        /* code */
        printf("%d %c %d = %d",a,op,b,a-b);
        break;
    
    case ('*')/* constant-expression */:
        /* code */
        printf("%d %c %d = %d",a,op,b,a*b);
        break;
    
    case ('/')/* constant-expression */:
        /* code */
        printf("%d %c %d = %d",a,op,b,a/b);
        break;
    
    default:
        printf("Invalid constant-expression");
        break;
    }
    return 0;
}