#include <iostream>


struct Stock
{
	char name[30];
	float price = 0;
	float quantity = 0;
	float markup_percentage = 0;
};


struct Stock mas[30];
struct Stock tmp;
int counter = 0;
int er = 0;


void input_struct();
int menu();
void sort();
void find_qua();
void change_struct();
void del_struct();
void output_struct();


int main()
{
	bool work = true;
	while (work)
	{
		switch (menu())
		{
			case 1:
			{
				input_struct();
				break;
			}
			case 2:
			{
				sort();
				break;
			}
			case 3:
			{
				find_qua();
				break;
			}
			case 4:
			{
				change_struct();
				break;
			}
			case 5:
			{
				del_struct();
				break;
			}
			case 6:
			{
				output_struct();
				break;
			}
			case 7:
			{
				std::cout << "Exit";
				return 0;
			}
		}
	}
}


void input_struct()
{
	if (counter < 30)
	{
		std::cout << std::endl <<  "Entry number: " << counter << std::endl;
		std::cout << "Enter product name: ";
		std::cin >> mas[counter].name;


		std::cout << std::endl;
		std::cout << "Enter product price: ";
		bool IsIncorrect;
		do {
			IsIncorrect = false;
			std::cin >> mas[counter].price;
			if (std::cin.fail())
			{
				std::cin.clear();
				while (std::cin.get() != '\n');
				IsIncorrect = true;
				std::cout << "TYPR ERR" << std::endl;
			}
			if (!IsIncorrect && std::cin.get() != '\n')
			{
				std::cin.clear();
				while (std::cin.get() != '\n');

				std::cout << "Err" << std::endl;
				IsIncorrect = true;
			}
			if (!IsIncorrect && mas[counter].price < 0)
			{
				IsIncorrect = true;
				std::cout << "RANGE ERR" << std::endl;
			}
		} while (IsIncorrect);
		std::cout << std::endl;


		std::cout << "Enter product quantity: ";
		bool IsIncorrect1;
		do {
			IsIncorrect1 = false;
			std::cin >> mas[counter].quantity;
			if (std::cin.fail())
			{
				std::cin.clear();
				while (std::cin.get() != '\n');
				IsIncorrect1 = true;
				std::cout << "TYPR ERR" << std::endl;
			}
			if (!IsIncorrect1 && std::cin.get() != '\n')
			{
				std::cin.clear();
				while (std::cin.get() != '\n');

				std::cout << "Err" << std::endl;
				IsIncorrect1 = true;
			}
			if (!IsIncorrect1 && mas[counter].quantity < 0)
			{
				IsIncorrect1 = true;
				std::cout << "RANGE ERR" << std::endl;
			}
		} while (IsIncorrect1);
		std::cout << std::endl;
		std::cout << "Enter product markup percentage: ";
		bool IsIncorrect2;
		do {
			IsIncorrect2 = false;
			std::cin >> mas[counter].markup_percentage;
			if (std::cin.fail())
			{
				std::cin.clear();
				while (std::cin.get() != '\n');
				IsIncorrect2 = true;
				std::cout << "TYPR ERR" << std::endl;
			}
		} while (IsIncorrect2);
		counter++;
	}
	else
	{
		std::cout << "Entered maximum number of records!";
	}
}


int menu()
{
	int er = 0;
	std::cout << std::endl <<  "Choose your option:" << std::endl << std::endl;
	std::cout << "1)Enter new stract" << std::endl;
	std::cout << "2)Sorting an array of structures" << std::endl;
	std::cout << "3)Search in an array of structures by a given parameter" << std::endl;
	std::cout << "4)Changing the given structure" << std::endl;
	std::cout << "5)Removing a structure from an array" << std::endl;
	std::cout << "6)Displaying an array of structures" << std::endl;
	std::cout << "7)Exit" << std::endl;
	bool IsIncorrect;
	do {
		IsIncorrect = false;
		std::cin >> er;
		if (std::cin.fail())
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			IsIncorrect = true;
			std::cout << "TYPR ERR" << std::endl;
		}
		if (!IsIncorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');

			std::cout << "Err" << std::endl;
			IsIncorrect = true;
		}
		if (!IsIncorrect && (er < 1 || er > 7))
		{
			IsIncorrect = true;
			std::cout << "RANGE ERR" << std::endl;
		}
	} while (IsIncorrect);

	return er;
}


