#include <iostream>
#include <string>
using namespace std;



class book
{
public:
   void SetAuthor(string);
   void SetTitle(string);
   void SetCopyYear(int);

   string GetAuthor() const;
   string GetTitle() const;
   int GetCopyYear() const;
   
   void PrintData() {
    cout << author_ << endl;
    cout << title_ << endl;
    cout << copyright_year_ << endl;
   }

private:
   string author_;
   string title_;
   int copyright_year_;
};

void book::SetAuthor(string author){
    author_ = author;
}

void book::SetTitle(string title){
    title_ = title;
};

void book::SetCopyYear(int year){
    copyright_year_ = year;
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





int main() {


 //make a loop to go through the books
 
string title;
string author;
int copyright_year = 0;
book book_one;
book book_two;
book book_three;
book book_four;
book book_five;

    
cout << "Enter the book name: ";
     getline(cin, title);
     book_one.SetTitle(title);

cout << "Enter author's name: ";
     getline(cin, author);
     book_one.SetAuthor(author);
     
cout << "Enter copyright year: ";
     cin >> copyright_year;
     cin.ignore(1000, '\n');
     book_one.SetCopyYear(copyright_year);
      
book_one.PrintData();
      
cout << "Enter the book name: ";
     getline(cin, title);
     book_two.SetTitle(title);

cout << "Enter author's name: ";
     getline(cin, author);
     book_two.SetAuthor(author);
     
cout << "Enter copyright year: ";
     cin >> copyright_year;
     cin.ignore(1000, '\n');
     book_two.SetCopyYear(copyright_year);
      
book_two.PrintData();
      
cout << "Enter the book name: ";
     getline(cin, title);
     book_three.SetTitle(title);

cout << "Enter author's name: ";
     getline(cin, author);
     book_three.SetAuthor(author);
     
cout << "Enter copyright year: ";
     cin >> copyright_year;
     cin.ignore(1000, '\n');
     book_three.SetCopyYear(copyright_year);
      
book_three.PrintData();
      
cout << "Enter the book name: ";
     getline(cin, title);
     book_four.SetTitle(title);

cout << "Enter author's name: ";
     getline(cin, author);
     book_four.SetAuthor(author);
     
cout << "Enter copyright year: ";
     cin >> copyright_year;
     cin.ignore(1000, '\n');
     book_four.SetCopyYear(copyright_year);
      
book_four.PrintData();
      
cout << "Enter the book name: ";
     getline(cin, title);
     book_five.SetTitle(title);

cout << "Enter author's name: ";
     getline(cin, author);
     book_five.SetAuthor(author);
     
cout << "Enter copyright year: ";
     cin >> copyright_year;
     cin.ignore(1000, '\n');
     book_five.SetCopyYear(copyright_year);
      
book_five.PrintData();

return 0;

}
