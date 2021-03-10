#include <iostream>
#include <locale.h>
#include "list.h"
using namespace std;
int main() {
    list *head = NULL;
    int x, a, p;
    cout << "Enter the appropriate number" << endl;
    cout << "0 - end of the program" << endl;
    cout << "1 - inserting an element at the beginning of the list" << endl;
    cout << "2 - print the list" << endl;
    cout << "3 - insert an element into the list before the given element" << endl;
    cout << "4 - insert an item after a given item into the list" << endl;
    cout << "5 - insert item at the end of the list" << endl;
    cout << "6 - remove the first element" << endl;
    cout << "7 - remove the last element" << endl;
    cout << "8 - remove the given item" << endl;
    cout << "9 - check if the list L contains at least two identical elements" << endl;
    while (1) {
        cin >> x;
        switch(x)
        {
        case 0:
            return 0;
        case 1:
            cout << "Enter element: ";
            cin >> a;
            push_start(head, a);
            break;
        case 2:
            print(head);
            cout << endl;
            break;
        case 3:
            cout << "Enter element: ";
            cin >> a;
            cout << "Enter the given element: ";
            cin >> p;
            push_before(head, a, p);
            break;
        case 4:
            cout << "Enter element: ";
            cin >> a;
            cout << "Enter the given element: ";
            cin >> p;
            push_after(head, a, p);
            break;
        case 5:
            cout << "Enter element: ";
            cin >> a;
            push_end(head, a);
            break;
        case 6:
            pop_start(head);
            break;
        case 7:
            pop_end(head);
            break;
        case 8:
            cout << "Enter element: ";
            cin >> a;
            pop_ze(head, a);
            break;
        case 9:
            if(hdoe(head)) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
            break;
        }
    }
    return 0;
}
