#include <iostream>
#include <cmath>
using namespace std;
int countTriples(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int s = (i * i) + (j * j);
            int x = sqrt(s);
            if (x * x == s && x <= n)
            {
                count += 2;
            }
        }
    }
    return count;
}
int main()
{
    int n = 10;
    cout << countTriples(n) << endl;
    return 0;
}