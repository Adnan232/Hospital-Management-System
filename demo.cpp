//***************************************************************
// HEADER FILE USED IN PROJECT
//****************************************************************
#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>

using namespace std;

void Admin_menu();
void password();
void cpassword();

//***************************************************************
// CLASS DOCTOR USED IN PROJECT
//****************************************************************
class DocInfo
{
	int dID; float charges; char dname[20],prof[20], timing[50];
    public:
	int create_Doc()
	{
		cin.sync();
		cout<<"\nEnter the Doctor ID : ";
		cin>>dID;
        cin.ignore();
		cout<<"\nEnter the Name of the Doctor : ";
		cin.getline(dname,20);
        cout<<"\nEnter the Doctor's Specialization : ";
		cin.getline(prof,20);
        cout<<"\nEnter the Visiting Charges : ";
		cin>>charges;
        cin.ignore();
        cout<<"\nEnter the Doctor's Timings : ";
		cin.getline(timing,50);
        cin.ignore();
		return 0;
	}

	void display_Doc()
	{
		cin.sync();
        cout<<"\nDoctor ID : "<<dID;
		cout<<"\nDoctor's Name : "<<dname;
		cout<<"\nSpecialization : "<<prof;
		cout<<"\nVisiting Charges : "<<charges;
        cout<<"\nTimings : "<<timing;
    }
		int reID()
		{
			return dID;
		}
		float retcharges()
		{
			return charges;
		}
		char* retdname()
		{
			return  dname;
		}
		char* retprof()
		{
			return prof;
		}
		char* rettime()
		{
			return timing;
		}
}d;

//******************************************************************************
//GLOBAL DECLARATION OF FILE STREAM
//******************************************************************************
fstream fio;
int constant()
{
	cout<<"\n===============================================================================";
	cout<<"\n==========================HOSPITAL MANAGEMENT SYSTEM===========================";
	cout<<"\n===============================================================================";
	cout<<"\n================================BY ADNAN HABIB=================================";
	cout<<"\n===============================================================================";
	return 0;
}
//******************************************************************************
// FUNCTION TO WRITE IN THE FILE
//******************************************************************************
int write_rec()
{
	fio.open("doctor",ios::in|ios::out|ios::app);
	d.create_Doc();
	fio.write((char*)&d,sizeof(DocInfo));
	fio.close();
	cin.ignore();
	cout<<"\n\nThe Record Has Been Created ";
	cin.ignore();
	return 0;
}
//******************************************************************************
// FUNCTION TO DISPLAY ALL DOCTOR RECORD IN THE FILE 
//******************************************************************************
int display_all()
{
	system("cls");
	cout<<"\n\n\n\t\tALL DOCTORS AVAILABLE :\n\n";
	fio.open("doctor",ios::in|ios::out);
	while(fio.read((char*)&d,sizeof(DocInfo)))
	{
		d.display_Doc();
		cout<<"\n====================================\n";
		cin.ignore();
	}
	fio.close();
	return 0;
}
class one
{
    public:
        virtual void get()=0;
        virtual void show()=0;
}*ptr;

//***************************************************************
// CLASS INFO TO INPUT DETAILS FROM USER IN PROJECT
//****************************************************************
class info : public one
{
    public:
    char name[50], time[50];
    int num, age;

    void get()
    {
        system("cls");
        cin.sync();
        cout<<"\nEnter the Patient Name : ";
        cin.getline(name,50);
        cout<<"\nEnter the Appointment Time : ";
        cin.getline(time,50);
        cout<<"\nEnter the Age : ";
        cin>>age;
        cout<<"\nEnter the Appointment Number : ";
        cin>>num;
        }
        void show()
        {
            cout<<"\nPatient Name : "<<name;
            cout<<"\nAge : "<<age;
            cout<<"\nAppointment No : "<<num;
            cout<<"\nTime : "<<time;
        }
};


