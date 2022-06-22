#include<stdio.h>

#include<malloc.h>

#include<string.h>

#include<stdlib.h>

#include<conio.h>

#include<iostream>

#define N 10

using namespace std;

typedef struct node{
	char id[10];
	char major[10];
	char name[10];
	char cet[10]; 
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	struct node *next;  
}node;

node  * create() ;                   //建立储存文件信息的链表 

void course(int a,node *head);     //按科目计算平均分 

void college(int a ,node *head); //按学院计算平均分 

void outlink(node *head);          //遍历链表 

node *createlink();                //建立储存文件信息的链表 

void pass(int a,node *head);        //计算四级通过人数

void frees(int a,node*head);        //四级免修额 

void rate(int a,node *head);      //四级通过率 

void findname(node *head);         //按名字查找 

void findid(node *head);           //按照学号查询 

node * changenum(node *head);      //按照学号修改 

node * changename(node *head);     //按照名字修改  

node *delid(node *head);             //通过学号删除学生信息

node *delname(node *head);         //按照名字删除 

node *add(node *head);              //增加学生信息 

void filein(node *head);           //更新文件
 
void ABCD(node *head);            //在线查看 

void FABCD(node *head);          //形成文件查看 

void hundred(int *score);        //百分制合法检验 

void hundred2(int *score);            //四级考试分数检测 

