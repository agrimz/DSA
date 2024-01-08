#include<iostream>
using namespace std;

class node {
public:
    int value;
    node* next;

    node() {
        value = 0;
        next = NULL;
    }

    node(int data) {
        this->value = data;
        this->next = NULL;
    }
};

class linkedList {
    node* head;
public:
    linkedList() {
        head = NULL;
    }

    void insert_end(int data) {
        node* newnode = new node(data);

        if (head == NULL) {
            head = newnode;
            return;
        }

        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    int size() {
        node* temp = head;
        int count = 0;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        return count;
    }

    void finding_center() {
        int mid = size() / 2;
        node* temp = head;

        for (int i = 0; i < mid; i++) {
            temp = temp->next;
        }

        cout << "Center element: " << temp->value << endl;
    }

    void display() {
        node* temp = head;

        if (temp == NULL) {
            cout << "No Elements" << endl;
        }

        while (temp != NULL) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    linkedList l;
    l.insert_end(1);
    l.insert_end(2);
    l.insert_end(3);
    l.insert_end(4);
    l.insert_end(5);

    cout << "Linked List: ";
    l.display();

    l.finding_center();

    return 0;
}