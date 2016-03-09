struct node * createNode(int n);
struct node * addNodeInList(struct node *ptr, int n);
void showList(struct node *ptr);
struct node * clearList(struct node *ptr);
struct node * deleteNode(struct node *ptr, int n);
struct node * reverseList(struct node *ptr);

struct node{
    int val;
    struct node *next;
};