int main()
 {
 	system("color 0B");
 	printf("\t\t\t学生成绩管理系统\n");
	printf("\n\t\t\t按任意键进入系统\n");
	getch();
	system("cls");
	int option;
    char answer;
	node *head;
	node *head1;
	node *head2;
 	head  = createlink();
	head1 = createlink();
	head2 = create();
	do{
	printf("欢迎你，管理员！\n");
	cout<<"      ----------------------------------------------------------------------------"<<endl;
	cout<<"      | 请输入选项编号(0-5):                                                     |"<<endl;
	cout<<"      |                                                                          |"<<endl;
	cout<<"      |                                  1--浏览所有学生信息:                    |"<<endl;
	cout<<"      |                                                                          |"<<endl; 
	cout<<"      |                                  2--查询学生信息:                        |"<<endl; 
	cout<<"      |                                                                          |"<<endl;
	cout<<"      |                                  3--修改学生信息:                        |"<<endl;
	cout<<"      |                                                                          |"<<endl; 
	cout<<"      |                                  4--删除学生信息:                        |"<<endl;
	cout<<"      |                                                                          |"<<endl; 
	cout<<"      |                                  5--各科成绩:                            |"<<endl; 
	cout<<"      |                                                                          |"<<endl; 	
	cout<<"      |                                  6--增加学生信息:                        |"<<endl; 
	cout<<"      |                                                                          |"<<endl;
	cout<<"      |                                  0--保存并退出系统                       |"<<endl; 
	cout<<"      |                                                                          |"<<endl; 
	cout<<"      |                                                                          |"<<endl;
	cout<<"      |                                                                          |"<<endl;  
	cout<<"      |                          （注意每次按0退出才能保存修改的文件）           |"<<endl;  
	cout<<"      ----------------------------------------------------------------------------"<<endl;
    cin>>option;
	switch(option)
	{    
		case 1:
			{
				    system("cls");
				    char answer;
                	while(1)
					{
					system("cls");
					printf("请选择您要查询的学期：");
                    printf("\n\t\t\t1.大一上\n");
	                printf("\n\t\t\t2.大一下\n");
	                printf("\n\t\t\t3.大二上\n");
					scanf("%s",&answer);
						if( answer == '1' )
						{
							system("cls");
							printf("\n     ----------------------------------------成绩单总览------------------------------------\n"); 
	                        printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
							outlink(head);
                            cout<<endl<<endl<<endl<<"0.退出浏览" <<endl;
                    	   	cout<<"1.英语四级考试查询"<<endl;
                    	   	cout<<"2.平均分查询"<<endl;
                    	   	int op;
                    	   	cin>>op;
                    	   	if(op == 1)
                    	   	{
                    	   	system("cls");						
						    cout<<"1.统计所有学生英语四级考试情况"<<endl;
						    cout<<endl; 
							cout<<"2.按学院统计学生英语四级考试情况"<<endl;
							int a;
							cin>>a;
							if(a == 1)
							{
								system("cls");
								cout<<"所有学生"<<endl;
                                pass(1,head);
                                frees(1,head);
                                rate(1,head);
							}
							else if(a == 2)
							{   system("cls");
								cout<<"1.计算机学院"<<endl;
								cout<<endl;
								cout<<"2.经济学院"<<endl;
								int b;
								cin>>b;
								if(b == 1)
								{
								system("cls");
								cout<<"计算机学院:"<<endl;
	                            pass(2,head);
                                frees(2,head);
                                rate(2,head);
							    } 
								else if(b == 2)
								{
								system("cls");
								cout<<"经济学院"<<endl;
					            pass(3,head);
                                frees(3,head);
                                rate(3,head);
								}
								else
								{
                  			    cout<<"*************************输入错误*************************"<<endl; 
								break;
								} 
							}
							else{
							    cout<<"*************************输入错误*************************"<<endl; 
								break;
							}
							break;
							}
						if(op == 2)
						{
                    	system("cls");
                    	printf("\n\n请选择计算平均分查询方式\n");
						printf("1.院系\n\n2.科目\n");
						char answer;
						scanf("%s",&answer);
						if( answer == '1' )
						{   system("cls");
							cout<<"院系名称：";
							printf("\n1.计算机\n\n2.经济\n");
							int a;
							cin>>a;
							switch(a)
							{
								case 1:{
                                    college(1,head);
							        break;
								}
								case 2:{
                                    college(2,head);
							        break;
								}
								default:{	
									cout<<"没有这个选项"<<endl;
									break;
								}
							}
					    }
						else if(answer == '2' )
						{
							system("cls");
							cout<<"科目名称："<<endl;
							cout<<"1.高数" <<endl;
							cout<<"2.英语" <<endl;
							cout<<"3.思修" <<endl;
							cout<<"4.线代" <<endl;
							cout<<"5.Java" <<endl;
						    int a;
						    cin>>a;
						    switch(a)
						    {
						    	case 1:{
                                    course(1,head); 
									break;
								}
								case 2:{
								    course(2,head);
									break;
								}
								case 3:{
									course(3,head);
									break;
								}
								case 4:{
									course(4,head); 
									break;
								}
								case 5:{
									course(5,head);
									break;
								}
								default :{
									cout<<"没有这个选项"<<endl; 
									break;
								}
						    }
						}
						if(answer != '1' && answer!= '2')
						{
							printf("输入错误\n");
						}
						printf("1.按任意键回车后继续查询\n0.退出\n");
						scanf("%s",&answer);
						fflush(stdin);
						if(answer == '0' )
						{
							break;
						}							
						}	
						}
						if(answer == '2' )
						{   system("cls");
						    printf("\n     ----------------------------------------成绩单总览------------------------------\n"); 
	                        printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
							outlink(head1);
						}
						if(answer == '3' )
						{   system("cls");
						    printf("\n     ----------------------------------------成绩单总览------------------------------\n"); 
	                        printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
							outlink(head2);
						}						 
						if(answer != '1' && answer!= '2' && answer!='3')
						{
							printf("输入错误\n");
						}
						printf("1.按任意键回车后继续查询\n0.退出\n");
						scanf("%s",&answer);
						fflush(stdin);
						if(answer == '0' )
						{
							break;
						}	
					}
				printf("\n按任意键继续回到菜单\n");
				getch();
				system("cls");
				break;
			}
		case 2:
			{
				    system("cls");
                	while(1)
					{
						system("cls");
						printf("请选择查询方式\n");
						printf("1.姓名\n2.学号\n");
						scanf("%s",&answer);
						if( answer == '1' )
						{
							system("cls");
							findname(head);
						}
						if(answer == '2' )
						{   system("cls");
							findid(head);
						}
						if(answer != '1' && answer!= '2')
						{
							printf("输入错误\n");
						}
						printf("1.按任意键回车后继续查询\n0.退出\n");
						scanf("%s",&answer);
						fflush(stdin);
						if(answer == '0' )
						{
							break;
						}	
					}
				printf("\n按任意键继续回到菜单\n");
				getch();
				system("cls");
				break;
			}
		case 3:
			{
				system("cls");
				while(1)
					{
						system("cls");
						printf("请选择修改成绩的方式\n");
						printf("1.姓名\n2.学号\n");
						scanf("%s",&answer);
						if(answer == '1')
						{
							changename(head);
						}
						if(answer == '2')
						{
							changenum(head);
						}
						if(answer != '1' && answer!= '2')
						{
							printf("输入错误\n");
						}
						printf("是否继续\n");
						printf("1.按任意键回车后继续修改\n0.退出\n");
						scanf("%s",&answer);
						if(answer=='0')
						{
							break;
						}
					}
					
					printf("\n按任意键回到菜单\n");
					getch();
					system("cls");
					break;
				}
		case 4:
			{
				system("cls");
                while(1)
                {   cout<<"请选择删除方式"<<endl;
                    cout<<"1.通过姓名删除"<<endl;
                    cout<<"2.通过学号删除"<<endl; 
				    scanf("%s",&answer);
                	if(answer == '1')
                	{
                     delname(head);
					}
					else if(answer == '2')
					{
					 delid(head); 
					}
					if(answer != '1' && answer!= '2')
						{
							printf("输入错误\n");
						}
						printf("是否继续\n");
						printf("1.按任意键回车后继续删除\n0.退出\n");
						scanf("%s",&answer);
						if(answer=='0')
						{
							break;
						}
				}
				printf("\n按任意键继续回到菜单\n");
				getch();
				system("cls");
				break;
			}
		case 5:
			{
				system("cls");
                while(1)
                {   cout<<"请选择查看方式"<<endl;
                    cout<<"1.在线查看"<<endl;
                    cout<<"2.生成表格文件查看"<<endl; 
				    scanf("%s",&answer);
                	if(answer == '1')
                	{
                	 system("cls");
                     ABCD(head); 
					}
					else if(answer == '2')
					{
					 system("cls");
					 FABCD(head);
					}
					if(answer != '1' && answer!= '2')
						{
							printf("输入错误\n");
						}
						printf("是否继续\n");
						printf("1.按任意键回车后继续查看\n0.退出\n");
						scanf("%s",&answer);
						if(answer=='0')
						{
							break;
						}
				}
				printf("\n按任意键继续回到菜单\n");
				getch();
				system("cls");
				break;
			}
		case 6:
			{
				system("cls");
				while(1)
				{
					add(head);
					printf("是否继续\n");
					printf("1.按任意键回车后继续增加\n0.退出\n");
					scanf("%s",&answer);
                	if(answer=='0')
	                break;
				}
				printf("\n按任意键继续回到菜单\n");
				getch();
				system("cls");
				break;
			}
		case 0:
			{   
			    filein(head);
			    cout<<"文件已更新完毕" <<endl;
				cout<<"退出系统"<<endl;
			    exit(0);
				break;
			}
		default:
			{
				cout<<"xxxxxxxxxxxxxxx没有这个选项xxxxxxxxxxxxxx"<<endl;
				printf("\nxxxxxxxxxxxxxxx按任意键继续回到菜单xxxxxxxxxxxxxx\n");
				getch();
				system("cls");
				break;
			}					
	}
}
  while(1);
  return 0;
 }
 
