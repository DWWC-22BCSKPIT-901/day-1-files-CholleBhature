#include <iostream>
using namespace std;

int findLargestDigit(int n)
{
    int largest = 0; // Initialize largest to 0
    while (n > 0)
    {
        int digit = n % 10; // Extract the last digit
        if (digit > largest)
        {
            largest = digit; // Update largest if the current digit is larger
        }
        n = n / 10; // Remove the last digit
    }
    return largest;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int largestDigit = findLargestDigit(n);
    cout << "The largest digit in " << n << " is: " << largestDigit << endl;

    return 0;
}
