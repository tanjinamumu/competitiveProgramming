#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 7, 6, 4, 9, 12 };

    for (int k = 0; k < a; k++)
    {

        for (int l = 0; l < a - l - 1; l++)
        {

            if (a[l] > a[l + 1])
            {

                int t = a[l];

                a[l] = a[l + 1];

                a[l + 1] = t;

            }

        }

    }
}
