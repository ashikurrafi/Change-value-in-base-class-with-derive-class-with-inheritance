#include<iostream>
using namespace std;
class base
{
public:
	base();
	base(int i);
	~base();
	void show_base_value();
private:
	int x;
};

base::base()
{
	x = 0;
}

base::base(int i)
{
	x = i;
}

base::~base()
{
}

void base::show_base_value()
{
	cout << "Base value : " << x << endl;
}

class derive :public base
{
public:
	derive();
	derive(int i) :base(i)
	{
		y = i;
	}
	derive(int i, int j) :base(j)
	{
		y = i;
	}
	~derive();
	void show_derive_value();
private:
	int y;
};

derive::derive()
{
	y = 0;
}

derive::~derive()
{
}

void derive::show_derive_value()
{
	cout << "Derive value : " << y << endl;
}

int main()
{
	derive d(5, 6);
	d.show_base_value();
	d.show_derive_value();
	return 0;
}