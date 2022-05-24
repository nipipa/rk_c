void print(LNode listNode)
{
  struct list *p;
  p = listNode;
  do {
    printf("%d ", p->field); // вывод значения элемента p
    p = p->ptr; // переход к следующему узлу
  } while (p != NULL);
}