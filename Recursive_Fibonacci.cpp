#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int fibo(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else if (number == 1)
    {
        return 1;
    }
    else
    {
        return fibo(number - 1) + fibo(number - 2);
    }
}

int main()
{
    int input;
    cout << "Enter the position of the number of the fibonacci series : " << endl;
    cin >> input;

    cout << "The number is ::=> " << fibo(input) << endl;

    return 0;
}
