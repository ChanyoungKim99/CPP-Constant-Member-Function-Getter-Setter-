#include <iostream>

class MyClass
{
private:
	int mValue;

public:
	int DoSomething() const		// ��� ��� �Լ��� ǥ���
	{
		// mValue = 1; ���� ��� ������ �ٲٴ� ���� �ȵ�
		return mValue;
	}
	
};

int main()
{
	MyClass c1;

	c1.DoSomething();
}