#include <stdio.h>
int main()
{
    int marks[50], pos, i, size, value;
    printf("Enter the number of subjects: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter the marks of subject %d: ", i);
        scanf("%d", &marks[i]);
    }
    printf("Enter the subject you want to change marks: ");
    scanf("%d", &pos);
    printf("Enter the marks: ");
    scanf("%d", &value);
    for (i = size-1; i >= pos-1; i--)
    {
        marks[i + 1] = marks[i];
       
    }
    marks[pos-1] = value;
    printf("Final marks list: \n");
    printf("{");
    for (i = 0; i <= size; i++)
    {
        printf("Marks of subject %d: %d \n", i,marks[i]);
    }
    printf("}");
    return 0;
}