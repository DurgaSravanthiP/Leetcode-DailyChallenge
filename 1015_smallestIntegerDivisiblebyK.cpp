#include <iostream>
using namespace std;

int smallestRepunitDivByK(int k)
{
    int num = 0;
    for (int length = 1; length <= k; length++)
    {
        num = (num * 10 + 1) % k;
        if (num == 0)
        {
            return length;
        }
    }
    return -1;
}
int main()
{
    int k = 7;
    int result = smallestRepunitDivByK(k);
    cout << "Smallest integer length divisible by " << k << " is: " << result << endl;
    return 0;
}