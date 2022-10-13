#include <iostream>
using namespace std;

int main()
{
    int numbers[10] = {12, 24, 103, 8, 19, 2, 6, 10, 5, 146};
    int max = numbers[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
        }
    }
    cout << "The maximum value is " << max << endl;
    return 0;
}