node *createlink()
{
    node *head =(node*)malloc(sizeof(node));
    node *p;
    node *q;
    p=q=head;
    FILE * r= fopen("test.txt","r");
    if(r==NULL)
    {
        printf("打开文件失败!");
        return NULL; 
    }
    char i[N];
    char m[N];
    char n[N];
    char t[N];
    int aa,bb,cc,dd,ee,ff;
    while(fscanf ( r, "%s %s %s %d %d %d %d %d %s %d",i, m, n, &aa, &bb, &cc, &dd, &ee, t, &ff) != EOF)
    {
       q= (node*)malloc(sizeof(node));
       //strcpy ( newn -> date.name, n );
       //q->major=m;
       strcpy(q->id,i);
       strcpy(q->major,m);
       strcpy(q->name,n);
       strcpy(q->cet,t);
       //q->name = n;
       q->a = aa;
       q->b = bb;
	   q->c = cc;
	   q->d = dd;
	   q->e = ee; 
	   q->f = ff;
       p->next=q;
       p=q;
	}
	p->next=NULL;
    return head;
}

node  *create()          //建立基础的学生信息库  从文件中将学生信息读取出来
{
	FILE *fp;
	struct node *head, *p , *q;
    p = q = (struct node *)malloc(sizeof (node));
	if( ( fp = fopen("test.txt","r") ) == NULL )
	{
		printf( "can't open file\n" );
		exit(1);
	}
	head = p;
    fscanf ( fp, "%s %s %s %d %d %d %d %d %s %d",p->id, p->major, p->name, &p->a, &p->b, &p->c, &p->d, &p->e, p->cet, &p->f);
    p->next=q;
	while(!feof(fp))
	{
		q = (struct node *)malloc(sizeof (node));
        fscanf ( fp, "%s %s %s %d %d %d %d %d %s %d",p->id, p->major, p->name, &p->a, &p->b, &p->c, &p->d, &p->e, p->cet, &p->f);   
		p->next = q;
		p = q;
	}
	p->next = NULL;
	fclose(fp);
	return head;
}

void outlink(node *head)
{
	node *p = head->next; 
	while(p)
	{		
		printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",p->major,p->name,p->id,p->a,p->b,p->c,p->d,p->e,p->cet,p->f);
		p = p->next;
	}
    return;
 } 
 
