#include <iostream>

//��ϵ��������߼������

int main() {


    //���� ���ĺ���ѧ�ĳɼ�����Ҫ�ﵽ140�����ϣ����ܱ����山
    std::cout << "�������������ĳɼ�: " << std::endl;
    int score1 ;
    std:: cin >>score1;

    std::cout << "������������ѧ�ɼ���" << std::endl;
    int score2;
    std::cin >>  score2;

    if(score1 > 140 &&  score2 > 140){ //���߶����
        std::cout << "���Ա����山" << std::endl;
    }else{
        std::cout << "���Ա���������ԺУ" << std::endl;
    }

    return 0;
}
