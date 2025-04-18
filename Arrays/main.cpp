#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3, 5, 8 };
	arr[1] = 1024; 
	cout << arr[1] << endl; 
	/*
	cout << "������� �������� �������: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	*/


	int minRand, maxRand;

	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
		if (minRand > maxRand)cout << "����������� ������ ���� ������ �����������" << endl;
		if (minRand == maxRand)cout << "����� ������ ���� ������ " << endl;
	} while (minRand >= maxRand);

	/*if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}*/

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	


	/*for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100 - 50 + 50;
	}*/

	// ����� ��������� ������� � ������ �������
    for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl; 


	// ����� ��������� ������� � �������� �������
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// ���������� ����� ���������-���������������
	int sum = 0; 
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "�������-�������������� ��������� �������: " << (double)sum/n << endl;

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;



	for (int i = 0; i < n; i++) // ������� 'i' �������� �������, � ������� ����� ��������� ����������� ��������.
	{
		for (int j = i + 1; j < n; j++) // ������� j ���������� �������� � ������� ���������� ��������.
		{
			//arr[i] - ��������� �������
			//arr[j] - ������������ �������
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl; 

}

