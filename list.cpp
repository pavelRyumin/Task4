#include <iostream>
#include "list.h"
using namespace std;
void push_start(list*& head, int e){
    list *t = new list;
    t->id = e;
    t->next = head;
    head = t;
}
void print(list* head){
    list* t = head;
    while (t){
        cout << t->id << " ";
        t = t->next;
    }
}
void push_before(list*& head, int e, int f){
    if (head->id == f){
        push_start(head, e);
    }
    else {
        list* t = head;
        list* p = new list;
        p->id = e;
        while (t->next->id != f) {
            t = t->next;
        }
        p->next = t->next;
        t->next = p;
    }
}
void push_after(list*& head, int e, int f){
    list* t = head;
    list* p = new list;
    p->id = e;
    while (t->id != f) {
        t = t->next;
    }
    p->next = t->next;
    t->next = p;
}
void push_end(list*& head, int e){
    if (!head){
        push_start(head, e);
    }
    else {
        list* t = head;
        while (t->next) {
            t = t->next;
        }
        push_after(t, e, t->id);
    }
}
void pop_start(list*& head){
    int f;
    list *t = head;
    f = head->id;
    head = head->next;
    delete(t);
}
void pop_end(list*& head){
    int f;
    if(!(head->next)){
        f = head->id;
        pop_start(head);
    }
    else {
        list* t = head;
        while(t->next->next) {
            t = t->next;
        }
        f = t->next->id;
        delete(t->next);
        t->next = NULL;
    }
}
void pop_ze(list*& head, int e){
    if (head->id == e) {
        pop_start(head);
    }
    else {
        list* t = head;
        while(t->next->id != e) {
            t = t->next;
        }
        if (!(t->next->next)) {
            pop_end(head);
        }
        else {
            pop_start(t->next);
        }
    }
}
bool hdoe(list* head){
    int c = 0;
    list* t = head;
    int x1, x2;
    while (t){
        x1 = 0;
        x1 += t->id;
        t = t->next;
        list* t1 = t;
        while (t1) {
            x2 = 0;
            x2 += t1->id;
            if(x1 == x2) {
                c++;
            }
            t1 = t1->next;
        }
    }
    return (c != 0);
}
