#include <stdio.h>

int main(void)
{
    //char name[10];
    char name[256]; //安全のため
    char confirmation;

    //ゲームタイトル
    printf("見習い魔術師イーノ最初の受難\n\n");

    //プレイヤーネームの設定
    printf("キャラクターの名前を入力してください: ");
    scanf("%s", name);
    printf("キャラクターの名前は%sでよいですか？ (Y/N)\n", name);
    scanf("%*c%c", &confirmation);
    if( confirmation == 'y' ) printf("了解しました．名前を確定します．\n");


    return 0;
}
