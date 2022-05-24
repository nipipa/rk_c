// Написать функцию, которая добавляет элемент в конец списка и возвращает указатель на него.

void append(LNode *listnode, char value)
{
    LNode p, newPtr = (LNode)calloc(1, sizeof(ListNode)); // создаем узел
    if (!*listnode)
        *listnode = newPtr;
    else
    {
        for (p = *listnode; p->nextPtr; p = p->nextPtr)
            ;
        p->nextPtr = newPtr;
    }
}