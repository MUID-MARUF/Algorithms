#include <iostream>
using namespace std;

// Function of Insertion Sort Algorithm.
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

// Funtion to print Array.
void print_array(int arr[], int arr_size)
{
    cout << "Array sorting succesfull." << endl;
    cout << "Your array is : " << endl;
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl
         << endl;
}

int main()
{
    int arr_size;
    cout << "Enter the size of your array : " << endl;
    cin >> arr_size;
    int arr[arr_size];

    cout << "Enter " << arr_size << " elements of your array : " << endl;
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }

    print_array(arr, arr_size);

    insertionSort(arr, arr_size);

    print_array(arr, arr_size);

    return 0;
}

/*
Time Complexity ::=>
Best Case   : O(n)
Average     : O(n^2)
Worst Case  : O(n^2)
*/