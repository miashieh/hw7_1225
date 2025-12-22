#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* in, * out;
    int cnt;
    char str[100];

    in = fopen("welcome.txt", "r");
    out = fopen("output.txt", "w");

    if (in != NULL && out != NULL)
    {
        while (!feof(in))
        {
            cnt = fscanf(in, "%s", str);
            if (cnt > 0)
            {
                fprintf(out, "%s\n", str);
            }
        }
        fclose(in);
        fclose(out);
        printf("檔案處理完成，請查看 output.txt\n");
    }
    else
    {
        printf("檔案開啟失敗，請檢查 welcome.txt 是否放在專案資料夾內！\n");
    }

    system("pause");
    return 0;
}