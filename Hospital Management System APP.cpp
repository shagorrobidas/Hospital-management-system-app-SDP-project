#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>

void menu();
void pascode();
void cpascode();

using namespace std;

class view {
public:
    virtual void get() = 0;
    virtual void show() = 0;
};

class info : public view {
public:
    char name[50], time[50];
    int num, age;
    void get() override {
        system("cls");
        cin.sync();
        cout << "\n Enter The Patient Name : ";
        cin.getline(name, 50);
        cout << "\n Enter The Appointment Time : ";
        cin.getline(time, 50);
        cout << "\n Enter The Age : ";
        cin >> age;
        cout << "\n Enter The Appointment No : ";
        cin >> num;
    }
    void show() override {
        cout << "\n Name = " << name;
        cout << "\n Age = " << age;
        cout << "\n No = " << num;
        cout << "\n Time = " << time;
    }
};

class asif : public info {
public:
    info a1;
    void get() override {
        system("cls");
        ofstream out("asif.txt", ios::app | ios::binary);
        info::get();
        out.write((char*)&a1, sizeof(info));
        out.close();
        cout << "Your Entry Has been saved .";
        getch();
        menu();
    }
    void show() override {
        ifstream in("asif.txt");
        if (!in) {
            cout << "\n No Data In the File ";
            cout << "\n\n\t\t Press Any Key To Continue : ";
            getch();
            menu();
        }
        else {
            while (in.read((char*)&a1, sizeof(a1))) {
                a1.show();
            }
            in.close();
            getch();
            menu();
        }
    }
};


class anower : public info {
public:
    info a1;
    void get() override {
        system("cls");
        ofstream out("anower.txt", ios::app | ios::binary);
        info::get();
        out.write((char*)&a1, sizeof(info));
        out.close();
        cout << "Your Entry Has been saved .";
        getch();
        menu();
    }
    void show() override {
        ifstream in("anower.txt");
        if (!in) {
            cout << "\n No Data In the File ";
            cout << "\nPress Any Key To Continue : ";
            getch();
            menu();
        }
        else {
            while (in.read((char*)&a1, sizeof(a1))) {
                a1.show();
            }
            in.close();
            cout << "Press Enter To Continue : ";
            getch();
            menu();
        }
        cout << "\n\nPress any key to continue";
        getch();
        menu();
    }
};

class shofi : public info {
public:
    info a1;
    void get() override {
        system("cls");
        ofstream out("shofi.txt", ios::app | ios::binary);
        info::get();
        out.write((char*)&a1, sizeof(info));
        out.close();
        cout << "Your Entry Has been saved .";
        getch();
        menu();
    }
    void show() override {
        ifstream in("shofi.txt");
        if (!in) {
            cout << "\n No Data In the File ";
            cout << "\n\n\t\t Press Any Key To Continue : ";
            getch();
            menu();
        }
        else {
            while (in.read((char*)&a1, sizeof(info))) {
                a1.show();
            }
            in.close();
        }
        cout << "\n\nPress any key to continue";
        getch();
        menu();
    }
};

class mizanur : public info {
public:
    info a1;
    void get() override {
        system("cls");
        ofstream out("mizanur.txt", ios::app | ios::binary);
        info::get();
        out.write((char*)&a1, sizeof(info));
        out.close();
        cout << "Your Entry Has been saved .";
        getch();
        menu();
    }
    void show() override {
        ifstream in("mizanur.txt");
        if (!in) {
            cout << "\n No Data In the File ";
            cout << "\n\n\t\t Press Any Key To Continue : ";
            getch();
            menu();
        }
        else {
            while (in.read((char*)&a1, sizeof(info))) {
                a1.show();
            }
            in.close();
        }
        cout << "\n\nPress any key to continue";
        getch();
        menu();
    }
};

class parvin : public info {
public:
    info a1;
    void get() override {
        system("cls");
        ofstream out("parvin.txt", ios::app | ios::binary);
        info::get();
        out.write((char*)&a1, sizeof(info));
        out.close();
        cout << "Your Entry Has been saved .";
        getch();
        menu();
    }
    void show() override {
        ifstream in("parvin.txt");
        if (!in) {
            cout << "\n No Data In the File ";
            cout << "\n\n\t\t Press Any Key To Continue : ";
            getch();
            menu();
        }
        else {
            while (in.read((char*)&a1, sizeof(info))) {
                a1.show();
            }
            in.close();

        }
        cout << "\n\nPress any key to continue";
        getch();
        menu();
    }
};


