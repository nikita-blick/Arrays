#include<iostream>
using namespace std;

//#define Binary

void main()
{
	setlocale(LC_ALL, "");
	int decimal; //-эта переменная будет хранить десятичное число, введенное пользователем
	cout << "Введите десятичное число: "; cin >> decimal;

#ifdef Binary 
	const int n = 32; //максимально-возможная разрядность двоичного числа
	bool binary[n] = {}; // этот массив будет хранить разряды двоичного числа
	int i = 0;
	for (;decimal;decimal >>= 1)
		binary[i++] = decimal & 1;

	for (--i; i >= 0; i--)
	{
		cout << binary[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif 

	const int n = 8;
	char hex[n] = {};
	int i = 0;
	for (; decimal; decimal /= 16)
	{
		hex[i] = decimal % 16;
		hex[i++] += hex[i] <10 ? 48 : 55;
	}
	for (--i; i >= 0; i--)
		cout << hex[i];
		//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	cout << endl;



}


