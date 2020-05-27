/*Напишите программу,которая введет строку и подсчитает количество слов,начинающихся с латинской буквы a (или A).*/

#include <iostream>
using namespace std;

int main() 
{
	int a = 0, c = 0;
	char s[100];
	fgets(s, 100, stdin);
	int b = strlen(s);
	
	for (int i = 0; i < b; i++) 
	{
		if (s[i] == 'a' || s[i] == 'A') {
			a++;
		}
		while (s[i] != ' ') {
			i++;
		}
	}
	cout << a << endl;
}
