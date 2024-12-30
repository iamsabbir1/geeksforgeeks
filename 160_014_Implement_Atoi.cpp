#include <bits/stdc++.h>
using namespace std;
int myAtoi(char *s)
{
    int result = 0, sign = 1, i = 0;
    while (s[i] == ' ')
    {
        i++;
    }

    if (s[i] == '+' || s[i] == '-')
    {
        sign = (sign == '+') ? 1 : -1;
        i++;
    }

    while ((s[i] - '0') >= 0 && (s[i] - '0') <= 9)
    {
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
        {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        result = result * 10 + (s[i] - '0');
        i++;
    }
    return result * sign;
}
int main()
{
    char s[15];

    cin.getline(s, 15);
    cout << myAtoi(s);
}