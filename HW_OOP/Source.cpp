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
    //����������� �� ��������� 
    Fraction()
    {
        numer = 1;
        denom = 1;
    }
    //����������� 
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
    // ����� ��������� ���������
    void setNumerator(double num)
    {
        numer = num;
    }
    // ����� ��������� ����������� � ��������� ������� �� ����
    void setDenominator(double num)
    {
        if (denomNoZero(num))
        {
            denom = num;
        }
    }
    // ����� ��������� ���������
    double getNumerator()
    {
        return numer;
    }
    // ����� ��������� �����������
    double getDenominator()
    {
        return denom;
    }
    // ����� ������ � ���� �����
    void showFract()
    {
        cout <<"Fraction: " << numer << "/" << denom << endl;
    }
    // ����� ������ ���������� �������
    void showResult()
    {
        cout << "Result: " << numer / denom << endl;
    }
    // ����� ������ ���������� �������� ���� ������
    double addResult(Fraction& fract1)
    {
        return (numer / denom + fract1.getNumerator() / fract1.getDenominator());
    }
    // ����� ������ ���������� ��������� ���� ������
    double subResult(Fraction& fract1)
    {
        return (numer / denom - fract1.getNumerator() / fract1.getDenominator());
    }
    // ����� ������ ���������� ��������� ���� ������
    double multipResult(Fraction& fract1)
    {
        return ((numer / denom) * (fract1.getNumerator() / fract1.getDenominator()));
    }
    // ����� ������ ���������� ������� ���� ������
    double divisResult(Fraction& fract1)
    {
        return ((numer / denom) / (fract1.getNumerator() / fract1.getDenominator()));
    }
    // ����� ������ ����� �������� ���� ������
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
    // ����� ������ ����� ��������� ���� ������
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
    // ����� ������ ����� ��������� ���� ������
    void multipFractResult(Fraction& fract1)
    {
        cout << "Fraction: " << numer*fract1.getNumerator() << "/" << denom*fract1.getDenominator() << endl;
    }
    // ����� ������ ����� ������� ���� ������
    void divisFractResult(Fraction& fract1)
    {
        cout << "Fraction: " << numer * fract1.getDenominator() << "/" << denom * fract1.getNumerator() << endl;
    }
};

int main()
{
    Fraction FR1;
    Fraction FR2;
    Fraction FR3(999,0);// ���� ����������� 0
    FR1.setNumerator(5);// ��� ������� ������������� ��������� 
    FR1.setDenominator(6);// �� ������� ������������� �����������
    FR2.setNumerator(7);
    FR2.setDenominator(8);
    FR1.showFract();// ����� �������
    FR2.showFract();
    FR3.showFract();

    cout<<FR1.addResult(FR2)<<endl; //������� ��������� ��������
    cout << FR1.subResult(FR2) << endl;//�������  ��������� ��������
    cout << FR1.multipResult(FR2) << endl; //������� ��������� ���
    cout << FR1.divisResult(FR2) << endl; //������� ��������� ���

    FR1.addFractResult(FR2); //������� ��������� ��������
    FR1.subFractResult(FR2);//�������  ��������� ��������
    FR1.multipFractResult(FR2); //������� ��������� ���
    FR1.divisFractResult(FR2); //������� ��������� ���

	/*
   	��������� ���� ����. ��������� �������� ���������
	� ��������� �� ����-�����. ��������� �������-����� ���
	�������� ����� � ����-�����, ��� ��������� ������������ �������� (���������, ��������, ��������,
	������, � �.�.).
	*/
	return 0;
}