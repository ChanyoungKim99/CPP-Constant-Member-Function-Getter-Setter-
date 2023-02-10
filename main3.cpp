#include <iostream>

class Calendar
{
private:
	int mMonth;

public:
	// Getter				
	std::string GetMonth() const	// Getter�� ������ ���� ���� ��µ� ����
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
	void SetMonth(int month)		// Setter�� �����ϰ� ���� �ǵ�����
	{
		if (month < 1 || month > 12)
		{
			// ���
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
	myEvent.SetMonth(13);		// Setter�� ���� �̷� ��츦 ���� �� �ִ�.
	std::cout << myEvent.GetMonth() << std::endl;
}

// ��� ������ private�� ���ܳ���, Getter�� Setter�� ���� OOP�� �ϴ°���
// ���� �ڵ��� �ȴ�.