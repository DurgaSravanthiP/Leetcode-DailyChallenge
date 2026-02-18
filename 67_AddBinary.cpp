#include <iostream>
#include <algorithm>
using namespace std;

string addBinary(string a, string b)
{
    int m = a.size() - 1;
    int n = b.size() - 1;
    int carry = 0;
    string res = "";
    int sum = 0;
    while (m >= 0 || n >= 0)
    {
        sum = carry;
        if (m >= 0)
        {
            sum += a[m] - '0';
            m--;
        }
        if (n >= 0)
        {
            sum += b[n] - '0';
            n--;
        }
        res.push_back((sum % 2 == 0) ? '0' : '1');
        carry = (sum > 1) ? 1 : 0;
    }
    if (carry)
        res.push_back('1');
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string a = "11", b = "1";
    cout << addBinary(a, b) << endl; // Output: "100"
    a = "1010", b = "1011";
    cout << addBinary(a, b) << endl; // Output: "10101"
    return 0;
}