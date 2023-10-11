#include <iostream>
#include <string>
using namespace std;


class Documents {
protected:
    string author[100];
    string author_document_date[100];
    int num_docs;
public:
    void input1() {
        cout << "Enter number of documents: ";
        cin >> num_docs;
        for (int i = 0; i < num_docs; i++) {
            cout << "Enter author name: ";
            cin >> author[i];
            cout << "Enter document date: ";
            cin >> author_document_date[i];
            
        }
         cout<<endl<<endl;
        } 
    

    void display_author_and_date() {
        cout << "Author\t Document Date " << endl;
        for (int i = 0; i < num_docs; i++) {
            cout << author[i] << " \t " << author_document_date[i] << endl;
        }
        cout<<endl;
    }

};

class Book : public Documents{
	
	
	private:
    string title_of_books[100];
    string edition_of_the_book[100];
public:
    void book_info() {
        cout << "Enter number of documents: ";
        cin >> num_docs;
        for (int i = 0; i < num_docs; i++) {
            cout << "Enter title of book: ";
            cin >> title_of_books[i];
            cout << "Enter edition of the book: ";
            cin >> edition_of_the_book[i];
        }
         cout<<endl<<endl;
    }
   
    
    void display_book_info() 
	{
     	
 cout << "Title of the books \t Edition of the books " << endl;
        for (int i = 0; i < num_docs; i++) {
            cout <<title_of_books[i]<< " \t " << edition_of_the_book[i] << endl;
        }
         cout<<endl;
    }
};

class Email : public  Documents{
	
string email[100];
string recipient[100];

public:
	
void input_email_and_recipient()
{
cout << "Enter number of documents: ";
cin >> num_docs;
for (int i = 0;i<num_docs;i++)
{
	
	cout << "Enter Email: ";
            cin >>email[i];
            cout << "Enter Recipient: ";
            cin >> recipient[i];
}
 cout<<endl<<endl;
}  


 void display_email_and_recipient() 
	{
     	
 cout << "No. of Emails\tRecipeints " << endl;
        for (int i = 0; i < num_docs; i++) {
            cout <<email[i]<< " \t " << recipient[i] << endl;
        }
        cout<<endl;
    }


};

int main()
{
Documents d1;
d1.input1();
d1.display_author_and_date();
Book b1;
b1.book_info();
b1.display_book_info();
Email e1;
e1.input_email_and_recipient();
e1.display_email_and_recipient();

}


    
