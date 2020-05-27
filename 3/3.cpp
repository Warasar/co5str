/*Напишите программу,которая введет строку,заменит в ней все символы n на y,и напечатает полученную строку.*/

#include <iostream>
using namespace std;

int main() 
{
	int a = 0, c = 0;
	char s[100];
	fgets(s, 100, stdin);
	
	int b = strlen(s);
	for (int i = 0; i < b; i++) 
		if (s[i] == 'n') 
			s[i] = 'y';
	cout << s << endl;
}

