#include <iostream>

class Base
{
public:
	Base() {}

	virtual ~Base() {}
};

class A : public Base
{
public:
	virtual ~A() {}
};

class B : public Base
{
public:
	virtual ~B() {}
};

class C : public Base
{
public:
	virtual ~C() {}
};

Base *createNewA(void)
{
	return new A();
}

Base *createNewB(void)
{
	return new B();
}

Base *createNewC(void)
{
	return new C();
}


Base *generate(void)
{
	int index = rand() % 3;
	Base *(*function[3])() = {&createNewA, &createNewB, &createNewC};
	std::cout << ((index == 0) ? "Created A" : ((index == 1) ? "Created B" : "Created C")) << std::endl;
	return function[index]();
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "Base is A by pointer" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "Base is B by pointer" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "Base is C by pointer" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "Base is A by reference" << std::endl;
		(void)a;
		return;
	}
	catch (...)
	{
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "Base is B by reference" << std::endl;
		(void)b;
		return;
	}
	catch (...)
	{
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "Base is C by reference" << std::endl;
		(void)c;
		return;
	}
	catch (...)
	{
	}
}

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		Base *b = generate();
		identify_from_pointer(b);
		identify_from_reference(*b);
		delete b;
	}
	return 0;
}