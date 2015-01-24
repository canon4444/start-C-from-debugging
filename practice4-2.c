#include <stdio.h>
#include <ctype.h> //練習

int main()
{
    //char name[10];
    char name[256]; //安全のため

    printf("見習い魔術師イーノ最初の受難\n\n");

    printf("キャラクターの名前を入力してください: ");
    scanf("%s%*c", name);
    printf("キャラクターの名前は%sでよいですか？ (Y/N)\n", name);

    //練習
    char flag;
    scanf("%c", &flag);
    flag = toupper(flag);

    return 0;
}

/* 結果
見習い魔術師イーノ最初の受難

キャラクターの名前を入力してください: アグリッパ
キャラクターの名前はアグリッパでよいですか？ (Y/N)
y
*/
