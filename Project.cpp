#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<iomanip>
#include<cstdlib>

int answer, decision=0, lifeline_limit=0, ff=0, exprt=0, i, prize=0, play=0, question_set=0, wish=0, prizelevel=0;

char player[25];
char message1[]="\n\tWELCOME TO THE GAME...\n\t*** YOU HAVE TWO LIFELINES......... \n\t1.50-50 AND \n\t2.EXPERT ADVICE\n\n\t\n\t    *** RULES AND REGULATIONS ***\n\n\t*** YOU CAN USE THE LIFELINES ANYTIME. \n\t*** YOU CAN USE 50-50 TWICE\n\t";
char message2[]="*** WIN UPTO 1 CRORE TK\n\t*** ANSWERING ANY QUESTION WRONG, WILL TAKE YOU OUT OF THE GAME";
char levelmsg[]="\n\t*** THE GAME CONSIST 2 LEVELS\n\t*** LEVEL 1 IS ON 50,000/- AND LEVEL 2 IS ON 10,00,000/-. \n\t*** ONCE YOU UNLOCK LEVELS, THE PRIZE IS FIXED ON THAT AMOUNT\n\t*** IF YOU GIVE ANY WRONG ANSWER, THE PRIZE WILL BE ACCORDING TO YOUR LEVEL. ";
char message3[]="\n\n\tOoops! WRONG ANSWER... U LOST. BETTER LUCK NEXT TIME. THANKS FOR PLAYING.....\n\n";
char message4[]="\n\t\tWhooooomp!!! ***VICTORY*** \n\n\tRIGHT ANSWER... CONGRATULATIONS!!! YOU HAVE WON 1 Crore Tk";
char message5[]="\n\t*** LETS PLAY.....\nGAME STARTS IN 5 SECONDS...\n\n\tLOADING";
char message6[]="\n\t*** WRONG SELECTION TO QUESTION SET, PLEASE SELECT 1 or 2 ***\n";
char endgame[]="\n\n\tYOU DECIDED TO END YOUR GAMEPLAY. THANKS FOR PLAYING\n";

inline void q1();
inline void q2();
inline void q3();
inline void q4();
inline void q5();
inline void q6();
inline void q7();
inline void q8();
inline void q9();
inline void q10();

inline void w1();
inline void w2();
inline void w3();
inline void w4();
inline void w5();
inline void w6();
inline void w7();
inline void w8();
inline void w9();
inline void w10();

inline void cheque();
void lifefun();
inline void exitgame();
inline void endgameplay();

using namespace std;

int main()
{
    system("Color B");
    cout<<"\n\t**********WELCOME TO QUIZ AND REWARD**********"<<endl;
    cout<<"\t=============================================="<<endl;

    cout<<"Enter Your Name: ";
    gets(player);
    strupr(player);

    cout<<"\n\tHello [  "<<player<<"  ]"<<endl;
    cout<<"\n\tToday your Host is [MOSHIUR RAHMAN SHANTO]"<<endl;

    for(i=0; message1[i]; i++)
    {
        Sleep(10);
        cout<<message1[i];
    }
    for(i=0; message2[i]; i++)
    {
        Sleep(10);
        cout<<message2[i];
    }
    for(i=0; levelmsg[i]; i++)
    {
        Sleep(10);
        cout<<levelmsg[i];
    }

lebel:
    cout<<"\n\n\tARE YOU READY TO PLAY? (1. YES \t2.NO)"<<endl;
    Sleep(250);
    cout<<"\tEnter Your Choice: ";
    cin>>play;
    if(play==1)
    {
        for(i=0; message5[i]; i++)
        {
            Sleep(20);
            cout<<message5[i];
        }
        for(i=1; i<=20; i++)
        {
            Sleep(250);
            cout<<".";
        }
        cout<<"100%% Complete\n"<<endl;
        Sleep(1000);
        system("cls");

lebel2:
        cout<<"\n\t*** Choose Question Set- \n\t\t 1. SET1 \t 2.SET2"<<endl;
        cout<<"\n\tQuestion Set: ";
        cin>>question_set;

        if(question_set==1)
        {
            Sleep(1000);
            system("cls");
            cout<<"\n*** You have chosen SET1"<<endl;
            cout<<"Current Balance: 0/- Taka"<<endl;
            cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
            cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
            cout<<"You are in LEVEL 0"<<endl;
            q1();
            Sleep(1000);

q2lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 10,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET1"<<endl;
                cout<<"Current Balance: 5000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 0"<<endl;
                q2();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto q2lebel;
            }

q3lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 25,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET1"<<endl;
                cout<<"Current Balance: 10,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 0"<<endl;
                q3();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto q3lebel;
            }

q4lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 50,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET1"<<endl;
                cout<<"Current Balance: 25,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 0"<<endl;
                q4();
                cout<<"\n\t\tLevel 1 UNLOCKED"<<endl;
                Sleep(2500);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto q4lebel;
            }


