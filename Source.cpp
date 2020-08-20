#include <iostream>
using namespace std;


double Avg_score(double Score1, double Score2, double Score3, double Score4, double Score5) {
	double Total = Score1 + Score2 + Score3 + Score4 + Score5;
	double Avg = Total / 5;
	return Avg;
};


int main() {
	
	double M_score;
	double S_score;
	double IT_score;
	double PE_score;
	double E_score;

	char Grade;

	cout << "Enter the student's math score: ";
	cin >> M_score;

	cout << "Enter the student's science score: ";
	cin >> S_score;

	cout << "Enter the student's computer score: ";
	cin >> IT_score;

	cout << "Enter the student's physical education score: ";
	cin >> PE_score;

	cout << "Enter the student's english score: ";
	cin >> E_score;


	if (Avg_score(M_score, S_score, IT_score, PE_score, E_score) >= 0 && Avg_score(M_score, S_score, IT_score, PE_score, E_score) <= 20.5) {
		Grade = 'F';
	}
	else if (Avg_score(M_score, S_score, IT_score, PE_score, E_score) >= 21.0 && Avg_score(M_score, S_score, IT_score, PE_score, E_score) <= 40.5) {
		Grade = 'E';
	}
	else if (Avg_score(M_score, S_score, IT_score, PE_score, E_score) >= 41 && Avg_score(M_score, S_score, IT_score, PE_score, E_score) <= 59.5) {
		Grade = 'D';
	}
	else if (Avg_score(M_score, S_score, IT_score, PE_score, E_score) >= 60.0 && Avg_score(M_score, S_score, IT_score, PE_score, E_score) <= 74.5) {
		Grade = 'C';
	}
	else if (Avg_score(M_score, S_score, IT_score, PE_score, E_score) >= 75.0 && Avg_score(M_score, S_score, IT_score, PE_score, E_score) <= 84.5) {
		Grade = 'B';
	}
	else {
		Grade = 'A';
	}

	cout << "This student's final grade is: " << Grade << endl;


	
	
	

	system("pause");

	return 0;
}



