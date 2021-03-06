// Name: Shane Maxson
// Class: COP2000
// Date: 11/5/18
// Assignment: Race Results Program (Homework 4)
// Description: In this assignment, the student is required to make a program to create racer_average_times for three
// racers and determine the winner(s) or who is tied. 

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// This part of the program is organized by what will be defined from top to bottom or start to finish.
void welcome();
void getRaceTimes(string &, double &);
void findWinner(string, string, string, double, double, double);
double raceAverage(double, double, double);

// This part of the variable sets the parameters for variables and strings to be used in the void's below.
int main()
{
	double time_R1, time_R2, time_R3, average_time;
	string racer_name_1, racer_name_2, racer_name_3;
	welcome();
	getRaceTimes(racer_name_1, time_R1);
	cout << endl;
	getRaceTimes(racer_name_2, time_R2);
	cout << endl;
	getRaceTimes(racer_name_3, time_R3);
	cout << endl;
	findWinner(racer_name_1, racer_name_2, racer_name_3, time_R1, time_R2, time_R3);
	double racer_average_time = raceAverage(time_R1, time_R2, time_R3);
	cout << endl;
	cout << "Overall Race Time Average: " << racer_average_time << "\n";
	return 0;
}

// This part of the program is the first output by the program and acts as a Menu-Layout. The user may then put in their times and names once- 
// they have read the cout statements. 
void welcome()
{
	cout << "***************************************************************************\n";
	cout << "   Welcome to Race Results Program.\n";
	cout << "   You Are Asked to Enter the Three Racer’s Names\n";
	cout << "   and Their Associated Race Times.\n\n";
	cout << "   Please enter a real number for Race Time (the Race Times Must be > 0).\n\n";
	cout << "   Program Developed by: Shane Maxson \n";
	cout << "***************************************************************************\n\n";
	cout << endl;
	return;
}

// This part of the program is important for user input and holding of values.
void getRaceTimes(string &racerName, double &raceTime)
{
	cout << "Please enter the racer's first name > ";
	cin >> racerName;
	cout << endl;
	cout << "Please enter the racer's time > ";
	cin >> raceTime;
	while (raceTime <= 0)
	{
		cout << "Sorry, that time is invalid, Please enter a valid race time > ";
		cin >> raceTime;
	} return;
}

// This part of the program is used to assert the final statement: Who is the winner, or 
// What is the final outcome. The outcomes include: Winner = 1, Winner = 2, Winner = 3-
// Winner (tied) 1 & 2, Winner (tied) 1 & 3, Winner (tied) 2 & 3, and Three-Way-Tie.
void findWinner(string racer_name_1, string racer_name_2, string racer_name_3, double time_R1, double time_R2, double time_R3)
{
	if (time_R1 < time_R2 && (time_R1 < time_R3))
	{
		cout << "Congratulations" << " " << racer_name_1 << "!!! " << "You are the winner!!\n";
		cout << "***** Your winning time is: " << time_R1 << " *****\n\n";
	}
	if (time_R2 < time_R1 && (time_R2 < time_R3))
	{
		cout << "Congratulations" << " " << racer_name_2 << "!!! " << "You are the winner!!\n";
		cout << "***** Your winning time is: " << time_R2 << " *****\n\n";
	}
	if (time_R3 < time_R1 && (time_R3 < time_R2))
	{
		cout << "Congratulations" << " " << racer_name_3 << "!!! " << "You are the winner!!\n";
		cout << "***** Your winning time is: " << time_R3 << " *****\n\n";
	}
	if (time_R2 < time_R3 && (time_R2 == time_R1))
	{
		cout << "We have a TIE," << " " << racer_name_1 << " " << "and" << " " << racer_name_2 << " " << "win!!\n";
		cout << "***** Your winning time is: " << time_R1 << " *****\n\n";
	}
	if (time_R3 < time_R2 && (time_R3 == time_R1))
	{
		cout << "We have a TIE," << " " << racer_name_1 << " " << "and" << " " << racer_name_3 << " " << "win!!\n";
		cout << "***** Your winning time is: " << time_R1 << " *****\n\n";
	}
	if (time_R2 < time_R1 && (time_R2 == time_R3))
	{
		cout << "We have a TIE," << " " << racer_name_2 << " " << "and" << " " << racer_name_3 << " " << "win!!\n";
		cout << "***** Your winning time is: " << time_R2 << " *****\n\n";
	}
	if (time_R1 == time_R2 && (time_R1 == time_R3))
	{
		cout << "We have a 3 way TIE!! No Winner for this race...\n";
	} return;
}

// This is the part of the program that is run to compare the values of the race times provided
// and determine the value that the average of them. 
double raceAverage(double time_R1, double time_R2, double time_R3)
{
	double average_time = 1;
	average_time = (time_R1 + time_R2 + time_R3) / 3;
	return average_time;
}