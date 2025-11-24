#include <iostream>
using namespace std;

template <size_t N>
int calculateSum(const int (&arr)[N])
{
    int sum = 0;
    for (int value : arr)
    {
        sum += value;
    }
    return sum;
}

int main()
{
    const int ints[]{1, -7, 17};
    cout << "The sum of all elements in the array is " << calculateSum(ints) << endl;
}