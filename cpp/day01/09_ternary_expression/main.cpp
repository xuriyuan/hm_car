#include <iostream>

int main() {


    std::cout << "���������Ŀ��Գɼ�: " << std::endl;
    int score;
    std::cin >> score;

    //if��ʽ
    if(score > 90){
        std::cout << "A" << std::endl;
    }else{
        std::cout << "B" << std::endl;
    }


    //��Ԫ���ʽ��д �ɼ����� 90��������ڣ��͵õ�A ������͵õ�B��
    char result = score > 90 ? 'A' : 'B';
    std::cout << "result=" << result <<std::endl;

    //���������ս������ֱ�Ӵ�ӡ���ʽ�Ľ��
    std::cout << "�����" <<  (score > 90?'A':'B')  << std::endl;


    return 0;
}
