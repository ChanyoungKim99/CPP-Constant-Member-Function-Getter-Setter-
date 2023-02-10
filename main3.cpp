#include <iostream>

class Calendar
{
private:
	int mMonth;

public:
	// Getter				
	std::string GetMonth() const	// Getter의 수정을 통해 영어 출력도 가능
	{
		switch (mMonth)			
		{
			case 1:
				return "january";
				break;
		}

		return "";
	}

	// Setter
	void SetMonth(int month)		// Setter로 안전하게 값을 되돌려줌
	{
		if (month < 1 || month > 12)
		{
			// 경고
			mMonth = 1;
		}
		else
		{
			mMonth = month;
		}
	}
};

int main()
{
	Calendar myEvent;
	myEvent.SetMonth(13);		// Setter를 통해 이런 경우를 막을 수 있다.
	std::cout << myEvent.GetMonth() << std::endl;
}

// 멤버 변수를 private로 숨겨놓고, Getter와 Setter를 통해 OOP를 하는것이
// 좋은 코딩이 된다.