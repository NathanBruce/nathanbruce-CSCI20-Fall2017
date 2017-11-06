#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Compute Sphere uses the equation to calculate the volume of a sphere based on radius.
   Input: Accepts a single integer for radius.
   Output: None */
void ComputeSphere(int); // will be 1 number used to calculate volume of sphere. paramater/type: int. output will be a number

void ComputeBox(int, int, int); //will be 3 numbers used to calculate volume of sphere. paramater/type: int. output will be a number

void ComputePyramid(int, int); //will 2 one number used to calculate volume of sphere. paramater/type: int. output will be a number

int main()
{
    int length = 1;
    int width = 1;
    int height = 1;

    ComputeSphere(length);  //input for the paramater will be an integer of 1 (length)
    ComputeBox(length, width, height); //input for the 3 paramaters will be 1, 1, 1 (l/w/h)
    ComputePyramid(length, height); // input for the 2 paramaters will be 1, 1 (length, height)

    cin>>length>>width>>height; //collect users input for l/w/h
    
    ComputeSphere(length); << // puts user input into ComputeSphere function
    ComputeBox(length, width, height); //puts users inputs (l/w/h) into computebox function
    ComputePyramid(length, height); // put user inputs for (l/h) into computepyramid
}

void ComputeSphere(int l){ //plugs the inital length of 1 as equation arguments, and also users input for length
    double v = (4.0/3) * 3.14 * (l * l * l); //compute volume of sphere
    cout<<"The volume of a sphere is "<<v<<endl; //outputs the volume
}

void ComputeBox(int l, int w, int h){ //plugs the inital length of l/w/h (1,1,1), as equation arguments and also users input for l/w/h
    double v = l * w * h; //compute volume of rectangular box
    cout<<"The volume of a rectangular box is "<<v<<endl; //outputs the volume
}

void ComputePyramid(int l, int h){ //plugs the inital length of l/h (arguments 1,1) as equation arguments, and also users input for l/h
    double v = (1.0/3) * l * h; //computes volume of rectangular box
    cout<<"The volume of a pyramid is "<<v<<endl; //outputs volume of rectangular box
} 

//Appropriately comment all of the functions.  Make a note to identify the paramters and input.
//Comment the main function as if it was pseudocode.
//   make note of where the functions are called and the arguments.


    book b;
      b.book_title = GetTitle();
      b.book_author = GetAuthor();
      b.copyright_year+ = GetCopyYear();

    book c;
      c.book_title = GetTitle();
      c.book_author = GetAuthor();
      c.copyright_year+ = GetCopyYear();

    book d;
      d.book_title = GetTitle();
      d.book_author = GetAuthor();
      d.copyright_year+ = GetCopyYear();

    book e;
      e.book_title = GetTitle();
      e.book_author = GetAuthor();
      e.copyright_year_ = GetCopyYear();


cout << "Enter the title of the book ";
cin >> book.SetAuthor(book_author);


cout << endl << "Enter the author of the book: ";
cin >> a.book_author;

cout << endl << "Enter the copyright year: ";
cin >> a.copyright_year;



