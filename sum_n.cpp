#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i<=n; i++)
    {
        sum = sum + i;
        // This is for printing the N numbers
        cout << i << endl;
    }
    // This is for sum of N numbers
    cout << sum << endl;
}