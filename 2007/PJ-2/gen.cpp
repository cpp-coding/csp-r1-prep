#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int size = rand() % 4;
    switch (size)
    {
    case 0:
        size=4;
        cout << 4 << endl;
        break;
    case 1:
    size=8;
        cout << 8 << endl;
        break;
    case 2:
    size=16;
        cout << 16 << endl;
        break;
    case 3:
    size=64;
        cout << 64 << endl;
    default:
        break;
    }
    cout<<rand()%size<<" "<<rand()%size<<endl;
    return 0;
}