#include <iostream>
#include <synchapi.h>

int main() {


    //std::cout << "�̵�һֱ������" << std::endl;

    int count = 0 ;
    while (count < 5){
        std::cout << "�̵�һֱ������" << std::endl;
        count++;  //��ͬ��count + 1 ����˼��

        //���ߣ���λ�Ǻ��룬 1000����=1��  linux�µ�������uSleep(΢��) 1��=1000���� 1����=1000΢��
        Sleep(1000);
    }

   /*
    // ��0 �����ּ�Ϊ�棬����
    while(true){  // while(1)
        std::cout << "�̵�һֱ������" << std::endl;
    }*/




    return 0;
}
