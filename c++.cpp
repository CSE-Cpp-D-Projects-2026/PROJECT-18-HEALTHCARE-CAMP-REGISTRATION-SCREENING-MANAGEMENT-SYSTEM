#include <iostream>
#include <fstream>    // file handling
#include <sstream>    // to split a line into fields
#include <string>
#include <vector>
using namespace std;
const string FILE_NAME = "patients.txt";
const string DOCTOR_FILE  = "doctors.txt";
struct Patient{
    int id;
    string name;
    int age;
    string camp;
    string status;
};
struct DoctorInfo{
    string name;
    int id;
    string camp;
    int handled;
    int pending;
};
vector<patient> load(){
    vector<patient> list:
    ifstream file(FILE_NAME):
    string line;
    while(getline(file,line)){
        if (line.empty()){
            continue;
        }
        stringstream ss(line);
        string f[5];
        for (int i=0;i<4;i++){
            getline(ss,f[i],',');
            
        }
        getline(ss,f[4]);
        list.push_back({stoi(f[0]),f[1],stoi(f[2]),f[3],f[4]});
    }
    return list;
}
class Staff{
    protected:
    string name;
    int id;
    string department;
    public:
    Staff(string n,int i,string d){
        name=n;
        id=i;
        department=d;
    }
    void staffDetails(){
        cout<<"NAME: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"DEPARTMENT: "<<department<<endl;
    } 
}
class ScreenigStaff:public Staff{
    public:
    void work(){
        cout<<"PATIENTS BE READY...."; 

}
int main(){
    cout<<"WELCOME TO HEALTHCARE CAMP MANAGEMENT SYSTEM";
    int choice;
    cout<<" 1.BLOOD TEST CAMP\n";
    cout<<" 2.ENT CAMP\n";
    cout<<" 3.ECG  CAMP\n";
    cout<<" 4.DIABETES CAMP\n";
    cout<<"----------------------------------"<<endl;
    cout<<"ENTER WHAT TEST YOU NEED TO CHECK";
    cin >>choice;
    switch(choice){
        case 1:
        cout<<"YOU SELECTED BLOOD TEST CAMP\n";
        cout<<"DOCTOR NAME : DR.MAARAN and DR.YAZHINI \n"
        cout<<"QUALIFICATION : MBBS.,MD.,Neurosurgeon\n";
        cout<<"CAMP TIME: 10:00 AM - 4:00 PM\n";
        cout<<"TESTS TAKEN:\nTHYROID TEST\nSUGAR TEST\nHB LEVEL\nBP LEVEL\n---------------------------";
        break;
        case 2:
        cout << "YOU SELECTED ENT CAMP\n";
        cout << "DOCTOR NAME : DR. KAVIN\n";
        cout << "QUALIFICATION : MBBS., MS (ENT)\n";
        cout << "CAMP TIME: 10:00 AM - 4:00 PM\n";
        cout << "TESTS TAKEN:\n";
        cout << "EAR CHECKUP\n";
        cout << "NOSE CHECKUP\n";
        cout << "THROAT CHECKUP\n";
        cout << "HEARING TEST\n";
        cout << "---------------------------\n";
        break;
        case 3:
        cout << "YOU SELECTED ECG CAMP\n";
        cout << "DOCTOR NAME : DR. ARUN\n";
        cout << "QUALIFICATION : MBBS., MD (CARDIOLOGY)\n";
        cout << "CAMP TIME: 10:00 AM - 4:00 PM\n";
        cout << "TESTS TAKEN:\n";
        cout << "ECG TEST\n";
        cout << "HEART RATE CHECKUP\n";
        cout << "BLOOD PRESSURE CHECKUP\n";
        cout << "HEART RHYTHM CHECKUP\n";
        cout << "---------------------------\n";
        break;
        case 4:
        cout << "YOU SELECTED DIABETES CAMP\n";
        cout << "DOCTOR NAME : DR. PRIYA\n";
        cout << "QUALIFICATION : MBBS., MD (GENERAL MEDICINE)\n";
        cout << "CAMP TIME: 10:00 AM - 4:00 PM\n";
        cout << "TESTS TAKEN:\n";
        cout << "FASTING BLOOD SUGAR\n";
        cout << "RANDOM BLOOD SUGAR\n";
        cout << "POST-MEAL BLOOD SUGAR\n";
        cout << "HbA1c TEST\n";
        cout << "---------------------------\n";
        break;
        default:
        cout <<"INVALID CHOICE. PLEASE SELECT A VALID OPTION.\n";
    }
}
