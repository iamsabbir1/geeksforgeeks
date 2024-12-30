#include <bits/stdc++.h>
using namespace std;

string addBinary(string s1, string s2)
{

    string result = "";

    int pos = -1, pos2 = -1;
    while (s1[++pos] != '1' && pos < s1.size())
    {
    }
    s1.erase(s1.begin(), s1.begin() + pos);

    while (s2[++pos2] != '1' && pos2 < s2.size())
    {
    }
    s2.erase(s2.begin(), s2.begin() + pos2);
    int i = s1.size() - 1, j = s2.size() - 1, carry = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;
        if (i >= 0)
            sum += s1[i--] - '0';
        if (j >= 0)
            sum += s2[j--] - '0';
        carry = sum / 2;
        result += (sum % 2) + '0';
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << addBinary(s1, s2) << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// string addition(string &s1, string &s2)
// {
//     int carray = 0, i = 0;
//     while (i < s2.size())
//     {
//         if (s1[i] == '1' && s2[i] == '1')
//         {
//             if (carray)
//                 s1[i] = '1';
//             else
//                 s1[i] = '0';
//             carray = 1;
//         }
//         if (s1[i] == '1' && s2[i] == '0')
//         {
//             if (carray)
//             {
//                 s1[i] = '0';
//                 carray = 1;
//             }
//             else
//                 s1[i] = '1';
//         }
//         if (s1[i] == '0' && s2[i] == '1')
//         {
//             if (carray)
//             {
//                 s1[i] = '0';
//                 carray = 1;
//             }
//             else
//                 s1[i] = '1';
//         }
//         if (s1[i] == '0' && s2[i] == '0')
//         {
//             if (carray)
//                 s1[i] = '1';
//             else
//                 s1[i] = '0';

//             carray = 0;
//         }
//         i++;
//     }

//     while (i < s1.size())
//     {
//         if (carray)
//         {
//             if (s1[i] == '1')
//             {
//                 s1[i] = '0';
//                 carray = 1;
//             }
//             else
//             {
//                 s1[i] = '1';
//                 carray = 0;
//             }
//         }
//         i++;
//     }
//     if (carray)
//     {
//         s1 += '1';
//     }
//     reverse(s1.begin(), s1.end());
//     return s1;
// }

// string addBinary(string &s1, string &s2)
// {
//     int pos = -1, pos2 = -1;
//     while (s1[++pos] != '1' && pos < s1.size())
//     {
//     }
//     s1.erase(s1.begin(), s1.begin() + pos);

//     while (s2[++pos2] != '1' && pos2 < s2.size())
//     {
//     }
//     s2.erase(s2.begin(), s2.begin() + pos2);

//     reverse(s1.begin(), s1.end());
//     reverse(s2.begin(), s2.end());
//     if (s2.size() > s1.size())
//         return addition(s2, s1);
//     return addition(s1, s2);
// }
// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;

//     cout << addBinary(s1, s2);
//     return 0;
// }