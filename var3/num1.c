// Написать, что и почему будет напечатано в консоль.

struct Person
{
    char *name;
    int age;
};
struct Person people[] = {
    {"Ivan", 40}, {"Petr", 30}};

struct Person *pp = people;

void main()
{
    printf("%d\n", ++pp->age);
    pp++;
    printf("%s\n", ++pp->name);
}

// В результате работы кода выбет выведено:
// 41
// etr
// Все это потому что при выполнении программы сначала мы прибавляем к значению age 1, получается 41, а далее мы смещаемся на 1 элемент массиива при образении к name и получается слово без первой буквы