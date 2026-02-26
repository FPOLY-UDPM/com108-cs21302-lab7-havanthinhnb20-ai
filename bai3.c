/******************************************************************************
 * Họ và tên: [Hà Văn Thịnh]
 * MSSV:      [PS49131]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main()
{
    char chuoi[5][100];
    char temp[100];

    printf("Nhap 5 chuoi:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Chuoi thu %d: ", i + 1);
        fgets(chuoi[i], sizeof(chuoi[i]), stdin);
        chuoi[i][strcspn(chuoi[i], "\n")] = '\0'; // Loại bỏ ký tự newline
    }

    // Sắp xếp các chuỗi theo thứ tự bảng chữ cái
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(chuoi[i], chuoi[j]) > 0)
            {
                strcpy(temp, chuoi[i]);
                strcpy(chuoi[i], chuoi[j]);
                strcpy(chuoi[j], temp);
            }
        }
    }

    printf("\nCac chuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", chuoi[i]);
    }

    return 0;
}