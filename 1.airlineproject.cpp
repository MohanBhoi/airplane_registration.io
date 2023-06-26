#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management 
{
    public:

        Management ()
        {
            mainMenu();
        }
};


class Details 
{
    public:

        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information ()
        {
            cout<<"enter the customer Id:";
            cin>>cId;
            cout<<"\n enter the name"<<endl;
            cin>>name;
            cout<<"\n enter the age"<<endl;
            cin>>age;
            cout<<"\n enter the gender"<<endl;
            cin>>gender;
            cout<<"\n enter the add"<<endl;
            cin>>add;
            cout<<"\n your details are saved with us \n"<<endl;
            

        };

};


int Details::cId;
string Details::name;
string Details::gender;


class registraion
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"dubai","canada","uk","usa","australlia","europe"};

            for(int a =0;a<6;a++)
            {
                cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
            }

            cout<<"\n welcome to the airline!\n"<<endl;
            cout<<"\npress the number of the country of which you want to book the flight:"<<endl;
            cin>>choice;

            switch (choice)
            {
            case 1:
                cout<<"welcometo dubai emirates \n"<<endl;

                cout<<"your comfert is out prority .enjoy the journey"<<endl;
                cout<<"following are the flights\n"<<endl;

                cout<<"\n1.DUB-498" <<endl;
                cout<<"\t 08-01-2022 8:00am 10hrs Rs.14000\n"<<endl;
                cout<<"\n1.DUB-658" <<endl;
                cout<<"\t 09-01-2022 4:00am 12hrs Rs.10000\n"<<endl;
                cout<<"\n1.DUB-508" <<endl;
                cout<<"\t 11-01-2022 11:00am 11hrs Rs.9000\n"<<endl;

                cout<<"\n select the flight you want to book:"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=14000;
                    cout<<"you have successfully booked the flight DUB-498"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else if(choice1==2)
                {
                    charges=10000;
                    cout<<"you have successfully booked the flight DUB-658"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else if(choice1==3)
                {
                    charges=9000;
                    cout<<"you have successfully booked the flight DUB-508"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else
                {
                    cout<<"invalid input ,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;

                if (back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }

                break;

            case 2:
                cout<<"welcometo canadian airlines \n"<<endl;

                cout<<"your comfert is out prority .enjoy the journey"<<endl;
                cout<<"following are the flights\n"<<endl;

                cout<<"\n1.CA-198" <<endl;
                cout<<"\t 09-01-2022 2:00Pm 10hrs Rs.34000\n"<<endl;
                cout<<"\n1.CA-158" <<endl;
                cout<<"\t 11-01-2022 6:00am 22hrs Rs.290000\n"<<endl;
                cout<<"\n1.CA-208" <<endl;
                cout<<"\t 14-01-2022 21:00am 11hrs Rs.25000\n"<<endl;

                cout<<"\n select the flight you want to book:"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=34000;
                    cout<<"you have successfully booked the flight CA-198"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else if(choice1==2)
                {
                    charges=29000;
                    cout<<"you have successfully booked the flight CA-158"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else if(choice1==3)
                {
                    charges=25000;
                    cout<<"you have successfully booked the flight CA-208"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else
                {
                    cout<<"invalid input ,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;

                if (back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }

                break;    
            

            case 3:
                cout<<"welcometo UK AIRLINE \n"<<endl;

                cout<<"your comfert is out prority .enjoy the journey"<<endl;
                cout<<"following are the flights\n"<<endl;

                cout<<"\n1.UK-798" <<endl;
                cout<<"\t 12-01-2022 10:00am 14hrs Rs.44000\n"<<endl;

                cout<<"\n select the flight you want to book:"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=44000;
                    cout<<"you have successfully booked the flight UK-798"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                
                else
                {
                    cout<<"invalid input ,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;

                if (back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }

                break;

            case 4:
                cout<<"welcometo US AIRWAYS \n"<<endl;

                cout<<"your comfert is out prority .enjoy the journey"<<endl;
                cout<<"following are the flights\n"<<endl;

                cout<<"\n1.US-567" <<endl;
                cout<<"\t 10-01-2022 9:00am 22hrs Rs.37000\n"<<endl;
                cout<<"\n1.US -658" <<endl;
                cout<<"\t 12-01-2022 11:00am 23hrs Rs.320000\n"<<endl;

                cout<<"\n select the flight you want to book:"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=37000;
                    cout<<"you have successfully booked the flight US-567"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else if(choice1==2)
                {
                    charges=32000;
                    cout<<"you have successfully booked the flight US-658"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
               
                else
                {
                    cout<<"invalid input ,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;

                if (back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }

                break;    

            case 5:
                cout<<"welcometo AUSTRALIAN AIRLINES \n"<<endl;

                cout<<"your comfert is out prority .enjoy the journey"<<endl;
                cout<<"following are the flights\n"<<endl;

                cout<<"\n1.AUS-848" <<endl;
                cout<<"\t 08-01-2022 8:00am 19hrs Rs.44000\n"<<endl;
                cout<<"\n1.AUS-342" <<endl;
                cout<<"\t 09-01-2022 4:00am 21hrs Rs.40000\n"<<endl;
                cout<<"\n1.AUS-593" <<endl;
                cout<<"\t 11-01-2022 11:00am 25hrs Rs.39000\n"<<endl;

                cout<<"\n select the flight you want to book:"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=44000;
                    cout<<"you have successfully booked the flight AUS-848"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else if(choice1==2)
                {
                    charges=40000;
                    cout<<"you have successfully booked the flight AUS-342"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else if(choice1==3)
                {
                    charges=39000;
                    cout<<"you have successfully booked the flight AUS-593"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else
                {
                    cout<<"invalid input ,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;

                if (back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }

                break; 

            case 6:
                cout<<"welcometo EUROPIAN AIRLINES \n"<<endl;

                cout<<"your comfert is out prority .enjoy the journey"<<endl;
                cout<<"following are the flights\n"<<endl;

                cout<<"\n1.EU-898" <<endl;
                cout<<"\t 02-01-2022 2:00am 18hrs Rs.36000\n"<<endl;
                cout<<"\n1.EU-314" <<endl;
                cout<<"\t 09-01-2022 7:00Pm 16hrs Rs.44000\n"<<endl;
                cout<<"\n1.EU-594" <<endl;
                cout<<"\t 15-01-2022 4:00Pm 21hrs Rs.30000\n"<<endl;

                cout<<"\n select the flight you want to book:"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=36000;
                    cout<<"you have successfully booked the flight EU-898 "<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else if(choice1==2)
                {
                    charges=440000;
                    cout<<"you have successfully booked the flight EU-314"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else if(choice1==3)
                {
                    charges=30000;
                    cout<<"you have successfully booked the flight EU-594"<<endl;
                    cout<<"you can go back to menu and take the ticket."<<endl;
                }
                else
                {
                    cout<<"invalid input ,shifting to the previous menu"<<endl;
                    flights();
                }

                cout<<"press any key to go back to main menu:"<<endl;
                cin>>back;

                if (back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }

                break;       

            default:
            {
                cout<<"invalid input shifting to the main menu!\n"<<endl;
                mainMenu();
                break;
            }

            }

        }
};

float registraion::charges;
int registraion::choice;

class ticket
{

public:
    void Bill()
    {
        string destination=" ";
        ofstream outf("record.txt");
        {
            outf<<"__________XYZ AIRLINES_______"<<endl;
            outf<<"______________ticket________"<<endl;
            outf<<"______________________________"<<endl;

            outf<<"customer id:"<<Details::cId<<endl;
            outf<<"customer name:"<<Details::name<<endl;
            outf<<"customer gender:"<<Details::gender<<endl;
            outf<<"\t description "<<endl<<endl;

            if(registraion::choice==1)
            {
                destination="dubai";
            }
            else if(registraion::choice==2)
            {
                destination="canada";
            }
            else if(registraion::choice==3)
            {
                destination="uk";
            }
            else if(registraion::choice==4)
            {
                destination="usa";
            }
            else if(registraion::choice==5)
            {
                destination="australia";
            }
            else if(registraion::choice==6)
            {
                destination="europe";
            }

            cout<<"Destination\t\t"<<destination<<endl;
            outf<<"\nFlight cost:"<<endl;

        }
        outf.close();

    }
    void disBill()
    { char arr[100];
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"file error!"<<endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
                
            }
            ifs.close();
   
        }
    }
};



void mainmenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t               xyz airlines\n"<<endl;
    cout<<"\t______________-Mainmenu_______________---\n"<<endl;

    cout<<"\t---------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;

    cout<<"\t\t Press 1 to add the customer details\t|"<<endl;
    cout<<"\t\t Press 2 for flight registration\t|"<<endl;
    cout<<"\t\t Press 3 fotr ticket and charges\t|"<<endl;
    cout<<"\t\t Press 4 to exit\t"<<endl;
    cout<<"\t\t\t\t\t\t\t\t"<<endl;
    cout<<"\t---------------------------------------------"<<endl;

    cout<<"enter the choice"<<endl;
    cin>>lchoice;

    Details d;
    registraion r;
    ticket t;

    switch(lchoice)
    {

        case 1:
        {
            cout<<"________customers____________\n"<<endl;
            d.information();
            cout<<"press 1 to go back to mainmenu";
            cin>>back;

            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 2:
        {
            cout<<"_____________book a flight ticket using this system__________\n"<<endl;
            r.flights();
            break;
        }

        case 3:
        cout<<"___get your ticket_________\n"<<endl;
        t.Bill();
        
        cout<<"your ticket is printed, you can collect it \n"<<endl;
        cout<<"press to display your ticket"<<endl;

        cin>>back;
        

        if(back==1)
        {
            t.disBill();
            cout<<"press any key to go back to main menu:"<<endl;
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 4:
        {
            cout<<"\n\n\t__________thank you_______"<<endl;
            break;
        }

        default :
        {
            cout<<"invalid input please press again!\n\n"<<endl;
            mainMenu();
            break;
        }
    }

}
int main ()
{
    Management Mobj;
    return 0;
}