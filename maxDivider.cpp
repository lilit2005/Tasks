#include <iostream>
using namespace std;

int main()
{
    const int numbers_count = 15;

    int numbers[numbers_count] = {105, 84, 56, 70, 42};

    /*
     * Գտնում ենք թվերից նվազագույնը, քանի որ ամենամեծ ընդհանուր բաժանարարը դրանից մեծ չի կարող լինել
     */
    int min = numbers[0];

    for (int i = 0; i < numbers[i]; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    /*
     * Գտնում ենք ընդհանուր բաժանարարները
     */
    const int common_divisors_count = 20;
    int common_divisors[common_divisors_count]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int common_divisors_index = 0;

    bool is_common_divisor;

    for (int i = 1; i <= min; i++)
    {
        is_common_divisor = true;
        for (int j = 0; j < numbers_count; j++)
        {
            if (numbers[j] % i != 0)
            {
                is_common_divisor = false;
                break;
            }
        }

        if (is_common_divisor)
        {
            common_divisors[common_divisors_index] = i;
            common_divisors_index++;
        }
    }

    /*
     * Գտնում ենք առավելագույն ընդհանուր բաժանարարը
     */
    int greatest_common_divisor = common_divisors[0];

    for (int i = 0; i < common_divisors_count; i++)
    {
        if (greatest_common_divisor < common_divisors[i])
        {
            greatest_common_divisor = common_divisors[i];
        }
    }

    cout << "The greatest common divisor: " << greatest_common_divisor << endl;

    return 0;
}