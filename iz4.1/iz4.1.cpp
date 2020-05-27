/*Вводится строка. Подсчитать, сколько в ней встречается каждая из строчных латинских букв.
Ответ выводить построчно в алфавитном порядке: очередную букву и число ее вхождений. 
Не встречающиеся буквы пропускать. 
Пример:
входные данные: Aaxaxx xxawX 
выходныеданные: a 3 
				w 1 
				x 5
*/

#include <iostream>
using namespace std;
int main()
{
	int i, j, * k, x = 0, n;
	char s[100], a[100], m;
	cout << "vvedite stroku " << endl;
	fgets(s, 100, stdin);
	int b = strlen(s);
	k = new int[b];

	for (i = 0; i < b; i++)
		k[i] = 0;
	for (i = 0; i < b; i++)
		if (s[i] >= 97 && s[i] <= 122) 
		{
			a[x] = s[i];
			k[x]++;
			s[i] = 96;
			for (j = i + 1; j < b; j++)
				if (a[x] == s[j])
				{
					k[x]++;
					s[j] = 96;
				}
			x++;
		}
	for (i = 0; i < x; i++)//ставит по алфавитному порядку
		for (j = i + 1; j < x; j++)
			if (a[i] > a[j]) 
			{
				m = a[i];
				a[i] = a[j];
				a[j] = m;
				n = k[i];
				k[i] = k[j];
				k[j] = n;
			}
				
	for (i = 0; i < x; i++)
		cout << a[i] << " " << k[i] << endl;
}