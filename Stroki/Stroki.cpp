#include <iostream>
#include <algorithm>
#include <array>
#include <random>
#include <chrono>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");

	cout << "Введите строку" << endl;

	string stroka;
	cin >> stroka;

	cout << "Выберите действие:" << endl;
	cout << "1. Слово выводится задом наперед." << endl;
	cout << "2.Вывести слово без гласных." << endl;
	cout << "3.Вывести слово без согласных." << endl;
	cout << "4. Рандомно раскидывать буквы заданного слова." << endl;

	int choise;
	cin >> choise;
	string result;

	switch (choise)
	{
		case 1:
			reverse(stroka.begin(), stroka.end());
			cout << "\n" << stroka;
			break;

		case 2:

			for (char c : stroka) {
				if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
					c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
					result += c;
				}
			}

			cout << result;
			break;

		case 3:
			for (char c : stroka) {
				char lowerC = tolower(c);
				if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
					result += c;
				}
			}

			cout << result;
			break;

		case 4:
			random_shuffle(stroka.begin(), stroka.end());
			cout << stroka;
			break;
	}

	return 0;
}

