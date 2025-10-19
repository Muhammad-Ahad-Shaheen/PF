#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>
#include <cstdio>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class Admission {
public:
    int RegNo;
    string Name, F_Name, AdClass, PClass, DOB, Ph_No;
    Admission* next_add;
};

class LinkedList {
public:
    Admission* head = NULL;

    ~LinkedList() {
        while (head != NULL) {
            Admission* temp = head;
            head = head->next_add;
            delete temp;
        }
    }

    void LoadFromFile() {
        ifstream in("AdmList.txt");
        if (!in) {
            cout << "File not found! Starting with an empty list.";
            return;
        }

        Admission* new_admission;
        while (true) {
            new_admission = new Admission;
            in >> new_admission->RegNo;
            in.ignore(); 
            getline(in, new_admission->Name);
            getline(in, new_admission->F_Name);
            getline(in, new_admission->DOB);
            getline(in, new_admission->PClass);
            getline(in, new_admission->AdClass);
            getline(in, new_admission->Ph_No);
            if (in.eof()) {
                delete new_admission; 
                break;
            }
            new_admission->next_add = head;
            head = new_admission; 
        }
        in.close();
    }

    void SaveToFile() 
	{
    ofstream out("AdmList.txt");
    Admission* ptr = head;
    while (ptr != NULL) {
        out << "Registration Number: " << ptr->RegNo << "\n";
        out << "Name: " << ptr->Name << "\n";
        out << "Father's Name: " << ptr->F_Name << "\n";
        out << "Date of Birth: " << ptr->DOB << "\n";
        out << "Previous Class: " << ptr->PClass << "\n";
        out << "Admission Class: " << ptr->AdClass << "\n";
        out << "Phone Number: " << ptr->Ph_No << "\n";
        out << "---------------------------------------------\n"; 
        ptr = ptr->next_add;
    }
    out.close();
}

    void Insert() {
        int R;
        string N, FN, AC, PC, D, Ph;

        cout << "\n\n\tEnter Student Registration Number: ";
        cin >> R;
        cout << "\n\n\tEnter Student Name: ";
        cin.ignore();
        getline(cin, N);
        cout << "\n\n\tEnter Student Father Name: ";
        getline(cin, FN);
        cout << "\n\n\tEnter Student Date of Birth: ";
        cin >> D;
        cout << "\n\n\tEnter Student Previous Class: ";
        cin.ignore();
        getline(cin, PC);
        cout << "\n\n\tEnter Student Admission Class: ";
        getline(cin, AC);
        cout << "\n\n\tEnter Student Phone Number: ";
        cin >> Ph;

        Admission* new_admission = new Admission;
        new_admission->RegNo = R;
        new_admission->Name = N;
        new_admission->F_Name = FN;
        new_admission->AdClass = AC;
        new_admission->PClass = PC;
        new_admission->DOB = D;
        new_admission->Ph_No = Ph;
        new_admission->next_add = head;
        head = new_admission;
        SaveToFile(); 
        cout << "\n\tRecord Successfully Entered-------";
    }

    void Search() {
        if (head == NULL) {
            cout << "\n\tList is Empty--------";
        } else {
            int R, found = 0;
            cout << "\n\tEnter Student Reg No TO SEARCH: ";
            cin >> R;
            Admission* ptr = head;
            while (ptr != NULL) {
                if (R == ptr->RegNo) {
                    cout << "\n\tStudent Registration Number: " << ptr->RegNo;
                    cout << "\n\tStudent Name: " << ptr->Name;
                    cout << "\n\tStudent Father Name: " << ptr->F_Name;
                    cout << "\n\tStudent Date Of Birth: " << ptr->DOB;
                    cout << "\n\tStudent Previous Class: " << ptr->PClass;
                    cout << "\n\tStudent Admission Class: " << ptr->AdClass;
                    cout << "\n\tStudent Phone Number: " << ptr->Ph_No;
                    found++;
                    break; 
                }
                ptr = ptr->next_add;
            }
                        if (found == 0) {
                cout << "\n\tRegistration Number Not Found--------";
            }
        }
    }