class staf : public view {
public:
    char all[999];
    char name[50], age[20], sal[30], pos[20];
    void get() override {
        ofstream out("Staf.txt", ios::app);
        system("cls");
        cin.sync();
        cout << "\n Enter name : ";
        cin.getline(name, 50);
        cout << "\n Enter Age : ";
        cin.getline(age, 20);
        cout << "\n Enter Salary : ";
        cin.getline(sal, 30);
        cout << "\n Enter Working Position : ";
        cin.getline(pos, 20);

        out << "\nName : " << name << "\nAge : " << age << "\nSalary : " << sal << "\nWorking Position : " << pos;
        out.close();
        cout << "\n\n Your Information has been saved : \n\t\tPress any key to continue";
        getch();
        menu();
    }
    void show() override {
        ifstream in("Staf.txt");
        if (!in) {
            cout << "File open error ";
        }
        while (in.getline(all, 999)) {
            cout << all << endl;
        }
        in.close();
        cout << "\nPress any key to continue";
        getch();
        menu();
    }
};

class information {
public:
    void dirinfo() {
        system("cls");
        system("color 3D");
        cout << "====================================================================================================================\n";
        cout << "\n\n\t\t\t\t\tFive Doctor Available \n\t\t\t\tInformation And timing Are Given Below\n";
        cout << "---------------------------------------------------------------------------------------------------------------------\n";
        cout << "\t\tDr Available : \n";
        cout << "\t\tDr. Md. Asif Khan (Medicine specialist)\n\n";
        cout << "\t\t\t [[Timing]]: \n\n";
        cout << "Monday To Friday \t\t 9AM To 5PM";
        cout << "\tSaturday       \t\t 9AM To 1PM";
        cout << "\tSunday         \t\tOff\n";
        cout << "---------------------------------------------------------------------------------------------------------------------\n";
        cout << "\t\tDr Available : \n";
        cout << "\t\tDr. Md. Anower Ahamed (Liver specialist)\n\n";
        cout << "\t\t\t [[Timing]]: \n\n";
        cout << "Monday To Friday \t\t 2PM To 11PM";
        cout << "\tSaturday       \t\t 8AM To 12PM";
        cout << "\tSunday         \t\tOff\n";
        cout << "----------------------------------------------------------------------------------------------------------------------\n";
        cout << "\t\tDr Available : \n";
        cout << "\t\tDr. Md. Shofi Choudhory  (Huart specialist)\n\n";
        cout << "\t\t\t [[Timing]]: \n\n";
        cout << "Monday To Friday \t\t 9Am To 5PM";
        cout << "\tSaturday       \t\t 9Am To 1PM";
        cout << "\tSunday         \t\tOff\n";
        cout << "---------------------------------------------------------------------------------------------------------------------\n";
        cout << "\t\tDr Available : \n";
        cout << "\t\tDr. Md. Mizanur Rahaman (Skin specialist)\n\n";
        cout << "\t\t\t [[Timing]]: \n\n";
        cout << "Monday To Friday \t\t 11AM To 6PM";
        cout << "\tSaturday       \t\t 2PM To 8PM";
        cout << "\tSunday         \t\tOff\n";
        cout << "---------------------------------------------------------------------------------------------------------------------\n";
        cout << "\t\tDr Available : \n";
        cout << "\t\tDr. Parvin Mozumder Maya (Chaild & Mother specialist)\n\n";
        cout << "\t\t\t [[Timing]]: \n\n";
        cout << "Monday To Friday \t\t 1PM To 7PM";
        cout << "\tSaturday       \t\t 12PM To 4PM";
        cout << "\tSunday         \t\tOff\n";
        cout << "---------------------------------------------------------------------------------------------------------------------\n";
        cout << "\n Press Any Key For Continue  ";
        getch();
        menu();
    }
};

