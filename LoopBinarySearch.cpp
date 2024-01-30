#include <iostream>
using namespace std;

//Must input numbers in accending order.

int loop_binary_search(int arr[], int l, int r, int key)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            r = mid - 1;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
    }
    return -1;
}

void print_arr(int arr[], int arr_size)
{
    cout << "Your array is :: " << endl;
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void input_arr(int arr[], int arr_size)
{
    cout << "What are your " << arr_size << " elements of the array ?" << endl;
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int a, arr_size;

    cout << "What is your array size ?" << endl;
    cin >> a;
    int arr[a];
    arr_size = sizeof(arr) / sizeof(arr[0]);

    input_arr(arr, arr_size);

    print_arr(arr, arr_size);

    cout << "Which number you want to find ?" << endl;
    int key;

    cin >> key;

    int l = 0;
    int r = arr_size - 1;

    int Location = loop_binary_search(arr, l, r, key);

    if(Location==-1)
         cout<< "Number is NOT in the array.\n"<< endl;
    else
         cout<< "Number is in the array."<< endl;
    return 0;
}