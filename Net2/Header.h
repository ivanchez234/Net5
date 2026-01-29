#ifndef HEADER_H
#define HEADER_H
class Counter {
private:
    int count;

public:
    Counter();

    Counter(int value);

    void increment();

    void decrement();

    int getValue () const;
};
#endif
