#include"easyx.h"

class rectangle {
public:
    int x, y; // x,y�Ǿ��ε����Ͻ�����
    int width, height; // ��͸�
    int linecolor; // ������ɫ
    int fillcolor; // �����ɫ


    rectangle(int x, int y, int width, int height, int linecolor = 0, int fillcolor = 0);
    void draw();
};



#include"rectangle.cpp"