//***************************************************************
// CLASS DOCTORS FOR MAKING APPOINTMENT IN PROJECT
//****************************************************************
class doctor1 : public info
{
    public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("patient",ios::in|ios::out|ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"\nYour Appointment Has Been Made";
        getch();
    }
    void show()
    {
        ifstream in("patient");
        if(in=NULL)
        {
            cout<<"\nNO DATA IN THE FILE";
            cout<<"\n\n\t\tPress any Key to Continue : ";
            getch();
        }
        else
        {
            while(!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();    
                in.close();
                getch();
                break;
            }
        }
    }
}d1;
class doctor2 : public info
{
    public:
    info a2;
    void get()
    {
        system("cls");
        ofstream out("patient",ios::in|ios::out|ios::app|ios::binary);
        a2.get();
        out.write((char*)&a2,sizeof(info));
        out.close();
        cout<<"\nYour Appointment Has Been Made";
        getch();
    }
    void show()
    {
        ifstream in("patient");
        if(in=NULL)
        {
            cout<<"\nNO DATA IN THE FILE";
            cout<<"\n\n\t\tPress any Key to Continue : ";
            getch();
        }
        else
        {
            while(!in.eof())
            {
                in.read((char*)&a2,sizeof(a2));
                a2.show();    
                in.close();
                getch();
                break;
            }
        }
    }
}d2;
class doctor3 : public info
{
    public:
    info a3;
    void get()
    {
        system("cls");
        ofstream out("patient",ios::in|ios::out|ios::app|ios::binary);
        a3.get();
        out.write((char*)&a3,sizeof(info));
        out.close();
        cout<<"\nYour Appointment Has Been Made";
        getch();
    }
    void show()
    {
        ifstream in("patient");
        if(in=NULL)
        {
            cout<<"\nNO DATA IN THE FILE";
            cout<<"\n\n\t\tPress any Key to Continue : ";
            getch();
        }
        else
        {
            while(!in.eof())
            {
                in.read((char*)&a3,sizeof(a3));
                a3.show();    
                in.close();
                getch();
                break;
            }
        }
    }
}d3;
class doctor4 : public info
{
    public:
    info a4;
    void get()
    {
        system("cls");
        ofstream out("patient",ios::in|ios::out|ios::app|ios::binary);
        a4.get();
        out.write((char*)&a4,sizeof(info));
        out.close();
        cout<<"\nYour Appointment Has Been Made";
        getch();
    }
    void show()
    {
        ifstream in("patient");
        if(in=NULL)
        {
            cout<<"\nNO DATA IN THE FILE";
            cout<<"\n\n\t\tPress any Key to Continue : ";
            getch();
        }
        else
        {
            while(!in.eof())
            {
                in.read((char*)&a4,sizeof(a4));
                a4.show();    
                in.close();
                getch();
                break;
            }
        }
    }
}d4;

//***************************************************************
// CLASS STAFF TO ADD AND DELETE STAFF MEMBERS IN PROJECT
//****************************************************************
class staff
{
    public:

    char all[500];
    char name[50], age[20], sal[20], pos[30];
    void get()
    {
            cin.sync();
            cout<<"\nEnter Name : ";
            cin.getline(name,50);
            cout<<"\nEnter Age : ";
            cin.getline(age,20);
            cout<<"\nEnter Salary : ";
            cin.getline(sal,20);
            cout<<"\nEnter Working Position : ";
            cin.getline(pos,30);
    }
    void show()
    {
            cout<<"\nName : "<<name<<endl;                      
            cout<<"\nAge : "<<age<<endl;                      
            cout<<"\nSalary : "<<sal<<endl;                      
            cout<<"\nWorking Position : "<<pos<<endl;                                          
            
    }
    
}s;
void show_staff()
{
    fstream in("staff.txt",ios::in|ios::out);
    while(in.read((char*)&s,sizeof(staff)))
    {
        cin.sync();
        s.show();
    }
    in.close();
    cout<<"\nPress Any key to continue";
    getch();
}
void get_staff()
{
    system("cls");
    fstream out("staff.txt",ios::in|ios::out|ios::app);
    s.get();
    out.write((char*)&s,sizeof(staff));
    out.close();
    cout<<"\nYour Information Has been Successfully Saved :"<<endl;
    cout<<"Press Any to contniue";
    getch();
}


