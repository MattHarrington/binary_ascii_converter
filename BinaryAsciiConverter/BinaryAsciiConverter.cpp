#include <bitset>
#include <iostream>
#include <sstream>
#include <string>

std::string binary_to_7_bit_ascii(const std::string& input) {
	// Thank you to https://stackoverflow.com/a/23344876
	std::stringstream ss{ input };
	std::stringstream output;
	while (ss.good()) {
		std::bitset<7> bits;
		ss >> bits;
		char c{ static_cast<char>(bits.to_ulong()) };
		output << c;
	}
	return output.str();
}

int main()
{
	std::string input{ "10010011100110010000011110011101111111010101000001"
		"10100011000011110110110010101000001101101110000111011101100001110"
		"01111100101110010001000001110100110111101000001100100110010111000"
		"11110111111001001100101010000011101001101000110100111100110101100"
		"01000001101100110010111101000100111111001101000001100010110010101"
		"0000011001101110010110100111001011101110110010011100110101110" };
	std::cout << binary_to_7_bit_ascii(input) << "\n";
	return 0;
}

