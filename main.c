#include <stdio.h>
struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100]
};
struct student arr[100];
int index = 0;

int main()
{

    printf("chengjichaxunxinftong \n");
    while (1)
    {
        printf("1---tianjiaxueshengchengji \n");
        printf("2---shanchuxueshengchengji \n");
        printf("3---xianshisuoyouxueshengchengji \n");

        printf("4---yewu1:suoyouxueshengzhongfenshubujigedexuesheng(xiaoyu180) \n");
        printf("5---yewu2:meiyikedoubujigedexuesheng \n");
        printf("6---yw3:XSFSXGDZXS \n");
        printf("7---yw4:XSPJFZGDXS \n");
        printf("8---tuichu \n");

        printf("qingxuanze \n");

        int code;
        scanf("%d", &code);

        if (code == 1)
        {

            printf("qingshuruxueshengxingming \n");
            scanf("%s", arr[index].name);
            printf("qingshuruyuwenchengji \n");
            scanf("%d", &arr[index].yuwen);
            printf("qingshurushuxuecengji \n");
            scanf("%d", &arr[index].shuxue);
            printf("qingshuruyingyuchengji \n");
            scanf("%d", &arr[index].yingyu);

            index++;
            printf("shuruwancheng,gianjihuichejixu \n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {

            printf("qingshuruxueshengxingming \n");
            scanf("%s", arr[index].name);

            index--;
            printf("shanchuwancheng,gianjihuichejixu \n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            if (index > 0)
            {
                for (int i = 0; i < index; i++)
                {
                    printf("xusheng%s,yuwen%d,shuxue%d,yingyu%d \n", arr[i].name, arr[i].yuwen, arr[i].shuxue, arr[i].yingyu);
                }
            }
            else
            {
                printf("xianshishibai,dianjihuijixi \n");
            }
            printf("gianjihuichejixu \n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("zongfenbuhegedetongxueruxia: \n");
            for (int i = 0; i < index; i++)
            {
                int sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if (sum < 180)
                {
                    printf("xusheng%s,yuwen%d,shuxue%d,yingyu%d \n", arr[i].name, arr[i].yuwen, arr[i].shuxue, arr[i].yingyu);
                }
            }
            printf("dianjihuichejixu \n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
        }
        if (code == 6)
        {
        }
        if (code == 7)
        {
        }
        if (code == 8)
        {
            printf("jieshu \n");
            break;
        }
    }
    return 0;
}