void output_struct()
{
	int Switch = 0;
	int struct_number = 0;

	if (counter == 0)
	{
		std::cout << std::endl << "No recordings" << std::endl;
	}
	else
	{
		std::cout << std::endl << "Choose: " << std::endl;
		std::cout << "1 - if you want to display exact record" << std::endl;
		std::cout << "2 - if you want to display all records" << std::endl;
		bool IsIncorrect;
		do {
			IsIncorrect = false;
			std::cin >> Switch;
			if (std::cin.fail())
			{
				std::cin.clear();
				while (std::cin.get() != '\n');
				IsIncorrect = true;
				std::cout << "TYPR ERR" << std::endl;
			}
			if (!IsIncorrect && std::cin.get() != '\n')
			{
				std::cin.clear();
				while (std::cin.get() != '\n');

				std::cout << "Err" << std::endl;
				IsIncorrect = true;
			}
			if (!IsIncorrect && (Switch < 1 || Switch > 2))
			{
				IsIncorrect = true;
				std::cout << "RANGE ERR" << std::endl;
			}
		} while (IsIncorrect);

		if (Switch == 1)
		{
			std::cout << "Enter product number: ";
			bool IsIncorrect;
			do {
				IsIncorrect = false;
				std::cin >> struct_number;
				if (std::cin.fail())
				{
					std::cin.clear();
					while (std::cin.get() != '\n');
					IsIncorrect = true;
					std::cout << "TYPR ERR" << std::endl;
				}
				if (!IsIncorrect && std::cin.get() != '\n')
				{
					std::cin.clear();
					while (std::cin.get() != '\n');

					std::cout << "Err" << std::endl;
					IsIncorrect = true;
				}
				if (!IsIncorrect && (struct_number < 1 || struct_number > 30))
				{
					IsIncorrect = true;
					std::cout << "RANGE ERR" << std::endl;
				}
			} while (IsIncorrect);
			std::cout << std::endl << "Name: " << mas[struct_number - 1].name << std::endl;
			std::cout << "Price: " << mas[struct_number - 1].price << std::endl;
			std::cout << "Quantity: " << mas[struct_number - 1].quantity << std::endl;
			std::cout << "Markup percentage: " << mas[struct_number - 1].markup_percentage << std::endl;
			std::cout << "______________________________________" << std::endl;
		}
		if (Switch == 2)
		{
			for (int i(0); i < counter; i++)
			{
				std::cout << std::endl <<  "Name: " << mas[i].name << std::endl;
				std::cout << "Price: " << mas[i].price << std::endl;
				std::cout << "Quantity: " << mas[i].quantity << std::endl;
				std::cout << "Markup percentage: " << mas[i].markup_percentage << std::endl;
				std::cout << "______________________________________" << std::endl << std::endl;
			}
		}
	}
}


void del_struct()
{
	if (counter == 0)
	{
		std::cout << std::endl << "No recordings!" << std::endl;
	}
	else
	{
		int d = 0;
		std::cout << std::endl << "Enter the number of the product to be deleted: " << std::endl;
		std::cout << "If you want to delete everything enter 69" << std::endl;
		bool IsIncorrect;
		do {
			IsIncorrect = false;
			std::cin >> d;
			if (std::cin.fail())
			{
				std::cin.clear();
				while (std::cin.get() != '\n');
				IsIncorrect = true;
				std::cout << "TYPR ERR" << std::endl;
			}
			if (!IsIncorrect && std::cin.get() != '\n')
			{
				std::cin.clear();
				while (std::cin.get() != '\n');

				std::cout << "Err" << std::endl;
				IsIncorrect = true;
			}
			if (!IsIncorrect && (d < 1 || (d > counter && d != 69)))
			{
				IsIncorrect = true;
				std::cout << "RANGE ERR" << std::endl;
			}
		} while (IsIncorrect);

		if (d == 69)
		{
			for (int i(0); i < counter + 1; i++)
			{
				mas[i] = tmp;
			}
			counter = 0;
		}
		else
		{
			for (int i(d - 1); i < counter; i++)
			{
				mas[i] = mas[i + 1];
				counter--;
			}
		}
	}
}


