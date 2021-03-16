#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<time.h>
#include<graphics.h>
#include<dos.h>
using namespace std;
void carlos()     //Introduction page of the website.(graphics usage)
{
	void welcome();
	void password();
	void home();
	void story();
	void menu();
	void shop();
	void icecream();
	void contact();
	clrscr();
	int gm,gd=DETECT;
	detectgraph(&gm,&gd);
	initgraph(&gm,&gd,"C:\\TURBOC3\\BGI");
	cleardevice();
	int i,j,k=1;
	for(i=1,j=475;i<75,j>350;i+=12,j-=12)
	{
	setcolor(k);
	delay(50);
	rectangle(i,i,j+150,j);
	k++;
	if(k==15)
	k=1;
	}
	setcolor(15);
	settextstyle(1,0,6);
	outtextxy(225,185,"CARLOS");
	settextstyle(1,0,3);
	outtextxy(231,245,"Family Bakery");
	getch();
	cleardevice();
	closegraph();
}

void welcome() //Welcome page after the introduction.(graphics usage)
{
	void welcome();
	void password();
	void home();
	void story();
	void menu();
	void shop();
	void icecream();
	void contact();
	int gm,gd=DETECT;
	detectgraph(&gm,&gd);
	initgraph(&gm,&gd,"C:\\TURBOC3\\BGI");
	setcolor(3);
	rectangle(118,170,526,271);
	setcolor(11);
	rectangle(120,172,524,269);
	setcolor(1);
	rectangle(122,174,522,267);
	setcolor(9);
	rectangle(124,176,520,265);
	setcolor(15);
	settextstyle(4,0,8);
	outtextxy(130,170,"WELCOME");
	getch();
	closegraph();
}

void icecream() //Thanks page after shopping.(graphics usage)
{
	void password();
	void home();
	void story();
	void menu();
	void shop();
	void contact();
	int gm,gd=DETECT;
	detectgraph(&gm,&gd);
	initgraph(&gm,&gd,"C:\\TURBOC3\\BGI");
	setcolor(3);
	rectangle(29,74,631,416);
	setcolor(11);
	rectangle(31,76,629,414);
	setcolor(1);
	rectangle(33,78,627,412);
	setcolor(9);
	rectangle(35,80,625,410);
	setcolor(15);
	arc(150,150,360,180,50);
	arc(100,200,360,180,50);
	arc(200,200,360,180,50);
	setcolor(15);
	line(50,200,150,200);
	line(150,200,250,200);
	setcolor(15);
	line(45,201,255,201);
	line(45,201,150,400);
	line(255,201,150,400);
	setcolor(14);
	setfillstyle(9,14);
	floodfill(145,145,15);
	setcolor(11);
	setfillstyle(WIDE_DOT_FILL,11);
	floodfill(100,175,15);
	setcolor(13);
	setfillstyle(WIDE_DOT_FILL,13);
	floodfill(199,199,15);
	int i=0;
	for(i=1;i<50;i+=2)
	{
		setcolor(14);
		arc(150,150,360,180,i);
		setcolor(11);
		arc(100,200,360,180,i);
		setcolor(13);
		arc(200,200,360,180,i);
	}
	setcolor(6);
	setfillstyle(XHATCH_FILL,6);
	floodfill(145,215,15);
	setcolor(15);
	settextstyle(0,0,4);
	outtextxy(300,100,"THANK YOU");
	outtextxy(400,200,"FOR");
	outtextxy(300,300,"SHOPPING!!");
	getch();
	closegraph();
}

void trolley() //Let's Shop Page, before shopping.(graphics usage)
{
	void password();
	void home();
	void story();
	void menu();
	void shop();
	void contact();
	clrscr();
	int gm,gd=DETECT;
	detectgraph(&gm,&gd);
	initgraph(&gm,&gd,"C:\\TURBOC3\\BGI");
	setcolor(3);
	settextstyle(0,0,4);
	outtextxy(100,40,"LET'S SHOP !!!");
	setcolor(15);
	line(600,100,550,80);
	line(550,80,500,300);
	line(510,250,200,250);
	line(200,250,100,100);
	line(100,100,500,100);
	line(500,300,200,300);
	line(500,100,540,125);
	int i=1;
	for(i=1;i<26;i+=2)
	{
		circle(200,325,i);
		circle(500,325,i);
	}
	setcolor(7);
	setfillstyle(LTSLASH_FILL,7);
	floodfill(200,200,15);
	line(1,350,625,350);
	getch();
	cleardevice();
	closegraph();
}

