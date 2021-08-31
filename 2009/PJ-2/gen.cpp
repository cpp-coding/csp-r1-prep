#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    srand(time(NULL));
    int n=rand()%10;
    int m=rand()%10;
    if(n>m)swap(n,m);
    cout<<n<<endl;
    cout<<m<<endl;
    cout<<rand()%(n*m)<<endl;
    return 0;
}
