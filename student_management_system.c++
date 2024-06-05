#include <iostream>
#include <conio.h>

using namespace std;

int i = 0;

struct Student {
    int id;
    float marks , per;
    string name , grade;
}s[25];

void insert(){
    system("cls");
    cout<<"\t--- Insert Record ---\n";
    cout<<"Eneter Student ID: ";
    cin>>s[i].id;
    cout<<"Enter Student Name: ";
    cin>>s[i].name;
    cout<<"Enter Student Marks: ";
    cin>>s[i].marks;
    s[i].per = s[i].marks/100*100;
    if(s[i].per >= 85){
        s[i].grade = "A+";
    }
    else if(s[i].per >= 75){
        s[i].grade = "A";
    }
    else if(s[i].per >= 65){
        s[i].grade = "B+";
    }
    else if(s[i].per >= 55){
        s[i].grade = "B";
    }
    else if(s[i].per >= 50){
        s[i].grade = "c";
    }
    else if(s[i].per >= 45){
        s[i].grade = "D";
    }
    else if(s[i].per >= 33){
        s[i].grade = "E";
    }
    else{
        s[i].grade = "F";
    }
    i++;
    cout<<"\t--- Insert Record Successfuly ---\n";
}

void search(){
    system("cls");
    cout<<"\t--- Search Record ---\n";
    if(i == 0){
        cout<<"\tNo Record Found\n";
    }
    else{
        int id , found = 0;
        cout<<"Enter Student ID: ";
        cin>>id;
        for(int a = 0; a < i; a++){
            if(id == s[a].id){
                cout<<"Name: "<<s[a].name<<endl;
                cout<<"Mark: "<<s[a].marks<<endl;
                cout<<"Percentage: "<<s[a].per<<"%"<<endl;
                cout<<"Grade: "<<s[a].grade<<endl;
                found++;
            }
        }
        if(found == 0){
            cout<<"Student ID Not Found\n";
        }
    }
}

void update(){
    system("cls");
    cout<<"\t--- Update Record ---\n";
    if(i == 0){
        cout<<"No Found Record\n";
    }
    else{
        int id , found = 0;
        cout<<"Enter Student ID: ";
        cin>>id;
        for(int a = 0; a < i; a++){
            if(id == s[a].id){
                cout<<"Enter Student Name: ";
                cin>>s[a].name;
                cout<<"Enter Student Marks: ";
                cin>>s[a].marks;
                s[i].per = s[a].marks/100*100;
                if(s[a].per >= 85){
                    s[a].grade = "A+";
                }
                else if(s[a].per >= 75){
                    s[a].grade = "A";
                }
                else if(s[a].per >= 65){
                    s[a].grade = "B+";
                }
                else if(s[a].per >= 55){
                    s[a].grade = "B";
                }
                else if(s[a].per >= 50){
                    s[a].grade = "c";
                }
                else if(s[a].per >= 45){
                    s[a].grade = "D";
                }
                else if(s[a].per >= 33){
                    s[a].grade = "E";
                }
                else{
                    s[a].grade = "F";
                }
                cout<<"\t--- Update Record Successfully ---\n";
                found++;
            }
        }
        if(found == 0){
            cout<<"Student ID Not Found\n";
        }
    }
}

void del(){
    system("cls");
    cout<<"\t--- Delete Record ---\n";
    if(i == 0){
        cout<<"\tNo Found Record\n";
    }
    else{
        int id , found = 0;
        cout<<"Enter Student ID: ";
        cin>>id;
        for(int a = 0; a < i; a++){
            if(id == s[a].id){
                for(int m = a; m < i - 1; m++){
                    s[m].id = s[m+1].id;
                    s[m].name = s[m+1].name;
                    s[m].marks = s[m+1].marks;
                    s[m].per = s[m+1].per;
                    s[m].grade = s[m+1].grade;
                }
                cout<<"\t--- Delete Record Successfully ---\n";
                found++;
                i--;
                break;
            }
            if(found == 0){
            cout<<"Student ID Not Found\n";
            }
        }
    }
}

void show(){
    system("cls");
    cout<<"\t--- Show All Record ---\n";
    if(i == 0){
        cout<<"\t--- No Record Found ---\n";
    }
    else{
        for(int a = 0; a < i; a++){
            cout<<"ID: "<<s[a].id<<endl;
            cout<<"Name: "<<s[a].name<<endl;
            cout<<"Marks: "<<s[a].marks<<endl;
            cout<<"Percentage: "<<s[a].per<<"%"<<endl;
            cout<<"Grade: "<<s[a].grade<<endl;
            cout<<"-------------\n";
        }
    }
}

int main(){
    p:
    system("cls");

    int choice;

    cout<<"\t --- Student Management System --- \n";
    cout<<"\t|  1. Insert Record \n";
    cout<<"\t|  2. Search Record \n";
    cout<<"\t|  3. Update Record \n";
    cout<<"\t|  4. Delete Record \n";
    cout<<"\t|  5. Show Record \n";
    cout<<"\t|  6. Exit\n";
    cout<<"Enter Your Choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            insert();
            break;

        case 2:
            search();
            break;

        case 3:
            update();
            break;

        case 4:
            del();
            break;

        case 5:
            show();
            break;

        case 6:
            exit(0);

        default:
            cout<<"--- Invalid Choice---";
    }

    getch();
    goto p;
}