q5lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 1,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET1"<<endl;
                cout<<"Current Balance: 50,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 1"<<endl;
                q5();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto q5lebel;
            }


q6lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 5,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET1"<<endl;
                cout<<"Current Balance: 1,00,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 1"<<endl;
                q6();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto q6lebel;
            }

q7lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 10,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET1"<<endl;
                cout<<"Current Balance: 5,00,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 1"<<endl;
                q7();
                cout<<"\n\t\tLevel 2 UNLOCKED"<<endl;
                Sleep(2500);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto q7lebel;
            }

q8lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 25,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET1"<<endl;
                cout<<"Current Balance: 10,00,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 2"<<endl;
                q8();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto q8lebel;
            }

q9lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 50,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET1"<<endl;
                cout<<"Current Balance: 25,00,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 2"<<endl;
                q9();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto q9lebel;
            }

q10lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 1,00,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET1"<<endl;
                cout<<"Current Balance: 50,00,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 2"<<endl;
                q10();
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto q10lebel;
            }
        }

        else if(question_set==2)
        {
            Sleep(1000);
            system("cls");
            cout<<"\n*** You have chosen SET2"<<endl;
            cout<<"Current Balance: 0/- Taka"<<endl;
            cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
            cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
            cout<<"You are in LEVEL 0"<<endl;
            w1();
            Sleep(1000);

w2lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 10,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET2"<<endl;
                cout<<"Current Balance: 5000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 0"<<endl;
                w2();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto w2lebel;
            }

w3lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 25,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET2"<<endl;
                cout<<"Current Balance: 10,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 0"<<endl;
                w3();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto w3lebel;
            }

w4lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 50,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET2"<<endl;
                cout<<"Current Balance: 25,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 0"<<endl;
                w4();
                cout<<"\n\t\tLevel 1 UNLOCKED"<<endl;
                Sleep(2500);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto w4lebel;
            }

w5lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 1,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET2"<<endl;
                cout<<"Current Balance: 50,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 1"<<endl;
                w5();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto w5lebel;
            }

w6lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 5,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET2"<<endl;
                cout<<"Current Balance: 1,00,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 1"<<endl;
                w6();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto w6lebel;
            }

w7lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 10,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET2"<<endl;
                cout<<"Current Balance: 5,00,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 1"<<endl;
                w7();
                cout<<"\n\t\tLevel 2 UNLOCKED"<<endl;
                Sleep(2500);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto w7lebel;
            }

w8lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 25,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET2"<<endl;
                cout<<"Current Balance: 10,00,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 2"<<endl;
                w8();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto w8lebel;
            }

w9lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 50,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET2"<<endl;
                cout<<"Current Balance: 25,00,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 2"<<endl;
                w9();
                Sleep(1000);
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto w9lebel;
            }

w10lebel:
            system("cls");
            cout<<"\n\tDo you want to continue to next question for 1,00,00,000/-? \n\t(1.YES  2.NO)"<<endl;
            cout<<"Enter Choice:";
            cin>>wish;
            if(wish==1)
            {
                cout<<"\n*** You have chosen SET2"<<endl;
                cout<<"Current Balance: 50,00,000/- Taka"<<endl;
                cout<<"You have used "<<lifeline_limit<<" Lifelines"<<endl;
                cout<<"Level 1: 50000/- \nLevel 2: 10,00,000/-"<<endl;
                cout<<"You are in LEVEL 2"<<endl;
                w10();
            }
            else if(wish==2)
            {
                endgameplay();
            }
            else
            {
                goto w10lebel;
            }
        }

        else
        {
            for(i=0; message6[i]; i++)
            {
                Sleep(50);
                cout<<message6[i];
            }
            Sleep(1000);
            system("cls");
            goto lebel2;
        }
    }
    else if(play==2)
    {
        cout<<"\n\t\t**********Exiting the Game, Thanks for play**********"<<endl;
        exit(0);
    }
    else
    {
        cout<<"\n\t\t**********Wrong selection!!! Please Choose 1 or 2**********"<<endl;
        Sleep(2000);
        system("cls");
        goto lebel;
    }
    return 0;
}





