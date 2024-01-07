#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, temp, minOp = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        temp = abs(temp);
        minOp = min(minOp, temp);
    }
    cout << minOp << endl;
    return 0;
}