void college(int a,node *head)
{
	int temp = 0;
	int sum = 0;
	if(a == 1)
	{
	node *p = head->next;
	while(p)
	{		
        if(strcmp(p->major,"计算机") == 0)
        {
        	temp++;
        	sum =sum + p->a + p->b + p->c + p->d  + p->e;
		}
		p = p->next;
	}
    printf("计算机学院的平均分为：%f",sum*1.0/temp) ;	
	}
	
	
	else if(a == 2)
	{
	node *p = head->next;
	while(p)
	{		
        if(strcmp(p->major,"经济") == 0)
        {
        	temp++;
        	sum =sum + p->a + p->b + p->c + p->d  + p->e;
		}
		p = p->next;
	}
    printf("经济学院的平均分为：%f",sum*1.0/temp) ;
	}
}

void course(int a,node *head)
{
	float sum =0;
	int temp = 0;
	node *p = head->next;
	if(a == 1)
	{
		while(p)
	{	temp++;
        sum = sum + p->a;
        p = p->next;
	}
	printf("高数平均分为："); 
	}
	else if(a == 2)
	{
		while(p)
	{	temp++;
        sum = sum + p->b;
        p = p->next;
	}
	printf("英语平均分为："); 
	}
		else if(a == 3)
	{
		while(p)
	{	temp++;
        sum = sum + p->c;
        p = p->next;
	}
	printf("思修平均分为："); 
	}
		else if(a == 4)
	{
		while(p)
	{	temp++;
        sum = sum + p->d;
        p = p->next;
	}
	printf("线代平均分为："); 
	}
		else if(a == 5)
	{
		while(p)
	{	temp++;
        sum = sum + p->e;
        p = p->next;
	}
	printf("java平均分为："); 
	}
	printf("%d",sum/temp);
}

void pass(int a,node *head)
{
	int n = 0;
    node *p = head->next;
	if(a == 1)
	{
	while(p)
	{		
		if(p->f >= 425)
		n++;
		p = p->next;
	}		
	}
	else if(a == 2)
	{
	while(p)
	{	
		if((strcmp("计算机",p->major) == 0)&&(p->f >= 425))
		{
		n++;	
		}
		p = p->next;
	}		
	}	
	else if(a == 3)
	{
	while(p)
	{		
		if((strcmp("经济",p->major) == 0)&&(p->f >= 425))
		{
		n++;	
		}
		p = p->next;
	}		
	}	
	cout<<"通过英语四级考试的人数："<<n<<endl;
}
void frees(int a,node *head)
{
   	int n = 0;
    node *p = head->next;
	if(a == 1)
	{
	while(p)
	{		
		if(p->f >= 550)
		n++;
		p = p->next;
	}		
	}
	else if(a == 2)
	{
	while(p)
	{	
		if((p->f >= 550)&&(strcmp("计算机",p->major) == 0))
		n++;
		p = p->next;
	}		
	}	
	
	else if(a == 3)
	{
	while(p)
	{		
		if((p->f >= 550)&&(strcmp("经济",p->major) == 0))
		n++;
		p = p->next;
	}		
	}	
	cout<<"获得免修资格名额："<<n<<endl;
}

void rate(int a,node *head)
{
	float m = 0;
	float n = 0;
    node *p = head->next;
	if(a == 1)
	{
	while(p)
	{   m++;
		if(p->f >= 425)
		n++;
		p = p->next;
	}		
	}
	else if(a == 2)
	{
	while(p)
	{	m++;
		if((p->f >= 425)&&(strcmp("计算机",p->major) == 0))
		n++;
		p = p->next;
	}		
	}	
	else if(a == 3)
	{
	while(p)
	{	m++;
		if((p->f >= 425)&&(strcmp("经济",p->major) == 0))
		n++;
		p = p->next;
	}		
	}	
	cout<<"四级通过率："<<(n/m)*100<<endl;
}

void findname(node *head)//姓名查找 
{   
    node *p , *q;
    printf("\n请输入要查询学生的姓名:");
	char name[10];
	fflush(stdin);
	gets(name);
    p = head;
    q = p->next;
	if(strcmp(name,q->name)==0)
	{
    printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
    printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
	}
	else
	{
		while(q && (strcmp(q->name,name)!=0))
		{
			q = q->next;
		}
		if(q)
		{
	      printf("查询的信息为:\n");
          printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
          printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
		}
		else
		{
			printf("没有%s学生\n",name);
		}
	}
}

void findid(node *head)// 学号查找
{   
	FILE *w = fopen("test.txt","r");
	if(w == NULL)
	{
	   printf("打开文件失败!");
       return;
	}
    node *p , *q;
    printf("\n请输入要查询学生的学号:");
	char id[10];
	fflush(stdin);
	gets(id);
    p = head;
    q = p->next;
	if(strcmp(id,q->id)==0)
	{
    printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
    printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
	}
	else
	{
		while(q && (strcmp(q->id,id)!=0))
		{
			q = q->next;
		}
		if(q)
		{
	      printf("查询的信息为:\n");
          printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
          printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
		}
		else
		{
			printf("没有学号为%s学生\n",id);
		}
	}
}


