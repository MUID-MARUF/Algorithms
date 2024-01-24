#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {

            if (array[i] < array[min_idx])
                min_idx = i;
        }

        swap(&array[min_idx], &array[step]);
    }
}

int main()
{
    int size;
    cout << "Enter the array size :: "<< endl;
    cin >> size;
    int data[size];

    cout << "Enter the " << size << " elements of the array :: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> data[i];
    }

    cout << "The unsorted array :: " << endl;
    printArray(data, size);

    selectionSort(data, size);

    cout << "Sorted array in Acsending Order:: "<< endl;
    printArray(data, size);
}