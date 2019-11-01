#include <iostream>

using namespace std;

int main()
{
           int n,count = 0;
           cin >> n;
           char stons[n];

            for (int i = 0; i < n; i++)
                cin >> stons[i];

            for (int i = 1; i < n; i++)
            {
                if (stons[i] == stons[i-1])
                    count++;
            }
            cout << '\n' << count;
}
