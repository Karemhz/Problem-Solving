#include <iostream>
#define HIGH 2
#define LOW 1

using namespace std;

int main()
	{
		unsigned short n, max_hight, sum = 0;

		cin >> n >> max_hight;

		if (1 <= n && n <= 1000 && 1 <= max_hight && max_hight <= 1000)
		{
            unsigned short person[n];
			for (int i = 0; i < n; i++)
				cin >> person[i];

			for (int i = 0; i < n; i++)
			{
				if (person[i] > max_hight)
					sum += HIGH;
				else
					sum += LOW;
			}

			cout << sum <<"\n";

		}
		else
			return 0;

	}
