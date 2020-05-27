/*Напишите программу, которая введет строку, состоящую из одних только латинских заглавных букв и пробелов,
и выведет YES,если она является палиндромом (читается одинаково слева направо без учета пробелов),
и NO в противном случае. Пример палиндрома:MADAM I M ADAM.*/

#include <iostream>
using namespace std;
int main() 
{
	int a = 0, c = 1, k = 0;
	char s[100], arr[100];
	fgets(s, 100, stdin);
	int b = strlen(s);
	
	for (int i = 0; i < b; i++) 
		if (s[i] >= 65 && s[i] <= 90) 
		{
			arr[k] = s[i];
			k++;
		}
	for (int i = 0; i < (b + 1) / 2; i++)
		if (c == 1)
		{	
			if (arr[i] == arr[k - 1 - i])
				c = 1;
			else
			{
				c = 0;
				break;
			}
		}
	
	if (c == 1) 
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}
