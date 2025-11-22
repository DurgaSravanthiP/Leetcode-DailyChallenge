#include <iostream>
using namespace std;
int numOfSubstrings(string s)
{
    int mod = 1e9 + 7;
    int count = 0;
    int res = 0;
    for (char ch : s)
    {
        if (ch == '1')
        {
            count++;
            res = (res + count) % mod;
        }
        else
        {
            count = 0;
        }
    }
    return res;
}
int main()
{
    string s = "0110111";
    int res = numOfSubstrings(s);
    cout << res << endl;
    return 0;
}