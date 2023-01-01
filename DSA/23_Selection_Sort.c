#include <stdio.h>
#include <stdlib.h>

void Data_Insertion(int *array, int size)
{
    if (size <= 0)
    {
        printf("UnderFlow\n");
        return;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter data %d: ", i);
        scanf("%d", &array[i]);
    }
}

void Selection_Sort(int *array, int size)
{
    int indexOfMin, temp;
    for (int i = 0; i < size - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = array[i];
        array[i] = array[indexOfMin];
        array[indexOfMin] = temp;
    }
}

void Array_Traversal(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main()
{
    int size, *array;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    array = (int *)malloc(size * (sizeof(int)));

    Data_Insertion(array, size);
    printf("Array before sorting is;-\n");
    Array_Traversal(array, size);

    Selection_Sort(array, size);
    printf("Array after selection sort is:-\n");
    Array_Traversal(array, size);

    return 0;
}
