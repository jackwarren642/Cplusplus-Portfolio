
/*
Author: Jack Warren
Class: CS142, 11A Section
Description: HW1.cpp- creating a conversation of input and output using different types of variables
email: jewarren@butler.edu
Date: 09/05/2023

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

#include <iostream>
using namespace std;

int main(){
    //setting up the different variables that will be used throughout conversation
    string respondent_mood, respondent_name, respondent_isfrom, respondent_code_word;
    int respondent_distance = 0;
    const int COMPUTER_DISTANCE = 5;
    
    //conversation commands
    cout << "Hello there!!\n";
    cout << "What's your name?" << endl;
    cin >> respondent_name;
    cout << "Pleasure to see you today " << respondent_name << ". How are you doing??" << endl;
    cin >> respondent_mood;
    cout << "What a coincidence! I'm also feeling " << respondent_mood << " today!\n";
    cout << "Surely, that's not all we have in common. :)" << endl;
    cout << "So, where are you from?" << endl;
    cin >> respondent_isfrom;
    cout << "Wow, " << respondent_isfrom << "! I've heard a few things about that location.\n";
    cout << "How far away is that from Butler, in terms of miles?" << endl;
    cin >> respondent_distance;
    cout << "I would hate to go " << respondent_distance << " miles every time I wanted home!\n";
    cout << "I live " << COMPUTER_DISTANCE << " miles from my home, so that's \n";
    cout << respondent_distance - COMPUTER_DISTANCE << " less miles than you!" << endl;
    cout << "Well, seems like our convo today is winding down." << endl;
    cout << "What's one word I should use to remember our conversation??" << endl;
    cin >> respondent_code_word;
    cout << "\"" << respondent_code_word << "\"- I'll remember that!" << endl;
    cout << "That way, you know I haven't forgotten about you!" << endl;
    cout << "Have a good day, " << respondent_name << "! I enjoyed learning about" << endl;
    cout << respondent_isfrom << " and how " << respondent_mood << " you were. Have a good one!!\n";

    return 0;}









