#include <iostream>
using namespace std;

class BookInfo {
   public:
      void SetFirstName(string firstNameToSet);
      string GetFirstName() const;
      
      void SetPublisherName(string PublisherNameToSet);
      string GetPublisherName() const;
   private:
      string firstName;
      string publisher;
};


void BookInfo::SetFirstName(string firstNameToSet) {

    cout << "Enter author's first name: ";
    cin >> firstName;
    
    return;
}

string BookInfo::GetFirstName() const {
    return firstName;
}


void BookInfo::SetPublisherName(string setPublisher) {

    cout << "Enter the publisher's name: ";
    cin >> publisher;
    
    return;
}
    
string BookInfo::GetPublisherName() const {
    return publisher;
}
    


int main() {
    string book_author;
    BookInfo book_author1;
    
    book_author1.SetFirstName(book_author);
    cout << "First author's name is: " << book_author1.GetFirstName() << endl;
    
    
    string book_publisher;
    BookInfo book_pub;
    
    book_pub.SetPublisherName(book_publisher);
    cout << endl << "Book's publisher is: " << book_pub.GetPublisherName();
    
    
    
    

return 0;

}
