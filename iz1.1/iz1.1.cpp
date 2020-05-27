/* Вводится строка в виде арифметического выражения xx⊕x,где каждый x обозначает цифру,
а⊕—одну из операций +,−.Вывести значение выражения.Пример:входные данные 12‐3,вывести 9. */

#include <iostream>
using namespace std;
int main()
{
	int i, n, a, b;
	char s[100], s1[100], s2[100], ch(43);
	fgets(s, 100, stdin);

	for (i = 0; i < 2; i++)
		s1[i] = s[i];
	s2[0] = s[3];
	a = atoi(s1);
	b = atoi(s2);
	
	if (s[2] == ch)
		cout << a + b;
	else
		cout << a - b;
}