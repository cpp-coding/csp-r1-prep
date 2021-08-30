#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    srand(time(NULL));
    int n=rand();
    cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<rand()<<" ";
    }
    cout<<endl;
    cout<<rand()%n<<endl;
    return 0;
}
