#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;


    //�﷨��  ����  ��������  = ����ֵ;


    //1. ����������ͬʱ����������ʼ��
    int age = 18;
    double price = 20.5;


    //2. ������������ ��ֵ
    int score;
    score = 100;


    //3. �����ʾ���� û��������ֱ��ʹ��
    //number = "10086";


    //4. �����ĳ�ʼ��д�������֣�
    int a = 3;  //��C���Խ�������ģ�
    int b (4); //���ù��췽����ʽ
    int c {5}; // c++ 11�汾�������ʼ���б�ķ�ʽ

    //5. Ҳ���Բ鿴����ռ�õĿռ��ж�󣬵õ��Ľ����ʵ�Ͳ鿴���ݵ�������һ���ġ�
    std::cout << "aռ�õĿռ䣺" << sizeof(a) << std::endl;
    std::cout << "intռ�õĿռ䣺" << sizeof(int) << std::endl;

    return 0;
}
