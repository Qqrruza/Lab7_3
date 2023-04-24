#include <iostream>
#include <string>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "russian");
	string cities[11] = { "Moscow", "New York", "Amsterdam", "Paris", "Berlin", "Athens", "Beijing", "Ankara", "Sydney", "Almaty", "Orel" };
	string city1, city2;
	bool flag1 = false, flag2 = false;
	for (int i = 0; i < 10; i++)
	{
		if (cities[i][0] == 'A')
		{
			if (!flag1) 
			{
				city1 = cities[i];
				flag1 = true;
			}
			else {
				city2 = cities[i];
				flag2 = true;
				break;
			}
		}
	}
	if (flag1 && flag2) 
	{
		swap(city1, city2);
		cout << "Поменянные местами города:" << city1 << ", " << city2 << endl;
	}
	return 0;
}

