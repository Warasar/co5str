/*Вводится строка,подсчитать,сколько раз в нее входит подстрока abc. 
Пример:входные данные ABc abcabc ab c,вывести 2.*/

#include <iostream>
using namespace std;

int main() 
{
	int i, k = 0;
	char s[100],a[100];
	cout << "vvedite stroku " << endl;
	fgets(s, 100, stdin);
	cout << "vvedite prosto abc " << endl;
	fgets(a, 100, stdin);
	int b = strlen(s);

	for (i = 0; i < b; i++) 
		if (s[i] == a[0]) 
		{
			i++;
			if (s[i] == a[1])
			{
				i++;
				if (s[i] == a[2])
					k++;
			}
		}
	
	cout << k;
}

