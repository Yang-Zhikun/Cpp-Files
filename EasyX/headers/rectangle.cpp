#include"rectangle.h"

/**
 * @brief ���캯��
 * @param x ���Ͻ�x����
 * @param y ���Ͻ�y����
 * @param width ���
 * @param height �߶�
 */
rectangle::rectangle(int x, int y, int width, int height, int linecolor, int fillcolor) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

/**
 * @brief ���ƾ���
 */
void rectangle::draw() {
    setlinecolor(this->linecolor);
    setfillcolor(this->fillcolor);
    fillrectangle(x, y, x + width, y + height);
}