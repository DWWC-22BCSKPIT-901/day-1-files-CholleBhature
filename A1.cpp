#include <iostream>
using namespace std;

void printMultiplicationTable(int n)
{
    for (int i = 1; i <= 10; ++i)
    {
        cout << n << " × " << i << " = " << n * i << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number to print its multiplication table: ";
    cin >> n;

    printMultiplicationTable(n);

    return 0;
}
