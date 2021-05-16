#include <iostream>
#include "queue.h"
#include "queue2.h"

int main() { 
	Queue q, p;
	q.add(42);
	q.add(2);
	q.add(8);
	q.add(1);
	q.add(15);
	q.add(27);

	p.add(2);
	p.add(4);
	p.add(5);
	p.add(6);
	p.add(8);
	p.add(13);
	p.add(15);

	p.print();
	q.print();

	Queue r;
	r = p + q;
	r.print();

	Queue2 ab;
	ab.add(12);
	ab.add(2);
	ab.add(5);
	ab.add(28);
	ab.add(35);

	ab.print();

	// std::cout << p.getSize() << " ";
	// std::cout << q.getSize() << " ";
	// std::cout << r.getSize() << " ";

	return 0; 
} 