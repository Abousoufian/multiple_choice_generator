#ifndef ANSWEROFUSER_H
#define ANSWEROFUSER_H.

#include<iostream>
#include<string>

using namespace std;

class AnswerOfUser
{
    public:
        void getAnswerOfUser()
        {
            cin >> userInput;
        }
        void printAnswerOfUser()
        {
            cout << userInput << endl;
        }

    private:
        string userInput;
};

#endif // ANSWEROFUSER_H
