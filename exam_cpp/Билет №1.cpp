#include <iostream>

using namespace std;

class MultiplyTable 
{
public: static void PrintTable(int x, int y) 
{
	for (int i = 0; i < x; i++) 
	{
		for (int a = 0; a < y; a++)
		{
			cout << (i + 1) * (a + 1) << "\t";
		}
		cout << "\n";
	}
}
};

int main()
{
	int x, y;
	cout << "Multiplication table for x*y maximum\nEnter x: "; cin >> x;
	cout << "Enter y: "; cin >> y;
	MultiplyTable::PrintTable(x, y);
}