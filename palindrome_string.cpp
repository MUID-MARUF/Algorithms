#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string is_palindrome(string S)
{
    string P = S;

    reverse(P.begin(), P.end());

    if (S == P)
    {
        return "Yes";
    }

    else
    {

        return "No";
    }
}

int main()
{

    string S ;
    cin >> S;
    cout << is_palindrome(S)<< endl;

    return 0;
}
