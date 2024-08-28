#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Animal{
private:
    int age;
public:
    Animal(){
        ishealthy = true;
    }
    //parmeterized
    Animal(string name,int weight,string food){
        this->name=name;
        this->weight=weight;
        this->food = food;
    }
    //copy constructor(it can be default also)
    Animal(Animal &organi){
        this->age = organi.age;
        this->food = organi.food;
        this->weight=organi.weight;
        this->ishealthy = organi.ishealthy;
    }
    string name;
    int weight;
    string food;
    bool ishealthy;
    void eat_food(){
        cout<<"eating food"<<endl;
    }

    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return this->age;
    }
};
class Student{
public:
    string name;
    double* cgpa;

    Student(string name,double cgpa){
        this->name = name;
        *this->cgpa = cgpa;
    }
    //shallow copy
    // Student(Student &s){
    //     this->name = s.name;
    //     this->cgpa = s.cgpa;
    // }

    Student(Student &s){
        this->name = s.name;
        this->cgpa = new double;
        //created new memory deep copy
        *this->cgpa = *s.cgpa;
    }

    void getDetails(){
        cout<<"name "<<this->name<<endl;
        cout<<"cgpa "<<*this->cgpa<<endl;
    }

};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Animal a1("lion",60,"meat");
    a1.setAge(10);
    Animal a2(a1);
    
    Student s1("Jay",8.7);
    s1.getDetails();

    Student s2(s1);
    s2.name = "vajt";
    *s2.cgpa= 10;
    s1.getDetails();
    return 0;
}