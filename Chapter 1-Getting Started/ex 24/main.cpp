#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book, lastBook;
    // read first book
    std::cin >> lastBook;
    int count = 1;
    // read each book in turn
    while(std::cin >> book)
        // if the read book is the same as the previous one, add 1 to the count
        if(book.isbn() == lastBook.isbn())
            ++count;
        // if not, reset counting and print how many times the book occurred
        else {
            std::cout << lastBook.isbn() << " occurs " << count << " times." << std::endl;
            count = 1;
            lastBook = book;
        }
    // print the count of the last book
    std::cout << lastBook.isbn() << " occurs " << count << " times." << std::endl;

    return 0;
}
