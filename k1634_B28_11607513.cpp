//Kamini mehra
//k1634 B28

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include<fstream>
using namespace std;
int main() {
ifstream sun;
system("COLOR 5f");
//system("pause");
//system("cls");
char ch;
sun.open("intro.txt");
while(!sun.eof()){
sun.get(ch);cout<<ch;}
sun.close();
int a,m,l,no,i,login=0,flag=0,j,pro,pay,bill=0,otp,bank,vcc,aj,logout;
long double phone,cardno;
string user,pass,intid,passid,fname,lname,exp;
char c;
while(true){


cin>>a;
switch(a){
c6: case 1://home
	system("cls");
	if(login==1){
		cout<<"\nYou are currently signed in\n User id: "<<user<<"\n\n";
	}
	
	sun.open("home.txt");
	while(!sun.eof()){
	sun.get(ch);cout<<ch;}
	sun.close();
break;
case 2://show timing
	system("cls");
		if(login==1){
		cout<<"\nYou are currently signed in\n User id: "<<user<<"\n\n";
	}
	sun.open("showtiming.txt");
	while(!sun.eof()){
	sun.get(ch);cout<<ch;}
	sun.close();
break;
case 3://buy ticket
	reset:
	system("cls");
		if(login==1){
		cout<<"\nYou are currently signed in\n User id: "<<user<<"\n\n";
	}
	sun.open("buy.txt");
	while(!sun.eof()){
	sun.get(ch);cout<<ch;}
	sun.close();
bg:	cin>>m;
	
	if(m==1)
	cout<<"You Have Selected 'Fast  & Furious 8'";
	else if(m==2)
	cout<<"You Have Selected 'Beauty and the Beast'";
	else if(m==3)
	cout<<"You Have Selected 'The Boss Baby'";
	else if(m==4)
	cout<<"You Have Selected 'Get Out'";
	else if(m==5)
	cout<<"You Have Selected 'Moana'";
	else if(m==6)
	cout<<"You Have Selected 'Smurfs: The Lost Village'";
	else if(m==9)
	goto end1;
	else if(m==8)
	goto help;
	else 
	{cout<<"You Have Selected Invalid Movie !\nYou Have to Try Again->"; goto bg;}
	cout<<"\nPress 'Y' to proceed else press any key to Reset:";
	cin>>c;
	if(c=='y' || c=='Y'){
		cout<<"\n\nWe provide three Types Of luxuries\nHave Your Choise:\n1.Diamond (300INR per seat)\n2.Gold \t  (200INR per seat)\n3.Silver  (100INR per seat)\n";
	r:	cin>>l;
		if(l==1) cout<<"\nYou Have choose Diamond Luxury";
		else if(l==2) cout<<"\nYou Have choose Gold Luxury";
		else if(l==3) cout<<"\nYou Have choose Silver Luxury";
		else if(l>3 || l<1)
		{cout<<"Try Again->";goto r;
		}
		
		cout<<"\n\nSeats Layout:   \t (AVIL: Available Seats)\n\n";
		for( i=1;i<=30;i++){
			if(i<=10)
			cout<<"AVIL-"<<i<<"    ";
			else if(i<=20&&i>10)
		cout<<"AVIL-"<<i<<"   ";
			else
			cout<<"BOOKED-"<<i<<" "; 
		if(i==10 || i==20 || i==30)
		cout<<endl;
	}
		cout<<endl<<"How Many Seats You Want to Book:";
		cin>>no;
		int a[no];
		cout<<"Enter Seat Numbers:";
		int temp;
		for(i=0;i<no;i++){
		s:	cin>>temp;
			for(j=0;j<i;j++){
				if(temp == a[j])
				flag =1;
			}
			if(temp<=20 && flag ==0){
			a[i]=temp;
			}
			else if(temp>30){
				cout<<"Invalid Seat\nReenter seat_no->\n";
				flag = 0;
				goto s;
			}
			else{
				cout<<"Seat already Booked\nReenter seat_no->\n";
				flag = 0;
				goto s;
			}
		}
		cout<<"\nSeats booked by you:\n";
		for(i=0;i<no;i++){
			cout<<"SEAT-"<<a[i]<<" ";
		}cout<<endl;
		if(l==1)
		bill=300*no;
		else if(l==2)
		bill=200*no;
		else if(l==3)
		bill=100*no;
	system("pause");
		if(login==0){
			cout<<"\nTo Proceed plz Sign in";
			cout<<"\n1.Sign In\n2.Sign Up\n3.Exit\n";
			t: cin>>pro;
			if(pro==1){
			l:	
				cout<<"\n***Login Section***\n";
				cout<<" Enter Username:";
				cin>>user;
				cout<<" Enter Password:";
				cin>>pass;
				login =1;
			}
			else if(pro == 2){
				cout<<"Your First name:";cin>>fname;
				cout<<"Your Last name:";cin>>lname;
				cout<<"Enter Email id:";cin>>user;
				cout<<"Enter Phone No:";cin>>phone;
				cout<<"Enter Password:";cin>>pass;
				cout<<"\nYou have Succesfully Registered.\n\nYour userid: "<<user<<"\nYour Password: "<<pass<<"\n\n(Note:Use your id and password to login)\n";
				system("pause");
				goto l;
			}
			else if(pro == 3){goto end1;
			}
			else {cout<<"Enter Valid Choise:";goto t;
			}
			cout<<"\nYou Have Login Succesfully.\nWelcome "<<user;
	des:	cout<<"\nChoose Mode Of Payment\n";
			cout<<"\n1.Internet Banking\t2.Credit Card\t3.Debit Card\t4.Cancel Payment"<<endl;
			py:cin>>pay;
			if(pay==4){
				goto end1;
			}
			if(pay>4 || pay<1){
				cout<<"\nChoose Valid Mode\n";
				goto py;
			}
			cout<<"Select Your Bank:\n1.Bank of India \t2.Punjab National Bank\t 3.Patiala Bank\t4.Central Bank of India\n5.Bank of Maharashtra\t6.Canara Bank\t7.ICICI Bank 8.Axis bank\t9.HDFC Bank\n";    
			cin>>bank;
			if(pay==1){
				cout<<"\n\nEnter Userid:";
				cin>>intid;
				cout<<"Enter Password:";
				cin>>passid;
		jmp:	cout<<"\nPayment of Rs "<<bill<<" ";
			    cout<<"\nEnter OTP received:";
				cin>>otp;
				cout<<"\nYour seats have been Succesfully Booked.\n";	
				system("pause");
				system("cls");
				goto c6;			
			}
			if(pay==2 || pay==3){
				cout<<"\n**Card Details**\nCard No: ";cin>>cardno;
				cout<<"Expiry Date (mm/yr) : ";cin>>exp;
				cout<<"vcc: ";cin>>vcc;
				goto jmp;
			}
		}
		else if(login == 1){
			goto des;
		}
	}
	else 
	goto reset;
break;
case 4://help
help:system("cls");
	sun.open("help.txt");
	while(!sun.eof()){
	sun.get(ch);cout<<ch;}
	sun.close();
break;
case 5://login & signup
				system("cls");
				if(login==0){
		  		sun.open("login.txt");
				while(!sun.eof()){
				sun.get(ch);cout<<ch;}
				sun.close();
				cin>>aj;
				if(aj==1){
		apu:	cout<<"\n***Login Section***\n";
				cout<<" Enter Username:";
				cin>>user;
				cout<<" Enter Password:";
				cin>>pass;
				login =1;
				cout<<"Welcome "<<user<<"\n";
				system("pause");
				goto c6;
				}
				else if(aj==2)
				{
				cout<<"Your First name:";cin>>fname;
				cout<<"Your Last name:";cin>>lname;
				cout<<"Enter Email id:";cin>>user;
				cout<<"Enter Phone No:";cin>>phone;
				cout<<"Enter Password:";cin>>pass;
				cout<<"\nYou have Succesfully Registered.\n\nYour userid: "<<user<<"\nYour Password: "<<pass<<"\n\n(Note:Use your id and password to login)\n";
				system("pause");
				goto apu;
				}
			}
			 else if(login==1){
			 	sun.open("menu.txt");
				while(!sun.eof()){
				sun.get(ch);cout<<ch;}
				sun.close();
				cout<<"\n\nWelcome "<<user<<" \n\t\tPress 9 to Logout";
				cin>>logout;
				if(logout==9){
					login = 0;
					cout<<"Logout Succesfully";
				}
			 }
break;	
case 6://exit
end1:cout<<"\nThanks for Using our services";
	goto end;	
break;
}
}
getch();
end: return 0;
}
