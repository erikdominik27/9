#include <stdio.h>

int swapping(int x, int y);
int main ()
{
    int x, y;
    printf("Enter the first number (x): ");
    scanf("%d", &x);
    printf("Enter the second number (y): ");
    scanf("%d", &y);
    swapping(x, y);
    return 0;
    
}

int swapping(int x, int y) {
    
    x = x + y;  
    y = x - y;  
    x = x - y;  

    printf("Numbers swapped: x = %d, y = %d", x, y);
    return 0; 
}