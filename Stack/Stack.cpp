#include "stdafx.h"
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	//Declaring stack.
	std::stack<string> students;

	//Student name array.
	students.push("Tom");
	students.push("Jerry");
	students.push("Jessica");

	//Outputting number of students.
	cout << "Number of students: " << students.size() << endl << endl;

	//Takes the value on the top of the stack.
	while (!students.empty())
	{
		//Display the Student Name
		cout << "Student Name: " << students.top() << endl;
		students.pop();
	}

	//Pause Function
	int pause;
	pause = 0;
	std::cin >> pause;

	return 0;
}

