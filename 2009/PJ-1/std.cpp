#include <iostream>
using namespace std;

int a[101];
int n, i, ans, len, tmp, beg;

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    tmp = 0;
    ans = 0;
    len = 0;
    beg = 0;
    for (i = 1; i <= n; i++)
    {
        if (tmp + a[i] > ans)
        {
            ans = tmp + a[i];
            len = i - beg;
        }
        else if (tmp + a[i] == ans && i - beg > len)
            len = i - beg;
        if (tmp + a[i] < 0)
        {
            beg = i;
            tmp = 0;
        }
        else
            tmp += a[i];
    }
    cout << ans << " " << len << endl;
    return 0;
}