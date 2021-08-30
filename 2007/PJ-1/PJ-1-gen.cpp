#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

char *randstr(char *str, const int len)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < len; ++i)
    {
        switch ((rand() % 3))
        {
        case 1:
            str[i] = 'A' + rand() % 26;
            break;
        case 2:
            str[i] = 'a' + rand() % 26;
            break;
        default:
            str[i] = '0' + rand() % 10;
            break;
        }
    }
    str[++i] = '\0';
    return str;
}

int main(void)
{

    char name[200];
    for (int i = 0; i < rand() % 10; i++)
        cout << randstr(name, rand() % 198) << endl;
    cout << -1 << endl;
    // system("pause");
    return 0;
}