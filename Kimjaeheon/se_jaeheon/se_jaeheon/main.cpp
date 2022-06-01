#pragma once
// 헤더 선언 
//#include <stdio.h> 
//#include <string.h>
#include "SearchProduct.h"
//#include "Product.h"
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
    SearchProduct searchProduct;
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
                //회원가입
                break;
            case 2:
                //회원탈퇴
                break;
            }
            break;
        }
        case 2: {
            switch (menu_level_2)
            {
            case 1:
                //로그인
                break;
            case 2:
                //로그아웃
                break;
            }
            break;
        }
        case 3: {
            switch (menu_level_2)
            {
            case 1:
                //판매의류 등록
                break;
            case 2:
                //등록 상품 조회
                break;
            case 3:
                //판매 완료 상품 조회
                break;
            }
            break;
        }
        case 4: {
            switch (menu_level_2)
            {
            case 1:
                //상품 정보 검색
                searchProduct.startInterface(in_fp, out_fp,&product);
                break;
            case 2:
                //상품 구매
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
        return;
    }
}


void program_exit() {

}