    void Update() {
        if (head == NULL) {
            cout << "\n\tList is Empty---------";
        } else {
            int R, found = 0;
            cout << "\n\tEnter Student Registration Number for Update: ";
            cin >> R;
            Admission* ptr = head;
            while (ptr != NULL) {
                if (R == ptr->RegNo) {
                    cout << "\n\tEnter New Student Registration Number: ";
                    cin >> ptr->RegNo;
                    cout << "\n\tEnter Name: ";
                    cin.ignore();
                    getline(cin, ptr->Name);
                    cout << "\n\tEnter New Student Father Name: ";
                    cin >> ptr->F_Name;
                    cout << "\n\tEnter New Student Date Of Birth: ";
                    cin >> ptr->DOB;
                    cout << "\n\tEnter New Student Previous Class: ";
                    cin.ignore();
                    getline(cin, ptr->PClass);
                    cout << "\n\tEnter New Student Admission Class: ";
                    getline(cin, ptr->AdClass);
                    cout << "\n\tEnter New Student Phone Number: ";
                    cin >> ptr->Ph_No;
                    cout << "\n\n\tRECORD UPDATED------------";
                    found++;
                    break; 
                }
                ptr = ptr->next_add;
            }
            if (found == 0) {
                cout << "\n\n\tStudent Reg No: " << R << " Not Found--------------------";
            }
            SaveToFile(); 
        }
    }

    void Delete() {
        if (head == NULL) {
            cout << "\n\tList is Empty---------";
        } else {
            int R, found = 0;
            cout << "\n\tEnter Student Registration Number To Delete Record: ";
            cin >> R;
            if (R == head->RegNo) {
                Admission* ptr = head;
                head = head->next_add;
                delete ptr; 
                cout << "\n\n\tRecord Deleted-----------";
                found++;
            } else {
                Admission* pre = head;
                Admission* ptr = head->next_add;
                while (ptr != NULL) {
                    if (R == ptr->RegNo) {
                        pre->next_add = ptr->next_add; 
                        delete ptr; 
                        cout << "\n\n\tRecord Deleted-----------";
                        found++;
                        break;
                    }
                    pre = ptr;
                    ptr = ptr->next_add;
                }
            }
            if (found == 0) {
                cout << "\n\n\tRecord Not Found-----------";
            }
            SaveToFile();
        }
    }
    void ShowFile() {
        ifstream in("AdmList.txt");
        if (!in) {
            cout << "\n\tFile not found!";
            return;
        }

        string line;
        cout << "\n\n\t----------------------------Student Records From File------------------------------\n\n\n\n";
        while (getline(in, line)) {
            cout << line << endl; 
        }
        in.close();
    }
};

int main() {
    LinkedList obj;
    obj.LoadFromFile(); 

    while (true) {
        system("cls");
        int choice;
        cout << "\n\n\t------------------School Student Admission System----------------------- ";
        cout << "\n\n\t\t1. Add New Student.";
        cout << "\n\t\t2. Search Student.";
        cout << "\n\t\t3. Update Student Information.";
        cout << "\n\t\t4. Delete Student Record.";
        cout << "\n\t\t5. Show Student Record.";
        cout << "\n\t\t6. Exit.";
        cout << "\n\tEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system("cls");
                obj.Insert();
                break;
            case 2:
                system("cls");
                obj.Search();
                break;
            case 3:
                system("cls");
                obj.Update();
                break;
            case 4:
                system("cls");
                obj.Delete();
                break;
            case 5:
                system("cls");
                obj.ShowFile();
                break;
            case 6:
                system("cls");
                exit(0);
            default:
                cout << "\n\tInvalid Choice";
                break;
        }
        cout << "\n\n\tPress any key to continue...";
        getch(); 
    }
    return 0;
}

