#include <iostream>
#include <synchapi.h>

//do-whileѭ�� һ������ִ����˵��������������㣬�Ͳ�ִ��ѭ���ˣ�������������㣬��ô����ѭ���ߡ�
int main(){

    int count = 100 ;
    do{
        std::cout <<"�̵�һֱ������" << std::endl;
        count++;
        Sleep(1000);
    }while (count < 5);

    //-------------------------------------------------

    for (int i = 0; i < 5; ++i) {
        std::cout << "�Ƶ�һֱ����˸" << std::endl;
        Sleep(1000);
    }

    // ����ѭ�� |  ��ѭ��...
    while(1){
        std::cout << "�Ƶ�һֱ����˸" << std::endl;
    }

    //ǰ��������ѭ���ˣ��������д������޷�ִ�еġ�
    std::cout << "�Ƶ�һֱ����˸" << std::endl;

    return 0;
}
