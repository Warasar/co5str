/*Введите две строки. Выведите YES, если вторую можно получить из первой удалением некоторых символов,
и NO в противном случае.Пример двух строк,для которых ответ положительный:ALABAMA и ALMA.*/

#include <iostream>
using namespace std;
int main() 
{
	int g = 0, d = 0, e = 0;
	char s[100], s2[100], arr[100];
	fgets(s, 100, stdin);
	fgets(s2, 100, stdin);
	int b = strlen(s);
	int c = strlen(s2);
	
	for (int i = 0; i < c; i++) 
	{
		for (int k = d; k < b; k++) 
			if (g == 0) 
				if (s[k] == s2[i]) 
				{
					g = 1;
					d = k + 1;
					e++;
				}
				else 
					g = 0;
		g = 0;
	}
	
	if (e == c) 
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}