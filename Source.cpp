#include <iostream>
#include <algorithm>
#include <Windows.h>
#include <chrono>
#include <thread>
#include <stdlib.h>
using namespace std;



int main() {
	using namespace std::this_thread;
	using namespace std::chrono;

	string Units[]{ "Seconds", "seconds", "Minutes", "minutes", "Hours", "hours" };
	char Reminder[256];
	string User_Unit;
	int Time;

	cout << "What would  you like me to remind you of today? ";
	cin.get(Reminder,256);
	cout << "What unit of time would you like to use? (Seconds, Minutes, Hours): ";
	cin >> User_Unit;
	if (std::find(std::begin(Units), std::end(Units), User_Unit) != std::end(Units)) {
		cout << "In how many " << User_Unit << " would you like to be reminded? ";
		cin >> Time;
		if (User_Unit == Units[0] || User_Unit == Units[1]) {
			sleep_for(seconds(Time));
			cout << Reminder << endl;
		}
		else if (User_Unit == Units[2] || User_Unit == Units[3]) {
			sleep_for(seconds(Time * 60));
			cout << Reminder << endl;
		}
		else if (User_Unit == Units[4] || User_Unit == Units[5]) {
			sleep_for(seconds(Time * 3600));
			cout << Reminder << endl;
		}

		

	}
	else {
		cout << "You have entered an invalid unit of time. The program will now close.";
	};


	system("PAUSE");
	
	return 0;
}