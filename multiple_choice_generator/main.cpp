#include <iostream>

#include "question.h"


using namespace std;

int main()
{
     Question vraag("Wat is mijn naam?");
     vraag.addAnswer("Karel");
     vraag.addAnswer("Souf");
     vraag.addAnswer("Bart");
     vraag.askQuestion();
     vraag.posibleAnswers();

     return 0;

}
