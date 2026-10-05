#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;

    while (current != nullptr) {
        ListNode* nextNode = current->next;

        current->next = prev;

        prev = current;
        current = nextNode;
    }

    return prev;
}

bool isPalindrome(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
        return true;

    // Find middle
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast->next != nullptr &&
           fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    ListNode* secondHalf = reverseList(slow->next);

    ListNode* firstHalf = head;

    while (secondHalf != nullptr) {
        if (firstHalf->val != secondHalf->val)
            return false;

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}