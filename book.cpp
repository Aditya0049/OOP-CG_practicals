#include<iostream>
using namespace std;
class book{
    public:
    string book_name;
    
    void getdata(){
        cout<<"ENter book name : ";
        cin>>book_name;
    }
    void display(){
        cout<<"Book name : "<<book_name;
    }
};

class tape{
    public:
    string tape_company;
    
    void getdata(){
        cout<<"ENter tape company name : ";
        cin>>tape_company;
    }
    void display(){
        cout<<"tape company name : "<<tape_company;
    }
    
};


int main(){
    
    try{
        tape t1;
        book b1;
        b1.getdata();
        b1.display();
        if(b1.book_name == "TTFF"){
            b1.book_name = "0";
            throw b1.book_name;
        }
    }catch(string book){
        cout<<"\n"<<book;
    }
    return 0;
}
