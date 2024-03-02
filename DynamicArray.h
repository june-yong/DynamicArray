
#pragma once

namespace MyClass
{
class DyArry
{
  private:
    int* mValue;
    int count;
    int capacity;

  public:
    DyArry();
    ~DyArry();
    void push_back(int value);
    void insert(int index, int value);
    void erase(int index, int value);
    void begin();
    void end();
    void size();
    void resize();
    void empty();
    void at();
    void operator[](MyClass::DyArry& otherArry);
    void front();
    void back();
};
} // namespace MyClass