node *changenum(node *head) //通过学号去修改学生数据
{
    node *p , *q;
    printf("\n请输入要修改信息的学生的学号:");
	char id[10];
	fflush(stdin);
	gets(id);
    p = head;
    q = p->next;
	if(strcmp(id,q->id)==0)
	{
         printf("学号为%s的学生存在\n",id);
		printf("你要修改的学生信息为:\n");
        printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
       	printf("请修改高数的成绩:\n");
		scanf("%d",&q->a);
		hundred(&q->a);
		printf("请修改英语的成绩:\n");
		scanf("%d",&q->b);
		hundred(&q->b);
		printf("请修改思修的成绩:\n");
		scanf("%d",&q->c);
		hundred(&q->c);
		printf("请修改线代的成绩：\n");
		scanf("%d",&q->d);
		hundred(&q->d);
		printf("请修改java的成绩：\n");
		scanf("%d",&q->e);
		hundred(&q->e);
		printf("请输入是否通过四级考试：\n");
		scanf("%s",q->cet);
		printf("请修改英语四级成绩：\n");
		scanf("%d",&q->f);
		hundred2(&q->f);
		printf("成绩已经完成更新\n");
		printf("更新后的学生信息为:\n");
        printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);  
	}
	else
	{
		while(q && (strcmp(q->id,id)!=0))
		{
			q = q->next;
		}
		if(q)
		{
        printf("学号为%s的学生存在\n",id);
		printf("你要修改的学生信息为:\n");
        printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
       	printf("请修改高数的成绩:\n");
		scanf("%d",&q->a);
		hundred(&q->a);
		printf("请修改英语的成绩:\n");
		scanf("%d",&q->b);
		hundred(&q->b);
		printf("请修改思修的成绩:\n");
		scanf("%d",&q->c);
		hundred(&q->c);
		printf("请输入线代的成绩：\n");
		scanf("%d",&q->d);
		hundred(&q->d);
		printf("请输入java的成绩：\n");
		scanf("%d",&q->e);
		hundred(&q->e);
		printf("请输入是否通过四级考试：\n");
		scanf("%s",q->cet);
		printf("请修改英语四级成绩：\n");
		scanf("%d",&q->f);
		hundred2(&q->f);
		printf("成绩已经完成更新\n");
		printf("更新后的学生信息为:\n");
        printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);  
		}
		else
		{
			printf("没有学号为%s学生\n",id);
		}
	}
	head = p;
	return head;		
}

node *changename(node *head) //通过姓名去修改学生数据
{
    node *p , *q;
    printf("\n请输入要修改信息的学生的姓名:");
	char name[10];
	fflush(stdin);
	gets(name);
    p = head;
    q = p->next;
	if(strcmp(name,q->name)==0)
	{
        printf("姓名为%s的学生存在\n",name);
		printf("你要修改的学生信息为:\n");
        printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
       	printf("请修改高数的成绩:\n");
		scanf("%d",&q->a);
		hundred(&q->a);
		printf("请修改英语的成绩:\n");
		scanf("%d",&q->b);
		hundred(&q->b);
		printf("请修改思修的成绩:\n");
		scanf("%d",&q->c);
		hundred(&q->c);
		printf("请修改线代的成绩：\n");
		scanf("%d",&q->d);
		hundred(&q->d);
		printf("请修改java的成绩：\n");
		scanf("%d",&q->e);
		hundred(&q->e);
		printf("请输入是否通过四级考试：\n");
		scanf("%s",q->cet);
		printf("请修改英语四级成绩：\n");
		scanf("%d",&q->f);
		hundred2(&q->f);
		printf("成绩已经完成更新\n");
		printf("更新后的学生信息为:\n");
        printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);  
	}
	else
	{
		while(q && (strcmp(q->name,name)!=0))
		{
			q = q->next;
		}
		if(q)
		{
        printf("姓名为%s的学生存在\n",name);
		printf("你要修改的学生信息为:\n");
        printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
       	printf("请修改高数的成绩:\n");
		scanf("%d",&q->a);
		hundred(&q->a);
		printf("请修改英语的成绩:\n");
		scanf("%d",&q->b);
		hundred(&q->b);
		printf("请修改思修的成绩:\n");
		scanf("%d",&q->c);
		hundred(&q->c);
		printf("请输入线代的成绩：\n");
		scanf("%d",&q->d);
		hundred(&q->d);
		printf("请输入java的成绩：\n");
		scanf("%d",&q->e);
		hundred(&q->e);
		printf("请输入是否通过四级考试：\n");
		/*printf("1.是\n2.否");
		char a ;
		while(1)
		{
			scanf("%c",&a);
			if(a == '1')
			{
				
			}
			if(a == '2')
			if(a !='1'&&a!='2')
		} */
		scanf("%s",q->cet);
		printf("请修改英语四级成绩：\n");
		scanf("%d",&q->f);
		hundred(&q->f);
		printf("成绩已经完成更新\n");
		printf("更新后的学生信息为:\n");
        printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);  
		}
		else
		{
			printf("没有学号为%s学生\n",name);
		}
	}
	head = p;
	return head;				
}

