#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int h, m, h10, h1, m10, m1, flag = 0, temp, temp1, temp2;
    cin >> h >> m;

    while (flag == 0)
    {
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 23)
        {
            h = 0;
        }
        if (h > 9)
        {
            h10 = h / 10;
            h1 = h % 10;
        }
        else
        {
            h10 = 0;
            h1 = h;
        }
        if (m > 9)
        {
            m10 = m / 10;
            m1 = m % 10;
        }
        else
        {
            m10 = 0;
            m1 = m;
        }
        temp = m10;
        temp1 = h1;
        temp2 = temp;
        if (h10 * 10 + temp2 > 23 || temp1 * 10 + m1 > 59)
        {
            // cout << h10 << temp2 << " " << temp1 << m1 << endl;
            m++;
        }
        else
        {
            flag = 1;
        }
    }
    cout << h10 << h1 << " " << m10 << m1 << endl;
    return 0;
}