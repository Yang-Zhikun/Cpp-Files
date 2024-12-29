#include"easyx.h"

class rectangle {
public:
    int x, y; // x,y是矩形的左上角坐标
    int width, height; // 宽和高
    int linecolor; // 线条颜色
    int fillcolor; // 填充颜色


    rectangle(int x, int y, int width, int height, int linecolor = 0, int fillcolor = 0);
    void draw();
};



#include"rectangle.cpp"