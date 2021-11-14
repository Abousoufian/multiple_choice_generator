#include<iostream>
#include<string>

#include "question.h"

Question::Question(string question)
    : question(question)
{
}

void Question::addAnswer(string answer)
{
    answers.push_back(answer);
}

void Question::askQuestion()
{
    cout << question << endl;
}

void Question::posibleAnswers()
{
    for( int i = 0 ; i < answers.size() ; i++ )
    {
        cout << answers.at(i) << endl;
    }
}
