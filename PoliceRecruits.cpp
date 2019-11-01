#include <iostream>
using namespace std;
int main()
{
    int n,p = 0,count = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
    {
      if(arr[i] == -1 && p == 0)
        count++;
      else if(arr[i] > 0)
        p += arr[i];
      else
        p -= 1;
    }
    cout << '\n' << count;
    }

