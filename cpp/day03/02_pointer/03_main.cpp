#include <iostream>


//����ָ������ַ�ʽ

using namespace std;

int main() {


    //ջ�ڴ�ķ�ʽ
    int age = 18;
    int *p1 = &age; //ָ��p1 ָ�����ջ�ڴ�ĵ�ַ��

    //���ڴ�ķ�ʽ , ����new�ؼ��� , �ڶ��ڴ�������ռ�
    int * p2 = new int(20);

    //����p2
    delete p2;


    return 0;
}
