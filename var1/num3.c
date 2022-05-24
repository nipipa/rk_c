void delete(LNode listNode, int value)
{
  struct list *temp;
  temp = value;
  while (temp->ptr != listnode) // просматриваем список начиная с корня
  { // пока не найдем узел, предшествующий listnode
    temp = temp->ptr;
  }
  temp->ptr = listnode->ptr; // переставляем указатель
  free(listnode); // освобождаем память удаляемого узла
  return(temp);
}