node *delid(node *head)  //通过学号删除学生信息 
{
	char id[N];
	node  *p , *q;
	printf("请输如你想要删除的学号\n");
	scanf("%s",id);
    	if( head==NULL )
    	{
        printf("\nlist null!\n");
		return head;
    	}
    	p  = head;
    	while( strcmp(p->id,id)!=0 && p->next!=NULL)
    	{
        	q = p ;
		    p = p->next;
    	}  //直到找到为止
    	if(strcmp(p->id,id) ==  0 )  //姓名匹配
    	{
		    if( p == head )    //如果这个学生是第一个学生的话
        	{
			printf("你删除的学生信息为:\n");
            printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
            printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",p->major,p->name,p->id,p->a,p->b,p->c,p->d,p->e,p->cet,p->f);
			printf("");          
			printf("学号为%s学生删除成功\n",id);
			head = p->next;//头head要换 不然找不到了
			}            
        	else
        	   {
			    q->next = p->next;
            	printf("你删除的学生信息为:\n");
                printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
                printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",p->major,p->name,p->id,p->a,p->b,p->c,p->d,p->e,p->cet,p->f);
			    printf("学号为%s学生删除成功\n",id);
			    delete(p);
        	   }
        	return head;
	    }
	if(strcmp(p->id,id)!=0 )
	{
		printf("没有学号为%s的学生\n",id);
	}
}

node *delname(node *head)  //通过姓名删除学生信息 
{
	char name[N];
	node  *p , *q;
	printf("请输如你想要删除的姓名\n");
	scanf("%s",name);
    	if( head==NULL )
    	{
        	printf("\nlist null!\n");
		return head;
    	}
    	p  = head;
    	while( strcmp(p->name,name)!=0 && p->next!=NULL)
    	{
        	q = p ;
		    p = p->next;
    	}  //直到找到为止
    	if(strcmp(p->name,name)==0 )  //姓名匹配
    	{
		if( p == head )    //如果这个学生是第一个学生的话
        	{
			head = p->next;//头head要换 不然找不到了
			printf("你删除的学生信息为:\n");
            printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
            printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",p->major,p->name,p->id,p->a,p->b,p->c,p->d,p->e,p->cet,p->f);           
			printf("学生%s删除成功\n",name);
			}            
        	else
        	   {
			    q->next=p->next;
            	printf("你删除的学生信息为:\n");
                printf("\n\t专业\t姓名\t\t学号\t\t高数\t英语\t思修\t线代\tJava\t是否通过英语四级考试\n");
                printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",p->major,p->name,p->id,p->a,p->b,p->c,p->d,p->e,p->cet,p->f);
			    printf("学生%s删除成功\n",name);
			    free(q);
        	   }
	    }
	if(strcmp(p->name,name)!=0 )
	{
		printf("没有%s学生\n",name);
	}
	return head;
}

node *add(node *head)
{
	node *p =(node*)malloc(sizeof(node));
	char name[N];
	char id[N];
	char major[N];
	char cet[N];
	int a,b,c,d,e,f;
	printf("\n注意百分制：0-100\n"); 
	cout<<endl<<"请输入学生姓名：";fflush(stdin);
	gets(name);
	cout<<endl<<"请输入学生专业：";fflush(stdin);
    gets(major);
	cout<<endl<<"请输入学生学号：";fflush(stdin);
	gets(id);
	cout<<endl<<"请输入学生英语成绩：";fflush(stdin);
	scanf("%d",&a);
	hundred(&a);        
	cout<<endl<<"请输入学生高数成绩：";fflush(stdin);
	scanf("%d",&b);
	hundred(&b);         
	cout<<endl<<"请输入学生思修成绩：";fflush(stdin);
	scanf("%d",&c);
	hundred(&c);  
	cout<<endl<<"请输入学生线代成绩：";fflush(stdin);
	scanf("%d",&d); 
	hundred(&d); 
	cout<<endl<<"请输入学生java成绩：";fflush(stdin);
	scanf("%d",&e);
	hundred(&e); 
	cout<<endl<<"请输入学生英语四级成绩：";fflush(stdin);
	scanf("%d",&f);
	hundred2(&f);
	cout<<endl<<"请输入是否通过英语四级：";fflush(stdin);
	gets(cet);	
	strcpy(p->id,id);
    strcpy(p->major,major);
    strcpy(p->name,name);
    strcpy(p->cet,cet);
	p->a = a;
	p->b = b;
	p->c = c;
	p->d = d;
	p->e = e;
	p->f = f;
	while(head->next != NULL)
	{
		head = head->next;
	}
	head->next = p;
	return head;
}

