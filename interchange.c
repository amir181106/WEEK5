#include<stdio.h>
 int main() 
    //Using temprory variable
    {int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a=%d b=%d\n", a,b);
    
    //Without using temprory variable
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("After swapping: x=%d y=%d\n", x,y);
    
    return 0;
}
