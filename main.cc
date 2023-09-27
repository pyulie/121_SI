#include <iostream>

class Triangle
{

private:
    double height_;
    double base_;

public:
    Triangle() {

    }
    void SetHeight(double height)
    {
        height_ = height;
    }
    void SetBase(double base)
    {
        base_ = base;
    }

    double height()
    {
        return height_;
    }

    double base()
    {
        return base_;
    }

    double Area()
    {
        return 0.5 * base_ * height_;
    }
};

int main() {
Triangle t1 {};
t1.SetHeight(5.0);
t1.SetBase(4.0);

    return 0;
}