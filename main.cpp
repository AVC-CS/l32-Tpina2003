#include "main.hpp"


int main()
{
	Student s[NUM_STUDENTS];
	s[0] = {"John", 20, {95.25, 88.5, 90.75, 92.0, 85.5}};
	s[1] = {"Jane", 21, {85.5, 87.75, 89.0, 88.25, 90.0}};
	s[2] = {"Jim", 22, {90.0, 95.5, 88.75, 92.25, 85.0}};
	s[3] = {"Jill", 23, {88.75, 90.0, 92.25, 85.5, 87.0}};
	s[4] = {"Jack", 24, {92.0, 85.5, 88.75, 90.0, 87.0}};
	s[5] = {"Macy", 25, {85.5, 87.75, 89.0, 88.25, 90.0}};
	s[6] = {"Mason", 26, {90.0, 92.25, 85.5, 88.75, 90.0}};
	s[7] = {"Olivia", 27, {88.75, 90.0, 92.25, 85.5, 87.0}};
	s[8] = {"Oliver", 28, {95.5, 88.75, 90.0, 92.25, 85.0}};
	s[9] = {"Watson", 29, {85.0, 87.25, 89.5, 88.0, 90.5}};

	cout << "Test 1: Sort by Scores within a student " << endl;
	{
		for (int i = 0; i < NUM_STUDENTS; i++) {
			sortScores(s[i].scores);
		}
		printStudents(s);
	}

	cout << "Test 2: Sort by Name " << endl;
	{
		sortStudents(s, 0);
		printStudents(s);
	}

	cout << "Test 3: Sort by Age " << endl;
	{
		sortStudents(s, 1);
		printStudents(s);
	}

	cout << "Test 4: Sort by Sum of Scores " << endl;
	{
		sortStudents(s, 2);
		printStudents(s);
	}
}

