#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

char *randstr(char *str, const int len)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < len; ++i)
    {
        switch ((rand() % 2))
        {
        case 1:
            str[i] = 'A' + rand() % 26;
            break;
        case 0:
            str[i] = 'a' + rand() % 26;
            break;
        default:
            // str[i] = '0' + rand() % 10;
            break;
        }
    }
    str[++i] = '\0';
    return str;
}

int main(void)
{
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char name[200];
    // for (int i = 0; i < rand() % 10; i++)
    cout << randstr(name, rand() % 198) << endl;
    random_shuffle(letters, letters + 26);
    for(int i=0;i<26;i++){
        cout<<letters[i];
    }
    // cout << -1 << endl;
    // system("pause");
    return 0;
}