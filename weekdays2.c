#include <stdio.h>

int main(){
    int x;
    printf("Enter the number of day: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Monday");
        break;
    case 2: 
        printf("Tuesday");
        break;    
    case 3: 
        printf("Wednesday");
        break;
    case 4: 
        printf("Thrusday");
        break;
    case 5: 
        printf("Friday");
        break;
    case 6: 
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;    
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}