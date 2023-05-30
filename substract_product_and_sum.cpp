#include <bits/stdc++.h>
using namespace std;
int subtractProductAndSum(int n)
{
    int product = 1 , sum = 0;
    while(n > 0)
    {
        //n % 10 extracts the last digit out of N
        product *= (n % 10);
        sum += (n % 10);
        n /= 10;
    }
    return product - sum;
}
int main()
{
    int n = 1234;
    cout << subtractProductAndSum(n) << '\n';
    return 0;
}