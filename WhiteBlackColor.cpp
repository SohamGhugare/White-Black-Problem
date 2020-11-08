#include <iostream>
using namespace std;

// Question:
// Takahashi is wearing white now.
// He wears black on the day after he wears white, and he wears white on the day a�er he wears black.
// What color will he wear days later?

int main()
{
    int N;
    cin >> N;
    if (N % 2 == 1)
    {
        cout << "Black";
    }
    else
    {
        cout << "white";
    }
}