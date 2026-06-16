#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int key;
    int value;

    Node* prev;
    Node* next;

    Node(int k, int v) {
        key = k;
        value = v;
        prev = nullptr;
        next = nullptr;
    }
};

class LRUCache {

private:

    int capacity;

    unordered_map<int, Node*> cache;

    Node* head;
    Node* tail;

    void removeNode(Node* node) {

        Node* prevNode = node->prev;
        Node* nextNode = node->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    void insertFront(Node* node) {

        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

public:

    LRUCache(int cap) {

        capacity = cap;

        head = new Node(0, 0);
        tail = new Node(0, 0);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {

        if(cache.find(key) == cache.end())
            return -1;

        Node* node = cache[key];

        removeNode(node);
        insertFront(node);

        return node->value;
    }

    void put(int key, int value) {

        if(cache.find(key) != cache.end()) {

            Node* node = cache[key];

            node->value = value;

            removeNode(node);
            insertFront(node);

            return;
        }

        if(cache.size() == capacity) {

            Node* lru = tail->prev;

            removeNode(lru);

            cache.erase(lru->key);

            delete lru;
        }

        Node* newNode =
        new Node(key, value);

        insertFront(newNode);

        cache[key] = newNode;
    }
};

int main() {

    LRUCache cache(2);

    cache.put(1, 1);
    cache.put(2, 2);

    cout << cache.get(1) << endl;

    cache.put(3, 3);

    cout << cache.get(2) << endl;

    cache.put(4, 4);

    cout << cache.get(1) << endl;
    cout << cache.get(3) << endl;
    cout << cache.get(4) << endl;
}