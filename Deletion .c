#include <stdio.h>
int main()
{
    int marks[50], pos, i, size;
    printf("Enter the number of subjects: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter the marks of subject %d: ", i);
        scanf("%d", &marks[i]);
    }
    printf("Enter the subject you want to Delete: ");
    scanf("%d", &pos);

    for (i = pos; i < size; i++)
    {
        marks[i] = marks[i + 1];
    }

    printf("Final marks list: \n");

    for (i = 0; i < size-1; i++)
    {
        printf("Marks of subject %d: %d \n", i, marks[i]);
    }

    return 0;
}