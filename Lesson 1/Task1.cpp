#include <iostream>

using namespace std;

int main()
{
    int a,b;
    setlocale(LC_ALL, "Russian");
    cout << "������ ����� �������?" <<endl;
    cout << "1. �����." << endl;
    cout << "2. �� ����." << endl;
    cin >> a;
    switch(a)
    {
        case 2:cout << "�� ��� ������";break;
        case 1:cout << "�� �������� � ����... ������ � ������ ���. ����� ��� ����� ������������� ���,������� ������� � ����� ��������� ��������� ��� �� ������... �� ����� ����� �������" << endl;cout << "���� ��������:" <<endl;
        cout << "1. ����� ���." <<endl;
        cout << "2. ���������� � ������." <<endl;
        cout << "3. ���� � ������� ����." <<endl;
        cin >> b;
    }
    switch(b)
    {
        case 3:cout <<"���� �������,����� ��!�� ��� ������������ � ������!" <<endl;break;
        case 2:cout <<"��� �������� ����� � �����" <<endl;break;
        case 1:cout <<"�� ���������� ����� � ������� ������� � ������ �� ����!";
    }
}
