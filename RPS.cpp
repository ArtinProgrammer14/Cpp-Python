//Rock, Paper, Scissor
//By Artin Moghadasi
//@Artin.Projects

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int AIpoint=0;
    int userpoint=0;
    int round=1;

    srand(time(0));
    
    while(1)
    {
        cout<<"Round: "<<round<<endl;
        cout<<"Enter your choice:\n ";
        cout<<"r(rock) \t s(scissor) \t p(paper) \n";

        char userchoice;
        cin>>userchoice;

        int random= rand()%3;
        char AIchoice;

        switch(random)
        {
            case 0:
                 AIchoice ='r';
            break;
            case 1:
                 AIchoice ='s';
            break;
            case 2:
                 AIchoice ='p';
            break;
        }
        cout<<"AI choice: "<<AIchoice<<endl;

        //draw
        if(AIchoice==userchoice)

            cout<<"draw!\n";

        //AI wins
        else if(AIchoice=='r' && userchoice=='s')
        {
            cout<<"AI wins!\n";
            AIpoint++;
        }
        else if(AIchoice=='s' && userchoice=='p')
        {
        cout<<"AI wins!\n";
        AIpoint++;
        }
        else if(AIchoice=='p' && userchoice=='r')
        {
            cout<<"AI wins!\n";
            AIpoint++;
        //user wins
        }
          else if(AIchoice=='r' && userchoice=='p')
        {
            cout<<"user wins!\n";
           userpoint++;
        }
        else if(AIchoice=='s' && userchoice=='r')
        {
        cout<<"user wins!\n";
        userpoint++;
        }
        else if(AIchoice=='p' && userchoice=='s')
        {
            cout<<"user wins!\n";
            userpoint++;
        }
        cout<<"continue?(y/n)\n";
        char ch;
        cin>>ch;
        if(ch=='y')

            round++;

        else
        {
            cout<<"AI Point= "<<AIpoint<<endl;
            cout<<"User Point= "<<userpoint<<endl;
            exit(0);
        }

    }

    return 0;
}
//The program is finished 