#include<iostream>
#include<iomanip>
using namespace std;
class book
{
    private:
    int pages,ISBno,accno;
    char book_name[50],Author[50];
    float price;
    public:
    void getbookdetails()
    {
        cout<<"enter ISBno";
        cin>>ISBno;
        cout<<"enter accno";
        cin>>accno;
        cout<<"enter book name";
        cin>>book_name;
        cout<<"enter name of the author";
        cin>>Author;
        cout<<"enter no.of pages book have";
        cin>>pages;
        cout<<"enter price of book";
        cin>>price;
    }  
    void displaybook()
    {
        cout<<endl<<"*****************************************";
        cout<<endl<<"--------------BOOK--------------";
        cout<<endl<<"*****************************************"<<endl;
        cout<<left<<setw(20)<<"ISBno"<<":"<<ISBno<<endl;
        cout<<left<<setw(20)<<"accno"<<":"<<accno<<endl;
        cout<<left<<setw(20)<<"Book name"<<":"<<book_name<<endl;
        cout<<left<<setw(20)<<"Author"<<":"<<Author<<endl;
        cout<<left<<setw(20)<<"no of pages"<<":"<<pages<<endl;
        cout<<left<<setw(20)<<"M.R.P"<<":"<<price<<endl;
    }
};
int main()
{
    book b;
    b.getbookdetails();
    b.displaybook();
    return 0;
}