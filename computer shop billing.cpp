#include <iostream>
#include<conio.h>
#include<fstream>
#include<process.h>
#include<string.h>
using namespace std;
int ch,itemcount=0;
char username[20] , password[20],cust_name[20] ,cust_email[30], cust_address[80];

long int total=0;
long long int cust_phone;
ofstream filout;
void ask();
void subtotal(long int price);
void login();
void menu();
void customer();
void processor();
void motherboard();
void ram();
void hdd();
void gpu();
void bill();
int main()
{   
    filout.open("file.txt",ios::out);
    cout<<"Welcome to COMPUTER SHOP!!! \n";
    login();
    customer();
    menu();
    filout.close();
    return 0;
}
void ask()
{
  char cho;
  cout<<"Do you want to buy anything else (y/n) ? - " ;
  cin>>cho;
  if(cho=='y'||cho=='Y')
    menu();
  else
    bill();
}
void subtotal(long int price)
{
  total = total + price;
}
void login()
{

    cout<<"Enter Username - ";
    cin>>username;
    
    cout<<"Enter Password - ";
    cin>>password;
}
void customer()
{
	cout<<"\nEnter Customer's name - ";
	cin>>cust_name;
	cout<<"Enter Customer's phone number - ";
	cin>>cust_phone;
	cout<<"Enter Customer's email ID - ";
	cin>>cust_email;
}
void menu()
{   	
	
	cout<<"\nWhat do you want to buy ? - ";
    cout<<"\n1. Processor ";
    cout<<"\n2. Motherboard ";
    cout<<"\n3. Ram ";
    cout<<"\n4. Hard Disk ";
    cout<<"\n5. Graphic Card ";
    cout<<"\nEnter your choice (1-5) - ";
    cin>>ch;
    switch(ch)
    {
      case 1 : processor();
		break;
      case 2 : motherboard();
		break;
      case 3 : ram();
		break;
      case 4 : hdd();
		break;
      case 5 : gpu();
		break;
      default : cout<<"Invalid input !";
		break;
    }

}
void processor()
{
    cout<<"\nSelect Model - ";
    cout<<"\n1. Intel i3\t\tPrice - Rs5,600 ";
    cout<<"\n2. Intel i5\t\tPrice - Rs29,800";
    cout<<"\n3. Intel i7\t\tPrice - Rs93,700";
    cout<<"\n4. Intel i9\t\tPrice - Rs1,19,000";
    cout<<"\n5. Main Menu";
    cout<<"\nEnter your choice (1-5) - ";
    cin>>ch;
    itemcount+=1;
    switch(ch)
    {
      case 1 : subtotal(5600);
    filout<<"\n Intel i3                             Price - Rs5,600 ";
		ask();
		break;
      case 2 : subtotal(29800);
    filout<<"\n Intel i5                             Price - Rs29,800";
		ask();
		break;
      case 3 : subtotal(93700);
    filout<<"\n Intel i7                             Price - Rs93,700";
    ask();
		break;
      case 4 : subtotal(119000);
    filout<<"\n Intel i9                             Price - Rs1,19,000";
		ask();
		break;
      case 5 : menu();
		break;
      default : cout<<"Invalid input !";
		ask();
		break;
    }
}
void motherboard()
{
  cout<<"\nSelect Model - ";
  cout<<"\n1. ASUS Motherboard              Price - Rs5,480";
  cout<<"\n2. Gigabyte Motherboard          Price - Rs3,090";
  cout<<"\n3. MSI Motherboard               Price - Rs4,700";
  cout<<"\n4. Main Menu";
  cout<<"\nEnter your choice (1-4) - ";
  cin>>ch;
  itemcount+=1;
  switch(ch)
  {
    case 1 : subtotal(5480);
        filout<<"\n ASUS Motherboard                     Price - Rs5,480";
	      ask();
	      break;
    case 2 : subtotal(3090);
        filout<<"\n Gigabyte Motherboard                 Price - Rs3,090";
	      ask();
	      break;
    case 3 : subtotal(4700);
	filout<<"\n MSI Motherboard                      Price - Rs4,700";
	      ask();
	      break;
    case 4 : menu();
	      break;
    default : cout<<"Invalid input !";
	      ask();
	      break;
  }
}
void ram()
{
  cout<<"\nSelect Model - ";
  cout<<"\n1. 2GB Ram                     Price - Rs1,100";
  cout<<"\n2. 4GB Ram                     Price - Rs2,400";
  cout<<"\n3. 8GB Ram                     Price - Rs4,500";
  cout<<"\n4. 16GB Ram                    Price - Rs8,100";
  cout<<"\n5. Main Menu";
  cout<<"\nEnter your choice (1-5) - ";
  cin>>ch;
  itemcount+=1;
  switch(ch)
  {
    case 1 : subtotal(1000);
        filout<<"\n 2GB Ram                              Price - Rs1,100";
	      ask();
	      break;
    case 2 : subtotal(2200);
        filout<<"\n 4GB Ram                              Price - Rs2,400";
	      ask();
	      break;
    case 3 : subtotal(4500);
        filout<<"\n 8GB Ram                              Price - Rs4,500";
	      ask();
	      break;
    case 4 : subtotal(8100);
        filout<<"\n 16GB Ram                             Price - Rs8,100";
	      ask();
	      break;
    case 5 : menu();
	      break;
    default : cout<<"Invalid input !";
	      ask();
	      break;
  }
}
void hdd()
{
  cout<<"\nSelect Model - ";
  cout<<"\n1. 128GB Hard Disk              Price - Rs790";
  cout<<"\n2. 320GB Hard Disk              Price - Rs1,230";
  cout<<"\n3. 500GB Hard Disk              Price - Rs1,500";
  cout<<"\n4. 1TB Hard Disk                Price - Rs3,900";
  cout<<"\n5. Main Menu";
  cout<<"\nEnter your choice (1-5) - ";
  cin>>ch;
  itemcount+=1;
  switch(ch)
  {
    case 1 : subtotal(790);
    filout<<"\n 128GB Hard Disk                      Price - Rs790";
	      ask();
	      break;
    case 2 : subtotal(1230);
    filout<<"\n 320GB Hard Disk                      Price - Rs1,230";
	      ask();
	      break;
    case 3 : subtotal(1500);
    filout<<"\n 500GB Hard Disk                      Price - Rs1,500";
	      ask();
	      break;
    case 4 : subtotal(3900);
    filout<<"\n 1TB Hard Disk                        Price - Rs3,900";
	      ask();
	      break;
    case 5 : menu();
	      break;
    default : cout<<"Invalid input !";
	      ask();
	      break;
  }
}
void gpu()
{
  cout<<"\nSelect Model - ";
  cout<<"\n1. Nvidia GTX 1050              Price - Rs12,400";
  cout<<"\n2. Nvidia GTX 1060              Price - Rs23,500";
  cout<<"\n3. Nvidia GTX 1070              Price - Rs51,699";
  cout<<"\n4. Nvidia GTX 1080              Price - Rs79,990";
  cout<<"\n5. Main Menu";
  cout<<"\nEnter your choice (1-5) - ";
  cin>>ch;
  itemcount+=1;
  switch(ch)
  {
    case 1 : subtotal(12400);
    filout<<"\n Nvidia GTX 1050                      Price - Rs12,400";
	      ask();
	      break;
    case 2 : subtotal(23500);
    filout<<"\n Nvidia GTX 1060                      Price - Rs23,500";
	      ask();
	      break;
    case 3 : subtotal(51699);
    filout<<"\n Nvidia GTX 1070                      Price - Rs51,699";
	      ask();
	      break;
    case 4 : subtotal(79990);
    filout<<"\n Nvidia GTX 1080                      Price - Rs79,990";
	      ask();
	      break;
    case 5 : menu();
	      break;
    default : cout<<"Invalid input !";
	      ask();
	      break;
  }
}
void bill()
{ char pass[20];
  int res;
  cout<<"\nEnter delivery address(with-in 80 characters) - ";
  cin>>cust_address;
  cout<<"\nEnter admin's Password - ";
  cin>>pass;
  res = strcmp(password, pass); 
  if(res==0)
 {
  cout<<"\nName of the customer - "<<cust_name;
  cout<<"\nPhone number of the customer - "<<cust_phone;
  cout<<"\nEmail of the customer - "<<cust_email;
  cout<<"\nDelivery address - "<<cust_address;
  cout<<"\nTotal number of items brought - "<<itemcount;
  cout<<"\nTotal money to be paid - "<<total;
  
  filout<<"\nName of the customer - "<<cust_name;
  filout<<"\nPhone number of the customer - "<<cust_phone;
  filout<<"\nEmail of the customer - "<<cust_email;
  filout<<"\n Total number of items brought - "<<itemcount;
  filout<<"\n Total money to be paid - "<<total;
 }
 else
 {
   cout<<"Wrong Password !";
      bill();
    }
  getch();
}
