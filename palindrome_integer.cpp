#include <bits/stdc++.h>
using namespace std;

string check_palindrome()
{
    int n, num, digit, rev = 0;
    cin >> num;
    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    if (n == rev)
    {
        return "Yes";
    }
    else
        return "No";
}

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        cout << "Case " << i << ": " << check_palindrome()<< endl;
    }
    return 0;
}