inline void exitgame()
{
    for(i=0; message3[i]; i++)
    {
        Sleep(50);
        cout<<message3[i];
    }
}



void lifefun()
{
    if(lifeline_limit<=2)
    {

        if(ff<=1 && exprt==0)
        {
            cout<<"\n1. 50-50 \t 2. Expert Advice"<<endl;
        }
        else if(exprt==0)
        {
            cout<<"\t2. Expert Advice"<<endl;
        }
        else if(ff<=1 && exprt!=0)
        {
            cout<<"\t1. 50-50"<<endl;
        }
        cout<<"\nChoose lifeline (Wrong selection won't give you lifelines): ";
        cin>>decision;
        cout<<endl;
    }
    else
    {
        cout<<"\nYou have used your two lifelines."<<endl;
        cout<<"\tEnter Answer(Don't Press 5, This will lead you out of the game): ";
        cin>>answer;
    }
}

inline void cheque()
{
    cout<<"\n\n\n-------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|                                          Agrani Bank Ltd.                               Date: "<<__DATE__<<"\t\t|"<<endl;
    cout<<"|                                       Mirpur Branch, Dhaka                                                 \t\t|"<<endl;
    cout<<"|                                                                                           Cheque No: 581497\t\t|"<<endl;
    cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"<<endl;
    cout<<"|\tPay to: "<<setw(25)<<player<<"                                                                            \t|"<<endl;
    cout<<"|\tAmount:\t"<<setw(10)<<prize<<"                                                                                            \t|"<<endl;
    cout<<"|\tAmount(In words): ";
    if(prize==5000)
    {
        cout<<setw(35)<<"Five Thousand BDT only\t\t\t\t\t\t\t\t\t|"<<endl;
    }
    if(prize==10000)
    {
        cout<<setw(32)<<"Ten Thousand BDT only\t\t\t\t\t\t\t\t\t|"<<endl;
    }
    if(prize==25000)
    {
        cout<<setw(32)<<"Twenty Five Thousand BDT only\t\t\t\t\t\t\t\t\t|"<<endl;
    }
    if(prize==50000)
    {
        cout<<setw(32)<<"Fifty Thousand BDT only\t\t\t\t\t\t\t\t\t|"<<endl;
    }
    if(prize==100000)
    {
        cout<<setw(32)<<"One Lacs BDT only\t\t\t\t\t\t\t\t\t|"<<endl;
    }
    if(prize==500000)
    {
        cout<<setw(32)<<"Five Lacs BDT only\t\t\t\t\t\t\t\t\t|"<<endl;
    }
    if(prize==1000000)
    {
        cout<<setw(32)<<"Ten Lacs BDT only\t\t\t\t\t\t\t\t\t|"<<endl;
    }
    if(prize==2500000)
    {
        cout<<setw(32)<<"Twenty Five Lacs BDT only\t\t\t\t\t\t\t\t\t|"<<endl;
    }
    if(prize==5000000)
    {
        cout<<setw(32)<<"Fifty Lacs BDT only\t\t\t\t\t\t\t\t\t|"<<endl;
    }
    if(prize==10000000)
    {
        cout<<setw(32)<<"One Crore BDT only\t\t\t\t\t\t\t\t\t|"<<endl;
    }
    cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"<<endl;
    cout<<"|\tThis is to be declared that, "<<setw(25)<<player<<"  won "<<setw(10)<<prize<<" taka playing the quiz and reward game.\t|"<<endl;
    cout<<"|\tThe officially authorized Agrani Bank Ltd. Congratulates you by paying the reward\t\t\t\t\t|"<<endl;
    cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"<<endl;
    cout<<"|                                                                                               Signed by-\t\t|"<<endl;
    cout<<"|                                                                                            Mashiur Rahman\t\t|"<<endl;
    cout<<"|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------------------------"<<endl;
    Sleep(500);
    system("pause");

}

inline void endgameplay()
{
    for(i=0; endgame[i] ; i++)
    {
        Sleep(40);
        cout<<endgame[i];
    }

    Sleep(300);
    cout<<"\n\n\t["<<player<<"] YOU HAVE WON "<<prize<<" /-Taka\n\n";
    cheque();
    exit(0);
}

