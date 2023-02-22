#include <stdio.h>

int main(){
     int marks[50],i, size, value,f;
    printf("Enter the number of subjects: ");
    scanf("%d", &size);

    for (i = 1; i <= size; i++)
    {
        printf("Enter the marks of subject %d: ", i);
        scanf("%d", &marks[i]);
    }
    printf("Enter the marks you want to search in the list: ");
    scanf("%d",&value);
    
    for(i=1;i<=size;i++){
        if(value==marks[i]){
            f=i;
            break;
        }
        else{
            f=-1;
        }
    }
    if(f==-1){
        printf("Marks not found");
    }
    else{
        printf("Marks found at number of subject %d",f);
    }

    return 0;
}