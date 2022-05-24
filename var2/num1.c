// Написать, что и почему будет напечатано в консоль.

struct Point
{
    int x;
    int y;
};

void moveX(struct Point p, int x)
{
    p.x += x;
    printf("{%d, %d}\n", p.x, p.y);
}
void main()
{
    struct Point p = {2, 3};
    moveX(p, 1);
    printf("{%d, %d}\n", ++p.x, p.y++);
}

// В результате работы кода выбет выведено:
// {3, 3}
// {3, 3}
// Все это потому что при выполнении программы мы обращаемся в функцию MoveX которая увеличивает величину p.x на 1