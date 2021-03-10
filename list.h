#ifndef LIST_H
#define LIST_H
struct list{
    int id;
    list* next;
};
void push_start(list*& head, int e);
void print(list* head);
void push_before(list*& head, int e, int f);
void push_after(list*& head, int e, int f);
void push_end(list*& head, int e);
void pop_start(list*& head);
void pop_end(list*& head);
void pop_ze(list*& head, int e);
bool hdoe(list* head);
#endif
