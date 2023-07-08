#include <iostream>


class A {
public:
    void print(A& obj) {
        std::cout << "call lvalue reference" << std::endl;
    }

    void print(const A& obj) {
        std::cout << "call const lvalue reference" << std::endl;
    }

    void print(A&& obj) {
        std::cout << "call rvalue reference" << std::endl;
    }

    void print(const A&& obj) {
        std::cout << "call const rvalue reference" << std::endl;
    }

};



int main()
{
    A obj;
    obj.print(obj);
    const A& constRef = obj;
    obj.print(constRef);
    obj.print(A());
    obj.print(std::move(obj));
}
