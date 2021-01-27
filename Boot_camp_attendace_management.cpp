/*
-This is a program to manage attendance of software engineering  bootcamp members
-This program allows the members to login, mark attendance of same day and can also see history of attendance
-This program allows the admin to register members and create username and password for members
-The username for the admin is "admin" and the password is "softwareengineer"

*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

using namespace std;

int adminView();
int memberView();
int memberLogin();
int checkCredentials(string userName, string password);
int getAllMembersbyRollNo();
int deleteAllMembers();
int deleteMemberbyRollno();
int checkListOfMembersRegistered();
int checkPresenseCountbyRollno();
int getListOfMembersWithTheirPresenseCount();
int registerMember();
int adminLogin();
int registerMember();
int markMyAttendance(string username);
int countMyAttendance(string username);
int delay();

int delay()
{
for(int i = 0; i<3; i ++)
{
	cout<<"\n Saving Records ...";
    for(int ii = 0; ii<20000; ii ++)
    {
    	for(int iii = 0; iii<20000; iii ++)
       	{ }
    }
}

cout<<"\n Exiting Now ...";
for(int i = 0; i<3; i ++){
   for(int ii = 0; ii<20000; ii ++) {
     for(int iii = 0; iii<20000; iii ++){
	 }
    }
}

return 0;
}

int adminView()
{
int goBack = 0;
while(1)
{
system("cls");
cout<<"\n 1 Register a Member";
cout<<"\n 2 Delete All members name registered";
cout<<"\n 3 Delete member by roll number";
cout<<"\n 4 Check List of Member registered by username";
cout<<"\n 5 Check present count of any member by Roll Number";
cout<<"\n 6 Obtain List of member with their attendance count";
cout<<"\n 0. Go Back <- \n";
int option;

cout<<"\n Enter your option: ";
cin>>option;

switch(option)
{
	case 1: registerMember();break;
	case 2: deleteAllMembers(); break;
	case 3: deleteMemberbyRollno(); break;
	case 4: checkListOfMembersRegistered(); break;
	case 5: checkPresenseCountbyRollno(); break;
	case 6: getListOfMembersWithTheirPresenseCount(); break;
	case 0: goBack = 1;break;
    default: cout<<"\n Invalid option. Try again ";
    getchar();
}

if(goBack == 1)
{
break;
}

}

return 0;
}

int memberLogin()
{
system("cls");
cout<<"\n -------- Member Login ---------";
memberView();
delay();
return 0;
}


int adminLogin()
{
system("cls");
cout<<"\n --------- Admin Login --------";

string username;
string password;

cout<<"\n Enter username : ";
cin>>username;
cout<<"\n Enter password : ";
cin>>password;

if(username=="admin" && password=="softwareengineer")
{
    adminView();
    getchar();
    delay();
}
else
{
cout<<"\n Error ! Invalid Credentials Entry..";
cout<<"\n Enter any key for main menu ";
getchar();getchar();
}

return 0;
}


int checkMemberCredentials(string username, string password)
{
// read or scan file line by line & check if username-password exist?
// if it exist return 1 else 0

ifstream read;
read.open("db.dat");

if (read) {
// The file exists, and is open for input
int recordFound = 0;
string line;
string temp = username + password + ".dat";
cout<<"\n file name is : "<<temp;
while(getline(read, line)) {
	if(line == temp)
	{
		recordFound = 1;
		break;
	}
}

if(recordFound == 0)
    return 0;
else
   return 1;
}
else
{
   return 0;
}

}


int getAllMembersbyName()
{
cout<<"\n List of All Members by their Name \n";

cout<<"\n Please any key to continue..";
getchar();getchar();

return 0;
}

int getAllMembersbyRollNo()
{
cout<<"\n List of All Members by their Roll No \n";

cout<<"\n Please any key to continue..";
getchar();getchar();

return 0;

}

int deleteMemberbyRollno()
{

cout<<"\n Delete any Member by their Roll No \n";

cout<<"\n Please any key to continue..";
getchar();getchar();

return 0;
}


int checkPresenseCountbyRollno()
{
cout<<"\n Check presence count of any Member by Roll No \n";

cout<<"\n Please any key to continue.."	;
getchar();getchar();

return 0;
}

int checkAllPresenseCountbyRollno()
{
cout<<"\n Check presence count of All Members by Roll No & Name \n";
cout<<"\n Please any key to continue.."	;
getchar();getchar();

return 0;
}

int memberView()
{
cout<<"\n ------- Member Login-------- \n";

string username, password;

cout<<"\n Enter username : ";
cin>>username;

cout<<"\n Enter password : ";
cin>>password;

int res = checkMemberCredentials(username, password);

if(res  == 0)
{
   cout<<"\n Invalid Credentials !!";
   cout<<"\n Press any key for Main Menu..";
   getchar(); getchar();
   return 0;
}

int goBack = 0;
while(1)
{
system("cls");

cout<<"\n 1 Mark Attendance fo Today ";
cout<<"\n 2 Count my Attendance";
cout<<"\n 0. Go Back <- \n";
int choice;

cout<<"\n Enter you choice: ";
cin>>choice;

switch(choice)
{
	case 1: markMyAttendance(username); break;
	case 2: countMyAttendance(username); break;
	case 0: goBack = 1;break;
    default: cout<<"\n Invalid choice. Enter again ";
    getchar();
}

if(goBack == 1)
{
break; //break the loop
}

}

}

int markMyAttendance(string username)
{
cout<<"\n Mark Attendance for today !!";
cout<<"\n Please any key to continue..";
//NB: implement this functionality

getchar();getchar();

return 0;
}

int countMyAttendance(string username)
{
cout<<"\n Count my attendance for today !!";
cout<<"\n Please any key to continue..";
//NB: implement this functionality

getchar();getchar();

return 0;
}

int deleteAllMembers()
{
cout<<"\n In delete all members !!";
cout<<"\n Please any key to continue..";
//todo: implement this functionality

getchar(); getchar();
return 0;
}


int checkListOfMemberRegistered()
{
cout<<"\n List of All registered members !!";
cout<<"\n Please press any key to continue..";

//todo: implment this functionality

getchar(); getchar();
return 0;
}

int getListOfMembersWithTheirPresenseCount()
{
cout<<"\n All Members with their Presence count !!";
cout<<"\n Please any key to continue..";
//todo: implement this functionality

getchar(); getchar();
return 0;
}

int checkListOfMembersRegistered(){
cout<<"\n - Check List of Member Registered by Username-- ";

//check if record already exist..
ifstream read;
read.open("db.dat");

if(read)
{   int recordFound =0;
    string line;
    while(getline(read, line)) {
    	char name[100];
    	strcpy(name, line.c_str());
    	char onlyname[100];
    	strncpy(onlyname, name, (strlen(name) - 4));
    	cout<<" \n " << onlyname;
    }
     read.close();
}
else
{
cout<<"\n No Record found :(";
}


cout<<"\n Please any key to continue..";
getchar(); getchar();
return 0;
}


int registerMember()
{
    cout<<"\n ----- Form to Register Member ---- \n";

    string name, username, password, rollno, address, father, mother;

    cout<<"\n Enter Name : ";     cin>>name;
    cout<<"\n Enter Username : ";     cin>>username;
    cout<<"\n Enter password : ";     cin>>password;
    cout<<"\n Enter rollno : ";     cin>>rollno;
    getchar();

    char add[100];
    cout<<"\n Enter address : ";     cin.getline(add, 100);
    cout<<"\n Enter father : ";     cin>>father;
    cout<<"\n Enter mother : ";     cin>>mother;

    //check if record already exist..
    ifstream read;
    read.open("db.dat");

    if(read)
    {   int recordFound =0;
	   string line;
	    while(getline(read, line)) {
    	if(line == username+".dat" )
    	{
    		recordFound = 1 ;
    	    break;
		}
        }
        if(recordFound == 1)
        {
    	cout<<"\n Username already Register. Please choose another username ";
    	getchar(); getchar();
    	delay();
    	read.close();
    	return 0;
		}
	}
    read.close();

    ofstream out;
	out.open("db.dat", ios::app);
	out<<username+".dat"<<"\n";
	out.close();

	ofstream out1;
	string temp = username+".dat";
	out1.open(temp.c_str());
	out1<<name<<"\n"; 	out1<<username<<"\n"; 	out1<<password<<"\n";
	out1<<rollno<<"\n"; 	out1<<add<<"\n"; 	out1<<father<<"\n";
	out1<<mother<<"\n";
	out1.close();

	cout<<"\n Member Registered Successfully !!";

    cout<<"\n Please any key to continue..";
	getchar(); getchar();
	return 0;
}

int main(int argc, char** argv) {

while(1)
{
	system("cls");
	cout<<"\n Boot Camp Attendance Management\n";
	cout<<"-------------------------------------\n\n";

	cout<<"1. Member Login\n";
	cout<<"2. Admin Login\n";

	cout<<"0. Exit\n";
	int choice;

	cout<<"\n Enter your option: ";
	cin>>choice;

	switch(choice)
	{
	case 1: memberLogin(); break;
	case 2: adminLogin(); break;
	case 0:
	        while(1)
	        {
		    system("cls");
        	cout<<"\n Are you sure, you want to exit? y | n \n";
        	char ex;
        	cin>>ex;
        	if(ex == 'y' || ex == 'Y')
        	   exit(0);
        	else if(ex == 'n' || ex == 'N')
             {
             	 break;
             }
             else{
             	cout<<"\n Invalid option !!!";
             	getchar();
             }

     	   }
            break;

    default: cout<<"\n Invalid option. Try again ";
    getchar();
	}

}

return 0;
}
