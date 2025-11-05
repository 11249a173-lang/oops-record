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
    void getbookdetails();
    void displaybook();
};
void book :: getbookdetails()
{
    cout<<"enter book name:";
    cin>>book_name;
    cout<<"name of the author:";
    cin>>Author;
    cout<<"ISBno:";
    cin>>ISBno;
    cout<<"access no:";
    cin>>accno;
    cout<<"no.of pages:";
    cin>>pages;
    cout<<"M.R.P:";
    cin>>price;
}
void book :: displaybook()
{
    cout<<"--------BOOK DETAILS--------"<<endl;
    cout<<left<<setw(20)<<"bookname"<<":"<<book_name<<endl;
    cout<<left<<setw(20)<<"author"<<":"<<Author<<endl;
    cout<<left<<setw(20)<<"ISBno"<<":"<<ISBno<<endl;
    cout<<left<<setw(20)<<"accno"<<":"<<accno<<endl;
    cout<<left<<setw(20)<<"no.of pages"<<":"<<pages<<endl;
    cout<<left<<setw(20)<<"M.R.P"<<":"<<price<<endl;
}
int main()
{
    int i,n;
    book b[10];
    cout<<"enter n value:";
    cin>>n;
    for(i=0;i<=n;i++)
    b[i].getbookdetails();
    for(i=0;i<=n;i++) 
    b[i].displaybook();    
}