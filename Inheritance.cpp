/*
Inheritance ->can be used fro using a particular class methods and memebers in another class.
It have better code reusabliity.
Types of INheritance:
................SINGLE INHERITANCE............
In this type there are only two classes that are base class(WHose properties will be derived by another class) and derived class(THE class
which uses properties of another class).
>For easy remebring :
BASE CLASS - PARENT
DERIVED CLASS - CHILDREN.
..............................................
..............MULTILEVEL INHERITANCE............
In this tye there is more than one level of inheritance like a family of three ore more genreations.
In this a class(II) takes property of another class(I) and a third class(III) takes the properties of (II) class.
.............................................
............MULTIPLE INHERITANCE.............
In this type a class takes properties from more than one class.
.............................................
............HIERARCHICAL INHERITANCE.........
This type of inheritance is the reverse of multiple inheritance. In this type a single base class have many derived class.
Say a single parent have more than one children.
............................................
...........HYBRID INHERITANCE...............
In thsi type more than one type of inheritance is used.
...........................................
*/
#include<iostream>
using namespace std;

class staff{
    public:
    int code;
    char name[50];
    void getdatastaff(){
      cout<<"Enter name(char):";
      cin>>name;
      cout<<"Enter code(int):";
      cin>>code;
}
    void displaystaff(){
      cout<<"Name is: "<<name<<endl;
      cout<<"Code is: "<<code<<endl;
}
};
class teacher : public staff{
    public:
      char subject[50];
      char publication[50];

      void getdatateacher(){
          cout<<"Enter subject name(char);";
          cin>>subject;
          cout<<"Enter publication name(char);";
          cin>>publication;
}
void displayteacher(){
    cout<<"Suject name is: "<<subject<<endl;
    cout<<"Publication name is: "<<publication<<endl;
}
};
class officer : public staff{
    public:
      int grade;
      void getdataofficer(){
          cout<<"Enter grade of the officer(int):";
           cin>>grade;
}
      void displayofficer(){
          cout<<"Grade is : "<<grade<<endl;
}
};

class typist : public staff{
    public:
      int speed;
      int dailywages;
      void getdatatypist(){
          cout<<"Enter typing speed of typist(int);";
          cin>>speed;
          cout<<"Enter dailywages of typist(int):";
          cin>>dailywages;
      }
       void displaytypist(){
          cout<<"Typing speed is : "<<speed<<endl;
          cout<<"Daily wages is : "<<dailywages<<endl;
}
};
int main(){
    int i;
    cout<<"MEnu:\n'1'for teacher\n'2' for officer\n'3' for typist\n'4'for exiting:";
    cin>>i;
    switch(i){
      case 1:
        cout<<".....TEACHERS INFORMATION....."<<endl;
        start_teacher:
        teacher obj1;
        cout<<"Enter teachers details:"<<endl;
        obj1.getdatastaff();
        obj1.getdatateacher();
        obj1.displaystaff();
        obj1.displayteacher();
        int a;
        cout<<"If you want to add more details enter '1'\nIf you dont want to add more detail enter '2':"<<endl;
        cin>>a;
        if(a == 1){
            goto start_teacher;
      }
        if(a == 2){
            goto end;
}
        break;

    case 2:
        cout<<".......OFFICER INFORMATION......"<<endl;
        start_officer:
        officer obj2;
        cout<<"Enter officer details:"<<endl;
        obj2.getdatastaff();
        obj2.getdataofficer();
        obj2.displaystaff();
        obj2.displayofficer();
        int b;
        cout<<"If you want to add more details enter '1'\nIf you dont want to add more detail enter '2':"<<endl;
        cin>>b;
        if(b == 1){
        goto start_officer;
}
        if(b == 2){
        goto end;
}
        break;

    case 3:
      cout<<"........TYPIST INFORMATION......."<<endl;
      start_typist:
      typist obj3;
      cout<<"Enter typist details:"<<endl;
      obj3.getdatastaff();
      obj3.getdatatypist();
      obj3.displaystaff();
      obj3.displaytypist();
      int c;
      cout<<"If you want to add more details enter '1'\nIf you dont want to add more detail enter '2':"<<endl;
      cin>>c;
      if(c == 1){
      goto start_typist;
      }
      if(c == 2){
      goto end;
    }
      break;
      deafult:
      cout<<"You exited \n";
}
      end:
      cout<<"THAnks for using it.";
return 0;
}
