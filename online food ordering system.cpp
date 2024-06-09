#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int choice;
char temp;
int choose;
int  q1=0,q2=0,q3=0,q4=0,q5=0,q6=0,q7=0,q8=0,q9=0,q10=0,q11=0,q12=0,q13=0,q14=0,q15=0,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,bill=0;
string y,ye;    
class costumer_info
{
private:	
char name[20];
char address[100];
char contact[10];
int  bill[20];
public:
void start();
void show();
void menu1();
void menu2();
};

int main()
{
    void costumer_info::start()) 
	{
	
    cos:
    cout<<"\t\t\t\t\t\t Online Food ordering system"<<endl;	
    cout<<"Press 1 for costumer\n";
    cout<<"Press 2 for admin\n";
    cin>>choice;
    if(choice==1)
    {
    	void costumer_info::show()
    {
	
	show1:
	cout<<"\n\n\n\n";	
	cout<<"Press 1 for pizza menu\n";
	cout<<"Press 2 for chinese menu\n";
	cin>>choose;
	if(choose==1)
	{
		void costumer_info::menu1()
    {
	cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO ONLINE FOOD ORDERING SYSTEM =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Ham Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tikka (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;


    

 
ofstream write;
    write.open("order.txt",ios::app);   
if(!write)
{
	cout<<"file can not open"<<endl;
	exit (-1);
}

   a:
   	b:
   		c:
   	 cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
     cin>>ch;
    
    cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
  cin>>ye;
 
  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {
   	case 1:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>q1;
   	
   		a=480;
   		bill=bill+a*q1;
   		write<<"YOU ORDER  Veggie Supreme : 480";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<q1;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>q2;
   		
		b=440;
   		bill=bill+b*q2;
   		write<<"YOU ORDER  Exotica : 440";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<q2;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
   		cin>>q3;
   	
   		c=580;
   		bill=bill+c*q3;
   	    write<<"YOU ORDER  Chicken Sizzler : 580";
   		write<<" \n";
   		write<<"NUMBER OF Chicken Sizzler IS : "<<q3;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
   		cin>>q4;
   	
   		d=520;
   		bill=bill+d*q4;
   		write<<"YOU ORDER  Chrispy Chicken : 520";
   	    write<<" \n";
   		write<<"NUMBER OF Chrispy Chicken IS : "<<q4;
   		write<<"\n";
	    cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
   		cin>>q4;
   	
   		e=350;
   		bill=bill+e*q5;
   		write<<"YOU ORDER  Spaghetti : 350";
   		write<<" \n";
   		write<<"NUMBER OF Spaghetti IS : "<<q5;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT:";
   		cin>>q6;
   	
   		f=400;
   		bill=bill+f*q6;
   		write<<"YOU ORDER Country Feast : 400";
   		write<<"\n ";
   		write<<"NUMBER OF PIZZA IS : "<<q6;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT:";
   		cin>>q7;
   	
   		g=420;
   		bill=bill+g*q7;
   		write<<"YOU ORDER Tetrazzini : 420";
   		write<<"\n ";
   		write<<"NUMBER OF Tetrazzini IS : "<<q7;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  Tetrazzini "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>q8;
   	
   		h=540;
   		bill=bill+h*q8;
   		write<<"YOU ORDER Double Cheese : 540";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<q8;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	    cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
   		cin>>q9;
   	
		i=548;
		bill=bill+i*q9;
		write<<"YOU ORDER Makizushi : 548";
		write<<" \n";
		write<<"NUMBER OF Makizushi IS : "<<q9;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 10:
   		cout<<"\n\n\tHOW MANY HAM BURGER YOU WANT :";
   		cin>>q10;
   	
   		j=390;
   		bill=bill+j*q10;
   		write<<"YOU ORDER Ham Burger : 390";
   		write<<" \n";
   		write<<"NUMBER OF Ham Burger IS : "<<q10;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Ham Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   	    cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>q11;
   	
   		k=525;
   		bill=bill+k*q11;
   		write<<"YOU ORDER Margherita : 525";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<q11;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		cin>>q12;
   	
   		l=425;
   		bill=bill+l*q12;
   		write<<"YOU ORDER Fish 'n' Chips : 425";
   		write<<" \n";
   		write<<"NUMBER OF Fish 'n' Chips IS : "<<q12;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 13:
   		cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		cin>>q13;
   	
   		m=335;
   		bill=bill+m*q13;
   		write<<"YOU ORDER  Fajitas  : 335";
   		write<<" \n";
   		write<<"NUMBER OF Fajitas IS : "<<q13;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY TEMPURA YOU WANT :";
   		cin>>q14;
   	
   		n=324;
   		bill=bill+n*q14;
   		write<<"YOU ORDER Tempura : 324";
   		write<<" \n";
   		write<<"NUMBER OF Tempura IS : "<<q14;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  Tempura "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY HOT DOG YOU WANT :";
   		cin>>q15;
   	
   		o=360;
   		bill=bill+o*q15; 
   		write<<"YOU ORDER  Hot Dog : 360";
   		write<<"\n ";
   		write<<"NUMBER OF Hot Dog IS : "<<q15;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"===============Online Food Ordering System Thanks for Coming===============";
   	    exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	costumer_info a;
				 
            cout       << "\n\t\t\t********************************************************************\n";
			write      << "\n********************************************************************\n";
			cin.ignore();
            cout       << "\n\t\t\t Name : ";
			gets(a.name);
			write   << a.name<<"\n";
			cout       << "\n\t\t\t Address : ";
			write   << "Address : ";
			gets(a.address);
			write << a.address<<"\n";
			cout       << "\n\t\t\t Contact Number : ";
			write << "Contact Number : ";
			gets(a.contact);
			write << a.contact<<"\n";

   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
					cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
					cout << "\t\t\t\t\t\t\t|             Online Food Ordering System          |"<<endl;
					cout << "\t\t\t\t\t\t\t ================================================"<<endl;
					cout << endl;
					cout << endl;
                    cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
					cout << endl;
					cout << endl;
					cout << "\t\t\t\t\t\t\t  Cashier :  Zeeshan"<<endl;
					write<< "\t\t\t\t\t\t\t\t\t\t  your order will delever in 45 minutes ";
					cout << endl;
                    cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<bill<<endl;
                    write<<"\t\t\t\t\t\t\t ";
                    write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<bill<<"\n";
                    write<<"======================================================================================================================================================";
					cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   write.close();
}

	}
	else if(choose==2)
	{
		void costumer_info::menu2()
{
	cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO ONLINE FOOD ORDERING SYSTEM =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Chiken in Hot Garlic Sauce (Rs.699)\t\t[2] Hot And Sour Chiken(Rs.665)\t\t\t\t[3] Chicken Cashew Nuts (Rs.680)\n\t[4] Beijing Chicken (Rs.775)\t\t\t[5] Almond Chicken(Rs.799)\t\t\t\t[6] Beijing Beef (Rs.900)\n\t[7] Fish in Hot Garlic Sauce  (Rs.1200)\t\t[8] Prowns Speciality (Rs.1040)\t\t\t\t[9] Fish & Chips (5 Pcs) (Rs.775)\n\t[10] Buttered Fried Prawns (2 Pcs) (Rs.600)\t[11] Butterfly Prawns & Chips (4 Pcs)(Rs.525)\t\t[12] Family Feast (Rs.2699)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[13] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;

int  q1=0,q2=0,q3=0,q4=0,q5=0,q6=0,q7=0,q8=0,q9=0,q10=0,q11=0,q12=0,q13=0,q14=0,q15=0,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,bill=0;
     string y,ye;
    

 
ofstream write;
    write.open("order.txt",ios::app);   
if(!write)
{
	cout<<"file can not open"<<endl;
	exit (-1);
}

   a:
   	b:
   		c:
   	 cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
     cin>>ch;
    
    cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
  cin>>ye;
 
  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {
   	case 1:
   		cout<<"\n\n\tChiken in Hot Garlic Sauce (Rs.699):";
   		cin>>q1;
   	
   		a=699;
   		bill=bill+a*q1;
   		write<<"YOU ORDER Chiken in Hot Garlic Sauce  : 699";
   		write<<" \n";
   		write<<"NUMBER OF order IS : "<<q1;
   		write<<"\n";
   	    cout<<"\n\n\n\tyou order Chiken in Hot Garlic Sauce  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHot And Sour Chiken(Rs.665) :";
   		cin>>q2;
   		
		b=665;
   		bill=bill+b*q2;
   		write<<"YOU order Hot And Sour Chiken : 665";
   		write<<" \n";
   		write<<"NUMBER OF order IS : "<<q2;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU Order Hot And Sour Chiken"<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tChicken Cashew Nuts (Rs.680) :";
   		cin>>q3;
   	
   		c=680;
   		bill=bill+c*q3;
   	    write<<"YOU ORDER  Chicken Cashew Nuts : 680";
   		write<<" \n";
   		write<<"NUMBER OF Chicken Cashew Nuts  : "<<q3;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Chicken Cashew Nuts  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MANY Beijing Chicken (Rs.775):";
   		cin>>q4;
   	
   		d=775;
   		bill=bill+d*q4;
   		write<<"YOU ORDER  Beijing Chicken  : 775";
   	    write<<" \n";
   		write<<"NUMBER OF Beijing Chicken  : "<<q4;
   		write<<"\n";
	    cout<<"\n\n\n\tYOU ORDER Beijing Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW MANY Almond Chicken:";
   		cin>>q4;
   	
   		e=799;
   		bill=bill+e*q5;
   		write<<"YOU ORDER  Almond Chicken : 799";
   		write<<" \n";
   		write<<"NUMBER OF Almond Chicken: "<<q5;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  Almond Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY Beijing Beef :";
   		cin>>q6;
   	
   		f=900;
   		bill=bill+f*q6;
   		write<<"YOU ORDER Beijing Beef : 900";
   		write<<"\n ";
   		write<<"NUMBER OF Beijing Beef : "<<q6;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Beijing Beef  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY Fish in Hot Garlic Sauce:";
   		cin>>q7;
   	
   		g=1200;
   		bill=bill+g*q7;
   		write<<"YOU ORDER Fish in Hot Garlic Sauce : 1200";
   		write<<"\n ";
   		write<<"NUMBER OF Fish in Hot Garlic Sauce : "<<q7;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Fish in Hot Garlic Sauce "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY Prowns Speciality (Rs.1040) :";
   		cin>>q8;
   	
   		h=1040;
   		bill=bill+h*q8;
   		write<<"YOU ORDER Prowns Speciality  : 1040";
   		write<<" \n";
   		write<<"NUMBER OF Prowns Speciality : "<<q8;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Prowns Speciality "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	    cout<<"\n\n\tHOW MANY Fish & Chips (5 Pcs) (Rs.775):";
   		cin>>q9;
   	
		i=775;
		bill=bill+i*q9;
		write<<"YOU ORDER Fish & Chips (5 Pcs) : 775";
		write<<" \n";
		write<<"NUMBER OF Fish & Chips (5 Pcs) : "<<q9;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Fish & Chips (5 Pcs) "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 10:
   		cout<<"\n\n\tHOW MANY Buttered Fried Prawns (2 Pcs) (Rs.600) :";
   		cin>>q10;
   	
   		j=600;
   		bill=bill+j*q10;
   		write<<"YOU ORDER Buttered Fried Prawns (2 Pcs)  : 600";
   		write<<" \n";
   		write<<"NUMBER OF Buttered Fried Prawns (2 Pcs)  : "<<q10;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Buttered Fried Prawns (2 Pcs)  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   	    cout<<"\n\n\tHOW MANY Butterfly Prawns & Chips (4 Pcs) :";
   		cin>>q11;
   	
   		k=525;
   		bill=bill+k*q11;
   		write<<"YOU ORDER Butterfly Prawns & Chips (4 Pcs) : 525";
   		write<<" \n";
   		write<<"NUMBER OF Butterfly Prawns & Chips (4 Pcs) : "<<q11;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Butterfly Prawns & Chips (4 Pcs)"<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tFamily Feast  :";
   		cin>>q12;
   	
   		l=2699;
   		bill=bill+l*q12;
   		write<<"YOU ORDER Family Feast : 2699";
   		write<<" \n";
   		write<<"NUMBER OF Family Feast  "<<q12;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Family Feast  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 13:
   		cout<<"===============Online Food Ordering System Thanks for Coming===============";
   	    exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	costumer_info a;
				 
            cout       << "\n\t\t\t********************************************************************\n";
			write      << "\n********************************************************************\n";
			cin.ignore();
            cout       << "\n\t\t\t Name : ";
			gets(a.name);
			write   << a.name<<"\n";
			cout       << "\n\t\t\t Address : ";
			write   << "Address : ";
			gets(a.address);
			write << a.address<<"\n";
			cout       << "\n\t\t\t Contact Number : ";
			write << "Contact Number : ";
			gets(a.contact);
			write << a.contact<<"\n";

   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
					cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
					cout << "\t\t\t\t\t\t\t|             Online Food Ordering System          |"<<endl;
					cout << "\t\t\t\t\t\t\t ================================================"<<endl;
					cout << endl;
					cout << endl;
                    cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
					cout << endl;
					cout << endl;
					cout << "\t\t\t\t\t\t\t  Cashier :  Zeeshan"<<endl;
					write<< "\t\t\t\t\t\t\t\t\t\t  your order will delever in 45 minutes ";
					cout << endl;
                    cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<bill<<endl;
                    write<<"\t\t\t\t\t\t\t ";
                    write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<bill<<"\n";
                    write<<"======================================================================================================================================================";
					cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   write.close();

}

	}
	else
	{
		goto show1;
	}
	
}
	}
	else if(choice==2)
	{
	d:	
    int adId=1353;
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------";
	cout<<"\n\t\t\t\t\t\t\tEnter Login Id = ";
	cin>>adId;
	cout<<"\t\t\t\t\t\t\t---------------------";
    if(adId!=1353)
	{
        cout<<"\nDon't try to be smart.....Enter correct id\n";
		goto d;
    }
	else   
	{
	    z:
	    int pwd=2222;  
	    	p:
			cout<<"\n\n\n\t\t\t\t\t\t\tPassword = ";
			cin>>pwd; 
			
      		 if(pwd!=2222)
      		{
      			cout<<"wrong password"<<endl;
      			goto p;
			}
			else
			{
				ifstream write;
	    		write.open("order.txt", ios::in);
	            if(!write)
	    		{
	    			cout<<"\n\t\t\t Such File Does Not Exist... \n";
				}
				else
				{		   
					cout<<"\n\n\n\n...................................Information in ....................................\n\n\n\n";
					string info;
					char copyname[20];
					int i;
					cout<<"Enter costumer Name : ";
					cin >> copyname;
					while (write.good())
					{
						getline(write,info);                  
						if(info == copyname)
						{
							for(i=1; i<=4; i++)
							{
								cout << info << endl;
								getline(write,info);
							}
						}
				    }
				}
		write.close();
      	}
	}
	
    }
    else
	{
		goto cos;
	}	
        


} 
}






