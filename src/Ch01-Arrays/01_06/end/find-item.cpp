#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    float numbers[]{4.0, 7, 12, 3.1, 3.2, 17, 3.5};
    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    float target = 3.2;
    cout << "The index of " << target << " is " << findItem(numbers, size, target) << " (zero indexing)" << endl;
    return 0;
}
