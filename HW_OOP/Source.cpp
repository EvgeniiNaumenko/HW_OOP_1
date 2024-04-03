#include <iostream>
using namespace std;

class Fraction
{
private:
    double numer;
    double denom;
    bool denomNoZero(double num)
    {
        if (num == 0)
        {
            cout << "Error : Zero division!!!" << endl;
            return false;
        }
        return true;
    }
public:
    //конструктор по умолчанию 
    Fraction()
    {
        numer = 1;
        denom = 1;
    }
    //конструктор 
    Fraction(double num1, double num2)
    {
        if (denomNoZero(num2))
        {
            numer = num1;
            denom = num2;
        }
        else
        {
            cout << "Error: zero division! denominator change to 1 !" << endl;
            numer = num1;
            denom = 1;
        }
    }
    // метод установки числителя
    void setNumerator(double num)
    {
        numer = num;
    }
    // метод установки знаменателя с проверкой деления на ноль
    void setDenominator(double num)
    {
        if (denomNoZero(num))
        {
            denom = num;
        }
    }
    // метод получения числителя
    double getNumerator()
    {
        return numer;
    }
    // метод получения знаменателя
    double getDenominator()
    {
        return denom;
    }
    // метод вывода в виде дроби
    void showFract()
    {
        cout <<"Fraction: " << numer << "/" << denom << endl;
    }
    // метод вывода результата деления
    void showResult()
    {
        cout << "Result: " << numer / denom << endl;
    }
    // метод вывода результата сложения двух дробей
    double addResult(Fraction& fract1)
    {
        return (numer / denom + fract1.getNumerator() / fract1.getDenominator());
    }
    // метод вывода результата вычетания двух дробей
    double subResult(Fraction& fract1)
    {
        return (numer / denom - fract1.getNumerator() / fract1.getDenominator());
    }
    // метод вывода результата умножения двух дробей
    double multipResult(Fraction& fract1)
    {
        return ((numer / denom) * (fract1.getNumerator() / fract1.getDenominator()));
    }
    // метод вывода результата деления двух дробей
    double divisResult(Fraction& fract1)
    {
        return ((numer / denom) / (fract1.getNumerator() / fract1.getDenominator()));
    }
    // метод вывода дроби сложения двух дробей
    void addFractResult(Fraction& fract1)
    {
        if (denom == fract1.getDenominator())
        {
            cout <<"Fraction: "<< numer + fract1.getNumerator() << "/" << denom << endl;
        }
        else
        {
            cout << "Fraction: " << numer*fract1.getDenominator() + denom*fract1.getNumerator() << "/" << denom*fract1.getDenominator() << endl;
        }
    }
    // метод вывода дроби вычетания двух дробей
    void subFractResult(Fraction& fract1)
    {
        if (denom == fract1.getDenominator())
        {
            cout << "Fraction: " << numer - fract1.getNumerator() << "/" << denom << endl;
        }
        else
        {
            cout << "Fraction: " << numer * fract1.getDenominator() - denom * fract1.getNumerator() << "/" << denom * fract1.getDenominator() << endl;
        }
    }
    // метод вывода дроби умножения двух дробей
    void multipFractResult(Fraction& fract1)
    {
        cout << "Fraction: " << numer*fract1.getNumerator() << "/" << denom*fract1.getDenominator() << endl;
    }
    // метод вывода дроби деления двух дробей
    void divisFractResult(Fraction& fract1)
    {
        cout << "Fraction: " << numer * fract1.getDenominator() << "/" << denom * fract1.getNumerator() << endl;
    }
};

int main()
{
    Fraction FR1;
    Fraction FR2;
    Fraction FR3(999,0);// если знаменатель 0
    FR1.setNumerator(5);// для обьекта устанавливаем числитель 
    FR1.setDenominator(6);// ля обьекта устанавливаем знаменатель
    FR2.setNumerator(7);
    FR2.setDenominator(8);
    FR1.showFract();// принт обьекта
    FR2.showFract();
    FR3.showFract();

    cout<<FR1.addResult(FR2)<<endl; //дробный результат сложения
    cout << FR1.subResult(FR2) << endl;//дробный  результат сложения
    cout << FR1.multipResult(FR2) << endl; //дробный результат умн
    cout << FR1.divisResult(FR2) << endl; //дробный результат дел

    FR1.addFractResult(FR2); //дробный результат сложения
    FR1.subFractResult(FR2);//дробный  результат сложения
    FR1.multipFractResult(FR2); //дробный результат умн
    FR1.divisFractResult(FR2); //дробный результат дел

	/*
   	Реалізуйте клас «Дріб». Необхідно зберігати чисельник
	і знаменник як змінні-члени. Реалізуйте функції-члени для
	введення даних в змінні-члени, для виконання арифметичних операцій (додавання, віднімання, множення,
	ділення, і т.д.).
	*/
	return 0;
}