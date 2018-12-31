#include<iostream>
#include<conio.h>
#include<windows.h>//For Sleep And System clear==>Sleep(nano second),system("cls")
using namespace std;
class Calender
{
  private:
    int no,a,b,c;
    char d;
	public:
	void opt()
	{
		 cout<<"Guideline ==> \n";
 cout<<"1) Press [M] or [m] For Monday\n";
 Sleep(900);
 cout<<"2) Press Small [t] For Tuesday\n";
 Sleep(900);
 cout<<"3) Press [W] or [w] For Wednesday\n";
 Sleep(900);
 cout<<"4) Press Large [T] For Thursday\n";
 Sleep(900);
 cout<<"5) Press [F] or [f] For Friday\n";
 Sleep(900);
 cout<<"6) Press Small [s] For Saturday\n";
 Sleep(900);
 cout<<"7) Press Large [S] For Sunday\n";
		}
 void inp()
 {
 	cout<<"Input ==> \n\t";
 cout<<"Plzz Enter Present Day In Single Alphabet ==> ";
 cin>>d;
 cout<<"\n\tEnter Number Of [Days>=7] To Find Future Day ==> ";
 cin>>no;
 a=no/7;
 b=a*7;
 c=no-b;
			 }
 void processing()
 {
 	cout<<"\n\t\t\tProcessing ";
 Sleep(500);
 cout<<"+";
 Sleep(500);
 cout<<"+";
 Sleep(500);
 cout<<"+";
 Sleep(500);
 cout<<"+";
 Sleep(500);
 cout<<"+";
 Sleep(500);
 cout<<"+";
 Sleep(500);
 cout<<"+";
 Sleep(500);
 cout<<"+";
 Sleep(500);
 cout<<"+\n";
 system("cls");
						  }
	void out()
	{
  cout<<"Output ==>\n";
 cout<<"Quetient Is ==> "<<a<<endl;
  cout<<"Reminder Is ==> "<<c<<endl<<" \n";	
												   }					  			 			
int condition()
{
  if(d=='M'||d=='m')
 {
  switch(c)
 {
 	case 0:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Sunday]";
 		break;
 	case 1:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Monday]";
 		break;
 	case 2:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Tuesday] ";
		break;
	case 3:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Wednesday] ";
	    break;
	case 4:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Thursday] ";
	    break;
	case 5:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Friday] ";
	    break;
	case 6:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Saturday] ";
	    break;
	case 7:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Sunday] ";					
	 }		
 }
 if(d=='t')
 {
  switch(c)
 {
 	case 0:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Monday]";
 		break;
 	case 1:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Tuesday]";
 		break;
 	case 2:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Wednesday] ";
		break;
	case 3:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Thursday]  ";
	    break;
	case 4:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Friday]";
	    break;
	case 5:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Saturday] ";
	    break;
	case 6:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Sunday] ";
	    break;
	case 7:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Monday] ";					
	 }		
 }
 if(d=='W'||d=='w')
 {
  switch(c)
 {
 	case 0:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Tuesday]";
 		break;
 	case 1:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Wednesday]";
 		break;
 	case 2:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Thursday] ";
		break;
	case 3:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Friday]  ";
	    break;
	case 4:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Saturday]";
	    break;
	case 5:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Sunday] ";
	    break;
	case 6:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Monday] ";
	    break;
	case 7:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Tuesday]";					
	 }		
 }
 if(d=='T')
 {
  switch(c)
 {
 	case 0:
 		   cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Wednesday]";
 		   break;
 	case 1:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Thursday]";
 		break;
 	case 2:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Friday]  ";
		break;
	case 3:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Saturday] ";
	    break;
	case 4:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Sunday]";
	    break;
	case 5:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Monday] ";
	    break;
	case 6:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Tuesday] ";
	    break;
	case 7:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Wednesday]";					
	 }		
 }
  if(d=='F'||d=='f')
 {
  switch(c)
 {
 	case 0:
 	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Thursday]";	
		   break;	
 	case 1:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Friday]";
 		break;
 	case 2:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Saturday]  ";
		break;
	case 3:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Sunday] ";
	    break;
	case 4:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Monday] ";
	    break;
	case 5:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Tuesday] ";
	    break;
	case 6:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Wednesday] ";
	    break;
	case 7:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Thursday]";					
	 }		
 }
   if(d=='s')
 {
  switch(c)
 {
 	case 0:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Friday] ";
 		break;
 	case 1:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Saturday]";
 		break;
 	case 2:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Sunday]   ";
		break;
	case 3:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Monday] ";
	    break;
	case 4:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Tuesday] ";
	    break;
	case 5:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Wednesday] ";
	    break;
	case 6:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Thursday] ";
	    break;
	case 7:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Friday] ";					
	 }		
 }
 if(d=='S')
 {
  switch(c)
 {
 	case 0:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Saturday] ";
		 break;	
 	case 1:
 		cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Sunday] ";
 		break;
 	case 2:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Monday]   ";
		break;
	case 3:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Tuesday] ";
	    break;
	case 4:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Wednesday] ";
	    break;
	case 5:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Thursday] ";
	    break;
	case 6:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Friday] ";
	    break;
	case 7:
	    cout<<"After "<<no<<"Days ==> Day Of Week Is ==> [Saturday] ";					
	 }		
 }	
}
};
int main()
{
	Calender obj1,obj2;
	obj1.opt();
	obj1.inp();
	obj2.processing();
	obj1.out();
	obj1.condition();
	getch();
}

