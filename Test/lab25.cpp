#include <iostream>
#include <string>
using namespace std;



class BookInfo {
public:
   Book(const string & author_,
        const string & title_,
        const string & publisher_,
        const string & copyright_year,)
   string getName()
   {
         string name;
         name = author + ": " + title;
         return name.substr(0, 40);
   }
private:
   string author, title, publisher, copyright_year;
};
 

int main() {
    
string book_title;
string book_author;
int copyright_year = 0;
    
    BookInfo a;
      a.book_title =;
      a.book_author =;
      a.copyright_year =;

cout << "Enter the title of the book ";
cin >> Get_Functions(book_author);

cout << endl << "Enter the author of the book: ";
cin >> a.book_author;

cout << endl << "Enter the copyright year: ";
cin >> a.copyright_year;

return 0;

}
