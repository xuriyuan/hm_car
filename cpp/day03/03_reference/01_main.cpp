#include <iostream>


//����

using namespace std;

int main() {

    //����
    int age = 18;
    cout << "��ַ1��" << &age <<endl;

    //����
    int &age2 = age;
    cout << "��ַ2��" << &age2 <<endl;

    // ���������ͱ���������ʼ�������򱨴�
    //int &age3;

    //���ܴ������������
    //int score[]{10,20,30};
    //int[3] &s = score;


    return 0;
}