void call_dr() {
    system("cls");
    int choice;
    cout << "\n\n\n\t\tPress 1 for Dr. Md. Asif Khan (Medicine specialist) \n\n\n\t\tPress 2 for Dr.Md. Anower Ahamed (Liver specialist) \n\n\n\t\tPress 3 for Dr.Md. Shofi Choudhory (Huart specialist) \n\n\n\t\tPress 4 for Dr. Md.Mizanur Rahaman (Skin specialist)\n\n\n\t\tPress 5 for Dr. Parvin Mozumder Maya (Chaild & Mother specialist) \n\n\n\t\tPlease Enter Your Choice:";
    cin >> choice;

    view* ptr;
    asif s3;
    anower s4;
    shofi s5;
    mizanur s6;
    parvin s7;
    if (choice == 1) {
        ptr = &s3;
        ptr->get();
    }
    else if (choice == 2) {
        ptr = &s4;
        ptr->get();
    }
    else if (choice == 3) {
        ptr = &s5;
        ptr->get();
    }
    else if (choice == 4) {
        ptr = &s6;
        ptr->get();
    }
    else if (choice == 5) {
        ptr = &s7;
        ptr->get();
    }
    else {
        cout << "Sorry invalid choice : ";
    }
}

void menu() {
    system("cls");
    system("color 37");
    cout << "\n";
    cout << "\n";
    cout << "\t\t\t\t    ||=====================================|| \n";
    cout << "\t\t\t\t    ||+++++++++++++ MAIN MENU +++++++++++++|| \n";
    cout << "\t\t\t\t    ||   Hospital Management System App    ||\n";
    cout << "\t\t\t\t    ||=====================================|| \n";

    cout << "-----------------------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\t\t\t      Please Select Any Option      \n";
    cout << "\n\n\t1-\t\tPress 1 For Available Doctor Information \n\n";
    cout << "\t2-\t\tPress 2 For Doctor Appointment \n\n";
    cout << "\t3-\t\tPress 3 For Checking Patient Appointment Menu \n\n";
    cout << "\t4-\t\tPress 4 For Saving Staff Information \n\n";
    cout << "\t5-\t\tPress 5 For Checking Staff Information Menu  \n\n";
    cout << "\t6-\t\tPress 6 For Change Password  \n\n";
    cout << "\t7-\t\tPress 7 For LogOut      \n\n";
    //cout << "\t\t\t Copyright by Shagor robidas     \n\n";

    cout << "================================================================================================================\n";
    cout << "\n\n\t\tPlease Enter Your Choice: ";
    information a1;
    info a3;
    view* ptr;
    staf a2;


    int a;
    cin >> a;
    if (a == 1) {
        a1.dirinfo();
    }
    else if (a == 2) {
        call_dr();
    }
    else if (a == 3) {
        //ptr = &a3;
        //ptr->show();
        asif dr_asif;
        anower dr_anower;
        shofi dr_shofi;
        mizanur dr_mizanur;
        parvin dr_parvin;

        dr_asif.show();
        dr_anower.show();
        dr_shofi.show();
        dr_mizanur.show();
        dr_parvin.show();

    }
    else if (a == 4) {
        ptr = &a2;
        ptr->get();
    }
    else if (a == 5) {
        ptr = &a2;
        ptr->show();
    }
    else if (a == 6) {
        cpascode();
    }
    else if (a == 7) {
        pascode();
    }
    else {
        cout << "Sorry invalid Choice : ";
    }
}

void pascode() {
    system("cls");
    char p1[50] ,p2[50];

    system("color 30");

    ifstream in("password.txt");{
        cin.sync();
        cout << "\n\n\n\n\t\t\t\tEnter The Password ";
        cin.getline(p1, 50);
        in.getline(p2,50);
        if(strcmp(p2,p1)==0){
            menu();
        }
        else{
            cout << "\n\n\n\n\t\t\t\tIncorrect password. Please try again\n";
            Sleep(999);
            pascode();
        }

    }
    in.close();
    cout << "\n\nPress Any Key For Continue.";
    //getch();
    //menu();
}

void cpascode() {
    system("cls");
    char p1[50], p2[50], p3[50];
    system("color 30");

    ifstream in("password.txt");
    in.getline(p1, 50);
    in.close();

    cout << "\n\n\n\n\t\t\t\tEnter The Old Password : ";
    cin.sync();
    cin.getline(p2, 50);

    if (strcmp(p1, p2) == 0) {
        ofstream out("password.txt");
        cout << "\n\n\n\n\t\t\t\tEnter The New Password : ";
        cin.getline(p3, 50);
        out << p3;
        out.close();
        cout << "\n\nYour Password has been changed.\nPress Any Key For Continue.";
    }
    else {
        cout << "\n\n\n\n\t\t\t\tWrong Password ";
    }

    getch();
    menu();
}

int main() {
    pascode();
    system("pause");
    return 0;
}
