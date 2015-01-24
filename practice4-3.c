#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //char name[10];
    char name[256]; //安全のため

    printf("見習い魔術師イーノ最初の受難\n\n");

    int flag = 0;
    do{
        printf("キャラクターの名前を入力してください: ");
        scanf("%s%*c", name);
        printf("キャラクターの名前は%sでよいですか？ (Y/n)\n", name);
        
        char check;
        scanf("%c", &check);
        check = toupper(check);
        
        switch( check ){
        case 'Y': flag = 0; break;
        case 'N': flag = 1; break;
        default : flag = 0; break;
        }
    }while( flag );

    return 0;
}
