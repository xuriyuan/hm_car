#include <iostream>

int main() {


    std::cout << "����������εĿ��Գɼ�(A,B,C,D): "<< std::endl;
    char level ;
    std::cin >> level;

    switch (level){
        case 'A': //ÿһ����֧����case �� break ���䣬ǧ����ʡ�Ե���
            std::cout << "�������һ����" << std::endl;
            break;
        case 'B':
            std::cout << "¥�µ�С����һ��" << std::endl;
            break;
        case 'C':
            std::cout << "��̨���Сʱ" << std::endl;
            break;
        case 'D':
            std::cout << "�Ͻ�ȥд��ҵ��" << std::endl;
            break;
        default:
            std::cout << "����������������룡" << std::endl;
            break;
    }


    return 0;
}
