
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
           char  filnam[14];
};
static const struct sqlcxp sqlfpn =
{
    13,
    "addStorage.pc"
};


static unsigned int sqlctx = 558675;


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
5,0,0,1,0,0,30,63,0,0,0,0,0,1,0,
20,0,0,2,0,0,17,91,0,0,1,1,0,1,0,1,97,0,0,
39,0,0,2,0,0,45,97,0,0,0,0,0,1,0,
54,0,0,2,0,0,13,107,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
85,0,0,2,0,0,15,122,0,0,0,0,0,1,0,
100,0,0,2,0,0,17,192,0,0,1,1,0,1,0,1,97,0,0,
119,0,0,2,0,0,45,196,0,0,0,0,0,1,0,
134,0,0,2,0,0,13,200,0,0,2,0,0,1,0,2,9,0,0,2,9,0,0,
157,0,0,2,0,0,15,221,0,0,0,0,0,1,0,
172,0,0,3,0,0,24,241,0,0,1,1,0,1,0,1,97,0,0,
191,0,0,4,0,0,29,243,0,0,0,0,0,1,0,
206,0,0,5,0,0,24,270,0,0,1,1,0,1,0,1,97,0,0,
225,0,0,6,0,0,29,272,0,0,0,0,0,1,0,
240,0,0,2,0,0,17,285,0,0,1,1,0,1,0,1,97,0,0,
259,0,0,2,0,0,45,291,0,0,0,0,0,1,0,
274,0,0,2,0,0,13,296,0,0,1,0,0,1,0,2,9,0,0,
293,0,0,2,0,0,17,313,0,0,1,1,0,1,0,1,97,0,0,
312,0,0,2,0,0,45,319,0,0,0,0,0,1,0,
327,0,0,2,0,0,13,324,0,0,1,0,0,1,0,2,9,0,0,
};


//�����ۼ���: 20183215 ������ [2022.12.04]
#define _CRT_SECURE_NO_WARNINGS
#define PAGE_NUM 5

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>


//win32 Visual C 2010 �̻������Ͻ� �߰�
#define getch() _getch()
/*-----------------------------------------*/


/*---------------  ȭ�� Ŀ�� ��ġ ���� ----------------------*/
#include < windows.h >
void gotoxy(int x, int y);
void getxy(int* x, int* y);
void clrscr(void);
/*-----------------------------------------------------------*/
void get_tuple();
void select_product();
void input_value();
void update_storage();
void update_businessStorage();
void select_nowStoragePamount();
void select_nowBusinessStoragePamount();
void find_product();
void sql_error();
void check_pid();

extern void select_ProductMain();
char find_pid[100];
char find_pamount[100];
char now_pamount[100];
char now_businessPamount[100];

/* EXEC SQL BEGIN DECLARE SECTION; */ 

/* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

/* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 


#define getch() _getch()

void addStorage()
{
	_putenv("NLS_LANG=American_America.KO16KSC5601"); //�ѱۻ��
	DB_connect();
	get_tuple();
	input_value(); // ����� �Է� ���������� ����
	check_pid(); // ��üâ�� �ִ� ��ǰ���� �˻�
	select_nowStoragePamount(); //����ڰ� �Է��� ��ǰ�� ���� ���� â�� ���� üũ
	select_nowBusinessStoragePamount(); //����ڰ� �Է��� ��ǰ�� ���� ��ü â�� ���� üũ
	update_businessStorage();
	update_storage();
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


void get_tuple()
{
	clrscr();
	gotoxy(0, 1);
	print_screen("addStorage.txt");

	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar id[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } id;

	/* varchar name[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } name;

	/* varchar amount[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } amount;

	/* varchar price[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } price;


	char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 



	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 



	/* �����ų SQL ����*/
	sprintf(dynstmt, "SELECT b.pid, p.pname, b.pamount, p.pprice FROM businessstorage b join productinfo p on b.pid = p.pid");

	/* EXEC SQL PREPARE S FROM : dynstmt; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )20;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* cursor ���� */
	/* EXEC SQL DECLARE c_cursor CURSOR FOR S; */ 


	/* cursor open */
	/* EXEC SQL OPEN c_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )39;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	gotoxy(20, 14);
	printf(" ��ǰ�ڵ�  |�̸�           |����      |���� ����    ");
	gotoxy(20, 15);
	printf("----------------------------------------------");
	int y = 16;

	for (;;)
	{

		/* EXEC SQL FETCH c_cursor INTO : id, : name, : amount, : price; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )54;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&id;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&name;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&amount;
  sqlstm.sqhstl[2] = (unsigned int  )102;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (         void  *)&price;
  sqlstm.sqhstl[3] = (unsigned int  )102;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         void  *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned int  )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


		if (sqlca.sqlcode == 1403) break;

		id.arr[id.len] = '\0';
		name.arr[name.len] = '\0';
		amount.arr[amount.len] = '\0';
		price.arr[price.len] = '\0';
		gotoxy(20, y);
		printf(" %-10s|%-15s|%-10s|%-10s", id.arr, name.arr, amount.arr, price.arr);
		y++;


	}

	/* Close the cursor. */
	/* EXEC SQL CLOSE c_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )85;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}

void input_value()
{
	int input_status;

	gotoxy(38, 9);
	gets(find_pid);// ���������� ����

	//���� �Է�
	gotoxy(64, 9);
	gets(find_pamount);// ���������� ����

	int cursor_position = 11;

	if (strlen(find_pid) <= 0 || strlen(find_pamount) <= 0) {
		gotoxy(38, 10);
		printf("�Է����� ���� �׸��� �ֽ��ϴ� �ٽ� �õ����ּ���,\n");
		Sleep(1000);
		addStorage();
	}
	else {
		while (1) {
			gotoxy(47, cursor_position);
			input_status = _getch();
			if (input_status == 72) { // ����Ű�踦 �Է¹޾��� ���
				if (cursor_position == 11) { // Ŀ���� ù��° �࿡ �ְ�, ������Ű�� �Է¹޾��� ��� ������ ������ ��
					cursor_position = 12;
				}
				else {
					cursor_position -= 1;
				}
			}
			else if (input_status == 80) {// ����Ű�鸦 �Է¹޾��� ���
				if (cursor_position == 12) { // Ŀ���� ������ �࿡ �ְ�, ������Ű�� �Է¹޾��� ��� ������ ������ ��
					cursor_position = 11;
				}
				else {
					cursor_position += 1;
				}
			}
			else if (input_status == 13) { // ����Ű�� �Է¹޾��� ���
				if (cursor_position == 12) {//�ι�° ��
					gotoxy(40, 10);
					printf("��ҵǾ����ϴ�. ���� ȭ������ �̵��մϴ�.");
					Sleep(1500);
					select_ProductMain();
				}
				break;
			}
		}
	}

}

void check_pid()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar check_pid[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } check_pid;

	/* varchar check_pamount[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } check_pamount;


	char dynstmt1[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


	sprintf(dynstmt1, "SELECT pid, pamount FROM businessstorage where pid = '%s' ", find_pid);

	/* EXEC SQL PREPARE S FROM : dynstmt1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )100;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt1;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* EXEC SQL DECLARE c_cursor6 CURSOR FOR S; */ 


	/* EXEC SQL OPEN c_cursor6; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )119;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	for (;;)
	{
		/* EXEC SQL FETCH c_cursor6 INTO : check_pid, check_pamount; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )134;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&check_pid;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&check_pamount;
  sqlstm.sqhstl[1] = (unsigned int  )102;
  sqlstm.sqhsts[1] = (         int  )0;
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
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


		if (sqlca.sqlcode == 1403) break;
		check_pid.arr[check_pid.len] = '\0';
		check_pamount.arr[check_pamount.len] = '\0';
		int i = atoi(check_pamount.arr)- atoi(find_pamount);
		
		if (check_pid.arr != NULL) {
			if(i<0){
				gotoxy(40, 10);
				printf("�ش� ��ǰ�� ������ �����մϴ�.");
				Sleep(1500);
				addStorage();
			}
			else{
				return;
			}
			
		}
		break;
	}
	/* Close the cursor. */
	/* EXEC SQL CLOSE c_cursor6; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )157;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


	gotoxy(40, 10);
	printf("�������� �ʴ� ��ǰ��ȣ�Դϴ�.");
	Sleep(1500);
	addStorage();
}

void update_storage()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 



	int i = atoi(now_pamount) + atoi(find_pamount);
	char result[100];
	snprintf(result, 10, "%d", i);
	sprintf(dynstmt, "update storage set pamount = '%s' where pid = '%s'", result, find_pid);
	/* EXEC SQL EXECUTE IMMEDIATE : dynstmt; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )172;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* EXEC SQL COMMIT WORK; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )191;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	gotoxy(40, 10);
	printf("[ �ֹ� �����Ͽ����ϴ�. ]");

	Sleep(1000);

	select_ProductMain();
}

void update_businessStorage() { // �ֹ��� ������ŭ ��ü ����� ����
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char dynstmt[1000];
	/* EXEC SQL END DECLARE SECTION; */ 


	char name[100];
	char price[100];

	/* Register sql_error() as the error handler. */
	/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


	int i = atoi(now_businessPamount) - atoi(find_pamount);
	char result[100];
	snprintf(result, 10, "%d", i);

	sprintf(dynstmt, "update businessstorage set pamount = '%s' where pid = '%s' ", result, find_pid);

	/* EXEC SQL EXECUTE IMMEDIATE : dynstmt; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )206;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* EXEC SQL COMMIT WORK; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )225;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}

void select_nowStoragePamount() {
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar v_pamount[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } v_pamount;

	char dynstmt[1000];

	/* EXEC SQL END DECLARE SECTION; */ 



	sprintf(dynstmt, "SELECT pamount FROM storage where pid = '%s'", find_pid);

	/* EXEC SQL PREPARE S FROM : dynstmt; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )240;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* cursor ���� */
	/* EXEC SQL DECLARE c_cursor1 CURSOR FOR S; */ 


	/* cursor open */
	/* EXEC SQL OPEN c_cursor1; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )259;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	for (;;)
	{
		if (sqlca.sqlcode == 1403) break;
		/* EXEC SQL FETCH c_cursor1 INTO : v_pamount; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )274;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&v_pamount;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



		v_pamount.arr[v_pamount.len] = '\0';
		strcpy(now_pamount, v_pamount.arr);
	}
}

void select_nowBusinessStoragePamount() {
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* varchar v_pamount[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } v_pamount;

	char dynstmt[1000];

	/* EXEC SQL END DECLARE SECTION; */ 



	sprintf(dynstmt, "SELECT pamount FROM businessstorage where pid = '%s'", find_pid);

	/* EXEC SQL PREPARE S FROM : dynstmt; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )293;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)dynstmt;
 sqlstm.sqhstl[0] = (unsigned int  )1000;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	/* cursor ���� */
	/* EXEC SQL DECLARE c_cursor2 CURSOR FOR S; */ 


	/* cursor open */
	/* EXEC SQL OPEN c_cursor2; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )312;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



	for (;;)
	{
		if (sqlca.sqlcode == 1403) break;
		/* EXEC SQL FETCH c_cursor2 INTO : v_pamount; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )327;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (           int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (         void  *)&v_pamount;
  sqlstm.sqhstl[0] = (unsigned int  )102;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



		v_pamount.arr[v_pamount.len] = '\0';
		strcpy(now_businessPamount, v_pamount.arr);
	}
}

