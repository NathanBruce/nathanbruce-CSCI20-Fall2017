#include <iostream>
#include <string>
using namespace std;



class book
{
public:
   void SetAuthor(string author);
   void SetTitle(string title);
   void SetCopyYear(int year);

   string GetAuthor() const;
   string GetTitle() const;
   int GetCopyYear() const;
   void PrintData();

private:
   string author_;
   string title_;
   int copyright_year_;
};

void book::SetAuthor(string author);{
    
}

void book::SetTitle(string title){
    
};

void book::SetCopyYear(string year){
    
};


string book::GetAuthor() const{
    return author_;
} 

string book::GetTitle() const {
    return title_;
}

int book::GetCopyYear() const{
    return copyright_year_;
} 
 

void book::PrintData(){
    cout << GetAuthor() << endl;
    cout << GetTitle() << endl;
    cout << GetCopyYear() << endl;
}
int main() {


 //make a loop to go through the books
 
string title;
string author;
int copyright_year = 0;


    
    book a;
      a.book_title =;
      a.book_author =;
      a.copyright_year =;

    book b;
      b.book_title =;
      b.book_author =;
      b.copyright_year =;

    book c;
      c.book_title =;
      c.book_author =;
      c.copyright_year =;

    book d;
      d.book_title =;
      d.book_author =;
      d.copyright_year =;

    book e;
      e.book_title =;
      e.book_author =;
      e.copyright_year =;


cout << "Enter the title of the book ";
cin >> GetBookInfo(book_author);

cout << endl << "Enter the author of the book: ";
cin >> a.book_author;

cout << endl << "Enter the copyright year: ";
cin >> a.copyright_year;

return 0;

}
