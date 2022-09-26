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

void Bubble_Sort(int *array, int size)
{
    int temp;
    for (int i = 0; i <= (size - 1); i++)
    {
        printf("Working on pass number %d\n", i+1);
        for (int j = 0; j <= (size - 1 - i); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            else
            {
                continue;
            }
        }
    }
}

void Bubble_Sort_Adaptive(int *array, int size)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i <= (size - 1); i++)
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j <= (size - 1 - i); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted) {
            return;
        }
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

    Bubble_Sort(array, size);
    printf("Array after bubble sort is:-\n");
    Array_Traversal(array, size);

    Bubble_Sort_Adaptive(array, size);
    printf("Array after bubble sort adaptive is:-\n");
    Array_Traversal(array, size);

    return 0;
}
