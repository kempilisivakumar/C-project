#include <stdio.h>

void biggest3() 
{
    int a, b, c;

    printf("\nEnter three numbers a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if(a >= b && a >= c) 
        printf("The biggest number is %d\n", a);
    
    else if(b >= a && b >= c) 
        printf("The biggest number is %d\n", b);
    
    else 
        printf("The biggest number is %d\n", c);
    
   // return 0;
}

