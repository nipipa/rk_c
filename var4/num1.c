// Написать, что и почему будет напечатано в консоль.

struct Point
{
    int x;
    int y;
};
void moveDown(struct Point arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i].y--;
    }
}

struct Point points[] = {
    {0, 0}, {10, 10}};

int main()
{
    moveDown(points, 2);
    printf("%d", ++points[1].y);
}

// В результате работы кода выбет выведено:
// 10
// Все это потому что при выполнении программы мф обращаемяс к 1 жэлементу массива структуры, а он по очереди 2 после 0, тк нумерация начинается с нуля, поэтому выводится значение 10.