#include "sdt.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");  // ������������� ������ ��� ������ � ������� ������.
    int num1, num2;

    // ����������� ��� ����� �����
    cout << "������� ��� ����� �����: ";

    // ���� �����
    cin >> num1 >> num2;

    // ����� �������� �����
    cout << "�� �����: " << num1 << " � " << num2 << endl;

    return 0;
}