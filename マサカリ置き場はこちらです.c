#include<stdio.h>
#include<conio.h>

void ppak()
{

	//キーボードに入っている文字列の初期化
	while(1){
	if(_kbhit()){ _getch(); }
	else break;
	};

	//キー入力があったらループを抜ける
	while(1){
	if(_kbhit()){ _getch();break; }
	};

}

int main(void){

	puts("マサカリを投げないでください");

	puts("   _______＿______  ");
	puts(" ／             ／|");
	puts("|￣￣￣￣￣￣￣|  |");
	puts("|  マサカリは  |  |");
	puts("|　 この中へ   |  / ");
	puts("|              | /");
	puts("￣￣￣￣￣￣￣￣");

	ppak();

	return 0;

}


