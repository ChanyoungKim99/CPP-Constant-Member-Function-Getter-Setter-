#include <iostream>

class Dog
{
private:
	int mAge;

public:
	// Getter : ���� ������ �ǵ��� �ֱ⸸ ��
	int GetAge() const	// Dog Ŭ������ mAge�� �ǵ����ִ� �Լ��̹Ƿ� const ���
	{
		return mAge;
	}

	// Setter : �ܺ��� ���� �޾ƿ� ������
	void SetAge(int age)	// ���� �ٲ�Ƿ� const ��� X
	{
		mAge = age;
	}
};

int main()
{
	Dog mimi;
	mimi.GetAge();		// �ν��Ͻ��� �ٲ� �� �����Ƿ� ����������.
}

