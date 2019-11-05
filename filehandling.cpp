#include<iostream>
#include<fstream>
using namespace std;

class student{
    int id;
    char name[20];
    int marks[5];
    public:
        void getData(){
            cout<<"enter id: ";
            cin>>id;
            cout<<"\nenter name ";
            cin.ignore();
            cin.getline(name,19);
            cout<<"\nenter marks in 5 subjects: \n";
            for(int i=0;i<5;i++)
                cin>>marks[i];
        }
        float cal_average(){
            float aveg;
            for(int i=0;i<5;i++){
                aveg=aveg+marks[i]/5;
            }
            return aveg;
        }
        friend void storeData(student &s);
        friend void showData(student &s);
};
void storeData(student &s){
    ofstream ob("studentData.txt");
    ob.write((char*)&s,sizeof(s));
    ob.close();
}
void showData(student &s){
    ifstream ob("studentData.txt");
    ob.read((char*)&s,sizeof(s));
    cout<<s.id<<" "<<s.name<<" "<<s.cal_average();
    for(int i=0;i<5;i++){
        cout<<s.marks[i]<<" ";
    }
    ob.close();
}
int main(){
    student st;
    st.getData();
    storeData(st);
    showData(st);
    return 0;
}