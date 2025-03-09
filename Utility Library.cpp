#include <iostream>
#include "clsUtility.h"

using namespace std;

int main() {

	int* ptr = new int[100];

	clsUtility::Srand();
	//cout << clsUtility::RandomNumber(1, 10) << endl;
	clsUtility::FillArrayWithRandom(ptr, 5, 10, 30);
	clsUtility::PrintArry(ptr, 5);

	delete[] ptr;
	ptr = nullptr;

	cout << endl;
	clsUtility::PrintDigits(1234);

	cout << "\nSum of Digits = " << clsUtility::SumOfDigits(1234) << endl;
	cout << "Reverse of 1234 is : " << clsUtility::ReverseNumber(1234) << endl;
	cout << "Digit " << 6 << " Frequency is " << clsUtility::CountDigitFrequencyu(6, 16666766) << " Time(s).\n";
	clsUtility::PrintAllDigitsFrequency(11223334);
	cout << "Print Digits In Order : \n" ;
	clsUtility::PrintDigits(clsUtility::ReverseNumber(1234));

	cout << clsUtility::IsPalindromNumber(1234) << endl;

	string word;

	word = clsUtility::EncryptText("Mohamed", 2);
	cout << "\nAfter Encrypt : " << word << endl;
	cout << "After Decrypt : " << clsUtility::DecryptText(word, 2) << endl;
	
	cout << clsUtility::GetRandomCharacter(clsUtility::SmallLetter);
	
	
	system("pause>0");
	

}