#include <iostream>
using namespace std;

class LinkedList {
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int x) : val(x), next(NULL) {}
    };

    ListNode* head;

    ListNode* splitList(ListNode* node) {
        ListNode* slow = node;
        ListNode* fast = node->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondHalf = slow->next;
        slow->next = NULL;
        return secondHalf;
    }

    ListNode* mergeLists(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        if (l1->val < l2->val) {
            l1->next = mergeLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeLists(l1, l2->next);
            return l2;
        }
    }

    ListNode* mergeSort(ListNode* node) {
        if (!node || !node->next) return node;
        ListNode* secondHalf = splitList(node);
        ListNode* left = mergeSort(node);
        ListNode* right = mergeSort(secondHalf);
        return mergeLists(left, right);
    }

public:
    LinkedList() : head(NULL) {}

    void insert(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }

    void sort() {
        head = mergeSort(head);
    }

    void print() {
        ListNode* current = head;
        while (current) {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(8);
    list.insert(17);
    list.insert(5);
    list.insert(13);
    list.insert(4);

    cout << "Original List: ";
    list.print();

    list.sort();

    cout << "Sorted List: ";
    list.print();

    return 0;
}