//***************************************************************
// MAKING AN DOCTORS APPOINTMENT
//****************************************************************
void call_doc()
{
    system("cls");
    display_all();
    int choice;
    cout<<"\n1. For Doctor 1"<<endl;
    cout<<"\n2. For Doctor 2"<<endl;
    cout<<"\n3. For Doctor 3"<<endl;
    cout<<"\n4. For Doctor 4"<<endl;
    cout<<"\nEnter your Choice : ";
    cin>>choice;

    if(choice==1)
    {
        ptr=&d1;
        ptr->get();
    }
    if(choice==2)
    {
        ptr=&d2;
        ptr->get();
    }
    if(choice==3)
    {
        ptr=&d3;
        ptr->get();
    }
    if(choice==4)
    {
        ptr=&d4;
        ptr->get();
    }
    else
    {
        cout<<"\nSorry Invalid Choice ";
    }
}

//***************************************************************
// VIEWING DETAILS OF APPOINTMENT
//****************************************************************
void pat_info()
{
    system("cls");
    int choice;
    cout<<"\n1. For Doctor 1"<<endl;
    cout<<"\n2. For Doctor 2"<<endl;
    cout<<"\n3. For Doctor 3"<<endl;
    cout<<"\n4. For Doctor 4"<<endl;
    cout<<"\nEnter your Choice :";
    cin>>choice;

    if(choice==1)
    {
        ptr=&d1;
        ptr->show();
    }
    if(choice==2)
    {
        ptr=&d2;
        ptr->show();
    }
    if(choice==3)
    {
        ptr=&d3;
        ptr->show();
    }
    if(choice==4)
    {
        ptr=&d4;
        ptr->show();
    }
    else
    {
        cout<<"\nSorry Invalid Choice ";
    }
}

//***************************************************************
// ADMINISTRATOR MENU IN PROJECT
//****************************************************************
void Admin_menu()
{
    system("cls");

    int ch;
    cout<<"\n\n";
    cout<<"==========================================================="<<endl;
    cout<<"================HOSPITAL MANAGEMENT SYSTEM================="<<endl;
    cout<<"==========================================================="<<endl;
    cout<<"======================BY ADNAN HABIB======================="<<endl;
    cout<<"==========================================================="<<endl;
    cout<<"====================ADMINISTRATOR MENU====================="<<endl;
    cout<<"==========================================================="<<endl;

    cout<<"01. DISPLAY ALL DOCTORS INFORMATION"<<endl;
    cout<<"02. DISPLAY SPECIFIC DOCTOR"<<endl;
    cout<<"03. MAKE AN APPOINTMENT"<<endl;
    cout<<"04. VIEW BOOKED APPOINTMENT"<<endl;
    cout<<"05. CREATE DOCTORS RECORD"<<endl;
    cout<<"06. ADD STAFF MEMBERS"<<endl;
    cout<<"07. VIEW STAFF MEMBERS DETAILS"<<endl;
    cout<<"08. CHANGE PASSWORD"<<endl;
    cout<<"09. LOGOUT"<<endl;
    cout<<"10. EXIT"<<endl;
    cout<<"ENTER YOUR CHOICE : ";
    cin>>ch;

    switch(ch)
    {
        case 1 :
                display_all();
                cin.ignore();
                Admin_menu();
                break;
        case 2 :
                display_all();
                cin.ignore();
                Admin_menu();
                break;
        case 3 :
                call_doc();
                cin.ignore();
                Admin_menu();
                break;
        case 4 :
                pat_info();
                cin.ignore();
                Admin_menu();
                break;
        case 5 :
                write_rec();
                cin.ignore();
                cin.sync();
                Admin_menu();
                break;
        case 6 :
                get_staff();
                cin.ignore();
                Admin_menu();
                break;
        case 7 :
                show_staff();
                cin.ignore();
                Admin_menu();
                break;
        case 8 :
                cpassword();
                break;
        case 9 :
                password();
                Admin_menu();
                break;
        case 10 :
                exit(0);
                break;
        default :
                cout<<"\a";
                cout<<"\nInvalid choice"<<endl;
                break;
    }
}

