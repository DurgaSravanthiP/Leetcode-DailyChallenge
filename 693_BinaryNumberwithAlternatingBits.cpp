#include <iostream>
using namespace std;

bool hasAlternatingBits(int n)
{
    unsigned int result = n ^ (n >> 1);
    return (result & (result + 1)) == 0;
}
int main()
{
    int n = 5;
    cout << boolalpha << hasAlternatingBits(n) << endl; // Output: true
    n = 7;
    cout << boolalpha << hasAlternatingBits(n) << endl; // Output: false
    n = 11;
    cout << boolalpha << hasAlternatingBits(n) << endl; // Output: false
    n = 10;
    cout << boolalpha << hasAlternatingBits(n) << endl; // Output: true
    return 0;
}
