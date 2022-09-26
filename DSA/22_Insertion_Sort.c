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

void Insertion_Sort(int *array, int size)
{
    int temp, j;
    for (int i = 1; i <= size - 1; i++)
    {
        temp = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
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

    Insertion_Sort(array, size);
    printf("Array after insertion sort is:-\n");
    Array_Traversal(array, size);

    return 0;
}
