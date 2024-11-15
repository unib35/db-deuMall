
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[12];
};
static const struct sqlcxp sqlfpn =
{
    11,
    "mainMenu.pc"
};


static unsigned int sqlctx = 150275;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[4];
   unsigned int   sqhstl[4];
            int   sqhsts[4];
            void  *sqindv[4];
            int   sqinds[4];
   unsigned int   sqharm[4];
   unsigned int   *sqharc[4];
   unsigned short  sqadto[4];
   unsigned short  sqtdso[4];
} sqlstm = {13,4};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,1,0,0,30,60,0,0,0,0,0,1,0,
20,0,0,0,0,0,27,70,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
51,0,0,3,0,0,31,309,0,0,0,0,0,1,0,
};


// �����ۼ���: 20183215 ������ [2022.12.01]
#define _CRT_SECURE_NO_WARNINGS
#define PAGE_NUM 5
//-----------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>

extern void login();
extern void addStorage();
extern void select_BranchAccount();
extern void searchStorageStock();
extern void select_SearchProduct();
extern void addBranchAccount();
extern void deleteBranchAccount();
extern void Branch();
extern void manageIn();
extern void manageOut();

// win32 Visual C 2010 �̻������Ͻ� �߰�
#define getch() _getch()
//-----------------------------------------

/*---------------  ȭ�� Ŀ�� ��ġ ���� ----------------------*/
#include < windows.h >
void gotoxy(int x, int y);
void getxy(int* x, int* y);
void clrscr(void);
/*-----------------------------------------------------------*/
void print_screen(char fname[]);
void DB_connect();
void select_HeadMain();
void select_BranchMain();
void select_ProductMain();
void select_HeadAccountMain();
void sql_error();

/* EXEC SQL BEGIN DECLARE SECTION; */ 

/* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

/* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 


#define getch() _getch()

void main()
{
	_putenv("NLS_LANG=American_America.KO16KSC5601"); //�ѱۻ��

	DB_connect();
	login();
	//select_HeadMain();
	/* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 0;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	getch();
}
void DB_connect()
{
	strcpy((char*)uid.arr, "b20183109@//sedb.deu.ac.kr:1521/orcl");
	uid.len = (short)strlen((char*)uid.arr);
	strcpy((char*)pwd.arr, "20183109");
	pwd.len = (short)strlen((char*)pwd.arr);

	/* EXEC SQL CONNECT : uid IDENTIFIED BY : pwd; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )10;
 sqlstm.offset = (unsigned int  )20;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&uid;
 sqlstm.sqhstl[0] = (unsigned int  )82;
 sqlstm.sqhsts[0] = (         int  )82;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&pwd;
 sqlstm.sqhstl[1] = (unsigned int  )22;
 sqlstm.sqhsts[1] = (         int  )22;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlstm.sqlcmax = (unsigned int )100;
 sqlstm.sqlcmin = (unsigned int )2;
 sqlstm.sqlcincr = (unsigned int )1;
 sqlstm.sqlctimeout = (unsigned int )0;
 sqlstm.sqlcnowait = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	// connection�� ������������� ó���κ�

	if (sqlca.sqlcode != 0 && sqlca.sqlcode != -1405) {
		printf("Connect error: %s", sqlca.sqlerrm.sqlerrmc);
		getch();
		exit(-1);
	}
}

void select_HeadMain() {
	// ���� ���� ȭ��
	clrscr();
	gotoxy(0, 1);
	print_screen("headMainMenu.txt");
	int cursor_position = 10; // ���� Ŀ�� ��ġ
	int input_status; // �Է� ����
	while (1) {
		gotoxy(42, cursor_position);
		input_status = _getch();
		if (input_status == 72 || input_status == 80) { //������ �Ǵ� �Ʒ������� �Է¹޾��� ���

			if (input_status == 72) { // ����Ű�踦 �Է¹޾��� ���
				if (cursor_position == 10) { // Ŀ���� ù��° �࿡ �ְ�, ������Ű�� �Է¹޾��� ��� ������ ������ ��
					cursor_position = 18;
				}
				else {
					cursor_position -= 2;
				}
			}
			else if (input_status == 80) {// ����Ű�鸦 �Է¹޾��� ���
				if (cursor_position == 18) { // Ŀ���� ������ �࿡ �ְ�, ������Ű�� �Է¹޾��� ��� ������ ������ ��
					cursor_position = 10;
				}
				else {
					cursor_position += 2;
				}
			}
		}
		else if (input_status == 13) { // ����Ű�� �Է¹޾��� ���
			clrscr();
			if (cursor_position == 10) { //ù��° ��
				select_ProductMain();
			}
			else if (cursor_position == 12) {//�ι�° ��
				manageOut();
			}
			else if (cursor_position == 14) {//����° ��
				manageIn();
			}
			else if (cursor_position == 16) {//�׹�° ��
				select_HeadAccountMain();
			}
			else if (cursor_position == 18) {//�ټ���° ��
				login();
			}
			break;
		}
	}
}

void select_BranchMain() {
	// ���� ���� ȭ��
	clrscr();
	gotoxy(0, 1);
	print_screen("branchMainMenu.txt");
	int cursor_position = 10; // ���� Ŀ�� ��ġ
	int input_status; // �Է� ����
	while (1) {
		gotoxy(42, cursor_position);
		input_status = _getch();
		if (input_status == 72 || input_status == 80) { //������ �Ǵ� �Ʒ������� �Է¹޾��� ���

			if (input_status == 72) { // ����Ű�踦 �Է¹޾��� ���
				if (cursor_position == 10) { // Ŀ���� ù��° �࿡ �ְ�, ������Ű�� �Է¹޾��� ��� ������ ������ ��
					cursor_position = 16;
				}
				else {
					cursor_position -= 2;
				}
			}
			else if (input_status == 80) {// ����Ű�鸦 �Է¹޾��� ���
				if (cursor_position == 16) { // Ŀ���� ������ �࿡ �ְ�, �Ʒ�����Ű�� �Է¹޾��� ��� ù ������ ��
					cursor_position = 10;
				}
				else {
					cursor_position += 2;
				}
			}
		}
		else if (input_status == 13) { // ����Ű�� �Է¹޾��� ���
			clrscr();
			if (cursor_position == 10) { //ù��° ��
				select_SearchProduct();
			}
			else if (cursor_position == 12) {//�ι�° ��
				Branch();
			}
			else if (cursor_position == 14) {//����° ��
				select_BranchAccount();
			}
			else if (cursor_position == 16) {//�׹�° ��
				login();
			}
			break;
		}
	}
}

void select_ProductMain() {
	// ��ǰ ���� ����
	clrscr();
	gotoxy(0, 1);
	print_screen("productMenu.txt");
	int cursor_position = 10; // ���� Ŀ�� ��ġ
	int input_status; // �Է� ����
	while (1) {
		gotoxy(42, cursor_position);
		input_status = _getch();
		if (input_status == 72 || input_status == 80) { //������ �Ǵ� �Ʒ������� �Է¹޾��� ���

			if (input_status == 72) { // ����Ű�踦 �Է¹޾��� ���
				if (cursor_position == 10) { // Ŀ���� ù��° �࿡ �ְ�, ������Ű�� �Է¹޾��� ��� ������ ������ ��
					cursor_position = 14;
				}
				else {
					cursor_position -= 2;
				}
			}
			else if (input_status == 80) {// ����Ű�鸦 �Է¹޾��� ���
				if (cursor_position == 14) { // Ŀ���� ������ �࿡ �ְ�, �Ʒ�����Ű�� �Է¹޾��� ��� ù ������ ��
					cursor_position = 10;
				}
				else {
					cursor_position += 2;
				}
			}
		}
		else if (input_status == 13) { // ����Ű�� �Է¹޾��� ���
			clrscr();
			if (cursor_position == 10) { //ù��° ��
				searchStorageStock();
			}
			else if (cursor_position == 12) {//�ι�° ��
				addStorage();
			}
			else if (cursor_position == 14) {//����° ��
				select_HeadMain();
			}
			break;
		}
	}
}

void select_HeadAccountMain() {
	// ���� �������� �޴�
	clrscr();
	gotoxy(0, 1);
	print_screen("HeadAccountMenu.txt");
	int cursor_position = 10; // ���� Ŀ�� ��ġ
	int input_status; // �Է� ����
	while (1) {
		gotoxy(42, cursor_position);
		input_status = _getch();
		if (input_status == 72 || input_status == 80) { //������ �Ǵ� �Ʒ������� �Է¹޾��� ���

			if (input_status == 72) { // ����Ű�踦 �Է¹޾��� ���
				if (cursor_position == 10) { // Ŀ���� ù��° �࿡ �ְ�, ������Ű�� �Է¹޾��� ��� ������ ������ ��
					cursor_position = 14;
				}
				else {
					cursor_position -= 2;
				}
			}
			else if (input_status == 80) {// ����Ű�鸦 �Է¹޾��� ���
				if (cursor_position == 14) { // Ŀ���� ������ �࿡ �ְ�, ������Ű�� �Է¹޾��� ��� ������ ������ ��
					cursor_position = 10;
				}
				else {
					cursor_position += 2;
				}
			}
		}
		else if (input_status == 13) { // ����Ű�� �Է¹޾��� ���
			clrscr();
			if (cursor_position == 10) { //ù��° ��
				addBranchAccount();
			}
			else if (cursor_position == 12) {//�ι�° ��
				deleteBranchAccount();
			}
			else if (cursor_position == 14) {//����° ��
				select_HeadMain();
			}
			break;
		}
	}
}

void print_screen(char fname[])
{
	FILE* fp;
	char line[100];

	if ((fp = fopen(fname, "r")) == NULL) {
		printf("file open error\n");
		getch();
		exit(-1);
	}
	while (1)
	{
		if (fgets(line, 99, fp) == NULL) {
			break;
		}
		printf("%s", line);
	}

	fclose(fp);
}

/* --------------------------------------------------------------------------
int sql_error()

   errrpt prints the ORACLE error msg and number.
-------------------------------------------------------------------------- */
void sql_error(char* msg)
{
	char err_msg[128];
	size_t buf_len, msg_len;

	/* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


	printf("\n%s\n", msg);
	buf_len = sizeof(err_msg);
	sqlglm(err_msg, &buf_len, &msg_len);
	printf("%.*s\n", msg_len, err_msg);

	getch();
	/* EXEC SQL ROLLBACK WORK; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )51;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	//exit(EXIT_FAILURE);
}
/*---------------  ȭ�� Ŀ�� ���� �Լ� --------------------*/
#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x, int y)
{
	COORD Cur = { (SHORT)x, (SHORT)y };

	SetConsoleCursorPosition(STD_HANDLE, Cur);
}

void getxy(int* x, int* y)
{
	CONSOLE_SCREEN_BUFFER_INFO Buf;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Buf);
	*x = (int)Buf.dwCursorPosition.X;
	*y = (int)Buf.dwCursorPosition.Y;

}

void clrscr(void)
{
	COORD Cur = { 0, 0 };
	unsigned long dwLen;

	FillConsoleOutputCharacter(STD_HANDLE, ' ', 100 * 40, Cur, &dwLen);
}

/*---------------------------------------------------------*/
