#include <iostream>

int main() {

    std::cout << "����������ο��Եĳɼ�������" << std::endl;

    int score;

    std::cin >> score;

    if(score > 90){ // ���� > 90
        std::cout << "����һ��ipad" << std::endl;
    }else if(score > 80){
        std::cout << "����һ������" << std::endl;
    }else if(score > 70){
        std::cout << "����һ������" << std::endl;
    }else if(score > 60){
        std::cout << "����һ������" << std::endl;
    }else{
        //���� <= 60
        std::cout << "��ֹ�����ƴ��ˢ��" << std::endl;
    }

    return 0;
}
