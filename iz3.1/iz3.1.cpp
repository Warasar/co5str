/*Вводится строка,содержащая только латинские буквы и пробелы.
Вывести через пробел все ее слова из трех букв,в том порядке,в каком они находятся в строке.
Пример:входные данные La A lal LOL,вывести lal LOL.*/

#include <iostream>
using namespace std;

int main()
{
	int i, k, j;
	char s[100], a[100];
	cout << "vvedite stroku " << endl;
	fgets(s, 100, stdin);
	int b = strlen(s);
	s[b] = ' ';

	for (i = 0; i <= b; i++)
	{
		k = 0;
		if (s[i] != ' ')
			while (s[i] != ' ')
			{
				a[k] = s[i];
				k++;
				i++;
			}
		if (k == 3) 
		{
			for (j = 0; j < k; j++)
				cout << a[j];
			cout << " ";
		}
	}
	for (j = 0; j < k; j++)
		cout << a[j];
	cout << " ";
}
