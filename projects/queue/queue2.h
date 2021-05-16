#ifndef QUEUE2_H
#define QUEUE2_H

class Queue2 : public Queue
{
public:
    void print();
};

void Queue2::print()
{
    if (size == 0)
    {
        std::cout << "Queue is empty" << std::endl;
        return;
    }

    for (int i = 0; i < size; i++)
        std::cout << queue[i] << std::endl;
    std::cout << std::endl;
}

#endif