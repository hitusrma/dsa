#include <stdio.h>

int main()
{
    int arr[50], i,a,low,high,mid,n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter the elements in sorted manner at %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to find: ");
    scanf("%d",&a);

    low=1;
    high=n;
    mid=(low+high)/2;

    while(low<=high){
        if(arr[mid]<a){
            low=mid+1;

        }
        else if(arr[mid]==a){
            printf("%d found at the location index %d.",a,mid);
            break;
        }
        else{
        high=mid-1;
        }
        mid=(low+high)/2;
    }
    if(low>high){
        printf("%d is not present in the array.",a);
    }
    return 0;
}