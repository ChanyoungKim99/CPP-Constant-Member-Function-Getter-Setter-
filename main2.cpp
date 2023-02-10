#include <iostream>

class Dog
{
private:
	int mAge;

public:
	// Getter : 값을 가져와 되돌려 주기만 함
	int GetAge() const	// Dog 클래스의 mAge만 되돌려주는 함수이므로 const 사용
	{
		return mAge;
	}

	// Setter : 외부의 값을 받아와 세팅함
	void SetAge(int age)	// 값이 바뀌므로 const 사용 X
	{
		mAge = age;
	}
};

int main()
{
	Dog mimi;
	mimi.GetAge();		// 인스턴스를 바꿀 수 없으므로 안전해진다.
}

