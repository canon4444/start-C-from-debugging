#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //char name[10];
    char name[256]; //安全のため
    char confirmation;

    //ゲームタイトル
    printf("見習い魔術師イーノ最初の受難\n\n");

    //プレイヤーネームの設定
    int flag = 0;
    do{
        printf("キャラクターの名前を入力してください: ");
        scanf("%s%*c", name);
        printf("キャラクターの名前は%sでよいですか？ (Y/n)\n", name);

        scanf("%c", &confirmation);
        confirmation = toupper(confirmation);
        
        switch( confirmation ){
        case 'Y': flag = 0; printf("了解しました．名前を確定します．\n"); break;
        case 'N': flag = 1; break;
        default : flag = 0; break;
        }
    }while( flag );

    return 0;
}
