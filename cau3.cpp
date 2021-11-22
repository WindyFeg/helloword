#include<queue>
#include<map>
#include<iostream>

using namespace std;
class book
{
    public:
    int pri;
    string name;
    book *next;

    book():pri(0), name(""), next(NULL){};
    book(int Pri, string Name)
    {
        pri = Pri;
        name = Name;
        next = NULL;
    };
};
class PrinterQueue
{
    // your attributes
    public:
    book* Book;
    int count = 0;


    public:


    void addNewRequest(int priority, string fileName)
    {
        count++;
        book* NewBook = new book(priority, fileName);
        if(Book == NULL){Book = NewBook; return;}

         if(priority >= Book->pri)
         {
             NewBook->next = Book;
             Book = NewBook;
         }
    }

    void print()
    {
        // your code here
        // After some logic code, you have to print fileName with endline 
        if(Book == NULL){cout<<"nah"<<endl;return;}
        cout<<this->Book->name<<endl;
        Book =  Book->next;
        return;
    }
};

//goodbye.pdf
//goodnight.pdf
//hello.pdf
int main()
    {PrinterQueue* myPrinterQueue = new PrinterQueue();
    myPrinterQueue->addNewRequest(1, "hello.pdf");
    //myPrinterQueue->addNewRequest(2, "goodbye.pdf");
    //myPrinterQueue->addNewRequest(2, "goodnight.pdf");
    myPrinterQueue->print();
    myPrinterQueue->print();
    myPrinterQueue->print();}