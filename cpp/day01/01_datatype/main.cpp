#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;


    int age  = 18 ;
    float price  = 10.5;
    double pi = 3.1415;
    char c = 'a';
    std::string name = "����";
    bool flag = true ;  //  1 �� 0  �� 0 ��ʾ�٣� ��������ֱ�ʾ��

    //��ӡ���б�����ռ�õĿռ�
    std::cout << "ageռ�õĿռ�: " << sizeof(age) << std::endl;
    std::cout << "priceռ�õĿռ䣺" << sizeof(price) << std::endl;
    std::cout << "piռ�õĿռ䣺" << sizeof(pi) << std::endl;

    std::cout << "cռ�õĿռ䣺" << sizeof(c) << std::endl;
    std::cout << "nameռ�õĿռ䣺" << sizeof(name) << std::endl;
    std::cout << "flagռ�õĿռ䣺" << sizeof(flag) << std::endl;

    return 0;
}
