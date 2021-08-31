#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int n=rand()%100;
    cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<rand()%32767<<endl;
    }
    return 0;
}
