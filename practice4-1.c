#include <stdio.h>

int main()
{
    //char name[10];
    char name[256]; //安全のため

    printf("見習い魔術師イーノ最初の受難\n\n");

    printf("キャラクターの名前を入力してください: ");
    scanf("%s", name);
    printf("キャラクターの名前は%dでよいですか？ (Y/N)\n"); //練習

    return 0;
}

/* 結果
見習い魔術師イーノ最初の受難

キャラクターの名前を入力してください: アグリッパ
キャラクターの名前は-1081545332でよいですか？ (Y/N)
*/