//***************************************************************
// PATIENT MENU IN PROJECT
//****************************************************************
void patient_menu()
{

    int ch;
    do
	{
        system("cls");
        cout<<"\n\n";
        cout<<"==========================================================="<<endl;
        cout<<"================HOSPITAL MANAGEMENT SYSTEM================="<<endl;
        cout<<"==========================================================="<<endl;
        cout<<"======================BY ADNAN HABIB======================="<<endl;
        cout<<"==========================================================="<<endl;
        cout<<"========================FOR PATIENT========================"<<endl;
        cout<<"==========================================================="<<endl;

        cout<<"\n\n 01. DOCTORS AVAILABLE TODAY"<<endl;
        cout<<"\n 02. MAKE AN APPOINTMENT"<<endl;
        cout<<"\n 03. CHECK YOUR APPOINTMENT"<<endl;
        cout<<"\n 04. LOGIN TO ADMINISTRATOR"<<endl;
        cout<<"\n 05. EXIT"<<endl;
        cout<<"\nENTER YOUR CHOICE : ";
        cin>>ch;
	    switch(ch)
        {
            case 1 :
                    display_all();
                    cin.ignore();
                    break;
            case 2 :
                    call_doc();
                    break;
            case 3 :
                    pat_info();
                    break;
            case 4 :
                    password();
                    Admin_menu();
                    break;
            case 5 :
                    exit(0);
                    break;
            default :
                    cout<<"\nInvalid choice"<<endl;
                    break;
        }
    }while(ch!='5');
}


//******************************************************************************
// MAIN FUNCTION OF THE PROGRAM
//******************************************************************************
int main()
{
	char ch;
	do
	{
		system("cls");
		constant();
		cout<<"\n\n\n\t\tMAIN MENU";
		cout<<"\n\n\t\t 01. PATIENT";
		cout<<"\n\n\t\t 02. ADMINISTRATOR";
		cout<<"\n\n\t\t 03. EXIT";
		cout<<"\n\n\t\tPlease Select Your Option (1-3) :";
		cin>>ch;
		switch(ch)
		{
			case '1':
				 system("cls");
				 patient_menu();
                 break;
			case '2':
				 password();
                 Admin_menu();
				 break;
			case '3':
				 exit(0);
			default :cout<<"\a";
		}
	}while(ch!='3');
	return 0;
}

//***************************************************************
// LOGIN IN PROJECT
//****************************************************************
void password()
{
    system("cls");
    char p1[50], p2[50];
    constant();
    cout<<"\n\n\nLOGIN TO ADMINISTRATOR\n\n";

    ifstream in("password.txt");
    {
        cin.sync();
        cout<<"\nEnter the Password : ";
        cin.getline(p1,50);
        in.getline(p2,50);
        if(strcmp(p2,p1)==0)
        {
            Admin_menu();
        }
        else
        {
            cout<<"\nINCORRECT PASSWORD TRY AGAIN"<<endl;
            Sleep(999);
            password();
        }
    }
    in.close();    
}

//***************************************************************
// CHANGING PASSWORD
//****************************************************************
void cpassword()
{
    char n[50];
    system("cls");
    cout<<"\n\n\nCHANGE YOUR PASSWORD\n\n";
    ofstream out("password.txt");
    {
        cin.sync();
        cout<<"\n\nEnter New pasword : ";
        cin.getline(n,50);
        out<<n;
    }
    out.close();
    cout<<"\nYour Password has been save/created successfully!!"<<endl;
    getch();
    password();
}
