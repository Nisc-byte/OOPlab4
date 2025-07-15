#include <iostream>
#include <string>
using namespace std;

class Author {
private:
    string name;
    string degree;

public:
    void readAuthor() {
        cout << "Enter Author Name: ";
        getline(cin, name);
        cout << "Enter Author Degree: ";
        getline(cin, degree);
    }

    void displayAuthor() {
        cout << "Author Name: " << name << endl;
        cout << "Author Degree: " << degree << endl;
    }
};

class Publication {
private:
    string name;
    string location;

public:
    void readPublication() {
        cout << "Enter Publication Name: ";
        getline(cin, name);
        cout << "Enter Publication Location: ";
        getline(cin, location);
    }

    void displayPublication() {
        cout << "Publication Name: " << name << endl;
        cout << "Publication Location: " << location << endl;
    }
};

class Book {
private:
    string title;
    int no_of_pages;
    float price;
    Author author;
    Publication publication;

public:
    void readBook() {
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Number of Pages: ";
        cin >> no_of_pages;
        cout << "Enter Book Price: ";
        cin >> price;
        cin.ignore();
        cout << "\n--- Enter Author Details ---\n";
        author.readAuthor();

        cout << "\n--- Enter Publication Details ---\n";
        publication.readPublication();
    }

    void displayBook() {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << title << endl;
        cout << "Pages: " << no_of_pages << endl;
        cout << "Price: $" << price << endl;

        cout << "\n--- Author Details ---\n";
        author.displayAuthor();

        cout << "\n--- Publication Details ---\n";
        publication.displayPublication();
    }
};

int main() {
    Book b;
    b.readBook();
    b.displayBook();
    return 0;
}

