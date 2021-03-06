// Multiple-Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string getTextFromUser(string prompt) {
	string text;
	cout << prompt;
	cin >> text;
	return text;
}
int getNumFromUser(string prompt) {
	int num;
	cout << prompt;
	cin >> num;
	return num;
}
void tellStory(string name, string noun, int number, string bodyPart, string verb) {
	cout << "\nHere's the story:\n";
	cout << "The famous warrior ";
	cout << name;
	cout << " was one of the last in the Battle of ";
	cout << noun;
	cout << ".\n";
	cout << "Just when they found themselves surrounded by ";
	cout << number;
	cout << " enemies, reinforcments came and cut into their ";
	cout << bodyPart;
	cout << "s.\n";
	cout << "This is why you should never give up and just keep ";
	cout << verb;
	cout << "ing.\n\n";
}

int main()
{
	cout << "Welcome to a Mad-Libs type of game!\n\n";
	cout << "Answer the following questions to create your Mad-Libs story.\n";

	string name = getTextFromUser("Please enter a name: ");
	string noun = getTextFromUser("Please enter a plural noun: ");
	int number = getNumFromUser("Please enter a number: ");
	string bodyPart = getTextFromUser("Please enter a body part: ");
	string verb = getTextFromUser("Please enter a verb: ");

	tellStory(name, noun, number, bodyPart, verb);

	system("pause");
    return 0;
}

