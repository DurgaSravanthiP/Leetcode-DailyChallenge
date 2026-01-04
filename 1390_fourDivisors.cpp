#include <iostream>
#include <vector>
using namespace std;
int findSum(int num)
{
    int sum = 0;
    int numOfDiv = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            int other = num / i;
            if (other == i)
            {
                numOfDiv += 1;
                sum += i;
            }
            else
            {
                numOfDiv += 2;
                sum += (i + other);
            }
        }
        if (numOfDiv > 4)
        {
            return 0;
        }
    }
    if (numOfDiv == 4)
    {
        return sum;
    }
    else
    {
        return 0;
    }
}
int sumFourDivisors(vector<int> &nums)
{
    int n = nums.size();
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += findSum(nums[i]);
    }
    return result;
}
int main()
{
    vector<int> nums = {21, 4, 7};
    cout << sumFourDivisors(nums) << endl;
    return 0;
}
