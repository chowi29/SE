#pragma once
// 헤더 선언 
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
#include "BuyProduct.h"
#include "SearchProductOnSale.h"

#pragma once
// 상수 선언
#define MAX_STRING 32
#define MIN_SATISFACTION 1
#define MAX_SATISFACTION 5
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
#pragma warning(disable: 4996)

// 함수 선언
void doTask(FILE* in_fp, FILE* out_fp);
void join();
void program_exit();

// 변수 선언
//FILE* in_fp, * out_fp;

int main() {
    // 파일 입출력을 위한 초기화
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    doTask(in_fp, out_fp);
    return 0;
}

void doTask(FILE* in_fp, FILE* out_fp) {
    // 메뉴 파싱을 위한 level 구분을 위한 변수 
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    Product product;    
    Member member;
    int memberIndex = 0;
    int productIndex = 0;
    SearchProduct searchProduct(&product);
    SearchProductSoldOut searchProductSoldOut(&product, &member);
    JoinMember joinMember(&member);
    WithdrawMember withdrawMember(&member);
    Login login(&member);
    Logout logout(&member);
    RegisterProduct registerProduct(&member, &product);
    BuyProduct buyProduct(&product);
    SearchProductOnSale searchProductOnSale(&product, &member);
    while (!is_program_exit) {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행 
        switch (menu_level_1)
        {
        case 1: {
            switch (menu_level_2)
            {
            case 1:
            {
                //회원가입
                //cout << "회원가입 시도" << endl;
                joinMember.startInterface(in_fp, out_fp, &member, memberIndex);
                memberIndex++;
                //cout << "회원가입 성공" << endl;

                break;
            }
            case 2: {
                //회원탈퇴
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
                //로그인
                //cout << "로그인 시도" << endl;
                login.startInterface(in_fp, out_fp, &member);
                break;
            }
            case 2: {
                //로그아웃
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
                //판매의류 등록
                registerProduct.startInterface(in_fp, out_fp, &member, &product, productIndex);
                productIndex++;
                break;
            }
            case 2:
                //등록 상품 조회
                searchProductOnSale.startInterface(in_fp, out_fp, &product);
                break;
            case 3:
                //판매 완료 상품 조회
                searchProductSoldOut.startInterface(in_fp, out_fp, &product);
                break;
            }
            break;
        }
        case 4: {
            switch (menu_level_2)
            {
            case 1:
                //상품 정보 검색
                searchProduct.startInterface(in_fp, out_fp, &product);
                break;
            case 2:
                //상품 구매
                buyProduct.startInterface(in_fp, out_fp, &product);
            case 3:
                //상품 구매 내역 조회
                break;
            case 4:
                //상품 구매 만족도 평가
                break;
            }
            break;
        }
        case 5: {
            switch (menu_level_2)
            {
            case 1:
                //판매 상품 통계
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
    }
}


void program_exit() {

}