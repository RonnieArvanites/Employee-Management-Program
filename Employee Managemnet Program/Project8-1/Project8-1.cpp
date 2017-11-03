// Project8-1.cpp : Defines the entry point for the console application.
//Ron Arvanites

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


class Employee //Declaration of the class named Employee
{
protected: //The following variables are protected
	string name; //Declaration of the variable name as a string
	string office; //Declaration of the variable office as a string
	int salary; //Declaration of the variable salary as an integer
	string phoneNumber; //Declaration of the variable phoneNumber as a string
	string email; //Declaration of the variable email as a string

public: //The following members are public
	Employee(string EmployeeName, string EmployeePhoneNumber, string EmployeeEmail, string EmployeeOffice, int EmployeeSalary) //Declaration of the function Employee with 5 parameters, also declares each parameter
	{
		name = EmployeeName; //Sets name equal to EmployeeName
		phoneNumber = EmployeePhoneNumber; //Sets phoneNumber equal to EmployeePhoneNumber
		email = EmployeeEmail; //Sets email equal to EmployeeEmail
		office = EmployeeOffice; //Sets office equal to EmployeeOffice
		salary = EmployeeSalary; //Sets salary equal to EmployeeSalary
	}

	Employee(string EmployeeOffice, int EmployeeSalary) //Declaration of the function Employee with 2 parameters, also declares each parameter
	{
		office = EmployeeOffice; //Sets office equal to EmployeeOffice
		salary = EmployeeSalary; //Sets salary equal to EmployeeSalary
	}

	Employee() //Declaration of the function Employee with no parameters
	{

	}

	string getOffice() //Declaration of the function getOffice with no parameters that returns a string
	{
		return office; //Returns the value set to office
	}

	void setOffice(string EmployeeOffice) //Declaration of the function setOffice with one parameter
	{
		office = EmployeeOffice; ////Sets office equal to EmployeeOffice
	}

	string setSalary()  //Declaration of the function setSalary with no parameters
	{
		return 0; //return nothing
	}

	void setSalary(int EmployeeSalary) //Declaration of the function setSalary with one parameter
	{
		salary = EmployeeSalary; //Sets salary equal to EmployeeSalary
	}

	void printInfo() //Declaration of the function printInfo with no parameters
	{
		cout << "Name: " << name << endl; //Displays the name of the employee
		cout << "Phone Number: " << phoneNumber << endl; //Displays the phone number of the employee
		cout << "Email: " << email << endl; //Displays the email of the employee
		cout << "Office: " << office << endl; //Displays the office of the employee
		cout << "Salary: $" << salary << endl; //Displays the salary of the employee
	}
};





class Faculty : public Employee //Declaration of the class Faculty as a child class to Employee
{
protected: //The following variables are protected
	string department; //Declaration of the variable department as a string
	string rank; //Declaration of the variable rank as a string

public: //The following members are public
	Faculty(string FacultyName, string FacultyPhoneNumber, string FacultyEmail, string FacultyOffice, int FacultySalary, string FacultyDepartment, string FacultyRank) //Declaration of the function Faculty with 7 parameters, also declares each parameter
	{
		name = FacultyName; //Sets name equal to FacultyName
		phoneNumber = FacultyPhoneNumber; //Sets phoneNumber equal to FacultyPhoneNumber
		email = FacultyEmail; //Sets email equal to FacultyEmail
		office = FacultyOffice; //Sets office equal to FacultyOffice
		salary = FacultySalary; //Sets salary equal to FacultySalary
		department = FacultyDepartment; //Sets department equal to FacultyDepartment
		rank = FacultyRank; //Sets rank equal to FacultyRank
	}

	Faculty(string FacultyDepartment, string FacultyRank) //Declaration of the function Faculty with 2 parameters
	{
		department = FacultyDepartment; //Sets department equal to FacultyDepartment
		rank = FacultyRank; //Sets rank equal to FacultyRank
	}

	string getDepartment() //Declaration of the function getDepartment with no parameters that returns a string
	{
		return department; //Returns the value given to department
	}

	void setDepartment(string FacultyDepartment) //Declaration of the fucntion setDepartment with one parameter
	{
		department = FacultyDepartment; //Sets department equal to FacultyDepartment
	}

	string getRank() //Declaration of the function getRank with no parameters that returns a string
	{
		return rank; //Returns the value given to rank
	}

	void setRank(string FacultyRank) //Declaration of setRank with one parameter
	{
		rank = FacultyRank; //Sets rank equal to FacultyRank
	}

	void printInfo() //Declaration of the function printInfo with no parameters
	{
		cout << "Name: " << name << endl; //Displays the name of the faculty member
		cout << "Phone Number: " << phoneNumber << endl; //Displays the phoneNumber of the faculty member
		cout << "Email: " << email << endl; //Displays the email of the faculty member
		cout << "Office: " << office << endl; //Displays the office of the faculty member
		cout << "Salary: $" << salary << endl; //Displays the salary of the faculty member
		cout << "Department: " << department << endl; //Displays the department of the faculty member
		cout << "Rank: " << rank << endl; //Displays the rank of the faculty member

	}
};




