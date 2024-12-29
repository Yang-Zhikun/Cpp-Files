#include"rectangle.h"

/**
 * @brief 构造函数
 * @param x 左上角x坐标
 * @param y 左上角y坐标
 * @param width 宽度
 * @param height 高度
 */
rectangle::rectangle(int x, int y, int width, int height, int linecolor, int fillcolor) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

/**
 * @brief 绘制矩形
 */
void rectangle::draw() {
    setlinecolor(this->linecolor);
    setfillcolor(this->fillcolor);
    fillrectangle(x, y, x + width, y + height);
}