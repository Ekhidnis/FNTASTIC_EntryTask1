#include <iostream>
#include <string>

bool IsRepeating(std::string string_, int pos);

int main(void)
{
	std::string str_in{ "" }, str_out{ "" };

	// user input
	std::cout << "Please, enter the string you want to convert: ";
	std::getline(std::cin, str_in);
	str_out = str_in;

	// get every uppercase to lowercase
	for (int i = 0; i < str_in.length(); i++)
	{
		if (str_in[i] > 'A' && str_in[i] < 'Z')
		{
			str_in[i] = tolower(str_in[i]);
		}
	}
	
	// converting repeating letters into ')' and everything else into '('
	for (int i = 0; i < str_in.length(); i++)
	{
		if (IsRepeating(str_in, i))
		{
			str_out[i] = ')';
		}
		else
		{
			str_out[i] = '(';
		}
	}
	std::cout << "Converted string: " << str_out<< std::endl;

	return 0;
}

// check if a string[pos] letter appears somewhere else in the string[]
bool IsRepeating(std::string string_, int pos)
{
	for (int i = 0; i < string_.length(); i++)
	{
		if (i == pos) {}
		else if (string_[pos] == string_[i])
		{
			return true;
		}
	}
	return false;
}