class Staff : public Employee //declaration of the class Staff that is a child class of Employee
{
protected: //The following variables are protected
	string title; //Declaration of title as a string variable

public: //The following members are public
	Staff(string StaffName, string StaffPhoneNumber, string StaffEmail, string StaffOffice, int StaffSalary, string StaffTitle) //Declaration of the function Staff with 6 parameters, also declares each parameter
	{
		name = StaffName; //Sets name equal to StaffName
		phoneNumber = StaffPhoneNumber; //Sets phoneNumber equal to StaffPhoneNumber
		email = StaffEmail; //Sets email equal to StaffEmail
		office = StaffOffice; //Sets offcie equal to StaffOffice
		salary = StaffSalary; //Sets salary equal to StaffSalary
		title = StaffTitle; //Sets title equal to StaffTitle
	}

	Staff(string StaffTitle) //Declaration of the function Staff with one parameter
	{
		title = StaffTitle; //Sets title equal to StaffTitle
	}

	string getTitle() //Declaration of the function getTitle with no parameters that returns a string
	{
		return title; //Returns the value given to title
	}

	void setTitle(string StaffTitle) //Declaration of the function setTitle with one parameter
	{
		title = StaffTitle; //Sets title equal to StaffTitle
	}

	void printInfo() //Declaration of the function printInfo with no parameters
	{
		cout << "Name: " << name << endl; //Displays the name of the staff member
		cout << "Phone Number: " << phoneNumber << endl; //Displays the phoneNumber of the staff member
		cout << "Email: " << email << endl; //Displays the email of the staff member
		cout << "Office: " << office << endl; //Displays the office of the staff member
		cout << "Salary: $" << salary << endl; //Displays the salary of the staff member
		cout << "Title: " << title << endl; //Displays the title of the staff member
	}
};






int main()
{
	string FacultyName; //Declartion of the variable FacultyName as a string
	string FacultyPhoneNumber; //Declartion of the variable FacultyPhoneNumber as a string
	string FacultyEmail; //Declartion of the variable FacultyEmail as a string
	string FacultyOffice; //Declartion of the variable FacultyOffice as a string
	int FacultySalary; //Declartion of the variable FacultySalary as a integer
	string FacultyDepartment; //Declartion of the variable FacultyDepartment as a string
	string FacultyRank; //Declartion of the variable FacultyRank as a string

	cout << "Input a faculty's information and press enter." << endl; //Tells the user to enter a faculty's information

	cout << "Enter faculty's name: "; //Prompts the user to enter the faculty's name
	cin >> FacultyName; //The user enters a value for FacultyName

	cout << "Enter faculty's phone number: "; //Prompts the user to enter the faculty's phone number
	cin >> FacultyPhoneNumber; //The user enters a value for FacultyPhoneNumber

	cout << "Enter faculty's email address: "; //Prompts the user to enter the faculty's email address
	cin >> FacultyEmail; //The user enters a value for FacultyEmail

	cout << "Enter faculty's office: "; //Prompts the user to enter the faculty's office
	cin >> FacultyOffice; //The user enters a value for FacultyOffice

	cout << "Enter faculty's salary with no commas or dollar signs: "; //Prompts the user to enter the faculty's salary
	cin >> FacultySalary; //The user enters a value for FacultySalary

	cout << "Enter faculty's department: "; //Prompts the user to enter the faculty's department
	cin >> FacultyDepartment;  //The user enters a value for FacultyDepartment

	cout << "Enter faculty's rank: "; //Prompts the user to enter the faculty's rank
	cin >> FacultyRank; //The user enters a value for FacultyRank

	cout << endl; //Skips a line

	Faculty Employee1(FacultyName, FacultyPhoneNumber, FacultyEmail, FacultyOffice, FacultySalary, FacultyDepartment, FacultyRank); //Creates the object Employee1 and calls the Faculty function with 7 parameters
		Employee1.printInfo(); //Calls the printInfo function in the Faculty class for the object Employee1

		cout << endl; //Skips a line

		cout << "Input a staff member's information and press enter." << endl; //Tells the user to enter a staff's information

		string StaffName; //Derclartion of the variable StaffName as a string
		string StaffPhoneNumber; //Derclartion of the variable StaffPhoneNumber as a string
		string StaffEmail; //Derclartion of the variable StaffEmail as a string
		string StaffOffice; //Derclartion of the variable StaffOffice as a string
		int StaffSalary; //Derclartion of the variable StaffSalary as an integer
		string StaffTitle; //Derclartion of the variable StaffTitle as a string

		cout << "Enter staff's name: "; //Prompts the user to enter the staff's name
		cin >> StaffName; //The user enters a value for StaffName

		cout << "Enter staff's phone number: "; //Prompts the user to enter the staff's phone number
		cin >> StaffPhoneNumber; //The user enters a value for StaffPhoneNumber

		cout << "Enter staff's email address: "; //Prompts the user to enter the staff's email address
		cin >> StaffEmail; //The user enters a value for StaffEmail

		cout << "Enter staff's office: "; //Prompts the user to enter the staff's office
		cin >> StaffOffice; //The user enters a value for StaffOffice

		cout << "Enter staff's salary with no commas or dollar signs: "; //Prompts the user to enter the staff's salary
		cin >> StaffSalary; //The user enters a value for StaffSalary

		cout << "Enter staff's title: "; //Prompts the user to enter the staff's title
		cin >> StaffTitle; //The user enters a value for StaffTitle

		cout << endl; //Skips a line

		Staff Employee2(StaffName, StaffPhoneNumber, StaffEmail, StaffOffice, StaffSalary, StaffTitle); //Creates the object Employee2 and calls the Staff function with 6 parameters
		Employee2.printInfo(); //Calls the printInfo function in the Staff class for the object Employee2



	system("pause"); //Waits for the user to press any key
	
	return 0;
}

