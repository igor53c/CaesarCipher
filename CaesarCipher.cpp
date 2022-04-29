// CaesarCipher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

string caesarCipher(string, int);

int main()
{
	cout << caesarCipher("There`s-a-starman-waiting-in-the-sky", 3);
	//cout << caesarCipher("y", 3);

	return EXIT_SUCCESS;
}

string caesarCipher(string s, int k) 
{
	string retValue;

	for (char c : s)
	{
		auto num = int(c);

		if (c >= 'a' && c <= 'z')
		{
			num += k;

			while (true)
			{
				if (num > int('z'))
					num = num - int('z') + int('a') - 1;
				else break;
			}
		}else
			if (c >= 'A' && c <= 'Z')
			{
				num += k;

				while (true)
				{
					if (num > int('Z'))
						num = num - int('Z') + int('A') - 1;
					else break;
				}
			}

		retValue += char(num);
	}

	return retValue;
}