inline void q1()
{
    cout<<"\n\n\t(1)First Question for 5000/- Tk is---- \n\n\tWhat is the Commercial Capital of Bangladesh?"<<endl;
    cout<<"\t---------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Dhaka \t\t2. Sylhet \n\t3. Rajshahi \t\t4. Chittagong \n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t\t\t\t2. Sylhet \n\t\t\t\t4. Chittagong"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that the \"Commercial Capital of Bangladesh is Chittagong\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==4)
    {
        cout<<"Right Answer... Congratulations!!! You have won 5,000/- Tk"<<endl;
        prize=5000;
    }
    else
    {
        exitgame();
        cout<<"\nThe right answer is the \"Commercial Capital of Bangladesh is Chittagong\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void q2()
{
    cout<<"\n\n\t(2)Second Question for 10,000/-Tk is---- \n\n\tWho is the President of Bangladesh?"<<endl;
    cout<<"\t---------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Abdul Hamid \t\t\t2. Zillur Rahman \n\t3. Abul Mal Abdul Muhit \t4. Fakhruddin Ahmed \n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1. Abdul Hamid \n\t3. Abul Mal Abdul Muhit"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that the \"Former Speaker Mr.Abdul Hamid is the current President of Bangladesh\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==1)
    {
        cout<<"Right Answer... Congratulations!!! You have won 10,000/- Tk"<<endl;
        prize=10000;
    }
    else
    {
        exitgame();
        cout<<"\tThe right answer is the \"Former Speaker Mr.Abdul Hamid is the current President of Bangladesh\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void q3()
{
    cout<<"\n\n\t(3)Third Question for 25,000/-Tk is---- \n\n\tWhich district of Bangladesh was part of Assam??"<<endl;
    cout<<"\t---------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Chittagong \t\t\t2. Dinajpur \n\t3. Sylhet \t\t\t4. Rajshahi  \n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1. Chittagong \n\t3. Sylhet"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"Sylhet was the part of Assam\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

    }


    if(answer==3)
    {
        cout<<"Right Answer... Congratulations!!! You have won 25,000/- Tk"<<endl;
        prize=25000;
    }
    else
    {
        exitgame();
        cout<<"\tThe right answer is \"Sylhet was the part of Assam\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void q4()
{
    cout<<"\n\n\t*** Level 1 UNLOCKING QUESTION"<<endl;
    cout<<"\n\n\t(4)Fourth Question for 50,000/-Tk is---- \n\n\tWhich is the 11th City Corporation of Bangladesh??"<<endl;
    cout<<"\t---------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Gazipur \t\t\t2. Dhaka North \n\t3. Dhaka South \t\t\t4. None of them \n\t\t*Press 5 for LIFELINE  "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1. Gazipur \n\t3. Dhaka South"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"Gazipur is the 11th City Corporation of Bangladesh\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }


    if(answer==1)
    {
        cout<<"Right Answer... Congratulations!!! You have won 50,000/- Tk"<<endl;
        prize=50000;
        prizelevel=50000;
    }
    else
    {
        exitgame();
        cout<<"\tThe right answer is \"Gazipur is the 11th City Corporation of Bangladesh\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void q5()
{
    cout<<"\n\n\t(5)Fifth Question for 1,00,000/-Tk is---- \n\n\tOver 90% of Bangladesh is on average what height above sea level ??"<<endl;
    cout<<"\t---------------------------------------------------------------------------"<<endl;
    cout<<"\t1. 30 Meter \t\t2. 10 Meter \n\t3. 15 Meter \t\t4. 08 Meter\n\t\t*Press 5 for LIFELINE  "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1. 30 Meter \t2. 10 Meter"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"Over 90% of Bangladesh is on average 10 Meter height above sea level\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }


    if(answer==2)
    {
        cout<<"Right Answer... Congratulations!!! You have won 1,00,000/- Tk"<<endl;
        prize=100000;
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"\tThe right answer is \"Over 90% of Bangladesh is on average 10 Meter height above sea level\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void q6()
{
    cout<<"\n\n\t(6)Sixth Question for 5,00,000/-Tk is---- \n\n\tWhat is the changed name of the famous USA newspaper \"International Herald Tribune\"??"<<endl;
    cout<<"\t-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t1. International Times of New York \t\t2. International New York Times \n\t3. Times of New York \t\t\t\t4. The Daily New York\n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1. International Times of New York \t2. International New York Times"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \" The changed name of the famous USA newspaper \"International Herald Tribune\" is \"International New York Times\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==2)
    {
        cout<<"Right Answer... Congratulations!!! You have won 5,00,000/- Tk"<<endl;
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"\tThe right answer is \" The changed name of the famous USA newspaper \"International Herald Tribune\" is \"International New York Times\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}


inline void q7()
{
    cout<<"\n\n\t*** Level 2 UNLOCKING QUESTION"<<endl;
    cout<<"\n\n\t(7)Seventh Question for 10,00,000/-Tk is---- \n\n\tWho is the Director of the Bangladesh Liberation War based movie \"MEHERJAAN\"??"<<endl;
    cout<<"\t----------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Chashi Nazrul Islam \t\t2. Humayun Ahmed \n\t3. Rubaiyat Hussain \t\t4. Victor Banerjee\n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1. Chashi Nazrul Islam \n\t3. Rubaiyat Hussain"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"The Director of the Bangladesh Liberation War based movie \"MEHERJAAN\" is Rubaiyat Hossain"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }


    if(answer==3)
    {
        cout<<"Right Answer... Congratulations!!! You have won 10,00,000/- Tk"<<endl;
        prize=1000000;
        prizelevel=1000000;
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"The right answer is \"The Director of the Bangladesh Liberation War based movie \"MEHERJAAN\" is Rubaiyat Hossain"<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void q8()
{
    cout<<"\n\n\t(8)Eightth Question for 25,00,000/-Tk is---- \n\n\tHitler party which came into power in 1933 is known as-"<<endl;
    cout<<"\t---------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Labour Party \t\t2. Nazi Party \n\t3. Ku-Klux-Klan \t\t4. Democratic Party\n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t\t\t\t\t2. Nazi Party \n\t3. Ku-Klux-Klan"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"Hitler party which came into power in 1933 is known as Nazi Party"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }



    if(answer==2)
    {
        cout<<"Right Answer... Congratulations!!! You have won 25,00,000/- Tk"<<endl;
        prize=2500000;
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"\tThe right answer is \"Hitler party which came into power in 1933 is known as Nazi Party"<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void q9()
{
    cout<<"\n\n\t(9)Ninth Question for 50,00,000/-Tk is---- \n\n\tWhich Indian personality has been honoured with the \"Social Entrepreneur of the Year\" award at The 7th Asian Awards in London??"<<endl;
    cout<<"\t-----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Priti Patel \t\t2. Zayn Malik \n\t3. Nisha Dutt \t\t4. Asha Bhosle\n\t\tPress 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\n\n\t3. Nisha Dutt \t\t4. Asha Bhosle"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"Nisha Dutt\" has been honoured with the \"Social Entrepreneur of the Year\" award at The 7th Asian Awards in London"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }



    if(answer==3)
    {
        cout<<"Right Answer... Congratulations!!! You have won 50,00,000/- Tk"<<endl;
        prize=5000000;
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"\tThe right answer is \"Nisha Dutt\" has been honoured with the \"Social Entrepreneur of the Year\" award at The 7th Asian Awards in London"<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void q10()
{
    cout<<"\n\n\t(10)Tenth Question for 1,00,00,000/-Tk is---- \n\n\tWho finished with a dominant victory in a British Grand Prix 2016 to cut team-mate Nico Rosberg\'s championship lead to one point??"<<endl;
    cout<<"\t--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Michael Schumacher \t\t2. Sebastian Vettel \n\t3. Max Verstappen \t\t4. Lewis Hamilton\n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\n\n\t3. Max Verstappen \t\t4. Lewis Hamilton"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"Lewis Hamilton\" finished with a dominant victory in a British Grand Prix 2016 to cut team-mate Nico Rosberg\'s championship lead to one point"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==4)
    {
        for(i=0; message4[i]; i++)
        {
            Sleep(100);
            cout<<message4[i];
        }
        Sleep(500);
        cout<<"\n\n\t\tYOU ARE AN EXTRAORDINARY PLAYER ["<<player<<"] "<<endl;
        prize=10000000;
        Sleep(500);
        cout<<"\t\t["<<player<<"] YOU HAVE WON "<<prize<<"/- Taka"<<endl;
        cout<<"\n"<<endl;
        cheque();
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"\tThe right answer is \"Lewis Hamilton\" finished with a dominant victory in a British Grand Prix 2016 to cut team-mate Nico Rosberg\'s championship lead to one point"<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}



inline void w1()
{
    cout<<"\n\n\t(1)First Question for 5000/- Tk is---- \n\n\tWhen did Bangladesh become an independent country?"<<endl;
    cout<<"\t---------------------------------------------------------------------------"<<endl;
    cout<<"\t1. 1965 \t\t2. 1969 \n\t3. 1952 \t\t4. 1971 \n\t\t*Press 5 for LIFELINE  "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t\t\t\t2. 1969 \n\t\t\t\t4. 1971"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that the \"Bangladesh become an independent country in 1971\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }



    if(answer==4)
    {
        cout<<"Right Answer... Congratulations!!! You have won 5,000/- Tk"<<endl;
        prize=5000;
    }
    else
    {
        exitgame();
        cout<<"\tThe right answer is \"Bangladesh become an independent country in 1971\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void w2()
{
    cout<<"\n\n\t(2)Second Question for 10,000/-Tk is---- \n\n\tWhich of the following is not a gas?"<<endl;
    cout<<"\t---------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Mercury \t\t2. Nitrogen \n\t3. Oxygen \t\t4. Helium  \n\t\t*Press 5 for LIFELINE  "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1. Mercury \n\t3. Oxygen"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"Mercury is not a gas\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==1)
    {
        cout<<"Right Answer... Congratulations!!! You have won 10,000/- Tk"<<endl;
        prize=10000;
    }
    else
    {
        exitgame();
        cout<<"\tThe right answer is \"Mercury is not a gas\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void w3()
{
    cout<<"\n\n\t(3)Third Question for 25,000/-Tk is---- \n\n\tWho is considered the father of geometry?"<<endl;
    cout<<"\t---------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Pythagoras \t\t\t2. Socrates \n\t3. Euclid \t\t\t4. Alexander  \n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1. Pythagoras \n\t3. Euclid"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"Euclid is considered the father of geometry\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==3)
    {
        cout<<"Right Answer... Congratulations!!! You have won 25,000/- Tk"<<endl;
        prize=25000;
    }
    else
    {
        exitgame();
        cout<<"\tThe right answer is \"Euclid is considered the father of geometry\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void w4()
{
    cout<<"\n\n\t*** Level 1 UNLOCKING QUESTION"<<endl;
    cout<<"\n\n\t(4)Fourth Question for 50,000/-Tk is---- \n\n\tWhich country has 11 official languages?"<<endl;
    cout<<"\t---------------------------------------------------------------------------"<<endl;
    cout<<"\t1. South Africa \t\t\t2. Canada \n\t3. Russia \t\t\t\t4. India  \n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1. South Africa \n\t3. Russia"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"South Africa has 11 official languages\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==1)
    {
        cout<<"Right Answer... Congratulations!!! You have won 50,000/- Tk"<<endl;
        prize=50000;
        prizelevel=50000;
    }
    else
    {
        exitgame();
        cout<<"\tThe right answer is \"South Africa has 11 official languages\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void w5()
{
    cout<<"\n\n\t(5)Fifth Question for 1,00,000/-Tk is---- \n\n\tTo which Indian Lieutenant General did Pakistani Lieutenant General A. A. K. Niazi surrender?"<<endl;
    cout<<"\t--------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t1. J. F. R. Jacob \t\t2. J. S. Aurora \n\t3. Shankar Roy Chowdhury \t4. S. F. Rodrigues \n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1. J. F. R. Jacob \t2. J. S. Aurora"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"Pakistani Lieutenant General A. A. K. Niazi surrendered to Lieutenant General J. S. Aurora\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==2)
    {
        cout<<"Right Answer... Congratulations!!! You have won 1,00,000/- Tk"<<endl;
        prize=100000;
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"\tThe right answer is \"Pakistani Lieutenant General A. A. K. Niazi surrendered to Lieutenant General J. S. Aurora\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void w6()
{
    cout<<"\n\n\t(6)Sixth Question for 5,00,000/-Tk is---- \n\n\tWhat is the name of first bangla cinema ( sound added )?"<<endl;
    cout<<"\t-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Titas ekti nodir naam \t\t2. Mukh O Mukhosh \n\t3. E Desh Tomar Amar \t\t\t4. None of them \n\t\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1.Titas ekti nodir naam \t2. Mukh O Mukhosh"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"Mukh O Mukhosh is the name of first bangla cinema ( sound added )\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==2)
    {
        cout<<"Right Answer... Congratulations!!! You have won 5,00,000/- Tk"<<endl;
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"\tThe right answer is \"Mukh O Mukhosh is the name of first bangla cinema ( sound added )\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void w7()
{
    cout<<"\n\n\t*** Level 2 UNLOCKING QUESTION"<<endl;
    cout<<"\n\n\t(7)Seventh Question for 10,00,000/-Tk is---- \n\n\tWhich of the following movie is an Oscar winning movie in 2010?"<<endl;
    cout<<"\t----------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Slumdog Millionaire \t\t2. Avatar \n\t3. The Hurt Locker \t\t4. District 9 \n\t\t* Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t1. Slumdog Millionaire \n\t3. The Hurt Locker"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"The Hurt Locker  is an Oscar winning movie in 2010\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==3)
    {
        cout<<"Right Answer... Congratulations!!! You have won 10,00,000/- Tk"<<endl;
        prize=1000000;
        prizelevel=1000000;
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"\tThe right answer is \"The Hurt Locker  is an Oscar winning movie in 2010\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void w8()
{
    cout<<"\n\n\t(8)Eightth Question for 25,00,000/-Tk is---- \n\n\tWhat is the height of the Burj Tower in Dubai?"<<endl;
    cout<<"\t---------------------------------------------------------------------------"<<endl;
    cout<<"\t1. 400 metres \t\t2. 520 metres \n\t3. 600 metres \t\t4. 800 metres \n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\t\t\t\t2. 520 metres \n\t\t\t\t4. 800 metres"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"The height of the Burj Tower in Dubai is 800 metres\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==4)
    {
        cout<<"Right Answer... Congratulations!!! You have won 25,00,000/- Tk"<<endl;
        prize=2500000;
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"\tThe right answer is \"The height of the Burj Tower in Dubai is 800 metres\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void w9()
{
    cout<<"\n\n\t(9)Ninth Question for 50,00,000/-Tk is---- \n\n\tIn the Bible, Joseph was sold by his brothers for how many silver coins?"<<endl;
    cout<<"\t-----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Forty \t\t2. Sixty \n\t3. Twenty \t\t4. Ten\n\t\tPress 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\n\n\t3. Twenty \t\t4. Ten"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"In the Bible, Joseph was sold by his brothers for twenty silver coins\""<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==3)
    {
        cout<<"Right Answer... Congratulations!!! You have won 50,00,000/- Tk"<<endl;
        prize=5000000;
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"\tThe right answer is \"In the Bible, Joseph was sold by his brothers for twenty silver coins\""<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}

inline void w10()
{
    cout<<"\n\n\t(10)Tenth Question for 1,00,00,000/-Tk is---- \n\n\tIn Alexander Dumas book, 2 of the Musketeers named Athos and Porthos. What was the name of Third Musketeer?"<<endl;
    cout<<"\t--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t1. Giesel \t\t2. Grimaud\n\t3. Felton \t\t4. Aramis \n\t\t*Press 5 for LIFELINE "<<endl;
    cout<<"\tEnter answer: ";
    cin>>answer;
    if(answer==5)
    {
        lifefun();
        if(decision==1 && ff<=1)
        {
            ++ff;
            ++lifeline_limit;
            cout<<"\n\n\t3. Felton \t\t4. Aramis"<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }

        if(decision==2 && exprt==0)
        {
            ++exprt;
            ++lifeline_limit;
            cout<<"The expert advice says that \"Aramis\" is the third Musketeer name."<<endl;
            cout<<"Answer: ";
            cin>>answer;
        }
    }

    if(answer==4)
    {
        for(i=0; message4[i]; i++)
        {
            Sleep(100);
            cout<<message4[i];
        }
        Sleep(500);
        cout<<"\n\n\t\tYOU ARE AN EXTRAORDINARY PLAYER ["<<player<<"] "<<endl;
        prize=10000000;
        Sleep(500);
        cout<<"\t\t["<<player<<"] YOU HAVE WON "<<prize<<"/- Taka"<<endl;
        cheque();
    }
    else
    {
        prize=prizelevel;
        exitgame();
        cout<<"\tThe right answer is \"Aramis\" is the third Musketeer name."<<endl;
        cout<<"\n\t"<<player<<" you have won "<<prize<<" Taka"<<endl;
        cheque();
        exit(0);
    }
}
