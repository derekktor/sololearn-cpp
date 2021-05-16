#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
protected:
    int size;
    int *queue;

public:
    Queue();
    int getSize() { return size; }
    void remove();
    void print();
    void add(int);

    Queue operator+(Queue& obj)
    {
        Queue temp;
        temp.size = size + obj.size;
        for (int i = 0; i < size; i++)
        {
            temp.queue[i] = queue[i];
        }
        for (int i = 0; i < obj.size; i++)
        {
            temp.queue[size + i] = obj.queue[i];
        }
        return temp;
    }
};

Queue::Queue()
{
    size = 0;
    queue = new int[100];
}

void Queue::remove()
{
    if (size == 0)
    {
        std::cout << "Queue is empty" << std::endl;
        return;
    }
    else
    {
        for (int i = 0; i < size - 1; i++)
            queue[i] = queue[i + 1];
        size--;
    }
}

void Queue::print()
{
    if (size == 0)
    {
        std::cout << "Queue is empty" << std::endl;
        return;
    }

    for (int i = 0; i < size; i++)
        std::cout << queue[i] << " <- ";
    std::cout << std::endl;
}

void Queue::add(int x)
{
    if (size == 0)
    {
        queue[0] = x;
        size++;
    }
    else
    {
        queue[size] = x;
        size++;
    }
}

#endif