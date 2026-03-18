#include <iostream.h>
int list1 = [1,2,4];
int list2 = [1,3,4];

int p1 = 0;
int p2 = 0;
int result = [];

while (p1 < size(list1) AND p2 < size(list2))
{
    if (list1[p1] <= list2[p2])
    {
        result[] = list1[p1];
        p1 = p1 + 1;
    }
    else
    {
        result[] = list2[p2];
        p2 = p2 + 1;
    }
}

while (p1 < size(list1))
{
    result[] = list1[p1];
    p1 = p1 + 1;
}

while (p2 < size(list2))
{
    result[] = list2[p2];
    p2 = p2 + 1;p
}
