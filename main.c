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
        if(code==3){

        }
        if(code==4){
            
        }
        if(code==5){
            
        }
        if(code==6){
            
        }
        if(code==7){
            
        }
        if(code==8){
            
        }
    }
    return 0;
}   