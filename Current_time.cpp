/***************************************************************************************************
PROGRAM : Current_time.cpp
PURPOSE : It will convert the time[military format] in Philadelphia to the local times in different
          cities of the world, like- Honolulu, Seattle, London, Moscow, and so on.
          For this reason, it will take the time in Philadelphia,
	      as an input, and will show the same time in other cities as
          the output calculating the desired result.
Coder : Mosfiqur Rahman (mr986@drexel.edu)
Last Modified : 19th January, 2016.
***************************************************************************************************/


#include <iostream> // for input and output
#include <iomanip> // for using formatting

using namespace std; // for standard library functions, like- cout, etc.

int main ()
{
	//It will set the field-width for output
	const short FIELD_WIDTH_1 = 13;
	const short FIELD_WIDTH_2 = 4;

	//Initializing differnt named, but same type variables for storing the value of time in diffenent cities.
	int current_time_philadelphia;
	int time_now_honolulu, time_now_seattle, time_now_london, time_now_moscow, time_now_hongkong, time_now_aukland;

    //It will ask for the current time in Philaelphia
	cout << "What is the current time in Philadelphia? ";
	cin >> current_time_philadelphia;

    //It will calculate the time in other cities.
	time_now_honolulu = (current_time_philadelphia+1800) % 2400;
	time_now_seattle = (current_time_philadelphia+2100) % 2400;
	time_now_london = (current_time_philadelphia+500) % 2400;
	time_now_moscow = (current_time_philadelphia+800) % 2400;
	time_now_hongkong = (current_time_philadelphia+1200) % 2400;
	time_now_aukland = (current_time_philadelphia+1700) % 2400;

    //It will print the times in other cities
	cout << endl << "Current time in other cities: " << endl;
	cout << setw (FIELD_WIDTH_1) << setfill(' ') << left << "Honolulu:";
	cout << setw (FIELD_WIDTH_2) << setfill('0') << right << time_now_honolulu << endl;
	cout << setw (FIELD_WIDTH_1) << setfill(' ') << left << "Seattle:";
	cout << setw (FIELD_WIDTH_2) << setfill('0') << right << time_now_seattle << endl;
	cout << setw (FIELD_WIDTH_1) << setfill(' ') << left << "London:";
	cout << setw (FIELD_WIDTH_2) << setfill('0') << right << time_now_london << endl;
	cout << setw (FIELD_WIDTH_1) << setfill(' ') << left << "Moscow:";
	cout << setw (FIELD_WIDTH_2) << setfill('0') << right << time_now_moscow << endl;
	cout << setw (FIELD_WIDTH_1) << setfill(' ') << left << "Hong Kong:";
	cout << setw (FIELD_WIDTH_2) << setfill('0') << right << time_now_hongkong << endl;
	cout << setw (FIELD_WIDTH_1) << setfill(' ') << left << "Aukland:";
	cout << setw (FIELD_WIDTH_2) << setfill('0') << right << time_now_aukland << endl;

	return 0;
}
