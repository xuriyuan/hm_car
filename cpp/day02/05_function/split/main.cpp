#include <iostream>
#include <vector>

//����hello.h ��Ϊ��������һ������ sayHi()
//#include <hello.h> //<>  һ�������ڵ��� ���뻷���ṩ��ͷ, mingw�ṩ��ͷ
#include "hello.h" //""  ����������Լ�д��ͷ�ļ��������ǵ�������ͷ�ļ��� ""

//һ�㲻����Դ�ļ����е���Դ�ļ�
//#include "hello.cpp"

using namespace std;

//����ԭ�� ::: ����һ��������ͷ�ļ�(.h)���С�
//void sayHi();

int main(){
    sayHi();

    return 0;
}

//�����ľ���ʵ�� ::: ����һ��������Դ�ļ�(.cpp)����
/*void sayHi(){
    cout << "���~~" << endl;
}*/
