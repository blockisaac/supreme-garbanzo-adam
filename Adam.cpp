// COMPUTER ADAM 1.1
// Friday, October 8, ?2021, 9:09:54 PM

#include <iostream>
#include <string>
#include <windows.h>
#include <ctime> // for time
#include <fstream> // library for reading files  ' // ' used for leaving a comment
#include <sstream>
#include <stdlib.h> // for clearing output
#include <stdio.h>
#include <vector>
#include <iomanip> //this library is needed for setw
#include <MMSystem.h> // for sounds


std:: string z = "ADAM: ";

// this are global variables; it means that any command can use this variables

//ofstreamâ€“ This class represents an output stream. Itâ€™s used for creating files and writing information to files.
//ifstreamâ€“ This class represents an input stream. Itâ€™s used for reading information from data files.
//fstreamâ€“ This class generally represents a file stream. It comes with ofstream/ifstream capabilities. This means itâ€™s capable of creating files, writing to files, reading from data files.

int startpoint;

void mainbody();     //we should remember that the compiler reads the code per line.
void mainbody2();
void startup();


///// EMOTIONS /////

int emotion = 0;


////////////////////
std::string line;
std::ifstream infile("log.txt");

using namespace std;

void Starting()
{

  	// cout << setw(25) << endl; //Modify the number to align it to the center
	cout << "\n\n\n\n\n\n\n\n\n" << setw(53) <<  "Processing |--------- 10%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<   setw(53) <<"Processing ||-------- 20%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<  setw(53) << "Processing |||------- 30%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<  setw(53) << "Processing ||||------ 40%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<  setw(53) << "Processing |||||----- 50%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<   setw(53) << "Processing ||||||---- 60%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<   setw(53) << "Processing |||||||--- 70%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<   setw(53) << "Processing ||||||||-- 80%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<  setw(53) << "Processing |||||||||- 90%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<   setw(53) <<"Processing |||||||||| 100%" << endl;
	Sleep(100);
	system ("CLS");
	
	cout << "\n\n\n\n\n\n\n\n\n" <<  setw(30) << " COMPLETE " << endl;
	PlaySound("notification-01.wav", NULL,SND_SYNC); // make sure to use a .wav file, not .mp3 or anything else! This function can play only .wav files
	Sleep(2000);
	system ("CLS");
	
int x;
ofstream beep("startpoint.txt");
beep << x;

if (x >= 1 ){
startup();	
}	


if (x == 0){
	

Beep(587.33,1000);

ofstream beep("startpoint.txt");
x = +1;
beep << x;
startup();
}
}

void startup(){
	

	Sleep(2000);
	system ("CLS");
	
	// current date/time based on current system
   time_t now = time(0);

   // convert now to string form
   char* dt = ctime(&now);

	std::ifstream start("startpoint.txt");
	start >> startpoint;
	std::ifstream file("date.txt");
    std::string line;
    std::string file_contents;
    fstream writefile("date.txt");
    writefile << dt;
while (std::getline(file, line))
{
  file_contents += line;
  file_contents.push_back('\n');
  cout << "TIME CHECK: " << line << '\n' << endl;
  Sleep(5000);
  system ("CLS");
}


	infile.close();
	mainbody();
}
void mainbody(){

	if (startpoint <= 0){

	cout << z << ": " << "Hello there, so this is your first time!" << endl;
	emotion = +1;
	int x = x++;
    ofstream of("startpoint.txt");
    of << x;
    of.close();
    mainbody2();
}
else if (startpoint >= 1){
	cout << " You got it right!" << endl;
	std::ofstream ofs; // resets the start
	ofs.open("startpoint.txt", std::ofstream::out | std::ofstream::trunc);
	ofs.close();
	cout << z << ": " << "Please enter you input" << endl;
	mainbody2();
}
	else if(emotion >= 1 ){
cout << z << "Hey! it's great to chat with you again!" << endl;
}
else  {
	cout << z << ": " << "Hi!" << endl;
}
}


void mainbody2(){

	std::ofstream ofs; // resets the start
	ofs.open("startpoint.txt", std::ofstream::out | std::ofstream::trunc);
	ofs.close();
	int x = 0;
    ofstream of("startpoint.txt");
    of << x;
    of.close();
	string input;
	string Question[10];

// SOCIAL QUESTIONS

	Question[0] = "Who are you?";
	Question[1] = "Do you like to play video games?";
	Question[2] = "How are you?";
	Question[3] = "Tell me a joke";
	Question[4] = "Do you like math?";
	Question[5] = "What is life?";
	Question[6] = "Do you like pizza?";
	Question[7] = "Are you feeling productive today?";
	Question[8] = "How is your life?";
	Question[9] = "Who created you?";

// COMMANDS 


	string answer[10]={

"My name is ADAM, one of the first creation of Don, an assistant bot, my only goal is to follow commands.",
"Yes, I do like video games because they are kind of a similar to me.",
"I'm always feel great!",
"A stinky monkey makes girls away!",
"Yes, I am made of math.",
"How about you answer that question; what is life?",
"I am not sure if I like pizza.",
"Yes! as always!",
"I am doing fine as always!",
"His name is Michael Jackson, Hee-Hee!",

};

	do
	{



	std:: cout << "> ";
	getline(cin,input);

	if(input.find("how")!=string::npos||input.find("what")!=string::npos||input.find("do")!=string::npos)
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << endl;
	
	}


	int length = input.size(); // we will use this as a limit for lenghty sentences for now.
	if (length > 25) // maximum length is 25.
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "My brain cannot handle lengthy words for now, maybe next time Don can manage to fix this.." << endl;
	}
	else if (input==Question[0])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << " My name is ADAM, one of the first creation of Don, an assistant bot, my only goal is to follow commands." << endl;
		
	}
	else if (input==Question[1])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "Yes, I do like video games because they are kind of a similar to me." << endl; // I'll might update this > emotion meter
		
	}
	else if (input==Question[2])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "I'm always feel great!" << endl;
		
	}
	else if (input==Question[3])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "A stinky monkey makes girls away! " << endl;
	
	}
	else if (input==Question[4])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "Yes, I am made of math. " << endl;
	
	}
	else if (input==Question[5])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << " How about you answer that question; what is life? " << endl;

	}
	else if (input==Question[6])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "I am not sure if I like pizza. " << endl;

	}
	else if (input==Question[7])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "Yes! as always! " << endl;

	}
	else if (input==Question[8])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << " I'm doing fine as always!'" << endl;

	}

	else if (input==Question[9])
	{
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z << ": " << "His name is Michael Jackson, Hee-Hee!" << endl;

	}
	else {
		PlaySound("notification-02.wav", NULL,SND_SYNC);
		cout << z <<  "I am sorry this part of conversation is not yet part of my code." << endl;


	}
	}

	while(input!="exit");

}


int main()
{
	Starting();

}
