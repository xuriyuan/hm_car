#include <iostream>


//ָ�������

using namespace std;

int main() {

    //����
    int age = 18;

    cout <<"age��ֵ��" << age <<endl; // 18

    //ָ��
    //�����* ������ʾpage��һ��ָ�룬
    int * page = &age;

    //ͨ�������öʽ���޸�ָ��ָ��λ�õ�ֵ��
    *page = 20;

    //�����*�ǽ����õķ��ţ���Ϊ������page�����Ѿ���ָ���ˡ�����ֻ�ܶ�ָ����н�����
    cout<< "ͨ��ָ������ȡage��ֵ��" << *page  << endl; // age�ĵ�ַ
    cout <<"age��ֵ��" << age <<endl; // 20




    return 0;
}
