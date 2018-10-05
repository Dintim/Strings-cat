#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <typename T>
T oper(char arr, int n, T arg, ...) {
	T* p = &arg;
	T sum = 0, prod = 1;
	for (int i = 0; i < n; i++) {
		sum += p[i];
		prod *= p[i];
	}
	if (arr == '+')
		return sum;
	if (arr == '*')
		return prod;
	if (arr == 's')
		return sum / n;	
}



int main()
{
	int n;
	cout << "enter number: ";
	cin >> n;

	switch (n)
	{
	case 1:
	{
		//Напишите функцию, с переменным количеством аргументов, 
		//которая в качестве обязательного параметра принимает тип действия и количество переменных 
		//и выполняет выбранное действие над этими переменными. «+» - сложение, «*» - умножение, «s» - среднее арифметическое.
		cout << oper('+', 4, 1.0, 5.0, 10.0, 4.0) << endl;
		cout << oper('*', 4, 1.0, 5.0, 10.0, 4.0) << endl;
		cout << oper('s', 5, 3.0, 4.0, 5.0, 3.0, 7.0) << endl;
	}
		break;
	case 2:
	{
		//Дано целое число N (> 0) и строка S. Преобразовать строку S в строку длины N следующим образом : 
		//если длина строки S больше N, то отбросить первые символы, 
		//если длина строки S меньше N, то в ее начало добавить символы «.»(точка).

		char a[100];
		cout << "enter string: ";
		cin >> a;
		int num;
		cout << "enter num: ";
		cin >> num;

		char b[100] = "\0";
		int h = 0;
		if (strlen(a) > num) {
			for (int i = strlen(a) - num; i < strlen(a); i++)
				b[h++] = a[i];
			cout << "new string: " << b << endl;
		}
		if (strlen(a) < num) {
			for (int i = 0; i < num - strlen(a); i++) {
				b[i] = '.';
				h = i + 1;
			}
			for (int i = 0; i < strlen(a); i++)
				b[h++] = a[i];
			cout << "new string: " << b << endl;
		}
	}
		break;

	case 3:
	{
		//. Даны целые положительные числа N1 и N2 и строки S1 и S2. 
		//Получить из этих строк новую строку, содержащую первые N1 символов строки S1 и последние N2 символов строки S2 
		//(в указанном порядке).
		int n1, n2;
		cout << "enter n1 and n2: ";
		cin >> n1 >> n2;
		char a[100], b[100];
		cout << "enter strings s1 and s2: ";
		cin >> a >> b;

		char c[100] = "\0";
		char d[100] = "\0";
		for (int i = 0; i < n1; i++)
			c[i] = a[i];

		for (int i = strlen(b) - n2, h = 0; i < strlen(b); i++, h++)
			d[h] = b[i];
		strcat_s(c, d);
		cout << "new string: " << c << endl;
	}
		break;
	}
	
	
	
	system("pause");
	return 0;
}