void passwordacc()
{
	int q=0;
	while(q==0)
	{
		clrscr();
		gotoxy(28,11);
		cout<<"Please enter your password"<<endl;
		gotoxy(20,13);
		cout<<"(Password can have any character but it must"<<endl;
		gotoxy(24,14);
		cout<<" be at least seven charcaters long.)"<<endl;
		char b[20];
		int i=0,r=0;
		int x=35,y=16;
		gotoxy(x,y);
		for(r=getch(); r!=13;x++)
		{
			gotoxy(x,y);
			cout<<"*";
			b[i]=r;
			i++;
			r=getch();
		}
		b[i]='\0';
		for(i=0;b[i]!=0;i++)
		{
		};
		if(i<7)
		{
			clrscr();
			gotoxy(18,11);
			cout<<"The password must be at least 7 characters long."<<endl;
			getch();
		}
		else
		{
			clrscr();
			gotoxy(28,11);
			cout<<"Please confirm your password."<<endl;
			gotoxy(30,13);
			char u[20];
			int f=0,r=0;
			int x=35,y=14;
			for(r=getch(); r!=13;x++)
			{
				gotoxy(x,y);
				cout<<"*";
				u[f]=r;
				f++;
				r=getch();
			}
			u[f]='\0';
			if(strcmp(b,u)==0)
			{
				clrscr();
				gotoxy(24,11);
				cout<<"You are successfully registered. Thank You!";
				q=1;
			}
			else
			{
				clrscr();
				gotoxy(26,11);
				cout<<"The password entered again does not"<<endl;
				gotoxy(26,12);
				cout<<"match with the password set by you."<<endl;
				getch();
			}
		}
	}
}

