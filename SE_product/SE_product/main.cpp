#pragma once
// ��� ���� 
//#include <stdio.h> 
//#include <string.h>
#include "SearchProduct.h"
//#include "Product.h"
//#include "Member.h"
#include "JoinMember.h"
#include "WithdrawMember.h"
#include "Login.h"
#include "Logout.h"
#include "RegisterProduct.h"
#include "SearchProductSoldOut.h"
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
    int productIndex = 0;
    SearchProduct searchProduct(&product);
    SearchProductSoldOut searchProductSoldOut(&product);

    Member member;
    int memberIndex = 0;
    JoinMember joinMember(&member);
    WithdrawMember withdrawMember(&member);
    Login login(&member);
    Logout logout(&member);
    RegisterProduct registerProduct(&member, &product);

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
            {
                //ȸ������
                joinMember.startInterface(in_fp, out_fp, &member, memberIndex);
                memberIndex++;
                break;
            }
            case 2: {
                //ȸ��Ż��
                withdrawMember.startInterface(out_fp, &member);
                memberIndex--;
                break;
            }

            }
            break;
        }
        case 2: {
            switch (menu_level_2)
            {
            case 1: {
                //�α���
                login.startInterface(in_fp, out_fp, &member);
                break;
            }
            case 2: {
                //�α׾ƿ�
                logout.startInterface(out_fp, &member);
                break;
            }
            }
            break;
        }
        case 3: {
            switch (menu_level_2)
            {
            case 1: {
                //�Ǹ��Ƿ� ���
                registerProduct.startInterface(in_fp, out_fp, &member, &product, productIndex);
                productIndex++;
                break;
            }
            case 2:
                //��� ��ǰ ��ȸ
                break;
            case 3:
                //�Ǹ� �Ϸ� ��ǰ ��ȸ
                searchProductSoldOut.startInterface(in_fp, out_fp, &product);
                break;
            }
            break;
        }
        case 4: {
            switch (menu_level_2)
            {
            case 1:
                //��ǰ ���� �˻�
                searchProduct.startInterface(in_fp, out_fp, &product);
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