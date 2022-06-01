#pragma once
// ��� ���� 
//#include <stdio.h> 
//#include <string.h>
#include "SearchProduct.h"
//#include "Product.h"
#pragma once
// ��� ����
#define MAX_STRING 32
#define MIN_SATISFACTION 1
#define MAX_SATISFACTION 5
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
#pragma warning(disable: 4996)

// �Լ� ����
void doTask(FILE* in_fp, FILE* out_fp);
void join();
void program_exit();

// ���� ����
//FILE* in_fp, * out_fp;

int main() {
    // ���� ������� ���� �ʱ�ȭ
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    doTask(in_fp, out_fp);
    return 0;
}

void doTask(FILE* in_fp, FILE* out_fp) {
    // �޴� �Ľ��� ���� level ������ ���� ���� 
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    Product product;
    SearchProduct searchProduct;
    while (!is_program_exit) {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // �޴� ���� �� �ش� ���� ���� 
        switch (menu_level_1)
        {
        case 1: {
            switch (menu_level_2)
            {
            case 1:
                //ȸ������
                break;
            case 2:
                //ȸ��Ż��
                break;
            }
            break;
        }
        case 2: {
            switch (menu_level_2)
            {
            case 1:
                //�α���
                break;
            case 2:
                //�α׾ƿ�
                break;
            }
            break;
        }
        case 3: {
            switch (menu_level_2)
            {
            case 1:
                //�Ǹ��Ƿ� ���
                break;
            case 2:
                //��� ��ǰ ��ȸ
                break;
            case 3:
                //�Ǹ� �Ϸ� ��ǰ ��ȸ
                break;
            }
            break;
        }
        case 4: {
            switch (menu_level_2)
            {
            case 1:
                //��ǰ ���� �˻�
                searchProduct.startInterface(in_fp, out_fp,&product);
                break;
            case 2:
                //��ǰ ����
            case 3:
                //��ǰ ���� ���� ��ȸ
                break;
            case 4:
                //��ǰ ���� ������ ��
                break;
            }
            break;
        }
        case 5: {
            switch (menu_level_2)
            {
            case 1:
                //�Ǹ� ��ǰ ���
                break;
            }
            break;
        }
        case 6: {
            switch (menu_level_2)
            {
            case 1:
            {
                program_exit();
                is_program_exit = 1;
                break;
            }
            default:
                break;
            }
        }
        }
        return;
    }
}


void program_exit() {

}