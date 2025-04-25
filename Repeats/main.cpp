#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// поиск повторений:
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;// предложим, что выбранное значение раньше не встречалось,но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}

		if (met_before)continue;
		{// ключевое слово континию перывает текущую итерацию, и переходит к следубщей.
			int count = 0;
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
			if (count > 0)cout << "Значение " << arr[i] << " Повторяется " << count << " раз\n";
		}
	}
}