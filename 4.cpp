# include <iostream>
# include <windows.h>
# include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int K;
    cout << "������� ����� ����� � ��������� 100�999:  "; // ������� ���������� � ������ �����
    cin >> K;
    cout << K << " - ";                                   //������� ������� �������
    switch (K / 100) {       //���������� ����� ��� ������ �������������� �������
    case 1: cout << "��� "; break;
    case 2: cout << "������ "; break;
    case 3: cout << "������ "; break;
    case 4: cout << "��������� "; break;
    case 5: cout << "������� "; break;
    case 6: cout << "�������� "; break;
    case 7: cout << "������� "; break;
    case 8: cout << "��������� "; break;
    case 9: cout << "��������� "; break;
    }
    switch ((K % 100) / 10) {     //���������� ������� ��� ������ ���������� �������
    case 0: break;
    case 2: cout << "�������� "; break;
    case 3: cout << "�������� "; break;
    case 4: cout << "����� "; break;
    case 5: cout << "��������� "; break;
    case 6: cout << "���������� "; break;
    case 7: cout << "��������� "; break;
    case 8: cout << "����������� "; break;
    case 9: cout << "��������� "; break;
    case 1: switch (K % 100) {         // �������� ��������� 11-19
    case 11: cout << "����������� "; break;
    case 12: cout << "���������� "; break;
    case 13: cout << "���������� "; break;
    case 14: cout << "������������ "; break;
    case 15: cout << "���������� "; break;
    case 16: cout << "����������� "; break;
    case 17: cout << "���������� "; break;
    case 18: cout << "������������ "; break;
    case 19: cout << "������������ "; break;
    case 10: cout << "������ "; break;
    }
    }
    if ((K % 100 / 10) != 1) {       //���������� ������� ��� ������ ���������� �������
        switch (K % 10) {
        case 0: break;
        case 1: cout << "���� "; break;
        case 2: cout << "��� "; break;
        case 3: cout << "��� "; break;
        case 4: cout << "������ "; break;
        case 5: cout << "���� "; break;
        case 6: cout << "����� "; break;
        case 7: cout << "���� "; break;
        case 8: cout << "������ "; break;
        case 9: cout << "������ "; break;
        }
    }
    cout << endl;
    system("pause");
    return 0;
}
