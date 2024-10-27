# kajalg_library_mamangement_in_c
A simple command-line Library Management System in C for managing book records in a small library. This project includes core features like adding, viewing, searching, and managing book data, providing an accessible and efficient way for librarians to track books.
# Library Management System in C

A command-line Library Management System built in C, designed to help manage a small library's book records. This program provides functionalities like adding, searching, viewing, and updating book information for efficient library operations.

## Features

- **Add New Books:** Add book details, including title, author, and unique ID.
- **View Books:** List all books currently in the library.
- **Search Books:** Find books by title, author, or unique ID.
- **Delete Records:** Remove outdated or unnecessary book entries.
- **Update Book Information:** Edit existing book details as needed.
- **Borrow and Return Books:** Track which books are currently issued.

## Project Structure

- **main.c** - Main program logic and user interface.
- **book.h** - Contains structure definitions and function prototypes.
- **book.c** - Implements book management functions such as add, search, delete, and update.
- **database.txt** - Stores book records as a simple text file (this can be customized or upgraded to other storage systems).

## Getting Started

### Prerequisites

- A C compiler, such as GCC.

### How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/username/library-management-c.git
   cd library-management-c
2. Compile the code:
   gcc main.c book.c -o library_management

