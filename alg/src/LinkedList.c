
typedef struct Node{
    void* next;
    void* previous;
    void* data;
} Node;

typedef struct DoubleLinkedListStruct{
    Node* head;
}DoubleLinkedList;

DoubleLinkedList* newLinkedList(){
     DoubleLinkedList doubleLinkedList;
     return &doubleLinkedList;
}


void addNodeToLinkedList(DoubleLinkedList* linkedList, Node* node){
    
}
