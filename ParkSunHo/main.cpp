// 헤더 선언 
#include <stdio.h> 
#include <string.h>

// 상수 선언
#define MAX_STRING 32
#define MIN_SATISFACTION 1
#define MAX_SATISFACTION 5
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
void program_exit();

// 변수 선언
FILE* in_fp, *out_fp;

int main() {
  // 파일 입출력을 위한 초기화
  FILE* in_fp = fopen(INPUT_FILE_NAME, "r+"); FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
  doTask();
  return 0; 
}

void doTask() {
  // 메뉴 파싱을 위한 level 구분을 위한 변수 
  int menu_level_1 = 0, menu_level_2 = 0; 
  int is_program_exit = 0;

  while(!is_program_exit) {
  // 입력파일에서 메뉴 숫자 2개를 읽기
  fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

  // 메뉴 구분 및 해당 연산 수행 
  switch(menu_level_1)
  {
    case 4: {
      switch(menu_level_2) 
      {
      case 3: 
        purchasedProductHistory();
        break; 
      case 4:
        purchasedSatisfaction();
        break; 
      }
    }
    case 5: {
      switch(menu_level_2) 
      {
        case 1:
        sellProductStatistics();
        break;
      }
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

void purchasedProductHistory() {
  char sellerId, productName[MAX_STRING], company;
  int price, leftQuantity;
  float averageSatisfaction;

  // 로그인된 회원의 상품 구매 내역을 출력한다 (판매자ID] [상품명] [제작회사명] [가격] [남은수량] [평균 구매만족도]) 형식

  fprintf(out_fp, "4.3. 상품 구매 내역 조회\n");
  fprintf(out_fp, "%s %s %s %s\n", sellerId, productName, company, price, leftQuantity, averageSatisfaction);
}

void purchasedSatisfaction() {
  char sellerId, productName[MAX_STRING];
  int purchasedSatisfaction;

  // 입력 형식 : 상품명, 구매만족도
  fscanf(in_fp, "%s %s", productName, purchasedSatisfaction);

  fprintf(out_fp, "4.4. 상품 구매만족도 평가\n");

  // 구매 만족도는 1~5 사이의 정수여야 한다
  if(purchasedSatisfaction<MIN_SATISFACTION || purchasedSatisfaction>MAX_SATISFACTION){
    fprintf(out_fp, "올바르지 않은 형태의 구매 만족도입니다. 1~5사이의 정수를 입려해주세요");
    return;
  }

  // 상품명에 대한 구매 만족도 추가
  fprintf(out_fp, "%s %s %s %s\n", sellerId, productName, purchasedSatisfaction);
}

void sellProductStatistics(){
  char sellerId;
  int totalSellPrice;
  float averageSatisfaction;
  
  // 로그인된 회원의 상품명, 상품 판매 총액, 평균 구매 만족도 list를 출력한다
  fprintf(out_fp, "5.1. 판매 상품 통계\n");
  fprintf(out_fp, "%s %s %s %s\n", sellerId, totalSellPrice, averageSatisfaction);
}

void program_exit() {

}