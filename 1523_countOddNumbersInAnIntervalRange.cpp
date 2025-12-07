#include <iostream>
using namespace std;

int countOdds(int low, int high)
{
    if (low % 2 == 0)
    {
        low++;
    }
    if (high % 2 == 0)
    {
        high--;
    }
    return (high - low) / 2 + 1;
}
int main()
{
    int low = 3, high = 7;
    cout << countOdds(low, high) << endl;
    return 0;
}