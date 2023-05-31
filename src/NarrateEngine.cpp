#include <iostream>
#include <string>
#include <ctime>
#include "../headers/main.h"
using namespace std;

//This variable defines the space being used
//page_size = total character per line
int page_size = 70;

int main()
{
	//This variable defines the space being used
	//page_size = total character per line
	string tarnished;	
	cout << "=====================================================================" << endl;

	dramaticize("The fallen leaves tell a story.");
	
	tell("The great Elden Ring was shattered.");
	
	say("In our home, across the fog, the Lands between");

	tell("Now, Queen Marika the Eternal is nowhere to be found");

	say("and in the Night of the Black Knives,");
	say("Godwyn the Golden was first to perish");

	say("Soon, Marika's offspring, demigods all,");
	say("claimed the shards of the Elden Ring.");
	
	say("The mad taint of their newfound strength triggered the Shattering.");
	
	tell("A war from which no lord arose.");
	
	tell("A war leading to abandonment by the Greater Will.");
	
	dramaticize("");
	
	dramaticize("Arise now, ye Tarnished.");
	say("Ye dead, who yet live.");
	say("The call of long-lost grace speaks to us all.");
	tell("Hoarah Loux, chieftan of the badlands.");
	say("The ever-brilliant Goldmask.");
	say("Fia, the Deathbed Companion.");
	say("The loathsome Dung Eater.");
	say("And Sir Gideon Ofnir, the All-knowing.");
	
	fasting(" ");
	fasting(" ");
	fasting(" ");
	
	say("And one other. Whom grace would again bless.");
	say("A Tarnished of no renown.");
	say("Cross the fog, to the Lands Between");
	say("to stand before the Elden Ring.");
	say("And become the Elden Lord.");
	return 0;
}
//int typeMessage(string message,char borderSymbol,char topBorder){
int typeMessage(string message){
	//define typing speed -- less is faster
	float speed = 0.1f;
	//define position align 1 = start typing past the ini border
	//int positionAlign = 1;
	string borderSymbol = "|";
	//print borders first
	cout.width(page_size); cout << borderSymbol+"\r" << borderSymbol;
	cout.fill(' ');cout.width((page_size-2-message.length())/2);
	//for loop iterates through each character for printing with delay
	for(int char_at = 0;char_at < static_cast<int>(message.length());char_at++){
		preciseDelay(speed);
		cout << message.at(char_at) << flush;

	}
	cout << "" <<endl;
	return 0;
}
int preciseDelay(float speed){
	speed *= CLOCKS_PER_SEC;
	clock_t now = clock();
	while(clock()- now < speed);
	return 0;
}
int delay(int delay)
{
	delay *= CLOCKS_PER_SEC;
	clock_t now = clock();
	while(clock() - now < delay);
	return 0;
}

int fasting(string message)
{
	int time_delay = 1;
	delay(time_delay);
	typeMessage(message);
	return 0;
}

int say(string message)
{

	int time_delay = 2;
	delay(time_delay);
	typeMessage(message);
	//cout << message <<endl;
	return 0;
}

int tell(string message)
{
	int time_delay = 3;
	delay(time_delay);
	typeMessage(message);
	//cout << message <<endl;
	return 0;
}

int dramaticize(string message)
{
	int time_delay = 4;
	delay(time_delay);
	typeMessage(message);
	//cout << message <<endl;
	return 0;
}
//This function takes in an offset that will displace the position
//of the printed line;
//it should return the the position of the starting line, an issue for these
//prints will be that I can't support multi-line statements.
int beginPongWave(int offset){
	
	return 0;
}
