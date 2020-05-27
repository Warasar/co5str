/*Напишите программу, которая введет строку и напечатает количество цифр в строке.*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0, c = 0;
	char s[100];
	fgets(s, 100, stdin);
	int b = strlen(s);
	for (int i = 0; i < b; i++)
		if (s[i] >= '0' && s[i] <= '9')
			a++;
	cout << a << endl;
}
