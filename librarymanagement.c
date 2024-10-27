#include <stdio.h>
#include <string.h>

// Define structures to hold student and book information
struct Student {
    char name[50];
    int id;
    int booksAssigned;
};

struct Book {
    char title[50];
    char author[50];
};

int main() {
    struct Student students[10];
    struct Book books[3];
    char searchName[50];
    int searchId;
    int studentFound = 0;
    int bookFound = 0;

    // Input student names, IDs, and number of books already assigned
    printf("Enter the names, IDs, and number of books already assigned to 10 students:\n");
    for(int i = 0; i < 10; i++) {
        printf("Student %d Name: ", i+1);
        scanf("%s", students[i].name);
        printf("Student %d ID: ", i+1);
        scanf("%d", &students[i].id);
        printf("Number of books already assigned to Student %d: ", i+1);
        scanf("%d", &students[i].booksAssigned);
    }

    // Input book titles and authors
    printf("Enter the titles and authors of 3 books:\n");
    for(int i = 0; i < 3; i++) {
        printf("Book %d Title: ", i+1);
        scanf("%s", books[i].title);
        printf("Book %d Author: ", i+1);
        scanf("%s", books[i].author);
    }

    // Ask user for a name and ID to search
    printf("Enter a student name to search: ");
    scanf("%s", searchName);
    printf("Enter a student ID to search: ");
    scanf("%d", &searchId);

    // Search for the student by name or ID
    for(int i = 0; i < 10; i++) {
        if(strcmp(students[i].name, searchName) == 0 || students[i].id == searchId) {
            printf("Student found: %s with ID: %d\n", students[i].name, students[i].id);
            studentFound = 1;
            
            // Check if the student has already been assigned 3 books
            if (students[i].booksAssigned >= 3) {
                printf("Limit of taking books is over for this student.\n");
                return 0; // Exit if the student has already been assigned 3 books
            }
            break;
        }
    }

    if(!studentFound) {
        printf("Student not found.\n");
        return 0; // Exit if student is not found
    }

    // Ask user for a book title and author to search
    char searchTitle[50];
    char searchAuthor[50];
    printf("Enter a book title to search: ");
    scanf("%s", searchTitle);
    printf("Enter the author of the book to search: ");
    scanf("%s", searchAuthor);

    // Search for the book by title and author
    for(int i = 0; i < 3; i++) {
        if(strcmp(books[i].title, searchTitle) == 0 && strcmp(books[i].author, searchAuthor) == 0) {
            printf("Book found: %s by %s\n", books[i].title, books[i].author);
            bookFound = 1;
            break;
        }
    }

    if(!bookFound) {
        printf("Book not available.\n");
    } else {
        printf("Book assigned to student %s with ID %d\n", searchName, searchId);
    }

    return 0;
}
