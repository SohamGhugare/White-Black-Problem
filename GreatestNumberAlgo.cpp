#include <iostream>
using namespace std;

// Finding the greatest number in that array

int main()
{
    int inputArray[] = {21, 99, 87, 11, 78, 10};
    int max = inputArray[0];
    // Looping into the array
    for (int i = 1; i < sizeof(inputArray) / sizeof(inputArray[0]); i++)
    {

        if (inputArray[i] > max)
        {
            max = inputArray[i];
        }
    }
    cout << max;
    return 0;
}