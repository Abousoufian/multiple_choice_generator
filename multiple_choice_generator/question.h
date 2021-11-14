#ifndef QUESTION_H
#define QUESTION_H

#include<iostream>
#include<string>
#include<vector>

using namespace std;


//classen question
    // functie die random een vraag stelt
    // functie die de aantal antwoorden geeft gelinked aan de vraag, waarvan 1 goede antwoord is en 4 slechte antwoorden

class Question
{
    public:
        Question(string question);
        void addAnswer(string answer);
        void askQuestion();
        void posibleAnswers();

    private:
        //asking the question
        string question;

        //posible answers
        vector<string> answers;

};



#endif // QUESTION_H
