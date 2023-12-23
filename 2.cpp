//write a cpp program to read and print student information for btech admission;
#include <iostream>
using namespace std;

class Student
{
public:
    string name, DOB, address, mail, phone;
    int program;
    double percentage;
    int entranceScore;

    void setname(string n)
    {
        name = n;
    }
    void setmail(string m)
    {
        mail = m;
    }
    void setphone(string p)
    {
        phone = p;
    }
    void setaddress(string a)
    {
        address = a;
    }
    void setprogram(int pg)
    {
        program = pg;
    }
    void setpercentage(double pr)
    {
        percentage = pr;
    }
    void setDOB(string d)
    {
        DOB = d;
    }
    void setEntranceScore(int score)
    {
        entranceScore = score;
    }
};

class Information : public Student
{
public:
    void getname()
    {
        cout << "Name: " << name << endl;
    }
    void getmail()
    {
        cout << "Mail: " << mail << endl;
    }
    void getphone()
    {
        cout << "Phone: " << phone << endl;
    }
    void getaddress()
    {
        cout << "Address: " << address << endl;
    }
    void getprogram()
    {
        cout << "Program: " << program << endl;
    }
    void getpercentage()
    {
        cout << "Percentage: " << percentage << endl;
    }
    void getDOB()
    {
        cout << "Date of Birth: " << DOB << endl;
    }
    void getEntranceScore()
    {
        cout << "Entrance Exam Score: " << entranceScore << endl;
    }
};

int main()
{
    Information details;

    string name, mail, phone, address, DOB;
    int program, entranceScore;
    double percentage;

    cout << "Enter name: ";
    getline(cin, name);
    details.setname(name);

    cout << "Enter date of birth (YYYY-MM-DD): ";
    getline(cin, DOB);
    details.setDOB(DOB);

    cout << "Enter mail: ";
    cin >> mail;
    details.setmail(mail);

    cout << "Enter phone: ";
    cin >> phone;
    details.setphone(phone);

    cout << "Enter address: ";
    getline(cin, address);
    details.setaddress(address);

    int preferences[5];
    cout << "Programs Preference : ";
    cout << "(1) Artificial Intelligence and Data Science" << endl << "(2) Computer Engineering" << endl << "(3) Electronics and Telecommunication" << endl << "(4) Electronics Engineering" << endl << "(5) Information Technology" << endl << "(6) Biotechnology" << endl << "(7) Aeronautics and Aerospace Engineering" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your preference " << i + 1 << ": ";
        cin >> preferences[i];
    }

    cout << "Enter percentage: ";
    cin >> percentage;
    details.setpercentage(percentage);

    if (percentage >= 50)
    {
        cout << "Enter entrance exam score: ";
        cin >> entranceScore;
        details.setEntranceScore(entranceScore);
    }

    cout << "\nStudent Information:\n";
    details.getname();
    details.getDOB();
    details.getmail();
    details.getphone();
    details.getprogram();
    details.getpercentage();
    if (percentage >= 50)
    {
        details.getEntranceScore();
    }
    

    for (int i = 0; i < 5; i++)
    {
        cout << "Preference " << i + 1 << ": ";
        switch (preferences[i])
        {
        case 1:
            cout << "Artificial Intelligence and Data Science" << endl;
            break;
        case 2:
            cout << "Computer Engineering" << endl;
            break;
        case 3:
            cout << "Electronics and Telecommunication" << endl;
            break;
        case 4:
            cout << "Electronics Engineering" << endl;
            break;
        case 5:
            cout << "Information Technology" << endl;
            break;
        case 6:
            cout << "Biotechnology" << endl;
            break;
        case 7:
            cout << "Aeronautics and Aerospace Engineering" << endl;
            break;
        default:
            cout << "Invalid preference" << endl;
        }
    }
    if (percentage >= 50)
    {
        if (entranceScore > 96)
        {
            cout << "Congratulations! You are eligible for Artificial Intelligence and Data Science." << endl;
        }
        else if (entranceScore > 90)
        {
            cout << "Congratulations! You are eligible for all programs except Artificial Intelligence and Data Science." << endl;
        }
        else if (entranceScore > 85)
        {
            cout << "Congratulations! You are eligible for all programs except Artificial Intelligence and Data Science, and Computer Engineering." << endl;
        }
        else
        {
            cout << "Congratulations! You are eligible for all programs except Artificial Intelligence and Data Science, Computer Engineering, and Electronics and Telecommunication." << endl;
        }
    }
    else
    {
        cout << "Sorry, you are not eligible for your preferred programs." << endl;
        cout << "You still have a chance in other available programs." << endl;
        cout << "Would you like to attend a counseling session for exploring other fields? (yes/no): ";
        string choice;
        cin >> choice;
        if (choice == "yes")
        {
            cout << "Please attend the counseling session for guidance on available programs."<<endl<<"Contact us: 111 1111 111" << endl;
        }
        else
        {
            cout << "Thank you for considering your options. If you change your mind, you can attend a counseling session later." << endl;
        }
    }

    return 0;
}
