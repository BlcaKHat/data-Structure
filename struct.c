#include<stdio.h>
#include<string.h>
int structure();
int main()  {
    structure();

}
int structure() {
    struct employee
    {
        int age;
        int weight;
        char name[15];
        /* data */
    };
    struct employee e1,e2,e3;
    e1.age=10;
    e1.weight=15;
    strncpy(e1.name,"vijay", 10);
    printf("%s\n",e1.name);
    printf("%d\n",e1.age);
    printf("%d\n",e1.name);
}
