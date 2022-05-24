#include <stdio.h>

struct Point { int x; int y; };  
void moveUp(struct Point *p) {  
 printf("%d %d\n", p->x, p->y++);  
}  
struct Point p = {7, 3};  

int main(){
  moveUp(&p);  
  printf("%d %d\n", p.x, ++p.y);
  }