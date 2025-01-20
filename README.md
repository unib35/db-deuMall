# 동의 컴소 쇼핑몰 프로젝트

### 프로젝트 개요

동의 컴소 쇼핑몰은 사용자가 다양한 상품을 조회, 관리, 주문할 수 있는 C++ 기반 콘솔 애플리케이션입니다. 이 프로젝트는 Pro*C (Oracle Pro*C Precompiler)를 활용하여 Oracle 데이터베이스와 연동되는 구조로 설계되었으며, 텍스트 기반의 UI를 통해 직관적인 사용자 경험을 제공합니다.

---

## 주요 기능

### 1. 사용자 기능
- **로그인 및 회원가입**
  - 로그인 화면에서 사용자 인증
  - 회원가입 시 ID 중복 확인 및 사용자 정보 저장
- **상품 검색 및 구매**
  - 상품 리스트에서 선택 후 상세 정보를 확인
  - 상품 구매 기능
- **주문 관리**
  - 자신의 주문 상태 조회

### 2. 관리자 기능
- **상품 관리**
  - 상품 추가, 조회, 변경, 삭제
- **사용자 관리**
  - 사용자 리스트 조회 및 관리
- **매출 관리**
  - 총매출 정보 조회
- **주문 관리**
  - 주문 상태 확인 및 업데이트

---

## 프로젝트 구조

### 디렉토리 및 파일 설명

#### 소스 코드
| 파일명                | 설명                                  |
|-----------------------|---------------------------------------|
| `AddMenu.cpp/h`       | 상품 추가 기능 구현                  |
| `Dao.cpp/h`           | 데이터베이스 연동 및 쿼리 실행 (Pro*C 활용) |
| `LoginMenu.cpp/h`     | 로그인 및 인증 기능 구현             |
| `MainMenu.cpp/h`      | 메인 메뉴 화면                      |
| `ManagerMenu.cpp/h`   | 관리자 메뉴 기능                     |
| `OrderMenu.cpp/h`     | 주문 관리 메뉴 기능                  |
| `ProductChange.cpp/h` | 상품 변경 기능                      |
| `ProductDelete.cpp/h` | 상품 삭제 기능                      |
| `ProductDetails.cpp/h`| 상품 상세 정보 화면                 |
| `ProductSearch.cpp/h` | 상품 검색 기능                      |
| `SaleMenu.cpp/h`      | 매출 관리 화면                      |
| `ShoppingMenu.cpp/h`  | 쇼핑 메뉴 화면                      |
| `SingupMenu.cpp/h`    | 회원가입 기능                       |
| `TrackingOrder.cpp/h` | 주문 추적 화면                      |
| `UserfileMenu.cpp/h`  | 사용자 관리 메뉴                    |
| `screenControl.cpp/h` | 화면 제어 관련 기능 구현            |
| `main.cpp`            | 애플리케이션 실행 시작점            |
| `execute_query.pc`    | Pro*C를 활용한 데이터베이스 쿼리 처리 |

#### 화면 텍스트 파일
| 파일명                        | 설명                                  |
|-------------------------------|---------------------------------------|
| `addproduct_screen.TXT`       | 상품 추가 화면 템플릿                |
| `inquiryproduct_screen.TXT`   | 상품 조회 화면 템플릿                |
| `login_screen.txt`            | 로그인 화면 템플릿                   |
| `manager_screen.TXT`          | 관리자 메뉴 화면 템플릿              |
| `order_screen.TXT`            | 주문 화면 템플릿                     |
| `orderconfirmed_screen.TXT`   | 주문 확인 화면 템플릿                |
| `ordermanagement_screen.TXT`  | 주문 관리 화면 템플릿                |
| `ordertracking_screen.TXT`    | 주문 추적 화면 템플릿                |
| `productchange_screen.TXT`    | 상품 변경 화면 템플릿                |
| `productdelete_screen.TXT`    | 상품 삭제 화면 템플릿                |
| `productdetails_screen.TXT`   | 상품 상세 화면 템플릿                |
| `sales_screen.TXT`            | 매출 관리 화면 템플릿                |
| `scr_login.txt`               | 로그인 화면 템플릿                   |
| `shopping_mall_screen.txt`    | 쇼핑몰 메인 화면 템플릿              |
| `signup_screen.txt`           | 회원가입 화면 템플릿                 |
| `userfile_screen.TXT`         | 사용자 관리 화면 템플릿              |

---

## 개발 환경 및 실행 방법

### 요구사항
- Windows OS
- C++17 이상 지원 컴파일러 (Visual Studio 추천)
- Oracle 데이터베이스 및 Pro*C 컴파일러 설치

### 실행 방법
1. 프로젝트를 Visual Studio에서 열기
2. 데이터베이스 연결 정보 설정 (Dao.cpp 및 `execute_query.pc` 내 `DB_connect` 함수 수정 필요)
3. Pro*C로 `execute_query.pc`를 컴파일하여 C 소스 생성
4. 프로젝트 빌드 및 실행

---

## 기여 방법
1. 이슈를 생성하여 논의 시작
2. 포크 후 새로운 브랜치에서 작업
3. PR 생성 및 리뷰 요청

---

## 라이센스
이 프로젝트는 [MIT License](LICENSE)를 따릅니다.

---

## 문의
궁금한 점이 있으면 문의해주세요: jm.jongminlee@gmail.com
