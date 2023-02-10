#include <iostream>

class MyClass
{
private:
	int mValue;

public:
	int DoSomething() const		// 상수 멤버 함수의 표기법
	{
		// mValue = 1; 같이 멤버 변수를 바꾸는 것이 안됨
		return mValue;
	}
	
};

int main()
{
	MyClass c1;

	c1.DoSomething();
}