int email()
{
		clrscr();
		char s[80];
		int i=0,j=0,k=0,flag1=0,flag2=0,flag3=0,pos1=0,pos2=0;
		gotoxy(28,11);
		cout<<"Please enter your email address."<<endl;
		gotoxy(35,12);
		gets(s);
		if((s[0]>'a'&&s[0]<'z')||(s[0]>'A'&&s[0]<'Z'))
		{
			for(i=0;s[i]!=0;i++)
			{
				if(s[i]=='@')
				{
					flag1+=1;
					if(flag1<2)
					pos1=i;
				}
				if(s[i]=='.')
				{
					flag2+=1;
					if(flag2<2)
					pos2=i;
				}
			}
			if((flag1==1)&&(flag2==1))
			{
				for(i=0;i<pos1;i++)
				{
					j++;
				}
				for(i=pos1+1;i<pos2;i++)
				{
					k++;
				}
				if((j>=3)&&(k>=3))
				{
					for(i=pos1+1;i<pos2;i++)
					{
						if((s[i]>0&&s[i]<48)||(s[i]>57&&s[i]<65)||(s[i]>90&&s[i]<97)||s[i]>122)
						{
							flag3=1;
						}
					}
					if(flag3==0)
					{
						if(s[pos2+1]=='c'&&s[pos2+2]=='o'&&s[pos2+3]=='m')
						{
							return 1;
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 3;
					}

				}
				else
				{
					return 4;
				}
			}
			else
			{
				return 5;
			}
		}
		else
		{
			return 6;
		}

}

void password() //Customer's username and password page.
{
	void trolley();
	void welcome();
	void password();
	void home();
	void story();
	void menu();
	void shop();
	void contact();
	void icecream();
	clrscr();
	char n,m[20];
	gotoxy(28,11);
	cout<<"DO YOU HAVE AN ACCOUNT? (y/n)";
	gotoxy(40,12);
	cin>>n;
	if(n=='y'||n=='Y')
	{
		clrscr();
		gotoxy(30,11);
		cout<<"Please enter your username.";
		gotoxy(33,12);
		gets(m);
		char a[]="letsbake",b[20];
		int i=0,s,t,r,flag=0;
		for(t=0;t<3;t++)
		{
			clrscr();
			int x=30,y=11;
			gotoxy(x,y);
			cout<<"Please enter the password."<<endl;
			y++;
			x=38;
			for(r=getch(); r!=13;x++)
			{
				gotoxy(x,y);
				cout<<"*";
				b[i]=r;
				i++;
				r=getch();
			}
			b[i]='\0';
			s=strcmp(b,a);
			if(s==0)
			{
				gotoxy(23,13);
				cout<<"You have successfully logged in!";
				cout<<" WELCOME !";
				break;
			}
			else if(s!=0)
			{
				flag++;
				gotoxy(24,13);
				cout<<"Password is incorrect.";
				cout<<"Please try again.";
				getch();
				i=0;
			}
		}
		if(flag==3)
		{
			clrscr();
			gotoxy(19,11);
			cout<<"It seems that you have forgotten";
			cout<<" your password.";
			gotoxy(29,12);
			cout<<"No Worries! LETS CONTINUE!";
		}
	}
	else if(n=='n'||n=='N')
	{
		clrscr();
		char m;
		int k=0;
		gotoxy(25,11);
		cout<<"Do you want to make an acount? (y/n)"<<endl;
		gotoxy(38,12);
		cin>>m;
		if(m=='y'||m=='Y')
		{
			while(k==0)
			{
				int c=email();
				switch(c)
				{
					case 1:
					gotoxy(38,15);
					cout<<"Thank You!"<<endl;
					getch();
					k=1;
					break;
					case 2:
					gotoxy(25,14);
					cout<<"The email should have correct domain."<<endl;
					getch();
					break;
					case 3:
					gotoxy(21,14);
					cout<<"The domain name cannot have special characters."<<endl;
					getch();
					break;
					case 4:
					gotoxy(18,14);
					cout<<"The email should be of the form - \"local-part@domain\"."<<endl;
					getch();
					break;
					case 5:
					gotoxy(18,14);
					cout<<"The email should be of the form - \"local-part@domain\"."<<endl;
					getch();
					break;
					case 6:
					gotoxy(12,14);
					cout<<"The first character of the email address should be an alphabet."<<endl;
					getch();
					break;
				}
			}
		passwordacc();
		}
		if(m=='n'||m=='N')
		{
			clrscr();
			gotoxy(30,11);
			cout<<"No Worries! LETS CONTINUE!";
		}
	}
	getch();
}
void home() //Home Page displaying various options of the website.
{
	void trolley();
	void welcome();
	void password();
	void home();
	void story();
	void menu();
	void shop();
	void contact();
	void icecream();
	clrscr();
	gotoxy(38,2);
	cout<<"HOME"<<endl;
	cout<<"________________________________________________________________________________"<<endl;
	cout<<endl;
	cout<<"\tCarlos Bakery is standing by to help you spread the sweetness..."<<endl;
	cout<<endl;
	cout<<"\t\t\tWhere do you wnat to head first?"<<endl;
	cout<<endl;
	cout<<"1) OUR STORY"<<endl;
	cout<<endl;
	cout<<"2) MAIN MENU"<<endl;
	cout<<endl;
	cout<<"3) SHOP"<<endl;
	cout<<endl;
	cout<<"4) CONTACT US"<<endl;
	cout<<endl;
	cout<<"5) LEAVE"<<endl;
	cout<<endl;
	cout<<"Please enter your choice: ";
	int c;
	cin>>c;
	if(c==1)
	{
		story();
	}
	if(c==2)
	{
	menu();
	}
	if(c==3)
	{
		shop();
	}
	if(c==4)
	{
		contact();
	}
	if(c==5)
	{
		exit(0);
	}
}

void story() //Function displaying bakery's legend.
{
	clrscr();
	void trolley();
	void carlos();
	void welcome();
	void password();
	void home();
	void story();
	void menu();
	void shop();
	void contact();
	void icecream();
	gotoxy(34,2);
	cout<<"OUR STORY"<<endl;
	gotoxy(1,3);
	cout<<"________________________________________________________________________________";
	cout<<endl;
	cout<<"The  spirit  that  sparked us to life in 1927  remains alive and ";
	cout<<"vibrant true to";
	cout<<"tradition that says -  "<<endl;
	cout<<"\"The sheer power of success is not achieving it, but in the";
	cout<<" ability to use it to build greater successes. \" "<<endl;
	cout<<endl;
	cout<<"Carlos was founded at 18, Park Street in the year  1927 by Mr";
	cout<<" and  Mrs J Carlos."<<"Within no time, it gained";
	cout<<" immense popularity  to become  the favourite bakery of";
	cout<<"the prosperous Britisher and the affluent Indian alike. "<<endl;
	cout<<endl;
	cout<<"A subtle combination of traditions and trends, our";
	cout<<" extensive collection of great"<<"appetizing  baked  goods";
	cout<<" and confections  delights the  senses of all age groups";
	cout<<"and people  from  different  walks of  life. The";
	cout<<"  secret of our excellence  lies"<<"in the meticulous ";
	cout<<" care and  detailed craft that goes into each and every one";
	cout<<" of"<<"our products. It is this sustained  commitment";
	cout<<" to excellence that has enabled us"<<"to carve a niche";
	cout<<" for ourselves across the length and breadth of India.  "<<endl;
	cout<<endl;
	cout<<"We welcome to the opportunity to impress you! "<<endl;
	cout<<endl;
	cout<<"Where do you want to go?"<<endl;
	cout<<"1) Back to HOME"<<"\t"<<"2) Main MENU"<<endl;
	int c;
	cin>>c;
	if (c==1)
	{
		home();
	}
	else
	{
		menu();
	}
}

void menu()  //Function displaying bakery's menu.
{
	void trolley();
	void carlos();
	void welcome();
	void password();
	void home();
	void story();
	void menu();
	void shop();
	void contact();
	void icecream();
	clrscr();
	gotoxy(34,2);
	cout<<"MAIN MENU"<<endl;
	gotoxy(1,3);
	cout<<"________________________________________________________________________________";
	cout<<endl;
	cout<<"   TRADITIONAL COOKIES        "<<"| "<<"    PIE FLAVOURS   "<<"| "<<"27) Mocha                  ";
	cout<<"1)  Chocolate Chip            "<<"| "<<"14) Apple          "<<"| "<<"28) Salted Caramel         ";
	cout<<"2)  M & M                     "<<"| "<<"15) Blueberry      "<<"| "<<"                           ";
	cout<<"3)  Peanut Butter Health      "<<"| "<<"16) Pumpkin        "<<"| "<<"    CAKE                   ";
	cout<<"4)  Oreo White Chocolate Chip "<<"| "<<"17) Peach          "<<"| "<<"29) Vanilla                ";
	cout<<"5)  Ginger Snap               "<<"| "<<"18) Banana         "<<"| "<<"30) Chocolate              ";
	cout<<"6)  Oatmeal Raisin            "<<"| "<<"19) Pecan          "<<"| "<<"31) Lemon                  ";
	cout<<"                              "<<"| "<<"20) Chocolate      "<<"| "<<"32) Red Velvet             ";
	cout<<"    MACRONS                   "<<"| "<<"21) Ricotta        "<<"| "<<"33) Black Forest           ";
	cout<<"7)  Coffee                    "<<"| "<<"22) Lemon          "<<"| "<<"34) Pumpkin                ";
	cout<<"8)  Dark Truffle              "<<"| "<<"                   "<<"| "<<"35) Strawberry             ";
	cout<<"9)  Passion Fruit             "<<"| "<<"    CUPCAKES       "<<"| "<<"36) Spice                  ";
	cout<<"10) Raspberry                 "<<"| "<<"23) Vanilla        "<<"| "<<"37) Kahlua                 ";
	cout<<"11) Pista                     "<<"| "<<"24) Chocolate      "<<"| "<<"38) Mocha                  ";
	cout<<"12) Rose                      "<<"| "<<"25) Lemon          "<<"| "<<"39) Carrot                 ";
	cout<<"13) Hazel Nut                 "<<"| "<<"26) Peanut Butter  "<<"| "<<"40) Toasted Coconut        ";
	cout<<endl;
	cout<<"Where do you want to go?"<<endl;
	cout<<"1) Back to HOME"<<"\t"<<"2) SHOP"<<endl;
	int c;
	cin>>c;
	if (c==1)
	{
		home();
	}
	else
	{
		shop();
	}
}

class prd
{
	private:
	int code;
	char name[40];
	int quan;
	int price;
	int Tamount;
	void computeT()
	{
	Tamount=(price*quan);
	}

	public:
	int returnT()
	{
		return Tamount;
	}
	void getdatac(int c)
	{
		code=c;
	}
	void getdatanp(char n[40], int p)
	{
		strcpy(name,n);
		price=p;
	}
	void getdataq(int q)
	{
		quan=q;
		computeT();
	}
	void putdatan()
	{
	cout<<name;
	}
	void putdataq()
	{
	cout<<quan;
	}
	void putdatap()
	{
	cout<<price;
	}
	void putdataT()
	{
	cout<<Tamount;
	}
};
prd p[40];
void shop() //Function for selection of the items,ordering and billing.
{
	void trolley();
	void carlos();
	void welcome();
	void password();
	void home();
	void story();
	void menu();
	void shop();
	void contact();
	void icecream();
	clrscr();
	trolley();
	clrscr();
	fstream f1;
	f1.open("Sales.dat",ios::app);
	gotoxy(34,2);
	cout<<"SHOP"<<endl;
	gotoxy(1,3);
	cout<<"________________________________________________________________________________";
	cout<<endl;
	cout<<"Do you want to go back to Menu? (y/n)"<<endl;
	char q; //Customer can refer back to menu using this option.
	cin>>q;
	if(q=='y')
	{
		menu();
	}
	else
	{
		int c=0, pr=0, q=0;
		char na[40];
		int a=0,total[40];
		char n='y';
		cout<<"Please enter the codes and quantity of the products you want to buy: "<<endl;
		cout<<endl;
		while(n=='y'||n=='Y')  //Loop checks which item the customer has selected.
		{
			cout<<"Product Code : ";
			cin>>c;
			p[a].getdatac(c);
			cout<<endl;
			switch(c)
			{
				case 1:
				strcpy(na,"Chocolate Chip Cookie ");
				pr=50 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 2:
				strcpy(na,"M & M Cookie ");
				pr=50 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 3:
				strcpy(na,"Peanut Butter Health Cookie");
				pr=50 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 4:
				strcpy(na,"Oreo White Chocolate Chip Cookie");
				pr=50 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 5:
				strcpy(na,"Ginger Snap Cookie");
				pr=50 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 6:
				strcpy(na,"Oatmeal Raisin Cookie");
				pr=50 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 7:
				strcpy(na,"Coffee Macron ");
				pr=70 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 8:
				strcpy(na,"Dark Truffle Macron ");
				pr=70 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 9:
				strcpy(na,"Passion Fruit Macron ");
				pr=70 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 10:
				strcpy(na,"Raspberry Macron");
				pr=70 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 11:
				strcpy(na,"Pista Macron");
				pr=70 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 12:
				strcpy(na,"Rose Macron");
				pr=70 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 13:
				strcpy(na,"Hazel Nut Macron");
				pr=70 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 14:
				strcpy(na,"Apple Pie ");
				pr=1000 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 15:
				strcpy(na,"Blueberry Pie ");
				pr=1100 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 16:
				strcpy(na,"Pumpkin Pie");
				pr=950 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 17:
				strcpy(na,"Peach Pie");
				pr=1000 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 18:
				strcpy(na,"Banana Pie");
				pr=950 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 19:
				strcpy(na,"Pecan Pie");
				pr=1000 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 20:
				strcpy(na,"Chocolate Pie");
				pr=1100 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 21:
				strcpy(na,"Ricotta Pie");
				pr=1050 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 22:
				strcpy(na,"Lemon Pie");
				pr=950 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 23:
				strcpy(na,"Vanilla Cupcake ");
				pr=75 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 24:
				strcpy(na,"Chocolate Cupcake ");
				pr=75 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 25:
				strcpy(na,"Lemon Cupcake ");
				pr=75 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 26:
				strcpy(na,"Peanut Butter Cupcake");
				pr=75 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 27:
				strcpy(na,"Mocha Cupcake");
				pr=75 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 28:
				strcpy(na,"Salted Caramel Cupcake");
				pr=75 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 29:
				strcpy(na,"Vanilla Cake ");
				pr=950 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 30:
				strcpy(na,"Chocolate Cake");
				pr=1000 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 31:
				strcpy(na,"Lemon Cake");
				pr=1200 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 32:
				strcpy(na,"Red Velvet Cake");
				pr=1600 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 33:
				strcpy(na,"Black Forest Cake");
				pr=950 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 34:
				strcpy(na,"Pumpkin Cake");
				pr=1100 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 35:
				strcpy(na,"Strawberry Cake");
				pr=1500 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 36:
				strcpy(na,"Spice Cake");
				pr=1800 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 37:
				strcpy(na,"Kahlua Cake");
				pr=1800 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 38:
				strcpy(na,"Mocha Cake");
				pr=1200 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 39:
				strcpy(na,"Carrot Cake ");
				pr=1100 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				case 40:
				strcpy(na,"Toasted Coconut Cake");
				pr=1700 ;
				p[a].getdatanp(na,pr);
				cout<<"Product Name : ";
				p[a].putdatan();
				cout<<endl;
				cout<<"Product Price: Rs. ";
				p[a].putdatap();
				cout<<endl;
				break;
				default:
				cout<<"Sorry! But you have entered a wrong code."<<endl;
			}
		if(c>0 && c<41) //statements are executed only if the
		{               //customer has entered the right code.
			cout<<"Product Quantity: ";
			cin>>q;
			p[a].getdataq(q);
			cout<<endl;
			cout<<"Total Amount: ";
			p[a].putdataT();
			cout<<endl;
		}
		else //On entering the wrong code, product details
		{    //will not be shown and this defect will not
		a--; //affect the final product numbering of the
		}    //invoice.

		int z=0;
		while(z==0)
		{
			cout<<"Wish to continue? (y/n)"<<endl;
			cin>>n;
			cout<<endl;
		       //	if(n>='0'&&n<='9')
			if(n=='y'||n=='Y'||n=='n'||n=='N')
			{
			z=1;
			}
			else
			{
			cout<<"Sorry! Not the right option..."<<endl;
			}
		}
		int w=p[a].returnT();
		f1<<c<<" "<<na<<" "<<pr<<" "<<q<<" "<<w<<'\n';
		a++;
	}
	f1.close();
	if(n=='n'||n=='N')  //Customer has selected all the
	{                   //items that he wants to buy.
		int Total[40];
		clrscr();
		gotoxy(34,2);
		cout<<"INVOICE"<<endl;
		gotoxy(1,3);
		cout<<"________________________________________________________________________________";
		cout<<endl;
		gotoxy(1,5);
		cout<<"PR-NO. ";
		gotoxy(7,5);
		cout<<"| PR-NAME ";
		gotoxy(45,5);
		cout<<"| PR-QUANTITY ";
		gotoxy(60,5);
		cout<<"| PR-PRICE ";
		gotoxy(72,5);
		cout<<"| AMOUNT ";
		gotoxy(7,6);
		cout<<"|  ";
		gotoxy(45,6);
		cout<<"|  ";
		gotoxy(60,6);
		cout<<"|  ";
		gotoxy(72,6);
		cout<<"| ";
		int i,x,y=7;
		for(i=0;i<a;i++)
		{
			x=1;
			gotoxy(x,y);
			cout<<i+1;
			x=7;
			gotoxy(x,y);
			cout<<"| ";
			p[i].putdatan();
			x=45;
			gotoxy(x,y);
			cout<<"| ";
			p[i].putdataq();
			x=60;
			gotoxy(x,y);
			cout<<"| ";
			p[i].putdatap();
			x=72;
			gotoxy(x,y);
			cout<<"| ";
			p[i].putdataT();
			y++;
		}
		x=1;
		gotoxy(x,y);
		cout<<"________________________________________________________________________________";
		cout<<endl;
		x=50;
		time_t tim; //create variable of time_t
		time(&tim); //pass variable tim to time function
		gotoxy(x,y+2);
		cout<< ctime(&tim); // this translates what was returned from time()
		cout<<endl;         //into a readable format and displays it.
		double amtTendered;
		double totalBill=0;
		for(i=0;i<a;i++)
		{
			int T=p[i].returnT();
			totalBill+=T;
		}
		double taxRate = 5.00;
		double tax = ((totalBill * taxRate)/100);
		double amountDue = (totalBill + tax);
		cout << "Total Bill             : Rs." << totalBill << endl;
		cout << "Tax Rate               : 5.00 %" << endl;
		cout << "Tax                    : Rs." << tax << endl;
		cout << "Total Amount Due       : Rs." << amountDue << endl;
		x=50;
		cout<<endl;
		gotoxy(x,y+8);
		cout<<"Payment on Delivery"<<endl;
		x=1;
		gotoxy(x,y+10);
		cout<<"________________________________________________________________________________";
		cout<<endl;
		getch();
		clrscr();
		icecream();
		clrscr();
		gotoxy(1,3);
		cout<<"________________________________________________________________________________";
		cout<<endl;
		gotoxy(28,13);
		cout<<"What do you want to do now?"<<endl;
		gotoxy(25,14);
		cout<<"1) Go back to HOME"<<"\t"<<"2) Leave"<<endl;
		gotoxy(42,16);
		int j;
		cin>>j;
		if(j==1)
		{
			home();
		}
		if(j==2)
		{
			exit(0);
		}
	}
	}
}
class info
{
	char name[30];
	char email[30];
	char phone[10];
	int choice;
	char message[500];

	public:
	void getdata(void);
};
info per;

void info::getdata(void)
{
	fstream f;
	f.open("Feedback.dat",ios::app);
	cout<<"NAME             : ";
	gets(name);
	cout<<endl;
	cout<<"EMAIL            : ";
	gets(email);
	cout<<endl;
	cout<<"PHONE NUMBER     : ";
	gets(phone);
	cout<<endl;
	cout<<"WHAT ARE YOU GETTING IN TOUCH ABOUT?"<<endl;
	cout<<"1) General Inquiry"<<endl;
	cout<<"2) Feedback"<<endl;
	cout<<"3) Press & Events"<<endl;
	cout<<"CHOICE           : ";
	cin>>choice;
	cout<<endl;
	cout<<"YOUR MESSAGE     : ";
	gets(message);
	cout<<endl;
	f<<name<<"     "<<email<<"     "<<phone<<"     "<<choice<<"     "<<message<<'\n';
	f.close();
}

void contact() //this function provides a chance to the user to give feedback.
{
	void trolley();
	void carlos();
	void welcome();
	void password();
	void home();
	void story();
	void menu();
	void shop();
	void contact();
	void icecream();
	clrscr();
	gotoxy(34,2);
	cout<<"CONTACT"<<endl;
	gotoxy(1,3);
	cout<<"________________________________________________________________________________";
	cout<<endl;
	cout<<"Phone Number: 033-22650755, 9874988992"<<endl;
	cout<<"Address     : 18 Park Street Kolkata-700071"<<endl;
	cout<<"Email ID    : feedback@carlos.com"<<endl;
	gotoxy(1,9);
	cout<<"________________________________________________________________________________";
	gotoxy(31,10);
	cout<<"GET IN TOUCH!"<<endl;
	cout<<endl;
	per.getdata();
	cout<<endl;
	cout<<"\t\t\t\t   "<<"SEND? (y/n)"<<endl;
	char n;
	cin>>n;
	if(n=='y'||n=='Y')
	{
		clrscr();
		gotoxy(34,2);
		cout<<"CONTACT"<<endl;
		gotoxy(1,3);
		cout<<"________________________________________________________________________________";
		cout<<endl;
		gotoxy(16,11);
		cout<<"Thank you for your message. We'll be in touch shortly."<<endl;
		gotoxy(28,13);
		cout<<"What do you want to do now?"<<endl;
		gotoxy(25,14);
		cout<<"1) Go back to HOME"<<"\t"<<"2) Leave"<<endl;
		gotoxy(42,16);
		int j;
		cin>>j;
		if(j==1)
		{
			home();
		}
		if(j==2)
		{
			exit(0);
		}
	}
	if(n=='n'||n=='N')
	{
		clrscr();
		gotoxy(34,2);
		cout<<"CONTACT"<<endl;
		gotoxy(1,3);
		cout<<"________________________________________________________________________________";
		cout<<endl;
		gotoxy(28,13);
		cout<<"What do you want to do now?"<<endl;
		gotoxy(25,14);
		cout<<"1) Go back to HOME"<<"\t"<<"2) Leave"<<endl;
		gotoxy(42,16);
		int j;
		cin>>j;
		if(j==1)
		{
			home();
		}
		if(j==2)
		{
			exit(0);
		}
	}
}

void main()
{
	void trolley();
	void carlos();
	void welcome();
	void password();
	void home();
	void story();
	void menu();
	void shop();
	void contact();
	void icecream();
	clrscr();
	carlos();
	welcome();
	password();
	home();
}
