#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, rem, sum = 0, temp, temp1, count = 0;
    cout << "ent er number to c heck : ";
    cin >> num;
    temp = num;
    temp1 = num;

    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }

    if (temp1 == sum)
        cout << "Armstrong ";
    else
        cout << "Not armstong ";
}
