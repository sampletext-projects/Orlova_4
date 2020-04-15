#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Выполнила студентка группы УТН-111 Орлова А.А." << endl;
	cout << "Программа вычисления стоимости товаров" << endl;

	double k, m, s;
	cout << "Введите стоимость карамели K: ";
	cin >> k;
	cout << "Введите стоимость мармелада M: ";
	cin >> m;
	cout << "Введите стоимость шоколада S: ";
	cin >> s;

	cout << setw(15) << "карамель" << " | " << setw(10) << "мармелад" << " | " << setw(10) << "шоколад" << " | " <<
		"\n";

	for (double amount = 0.1; amount <= 1; amount += 0.1)
	{
		cout << setw(3) << amount << "кг" << setw(10) << k * amount << " | " << setw(10) << m * amount << " | " <<
			setw(10) << s * amount << " | " << "\n";
	}

	system("pause");

	return 0;
}
