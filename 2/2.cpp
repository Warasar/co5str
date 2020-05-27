/*Напишите программу, которая введет строку и подсчитает число заглавных и число строчных латинских 
букв во введенной строке и напечатает эти два числа через пробел.*/

#include <iostream>
using namespace std;

int main() 
{
	int a = 0, c = 0;
	char s[100];
	fgets(s, 100, stdin);
	int b = strlen(s);
	for (int i = 0; i < b; i++) 
		if (s[i] >= 65 && s[i] <= 90) 
			a++;
		else if (s[i] >= 97 && s[i] <= 122) 
			c++;
	cout << a << ' ' << c << endl;
}