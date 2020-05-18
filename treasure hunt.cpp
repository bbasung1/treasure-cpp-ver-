#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
    int a,c,d;
    int e=0;
    char b,f;
    int x=0;
    int y=0;
    printf("범위를 지정하세요\n");
    scanf("%d",&a);
    srand(time(NULL));
    c=(rand()%a)+1;
    d=(rand()%a)+1;
    printf("게임 힌트를 키겠습니까?(y/n");
    scanf("%s",&f);
    if(f=='y')
    {
        e=1;
    }

    while(1)
    {
        printf("wasd중 하나 입력\n");
        scanf("%s",&b);

        switch (b)
        {
        case 'w':
            y=y+1;
            break;
        case 's':
            y=y-1;
            break;
        case 'a':
            x=x-1;
            break;
        case 'd':
            x=x+1;
            break;
        default:
            printf("wasd만 입력하세요\n");
        }


        printf("x좌표:%d, y좌표:%d\n",x,y);


        if(e==1)
        {
            if(x==c)
            {
                printf("x좌포는 맞췄습니다\n");
            }
            if(y==d)
            {
                printf("y좌표는 맞췄습니다.\n");
            }
        }

        if(x==c && y==d)
        {
            printf("보물을 찾았다!\n");
            break;
        }

    }

}