void change_struct()
{
	if (counter == 0)
	{
		std::cout << std::endl << "No recordings!" << std::endl;
	}
	else
	{
		int c = 0;
		std::cout << std::endl <<  "Enter the number of product to change: ";
		bool IsIncorrect;
		do {
			IsIncorrect = false;
			std::cin >> c;
			if (std::cin.fail())
			{
				std::cin.clear();
				while (std::cin.get() != '\n');
				IsIncorrect = true;
				std::cout << "TYPR ERR" << std::endl;
			}
			if (!IsIncorrect && std::cin.get() != '\n')
			{
				std::cin.clear();
				while (std::cin.get() != '\n');

				std::cout << "Err" << std::endl;
				IsIncorrect = true;
			}
			if (!IsIncorrect && (c< 1 || c > counter))
			{
				IsIncorrect = true;
				std::cout << "RANGE ERR" << std::endl;
			}
		} while (IsIncorrect);

		do
		{
			std::cout << std::endl << "Choose: " << std::endl;
			std::cout << std::endl << "1 - to change name" << std::endl;
			std::cout << "2 - to change price" << std::endl;
			std::cout << "3 - to chage quantity" << std::endl;
			std::cout << "4 - to change markup percentage" << std::endl;
			std::cout << "69 - to stop changing" << std::endl;
			int per = 0;
			bool IsIncorrect;
			do {
				IsIncorrect = false;
				std::cin >> per;
				if (std::cin.fail())
				{
					std::cin.clear();
					while (std::cin.get() != '\n');
					IsIncorrect = true;
					std::cout << "TYPR ERR" << std::endl;
				}
				if (!IsIncorrect && std::cin.get() != '\n')
				{
					std::cin.clear();
					while (std::cin.get() != '\n');

					std::cout << "Err" << std::endl;
					IsIncorrect = true;
				}
				if (!IsIncorrect && (per < 1 || (per > 4 && per != 69)))
				{
					IsIncorrect = true;
					std::cout << "RANGE ERR" << std::endl;
				}
			} while (IsIncorrect);


			switch (per)
			{
			case 1:
			{
				std::cout << std::endl << "Enter new name: ";
				std::cin >> mas[c - 1].name;
				break;
			}
			case 2:
			{
				std::cout << std::endl << "Enter new price: ";
				bool IsIncorrect;
				do {
					IsIncorrect = false;
					std::cin >> mas[c-1].price;
					if (std::cin.fail())
					{
						std::cin.clear();
						while (std::cin.get() != '\n');
						IsIncorrect = true;
						std::cout << "TYPR ERR" << std::endl;
					}
					if (!IsIncorrect && std::cin.get() != '\n')
					{
						std::cin.clear();
						while (std::cin.get() != '\n');

						std::cout << "Err" << std::endl;
						IsIncorrect = true;
					}
					if (!IsIncorrect && mas[c-1].price < 0)
					{
						IsIncorrect = true;
						std::cout << "RANGE ERR" << std::endl;
					}
				} while (IsIncorrect);

				break;
			}
			case 3:
			{
				std::cout << std::endl << "Enter new quantity: ";
				bool IsIncorrect1;
				do {
					IsIncorrect1 = false;
					std::cin >> mas[counter].quantity;
					if (std::cin.fail())
					{
						std::cin.clear();
						while (std::cin.get() != '\n');
						IsIncorrect1 = true;
						std::cout << "TYPR ERR" << std::endl;
					}
					if (!IsIncorrect1 && std::cin.get() != '\n')
					{
						std::cin.clear();
						while (std::cin.get() != '\n');

						std::cout << "Err" << std::endl;
						IsIncorrect1 = true;
					}
					if (!IsIncorrect1 && mas[counter].quantity < 0)
					{
						IsIncorrect1 = true;
						std::cout << "RANGE ERR" << std::endl;
					}
				} while (IsIncorrect1);
				break;
			}
			case 4:
			{
				std::cout << std::endl << "Enter new markup percentage: ";
				bool IsIncorrect2;
				do {
					IsIncorrect2 = false;
					std::cin >> mas[c-1].markup_percentage;
					if (std::cin.fail())
					{
						std::cin.clear();
						while (std::cin.get() != '\n');
						IsIncorrect2 = true;
						std::cout << "TYPR ERR" << std::endl;
					}
				} while (IsIncorrect2);
				break;
			}
			case 69:
			{
				return;
			}
			}
		} while (1);
	}
}


void find_qua()
{
	if (counter == 0)
	{
		std::cout << std::endl << "No recordings!" << std::endl;
	}
	else
	{
		int Switch = 0;
		std::cout << std::endl <<  "Enter: " << std::endl;
		std::cout << "1 - Name" << std::endl;
		std::cout << "2 - Price" << std::endl;
		std::cout << "3 - Quantity" << std::endl;
		std::cout << "4 -  Markup percentage" << std::endl;
		bool IsIncorrect;
		do {
			IsIncorrect = false;
			std::cin >> Switch;
			if (std::cin.fail())
			{
				std::cin.clear();
				while (std::cin.get() != '\n');
				IsIncorrect = true;
				std::cout << "TYPR ERR" << std::endl;
			}
			if (!IsIncorrect && std::cin.get() != '\n')
			{
				std::cin.clear();
				while (std::cin.get() != '\n');

				std::cout << "Err" << std::endl;
				IsIncorrect = true;
			}
			if (!IsIncorrect && (Switch< 1 || Switch > 4))
			{
				IsIncorrect = true;
				std::cout << "RANGE ERR" << std::endl;
			}
		} while (IsIncorrect);

		for (int i(0); i < counter; i++)
		{
			if (Switch == 1)
			{
				std::cout << mas[i].name << std::endl;
			}
			if (Switch == 2)
			{
				std::cout << mas[i].price << std::endl;
			}
			if (Switch == 3)
			{
				std::cout << mas[i].quantity << std::endl;
			}
			if (Switch == 4)
			{
				std::cout << mas[i].markup_percentage << std::endl;
			}
		}
	}
}


void sort()
{
	struct Stock t;
	for (int i(0); i < counter - 1; i++)
	{
		for (int j(i+1); j < counter; j++)
		{
			if (strcmp(mas[i].name, mas[j].name) > 0)
			{
				t = mas[i];
				mas[i] = mas[j];
				mas[j] = t;
			}
		}
	}
}
