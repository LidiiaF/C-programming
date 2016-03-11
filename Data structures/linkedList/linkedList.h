void showList(struct node *ptr);
struct node * addNodeInList(struct node *ptr, int n);
struct node * initNode(int n);
struct node * clearList(struct node *ptr);
struct node * removeNodeByVal(struct node *ptr, int n);
int countNodesInList(struct node *ptr);
struct node * removeNodeInList(struct node *ptr, int n);


struct node{
    int val;
    struct node *next;
};