void save (node *head)
{
	node *p = NULL;
	p = head->next;
	FILE *w =fopen("test.txt","w");
	if(w=NULL)
	{
		printf("文件打开失败");
		return;
	}
    while(p)
    {
    	fprintf( w,"%s %s %s %d %d %d %d %d %s %d\n",p->id, p->major, p->name, p->a, p->b, p->c, p->d, p->e, p->cet, p->f);
    	p=p->next;
	}
	fclose(w);
	printf("数据已保存");
	return ; 
} 

void filein(node *head)//保存到文件中 
{
    	FILE *fp;
    	node *p;
    	if((fp=fopen("test.txt","w"))==NULL)//打开文件 
    	{
        	printf("can't open.\n");
        	exit(-1);
    	}
    	p = head->next;
	while(p)
	{
        	fprintf(fp,"%s %s %s %d %d %d %d %d %s %d\n",p->id, p->major, p->name, p->a, p->b, p->c, p->d, p->e, p->cet, p->f);
        	p = p->next;
	}
	fclose(fp);
}

void ABCD(node *head)
{
    int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;
	int n7 = 0;
	int n8 = 0;
	int n9 = 0;
	int n10 = 0;
	int n11 = 0;
	int n12 = 0;
	int n13 = 0;
	int n14 = 0;
	int n15 = 0;
	int n16 = 0;
	int n17 = 0;
	int n18 = 0;
	int n19 = 0;
	int n20 = 0;
	//统计分数段的人数
   	node *p;
	FILE *fp;
   	p = head;
	printf("A等级为90--100\nB等级为80--89\nC等级为60--80\nD等级为<60\n");
    	while(p!=NULL)
    	{
    	//a 
		if( p->a >= 90  )
		{
			n1 ++;
		}
		if( (p->a >= 80 ) && ( p->a < 90 ) )
		{
			n2 ++;
		}
		if( (p->a >= 60 ) && ( p->a < 80 ) )
		{
			n3 ++;
		}
		if( p->a < 60  )
		{
			n4 ++;
		}
		
		//b
		if( p->b >= 90  )
		{
			n5 ++;
		}
		if( (p->b >= 80 ) && ( p->b < 90 ) )
		{
			n6 ++;
		}
		if( (p->b >= 60 ) && ( p->b < 80 ) )
		{
			n7 ++;
		}
		if( p->b < 60  )
		{
			n8 ++;
		}
		
		//c
		if( p->c >= 90  )
		{
			n9 ++;
		}
		if( (p->c >= 80 ) && ( p->c < 90 ) )
		{
			n10 ++;
		}
		if( (p->c >= 60 ) && ( p->c < 80 ) )
		{
			n11 ++;
		}
		if( p->b < 60  )
		{
			n12 ++;
		}
		
		
		//d
		if( p->d >= 90  )
		{
			n13 ++;
		}
		if( (p->d >= 80 ) && ( p->d < 90 ) )
		{
			n14 ++;
		}
		if( (p->d >= 60 ) && ( p->d < 80  ) )
		{
			n15 ++;
		}
		if( p->d < 60  )
		{
			n16 ++;
		}
		
		
		
		//e
		if( p->d >= 90  )
		{
			n17 ++;
		}
		if( (p->d >= 80 ) && ( p->d < 90 ) )
		{
			n18 ++;
		}
		if( (p->d >= 60 ) && ( p->d < 80  ) )
		{
			n19 ++;
		}
		if( p->d < 60  )
		{
			n20 ++;
		}
		p = p->next;
    }
    printf("\n成绩分析已经生成表格\n"); 
	printf("\n等级\tA\tB\tC\tD\t总数\n");
	printf("高数\t%d\t%d\t%d\t%d\t%3d\n",n1,n2,n3,n4,n1+n2+n3+n4);
    printf("英语\t%d\t%d\t%d\t%d\t%3d\n",n5,n6,n7,n8,n5+n6+n7+n8);
	printf("思修\t%d\t%d\t%d\t%d\t%3d\n",n9,n10,n11,n12,n9+n10+n11+n12);
	printf("线代\t%d\t%d\t%d\t%d\t%3d\n",n13,n14,n15,n16,n13+n14+n15+n16);
	printf("java\t%d\t%d\t%d\t%d\t%3d\n",n17,n18,n19,n20,n17+n18+n19+n20);
	printf("总数\t%d\t%d\t%d\t%d\t%3d\n",n1+n5+n9+n13+n17,n2+n6+n10+n14+n18,n3+n7+n11+n15+n19,n4+n8+n12+n16+n20,n1+n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12+n13+n14+n15+n16+n17+n18+n19+n20);
}

