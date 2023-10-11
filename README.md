# Inhertence-cpp
This C++ code represents a simple Document Management System that allows you to store and display information about different types of documents. It includes three classes: Documents, Book, and Email, each serving as a container for specific types of document data. The system can store author and document date information, book titles and editions, and email content along with recipients.

Usage To use this Document Management System, follow these steps:

Compile the code using a C++ compiler.

Run the compiled program.

Follow the prompts to enter information about different documents.

The system will display the entered document information.

Classes Documents The Documents class serves as the base class for managing document information. It includes the following features:

input1(): This method allows you to input author names and document dates for a specified number of documents.

display\_author\_and\_date(): This method displays the entered author names and document dates.

Book The Book class is a subclass of Documents and focuses on managing book-related information. It includes the following features:

book\_info(): This method allows you to input book titles and editions for a specified number of books.

display\_book\_info(): This method displays the entered book titles and editions.

Email The Email class is another subclass of Documents and is designed for managing email-related information. It includes the following features:

input\_email\_and\_recipient(): This method allows you to input email content and recipients for a specified number of emails.

display\_email\_and\_recipient(): This method displays the entered email content and recipients.
