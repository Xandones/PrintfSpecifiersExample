#include <iostream>
#include <string>

int main()
{
	/*
		 - You may use() to set variables with literal values.
		 - {} may be used as an uniform set, allowing both literal values (int, float, char...) as other type of values such as enums, 
		 scalars and vectors and so on. 
	*/ 
	int IntegerNumber (12);
	float FloatNumber (34.56f);
	char Character ('c');
	std::string Text ("String Text"); // This is used to a standard string - chain of characters.
	std::printf("Integer number value = %d | Float number value = %.2f | Character = %c | Text = %s \n", IntegerNumber, FloatNumber, Character, Text); 
	// Printf allows displaying integer number where there's a "%d".
	// Printf displays float number where there's a "%f". 
	// The number before the 'f' selects the number of places after the decimal point that will be displayed. It may also set before the dot.
	// If you set "%.0f", the number will be rounded.

	system("PAUSE");
}