void FABCD(node *head) 
{
    int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;
	int n7 = 0;
	int n8 = 0;
	int n9 = 0;
	int n10 = 0;
	int n11 = 0;
	int n12 = 0;
	int n13 = 0;
	int n14 = 0;
	int n15 = 0;
	int n16 = 0;
	int n17 = 0;
	int n18 = 0;
	int n19 = 0;
	int n20 = 0;
	//统计分数段的人数
   	node *p;
	FILE *fp;
   	p = head;
	printf("成绩分析已经生成表格\n请到abcd.txt文件查看");
    	while(p!=NULL)
    	{
    	//a 
		if( p->a >= 90  )
		{
			n1 ++;
		}
		if( (p->a >= 80 ) && ( p->a < 90 ) )
		{
			n2 ++;
		}
		if( (p->a >= 60 ) && ( p->a < 80 ) )
		{
			n3 ++;
		}
		if( p->a < 60  )
		{
			n4 ++;
		}
		
		//b
		if( p->b >= 90  )
		{
			n5 ++;
		}
		if( (p->b >= 80 ) && ( p->b < 90 ) )
		{
			n6 ++;
		}
		if( (p->b >= 60 ) && ( p->b < 80 ) )
		{
			n7 ++;
		}
		if( p->b < 60  )
		{
			n8 ++;
		}
		
		
		//c
		if( p->c >= 90  )
		{
			n9 ++;
		}
		if( (p->c >= 80 ) && ( p->c < 90 ) )
		{
			n10 ++;
		}
		if( (p->c >= 60 ) && ( p->c < 80 ) )
		{
			n11 ++;
		}
		if( p->b < 60  )
		{
			n12 ++;
		}
		
	
		//d
		if( p->d >= 90  )
		{
			n13 ++;
		}
		if( (p->d >= 80 ) && ( p->d < 90 ) )
		{
			n14 ++;
		}
		if( (p->d >= 60 ) && ( p->d < 80  ) )
		{
			n15 ++;
		}
		if( p->d < 60  )
		{
			n16 ++;
		}
		
		//e
		if( p->d >= 90  )
		{
			n17 ++;
		}
		if( (p->d >= 80 ) && ( p->d < 90 ) )
		{
			n18 ++;
		}
		if( (p->d >= 60 ) && ( p->d < 80  ) )
		{
			n19 ++;
		}
		if( p->d < 60  )
		{
			n20 ++;
		}
		p = p->next;
    }
	if((fp=fopen("abcd.txt","w"))==NULL)//打开文件 
    	{
        	printf("can't open.\n");
        	exit(-1);
    	}
	fprintf(fp,"A等级为90--100\nB等级为80--89\nC等级为60--80\nD等级为<60\n");
	fprintf(fp,"\n等级\tA\tB\tC\tD\t总数\n");
	fprintf(fp,"高数\t%d\t%d\t%d\t%d\t%3d\n",n1,n2,n3,n4,n1+n2+n3+n4);
    fprintf(fp,"英语\t%d\t%d\t%d\t%d\t%3d\n",n5,n6,n7,n8,n5+n6+n7+n8);
	fprintf(fp,"思修\t%d\t%d\t%d\t%d\t%3d\n",n9,n10,n11,n12,n9+n10+n11+n12);
	fprintf(fp,"线代\t%d\t%d\t%d\t%d\t%3d\n",n13,n14,n15,n16,n13+n14+n15+n16);
	fprintf(fp,"java\t%d\t%d\t%d\t%d\t%3d\n",n17,n18,n19,n20,n17+n18+n19+n20);
	fprintf(fp,"总数\t%d\t%d\t%d\t%d\t%3d\n",n1+n5+n9+n13+n17,n2+n6+n10+n14+n18,n3+n7+n11+n15+n19,n4+n8+n12+n16+n20,n1+n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12+n13+n14+n15+n16+n17+n18+n19+n20);
	fclose(fp);
}

void hundred(int *score)
{
	if(*score>100||*score<0)
	{
		printf("请输入合法分数(0-100): ");
		scanf("%d",score);
		hundred(score);
    }
} 

void hundred2(int *score)
{
	if(*score>710||*score<0)
	{
		printf("请输入合法分数(0-710): ");
		scanf("%d",score);
		hundred2(score);
    }
} 

