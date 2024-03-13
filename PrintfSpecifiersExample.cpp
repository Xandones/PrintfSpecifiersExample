#include <iostream>
#include <string>

int main()
{
	/*
		 - You may use() to set variables with literal values.
		 - {} may be used as an uniform set, allowing both literal values (int, float, char...) as other type of values such as enums, 
		 scalars and vectors and so on - more inclusive. 
	*/ 
	int IntegerNumber (12);
	float FloatNumber (34.56f);
	char Character ('c');
	std::string Text ("I will learn C++ and discover the dark side of the force!"); // This is used to a standard string - chain of characters.
	std::printf("Integer number value = %d | Float number value = %.2f | Character = %c | Text = %s \n", IntegerNumber, FloatNumber, Character, Text.c_str());
	std::cout << "String text: " << Text << "\n"; // There's no way to print string without speficic functions. It's possible to choose between cout and c_str
	std::printf("The value of the typed charactere %c in ASCII table is: %d \n", Character, Character); // You can use printf to know the value of a character in ASCII table. 
	// Printf allows displaying integer number where there's a "%d".
	// Printf displays float number where there's a "%f". It may also print longer values with "%lf".  
	// The number before the 'f' selects the number of places after the decimal point that will be displayed. It may also set before the dot.
	// If you set "%.0f", the number will be rounded.

	system("PAUSE");
}