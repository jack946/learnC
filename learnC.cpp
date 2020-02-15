#include <iostream>
using namespace std;

int main()
{
    int x = 0,s=0;
    int i = 0;
    cin >> x;
    int *p = new int[x];
    for (; i < x; i++)
    {
        cin >> *(p+i);
        s += *(p+i);
    }
    cout << s << endl;
    delete[] p;
    return 0;
}