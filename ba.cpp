#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int variant;
	cout << "1 - ИП\n2 - ООО" << endl;
	cin >> variant;
	switch (variant)
	{
	case 1: {
		
		int money;
		cout << "Salary = " << endl;
		cin >> money;
		float medicalInsurance = money * 0.09f;
		cout << "Мед стр = " << medicalInsurance << " лей"<< endl;
		float res = money - medicalInsurance - 2250;
		cout << "Сумма из которой будут платить налоги = " << res << " лей"<< endl;
		float tax = res * 0.12f;
		cout << "Подоходный налог: " << tax << " лей"<< endl;
		cout << "Итог: " << money - medicalInsurance - tax << " лей"<< endl;
		
	}break;
	case 2: {
		int n;
		cout << "Iteration = " << endl;
		cin >> n;
		int count, fullCount = 0, salary;
		float res = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> count;
			cin >> salary;
			fullCount += count;
			res += count * salary;

		}
		cout << endl;
		float avgSalary = res / fullCount;
		cout << "Ср. ЗП = " << avgSalary << " лей" << endl;

		cout << "Ф.о.т.м = " << res << " лей" << endl;
		float year = res * 12;
		cout << "Ф.о.т.г = " << year << " лей" << endl;

		float socialInsuranceMonth = res * 0.18f;
		cout << "С.с.м = " << socialInsuranceMonth << " лей" << endl;
		float socialInsuranceYear = year * 0.18f;
		cout << "С.с.г = " << socialInsuranceYear << " лей" << endl;

		cout << "Ор.м = " << res + socialInsuranceMonth << " лей" << endl;
		cout << "Ор.г = " << year + socialInsuranceYear << " лей" << endl;
	} break;
	default:
		break;
	}
	return 0;
}
