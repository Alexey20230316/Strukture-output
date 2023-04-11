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
	std::cout << "Город: " << p->citi << "\n";
	std::cout << "Улица: " << p->street << "\n";
	std::cout << "Номер дома: " << p->house << "\n";
	std::cout << "Номер квартиры: " << p->flat << "\n";
	std::cout << "Индекс: " << p->index << "\n\n\n";
}

int main() {

	setlocale(LC_ALL, "Russian");

	address one{ "Москва", "Арбат", 12, 8, 123456 };
	address two{ "Ижевск", "Пушкина", 59, 143, 953769 };
	address* p_one = &one;
	Print(p_one);
	address* p_two = &two;
	Print(p_two);

	return 0;
}