#include<iostream>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include<windows.h>
#include<stdio.h>
#include<cstdlib>
using namespace std;
class Clock
{
	private:
		int hh,mm,ss;
		char op,p;
public:
	int f,t;
	friend void displaymenu();
	friend void digitalclock(Clock);
	friend void stopwatch(Clock);
	friend void timer(Clock);
	friend void alarm(Clock);
void get()
{
	cout<<"Enter and frequency and time"<<endl;
	cin>>f>>t;
}
friend int operator>(Clock l1,Clock l2)
{
	if(l1.f>l2.t)
	return 1;
	else
	return 0;
}
};
void displaymenu(Clock c1)
{
	int ch;
	cout<<"============== DIGITAL CLOCK =================="<<endl;
	cout<<" \t\t MENU "<<endl;
	cout<<"================================================"<<endl;
	cout<<"\t\t D.DIGITAL CLOCK"<<endl;
	cout<<"\t\t S.STOPWATCH"<<endl;
	cout<<"\t\t T.TIMER"<<endl;
	cout<<"\t\t A.Alarm"<<endl;
	cout<<"\t\t 0.Exit"<<endl;
}
void digitalclock(Clock c1)
{
	cout<<"\n\n\n\t\t\t   DIGITAL WATCH"<<endl;
cout<<"\n\n\n\t\t\t\tPLEASE SET THE TIME\n"<<endl;
cout<<"\n\n\n\t\t\t\tHH:   MM  : SS";
cout<<"\n\n\n\t\t\t\tENTER HOURS (HH) : ";
cin>>c1.hh;
cout<<"\n\t\t\t\tENTER MINUTES (MM) : ";
cin>>c1.mm;
cout<<"\n\t\t\t\tENETER SECOUNDS (SS) : ";
cin>>c1.ss;
cout<<"\n\n\n\t\t\t        PRESS ANY KEY TO START";
while (!kbhit())
{
c1.ss++;
Sleep(1000);
if (c1.ss>59)
{
c1.mm++;
c1.ss=0;
}
if (c1.ss>59)
{
c1.hh++;
c1.mm=0;
}
if (c1.hh>=24)
{
c1.hh=0;
c1.mm=0;
c1.ss=0;
 }
 if (c1.hh>=6&&c1.hh<=9)
 {
 cout<<"\n\n\t\t\t       GOOD MORNING...!!\n\t\t\t     HAVE A NICE DAY...!!";
 }
 if (c1.hh==12)
 {
 cout<<"\n\n\t\t\t     GOOD AFTERNOON...!!";
 }
 if (c1.hh>=17&&c1.hh<=19)
 {
 cout<<"\n\n\t\t\t       GOOD EVENING...!!";
 }
 if (c1.hh>=21&&c1.hh<=22)
 {
 cout<<"\n\n\t\t\t        GOOD NIGHT...!!";
 }
 if (c1.hh==0)
 {
 cout<<"\n\n\t\t\t          MIDNIGHT";
 }
 
cout<<"\n\n\n\t\t\t\t   DIGITAL WATCH";
 cout<<"\n\n\n\n\n\n\n\t\t\t\t HH:   MM  : SS";
cout<<"\n\t\t\t\t"<<c1.hh<<" :   "<<c1.mm<<"   : "<<c1.ss;
cout<<"\n\n\n\t\t\t   PRESS D FOR DIGITAL WATCH\n\t\t\t   PRESS S FOR STOP WATCH \n\t\t\t   PRESS T FOR TIMER\n\t\t\t PRESS A FOR ALARM\n\t\t\t  PRESS 0 TO EXIT\n";
cout<<"\n\n\n\n\n\t\t\t   ENTER YOUR CHOICE : ";
}
}
void stopwatch(Clock c1)
{
cout<<"\n\n\n\t\t\t\t   STOP WATCH";
cout<<"\n\n\n\n\n\n\n\t\t\t\tHH:   MM  : SS";
cout<<"\n\n\n\t\t\t\tENTER HOURS (HH) : ";
cin>>c1.hh;
cout<<"\n\t\t\t\tENTER MINUTES (MM) : ";
cin>>c1.mm;
cout<<"\n\t\t\t\tENETER SECOUNDS (SS) : ";
cin>>c1.ss;
cout<<"\n\n\n\t\t\t     PRESS ANY KEY TO START";
while (!kbhit())
{
c1.ss++;
Sleep(1000);
if (c1.ss>59)
{
c1.mm++;
c1.ss=0;
}
if (c1.mm>59)
{
c1.hh++;
c1.mm=0;
}
cout<<"\n\n\n\t\t\t\t   STOP WATCH";
cout<<"\n\n\n\n\n\n\n\t\t\t\tHH:   MM  : SS";
cout<<"\n\t\t\t\t"<<c1.hh<<" :   "<<c1.mm<<"   : "<<c1.ss<<endl;
cout<<"\n\n\n\t\t PRESS 'p' TO pause";
}
cout<<"\n\n\n\t\t\t   PRESS D FOR DIGITAL WATCH\n\t\t\t   PRESS S FOR STOP WATCH \n\t\t\t   PRESS T FOR TIMER\n\t\t\t PRESS A FOR ALARM\n\t\t\t  PRESS 0 TO EXIT\n";
cout<<"\n\n\n\n\n\t\t\t   ENTER YOUR CHOICE : ";
}
void timer(Clock c1)
{
cout<<"\n\n\n\t\t\t\t      TIMER";
cout<<"\n\n\n\t\t\t\tPLEASE SET THE TIMER\n";
cout<<"\n\n\n\t\t\t\tHH:   MM  : SS";
cout<<"\n\n\n\t\t\t\tENTER HOURS (HH) : ";
cin>>c1.hh;
cout<<"\n\t\t\t\tENTER MINUTES (MM) : ";
cin>>c1.mm;
cout<<"\n\t\t\t\tENETER SECOUNDS (SS) : ";
cin>>c1.ss;
cout<<"\n\n\n\t\t\t        PRESS ANY KEY TO START";
cout<<"\n\t\t\t\t"<<c1.hh<<" :   "<<c1.mm<<"   : "<<c1.ss;
while (!kbhit())
{
c1.ss--;
Sleep(1000);
if (c1.ss<0)
{
c1.mm--;
c1.ss=00;
}
if (c1.mm<0)
{
c1.hh--;
c1.mm=00;
c1.hh=00;
}
cout<<"\n\n\n\t\t\t\t      TIMER";
cout<<"\n\n\n\n\n\n\n\t\t\t\tHH:   MM  : SS";
cout<<"\n\t\t\t\t"<<c1.hh<<" :   "<<c1.mm<<"   : "<<c1.ss;
	     if(c1.hh==00&&c1.mm==00&&c1.ss<=10)
	     {
	      cout<<"\n\n\n\n\n\n\t\t\t\tHURRY UP...!!";
		 }
if(c1.hh==00&&c1.mm==00&&c1.ss==00)
{
cout<<"\n\n\n\n\n\n\t\\t\tTIME'S UP...!!";
}
cout<<"\n\n\n\t\t\t   PRESS D FOR DIGITAL WATCH\n\t\t\t   PRESS S FOR STOP WATCH \n\t\t\t   PRESS T FOR TIMER\n\t\t\t PRESS A FOR ALARM\n\t\t\t  PRESS 0 TO EXIT\n";
cout<<"\n\n\n\n\n\t\t\t   ENTER YOUR CHOICE : ";
}
}
void alarm(Clock c1)
{
cout<<"\n\n\n\t\t\t\t    ALARM ";
cout<<"\n\n\n\t\t\t\tPLEASE SET THE ALARM\n";
cout<<"\n\n\n\t\t\t\tHH:   MM  : SS";
cout<<"\n\n\n\t\t\t\tENTER HOURS (HH) : ";
cin>>c1.hh;
cout<<"\n\t\t\t\tENTER MINUTES (MM) : ";
cin>>c1.mm;
cout<<"\n\t\t\t\tENETER SECOUNDS (SS) : ";
cin>>c1.ss;
cout<<"\n\n\n\t\t\t        PRESS ANY KEY TO START";
cout<<"\n\t\t\t\t"<<c1.hh<<" :   "<<c1.mm<<"   : "<<c1.ss;
while (!kbhit())
{
c1.ss--;
Sleep(1000);
if (c1.ss<0)
{
c1.mm--;
c1.ss=00;
}
if (c1.mm<0)
{
c1.hh--;
c1.mm=00;
c1.hh=00;
}
cout<<"\n\n\n\t\t\t\t      ALARM";
cout<<"\n\n\n\n\n\n\n\t\t\t\tHH:   MM  : SS";
cout<<"\n\t\t\t\t"<<c1.hh<<" :   "<<c1.mm<<"   : "<<c1.ss;
cout<<"\n\n\n\t\t\t   PRESS D FOR DIGITAL WATCH\n\t\t\t   PRESS S FOR STOP WATCH \n\t\t\t   PRESS T FOR TIMER\n\t\t\t PRESS A FOR ALARM\n\t\t\t  PRESS 0 TO EXIT\n";
cout<<"\n\n\n\n\n\t\t\t   ENTER YOUR CHOICE : ";
}
}
int main()
{
	char opt;
	char p='p';
	Clock c1,l1,l2;
	system("color B1");
	displaymenu(c1);
	cout<<"\n\t\t\t\t Enter  a choice "<<endl;
	cin>>opt;
	switch(opt)
	{
		case 'd':
		digitalclock(c1);
		break;
		case 's':
			stopwatch(c1);
			if(kbhit())
			{
				if(p==getch())
				{
								system("pause");
				}
						}
			break;
		case 't':
			timer(c1);
			break;
			case 'a':alarm(c1);
	int f,t;
	l1.get();
	system("cls");
	l2.get();
	system("");
	if(l1>l2)
	{
	Beep(l1.f,l2.t);
}
cout<<"\n\n\n\t\t\t   PRESS D FOR DIGITAL WATCH\n\t\t\t   PRESS S FOR STOP WATCH \n\t\t\t   PRESS T FOR TIMER\n\t\t\t PRESS A FOR ALARM\n\t\t\t  PRESS 0 TO EXIT\n"<<endl;
cout<<"\n\n\n\n\n\t\t\t   ENTER YOUR CHOICE : "<<endl;
			break;
			default: 
			cout<<"Invalid entry";
			break;
			}
			digitalclock(c1);
	        stopwatch(c1);
	        timer(c1);
	        alarm(l1);
	return 0;
}
