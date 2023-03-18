

/*
 * Complete the 'reversePrint' function below.
 *
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

void reversePrint(SinglyLinkedListNode* llist) {
std::vector<int> v;
while(llist)
{
    v.push_back(llist->data);
    llist = llist->next;
}
reverse(v.begin(), v.end());
for(int i : v)
    cout << i << endl;
}

