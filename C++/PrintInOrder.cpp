/***********************************************************************************************
Problem      Print In Order
Developer    Ian Hays
Date         11/10/21
URL          https://leetcode.com/problems/print-in-order/
Space        O(1) 
Time         O(1)
Description  Build a promise setting values and getting future to ensure that first, second and third
             are in order.
************************************************************************************************/

class Foo {
    public:
    promise<void> p1;
    promise<void> p2;

    Foo() {

    }

    void first(function<void()> printFirst) {
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        p1.set_value();
    }

    void second(function<void()> printSecond) {
        p1.get_future().wait();
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        p2.set_value();
    }

    void third(function<void()> printThird) {
        p2.get_future().wait();
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};
