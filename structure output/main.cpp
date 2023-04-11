#include<iostream>
#include<string>


struct address {
	std::string citi;
	std::string street;
	int house;
	int flat;
	int index;
};

void Print(address* p) {
	std::cout << "�����: " << p->citi << "\n";
	std::cout << "�����: " << p->street << "\n";
	std::cout << "����� ����: " << p->house << "\n";
	std::cout << "����� ��������: " << p->flat << "\n";
	std::cout << "������: " << p->index << "\n\n\n";
}

int main() {

	setlocale(LC_ALL, "Russian");

	address one{ "������", "�����", 12, 8, 123456 };
	address two{ "������", "�������", 59, 143, 953769 };
	address* p_one = &one;
	Print(p_one);
	address* p_two = &two;
	Print(p_two);

	return 0;
}