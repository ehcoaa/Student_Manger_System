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

node  * create() ;                   //���������ļ���Ϣ������ 

void course(int a,node *head);     //����Ŀ����ƽ���� 

void college(int a ,node *head); //��ѧԺ����ƽ���� 

void outlink(node *head);          //�������� 

node *createlink();                //���������ļ���Ϣ������ 

void pass(int a,node *head);        //�����ļ�ͨ������

void frees(int a,node*head);        //�ļ����޶� 

void rate(int a,node *head);      //�ļ�ͨ���� 

void findname(node *head);         //�����ֲ��� 

void findid(node *head);           //����ѧ�Ų�ѯ 

node * changenum(node *head);      //����ѧ���޸� 

node * changename(node *head);     //���������޸�  

node *delid(node *head);             //ͨ��ѧ��ɾ��ѧ����Ϣ

node *delname(node *head);         //��������ɾ�� 

node *add(node *head);              //����ѧ����Ϣ 

void filein(node *head);           //�����ļ�
 
void ABCD(node *head);            //���߲鿴 

void FABCD(node *head);          //�γ��ļ��鿴 

void hundred(int *score);        //�ٷ��ƺϷ����� 

void hundred2(int *score);            //�ļ����Է������ 

int main()
 {
 	system("color 0B");
 	printf("\t\t\tѧ���ɼ�����ϵͳ\n");
	printf("\n\t\t\t�����������ϵͳ\n");
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
	printf("��ӭ�㣬����Ա��\n");
	cout<<"      ----------------------------------------------------------------------------"<<endl;
	cout<<"      | ������ѡ����(0-5):                                                     |"<<endl;
	cout<<"      |                                                                          |"<<endl;
	cout<<"      |                                  1--�������ѧ����Ϣ:                    |"<<endl;
	cout<<"      |                                                                          |"<<endl; 
	cout<<"      |                                  2--��ѯѧ����Ϣ:                        |"<<endl; 
	cout<<"      |                                                                          |"<<endl;
	cout<<"      |                                  3--�޸�ѧ����Ϣ:                        |"<<endl;
	cout<<"      |                                                                          |"<<endl; 
	cout<<"      |                                  4--ɾ��ѧ����Ϣ:                        |"<<endl;
	cout<<"      |                                                                          |"<<endl; 
	cout<<"      |                                  5--���Ƴɼ�:                            |"<<endl; 
	cout<<"      |                                                                          |"<<endl; 	
	cout<<"      |                                  6--����ѧ����Ϣ:                        |"<<endl; 
	cout<<"      |                                                                          |"<<endl;
	cout<<"      |                                  0--���沢�˳�ϵͳ                       |"<<endl; 
	cout<<"      |                                                                          |"<<endl; 
	cout<<"      |                                                                          |"<<endl;
	cout<<"      |                                                                          |"<<endl;  
	cout<<"      |                          ��ע��ÿ�ΰ�0�˳����ܱ����޸ĵ��ļ���           |"<<endl;  
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
					printf("��ѡ����Ҫ��ѯ��ѧ�ڣ�");
                    printf("\n\t\t\t1.��һ��\n");
	                printf("\n\t\t\t2.��һ��\n");
	                printf("\n\t\t\t3.�����\n");
					scanf("%s",&answer);
						if( answer == '1' )
						{
							system("cls");
							printf("\n     ----------------------------------------�ɼ�������------------------------------------\n"); 
	                        printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
							outlink(head);
                            cout<<endl<<endl<<endl<<"0.�˳����" <<endl;
                    	   	cout<<"1.Ӣ���ļ����Բ�ѯ"<<endl;
                    	   	cout<<"2.ƽ���ֲ�ѯ"<<endl;
                    	   	int op;
                    	   	cin>>op;
                    	   	if(op == 1)
                    	   	{
                    	   	system("cls");						
						    cout<<"1.ͳ������ѧ��Ӣ���ļ��������"<<endl;
						    cout<<endl; 
							cout<<"2.��ѧԺͳ��ѧ��Ӣ���ļ��������"<<endl;
							int a;
							cin>>a;
							if(a == 1)
							{
								system("cls");
								cout<<"����ѧ��"<<endl;
                                pass(1,head);
                                frees(1,head);
                                rate(1,head);
							}
							else if(a == 2)
							{   system("cls");
								cout<<"1.�����ѧԺ"<<endl;
								cout<<endl;
								cout<<"2.����ѧԺ"<<endl;
								int b;
								cin>>b;
								if(b == 1)
								{
								system("cls");
								cout<<"�����ѧԺ:"<<endl;
	                            pass(2,head);
                                frees(2,head);
                                rate(2,head);
							    } 
								else if(b == 2)
								{
								system("cls");
								cout<<"����ѧԺ"<<endl;
					            pass(3,head);
                                frees(3,head);
                                rate(3,head);
								}
								else
								{
                  			    cout<<"*************************�������*************************"<<endl; 
								break;
								} 
							}
							else{
							    cout<<"*************************�������*************************"<<endl; 
								break;
							}
							break;
							}
						if(op == 2)
						{
                    	system("cls");
                    	printf("\n\n��ѡ�����ƽ���ֲ�ѯ��ʽ\n");
						printf("1.Ժϵ\n\n2.��Ŀ\n");
						char answer;
						scanf("%s",&answer);
						if( answer == '1' )
						{   system("cls");
							cout<<"Ժϵ���ƣ�";
							printf("\n1.�����\n\n2.����\n");
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
									cout<<"û�����ѡ��"<<endl;
									break;
								}
							}
					    }
						else if(answer == '2' )
						{
							system("cls");
							cout<<"��Ŀ���ƣ�"<<endl;
							cout<<"1.����" <<endl;
							cout<<"2.Ӣ��" <<endl;
							cout<<"3.˼��" <<endl;
							cout<<"4.�ߴ�" <<endl;
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
									cout<<"û�����ѡ��"<<endl; 
									break;
								}
						    }
						}
						if(answer != '1' && answer!= '2')
						{
							printf("�������\n");
						}
						printf("1.��������س��������ѯ\n0.�˳�\n");
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
						    printf("\n     ----------------------------------------�ɼ�������------------------------------\n"); 
	                        printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
							outlink(head1);
						}
						if(answer == '3' )
						{   system("cls");
						    printf("\n     ----------------------------------------�ɼ�������------------------------------\n"); 
	                        printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
							outlink(head2);
						}						 
						if(answer != '1' && answer!= '2' && answer!='3')
						{
							printf("�������\n");
						}
						printf("1.��������س��������ѯ\n0.�˳�\n");
						scanf("%s",&answer);
						fflush(stdin);
						if(answer == '0' )
						{
							break;
						}	
					}
				printf("\n������������ص��˵�\n");
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
						printf("��ѡ���ѯ��ʽ\n");
						printf("1.����\n2.ѧ��\n");
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
							printf("�������\n");
						}
						printf("1.��������س��������ѯ\n0.�˳�\n");
						scanf("%s",&answer);
						fflush(stdin);
						if(answer == '0' )
						{
							break;
						}	
					}
				printf("\n������������ص��˵�\n");
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
						printf("��ѡ���޸ĳɼ��ķ�ʽ\n");
						printf("1.����\n2.ѧ��\n");
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
							printf("�������\n");
						}
						printf("�Ƿ����\n");
						printf("1.��������س�������޸�\n0.�˳�\n");
						scanf("%s",&answer);
						if(answer=='0')
						{
							break;
						}
					}
					
					printf("\n��������ص��˵�\n");
					getch();
					system("cls");
					break;
				}
		case 4:
			{
				system("cls");
                while(1)
                {   cout<<"��ѡ��ɾ����ʽ"<<endl;
                    cout<<"1.ͨ������ɾ��"<<endl;
                    cout<<"2.ͨ��ѧ��ɾ��"<<endl; 
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
							printf("�������\n");
						}
						printf("�Ƿ����\n");
						printf("1.��������س������ɾ��\n0.�˳�\n");
						scanf("%s",&answer);
						if(answer=='0')
						{
							break;
						}
				}
				printf("\n������������ص��˵�\n");
				getch();
				system("cls");
				break;
			}
		case 5:
			{
				system("cls");
                while(1)
                {   cout<<"��ѡ��鿴��ʽ"<<endl;
                    cout<<"1.���߲鿴"<<endl;
                    cout<<"2.���ɱ���ļ��鿴"<<endl; 
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
							printf("�������\n");
						}
						printf("�Ƿ����\n");
						printf("1.��������س�������鿴\n0.�˳�\n");
						scanf("%s",&answer);
						if(answer=='0')
						{
							break;
						}
				}
				printf("\n������������ص��˵�\n");
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
					printf("�Ƿ����\n");
					printf("1.��������س����������\n0.�˳�\n");
					scanf("%s",&answer);
                	if(answer=='0')
	                break;
				}
				printf("\n������������ص��˵�\n");
				getch();
				system("cls");
				break;
			}
		case 0:
			{   
			    filein(head);
			    cout<<"�ļ��Ѹ������" <<endl;
				cout<<"�˳�ϵͳ"<<endl;
			    exit(0);
				break;
			}
		default:
			{
				cout<<"xxxxxxxxxxxxxxxû�����ѡ��xxxxxxxxxxxxxx"<<endl;
				printf("\nxxxxxxxxxxxxxxx������������ص��˵�xxxxxxxxxxxxxx\n");
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
        printf("���ļ�ʧ��!");
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

node  *create()          //����������ѧ����Ϣ��  ���ļ��н�ѧ����Ϣ��ȡ����
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
        if(strcmp(p->major,"�����") == 0)
        {
        	temp++;
        	sum =sum + p->a + p->b + p->c + p->d  + p->e;
		}
		p = p->next;
	}
    printf("�����ѧԺ��ƽ����Ϊ��%f",sum*1.0/temp) ;	
	}
	
	
	else if(a == 2)
	{
	node *p = head->next;
	while(p)
	{		
        if(strcmp(p->major,"����") == 0)
        {
        	temp++;
        	sum =sum + p->a + p->b + p->c + p->d  + p->e;
		}
		p = p->next;
	}
    printf("����ѧԺ��ƽ����Ϊ��%f",sum*1.0/temp) ;
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
	printf("����ƽ����Ϊ��"); 
	}
	else if(a == 2)
	{
		while(p)
	{	temp++;
        sum = sum + p->b;
        p = p->next;
	}
	printf("Ӣ��ƽ����Ϊ��"); 
	}
		else if(a == 3)
	{
		while(p)
	{	temp++;
        sum = sum + p->c;
        p = p->next;
	}
	printf("˼��ƽ����Ϊ��"); 
	}
		else if(a == 4)
	{
		while(p)
	{	temp++;
        sum = sum + p->d;
        p = p->next;
	}
	printf("�ߴ�ƽ����Ϊ��"); 
	}
		else if(a == 5)
	{
		while(p)
	{	temp++;
        sum = sum + p->e;
        p = p->next;
	}
	printf("javaƽ����Ϊ��"); 
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
		if((strcmp("�����",p->major) == 0)&&(p->f >= 425))
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
		if((strcmp("����",p->major) == 0)&&(p->f >= 425))
		{
		n++;	
		}
		p = p->next;
	}		
	}	
	cout<<"ͨ��Ӣ���ļ����Ե�������"<<n<<endl;
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
		if((p->f >= 550)&&(strcmp("�����",p->major) == 0))
		n++;
		p = p->next;
	}		
	}	
	
	else if(a == 3)
	{
	while(p)
	{		
		if((p->f >= 550)&&(strcmp("����",p->major) == 0))
		n++;
		p = p->next;
	}		
	}	
	cout<<"��������ʸ����"<<n<<endl;
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
		if((p->f >= 425)&&(strcmp("�����",p->major) == 0))
		n++;
		p = p->next;
	}		
	}	
	else if(a == 3)
	{
	while(p)
	{	m++;
		if((p->f >= 425)&&(strcmp("����",p->major) == 0))
		n++;
		p = p->next;
	}		
	}	
	cout<<"�ļ�ͨ���ʣ�"<<(n/m)*100<<endl;
}

void findname(node *head)//�������� 
{   
    node *p , *q;
    printf("\n������Ҫ��ѯѧ��������:");
	char name[10];
	fflush(stdin);
	gets(name);
    p = head;
    q = p->next;
	if(strcmp(name,q->name)==0)
	{
    printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
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
	      printf("��ѯ����ϢΪ:\n");
          printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
          printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
		}
		else
		{
			printf("û��%sѧ��\n",name);
		}
	}
}

void findid(node *head)// ѧ�Ų���
{   
	FILE *w = fopen("test.txt","r");
	if(w == NULL)
	{
	   printf("���ļ�ʧ��!");
       return;
	}
    node *p , *q;
    printf("\n������Ҫ��ѯѧ����ѧ��:");
	char id[10];
	fflush(stdin);
	gets(id);
    p = head;
    q = p->next;
	if(strcmp(id,q->id)==0)
	{
    printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
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
	      printf("��ѯ����ϢΪ:\n");
          printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
          printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
		}
		else
		{
			printf("û��ѧ��Ϊ%sѧ��\n",id);
		}
	}
}


node *changenum(node *head) //ͨ��ѧ��ȥ�޸�ѧ������
{
    node *p , *q;
    printf("\n������Ҫ�޸���Ϣ��ѧ����ѧ��:");
	char id[10];
	fflush(stdin);
	gets(id);
    p = head;
    q = p->next;
	if(strcmp(id,q->id)==0)
	{
         printf("ѧ��Ϊ%s��ѧ������\n",id);
		printf("��Ҫ�޸ĵ�ѧ����ϢΪ:\n");
        printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
       	printf("���޸ĸ����ĳɼ�:\n");
		scanf("%d",&q->a);
		hundred(&q->a);
		printf("���޸�Ӣ��ĳɼ�:\n");
		scanf("%d",&q->b);
		hundred(&q->b);
		printf("���޸�˼�޵ĳɼ�:\n");
		scanf("%d",&q->c);
		hundred(&q->c);
		printf("���޸��ߴ��ĳɼ���\n");
		scanf("%d",&q->d);
		hundred(&q->d);
		printf("���޸�java�ĳɼ���\n");
		scanf("%d",&q->e);
		hundred(&q->e);
		printf("�������Ƿ�ͨ���ļ����ԣ�\n");
		scanf("%s",q->cet);
		printf("���޸�Ӣ���ļ��ɼ���\n");
		scanf("%d",&q->f);
		hundred2(&q->f);
		printf("�ɼ��Ѿ���ɸ���\n");
		printf("���º��ѧ����ϢΪ:\n");
        printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
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
        printf("ѧ��Ϊ%s��ѧ������\n",id);
		printf("��Ҫ�޸ĵ�ѧ����ϢΪ:\n");
        printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
       	printf("���޸ĸ����ĳɼ�:\n");
		scanf("%d",&q->a);
		hundred(&q->a);
		printf("���޸�Ӣ��ĳɼ�:\n");
		scanf("%d",&q->b);
		hundred(&q->b);
		printf("���޸�˼�޵ĳɼ�:\n");
		scanf("%d",&q->c);
		hundred(&q->c);
		printf("�������ߴ��ĳɼ���\n");
		scanf("%d",&q->d);
		hundred(&q->d);
		printf("������java�ĳɼ���\n");
		scanf("%d",&q->e);
		hundred(&q->e);
		printf("�������Ƿ�ͨ���ļ����ԣ�\n");
		scanf("%s",q->cet);
		printf("���޸�Ӣ���ļ��ɼ���\n");
		scanf("%d",&q->f);
		hundred2(&q->f);
		printf("�ɼ��Ѿ���ɸ���\n");
		printf("���º��ѧ����ϢΪ:\n");
        printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);  
		}
		else
		{
			printf("û��ѧ��Ϊ%sѧ��\n",id);
		}
	}
	head = p;
	return head;		
}

node *changename(node *head) //ͨ������ȥ�޸�ѧ������
{
    node *p , *q;
    printf("\n������Ҫ�޸���Ϣ��ѧ��������:");
	char name[10];
	fflush(stdin);
	gets(name);
    p = head;
    q = p->next;
	if(strcmp(name,q->name)==0)
	{
        printf("����Ϊ%s��ѧ������\n",name);
		printf("��Ҫ�޸ĵ�ѧ����ϢΪ:\n");
        printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
       	printf("���޸ĸ����ĳɼ�:\n");
		scanf("%d",&q->a);
		hundred(&q->a);
		printf("���޸�Ӣ��ĳɼ�:\n");
		scanf("%d",&q->b);
		hundred(&q->b);
		printf("���޸�˼�޵ĳɼ�:\n");
		scanf("%d",&q->c);
		hundred(&q->c);
		printf("���޸��ߴ��ĳɼ���\n");
		scanf("%d",&q->d);
		hundred(&q->d);
		printf("���޸�java�ĳɼ���\n");
		scanf("%d",&q->e);
		hundred(&q->e);
		printf("�������Ƿ�ͨ���ļ����ԣ�\n");
		scanf("%s",q->cet);
		printf("���޸�Ӣ���ļ��ɼ���\n");
		scanf("%d",&q->f);
		hundred2(&q->f);
		printf("�ɼ��Ѿ���ɸ���\n");
		printf("���º��ѧ����ϢΪ:\n");
        printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
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
        printf("����Ϊ%s��ѧ������\n",name);
		printf("��Ҫ�޸ĵ�ѧ����ϢΪ:\n");
        printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);
       	printf("���޸ĸ����ĳɼ�:\n");
		scanf("%d",&q->a);
		hundred(&q->a);
		printf("���޸�Ӣ��ĳɼ�:\n");
		scanf("%d",&q->b);
		hundred(&q->b);
		printf("���޸�˼�޵ĳɼ�:\n");
		scanf("%d",&q->c);
		hundred(&q->c);
		printf("�������ߴ��ĳɼ���\n");
		scanf("%d",&q->d);
		hundred(&q->d);
		printf("������java�ĳɼ���\n");
		scanf("%d",&q->e);
		hundred(&q->e);
		printf("�������Ƿ�ͨ���ļ����ԣ�\n");
		/*printf("1.��\n2.��");
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
		printf("���޸�Ӣ���ļ��ɼ���\n");
		scanf("%d",&q->f);
		hundred(&q->f);
		printf("�ɼ��Ѿ���ɸ���\n");
		printf("���º��ѧ����ϢΪ:\n");
        printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
        printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",q->major,q->name,q->id,q->a,q->b,q->c,q->d,q->e,q->cet,q->f);  
		}
		else
		{
			printf("û��ѧ��Ϊ%sѧ��\n",name);
		}
	}
	head = p;
	return head;				
}

node *delid(node *head)  //ͨ��ѧ��ɾ��ѧ����Ϣ 
{
	char id[N];
	node  *p , *q;
	printf("����������Ҫɾ����ѧ��\n");
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
    	}  //ֱ���ҵ�Ϊֹ
    	if(strcmp(p->id,id) ==  0 )  //����ƥ��
    	{
		    if( p == head )    //������ѧ���ǵ�һ��ѧ���Ļ�
        	{
			printf("��ɾ����ѧ����ϢΪ:\n");
            printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
            printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",p->major,p->name,p->id,p->a,p->b,p->c,p->d,p->e,p->cet,p->f);
			printf("");          
			printf("ѧ��Ϊ%sѧ��ɾ���ɹ�\n",id);
			head = p->next;//ͷheadҪ�� ��Ȼ�Ҳ�����
			}            
        	else
        	   {
			    q->next = p->next;
            	printf("��ɾ����ѧ����ϢΪ:\n");
                printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
                printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",p->major,p->name,p->id,p->a,p->b,p->c,p->d,p->e,p->cet,p->f);
			    printf("ѧ��Ϊ%sѧ��ɾ���ɹ�\n",id);
			    delete(p);
        	   }
        	return head;
	    }
	if(strcmp(p->id,id)!=0 )
	{
		printf("û��ѧ��Ϊ%s��ѧ��\n",id);
	}
}

node *delname(node *head)  //ͨ������ɾ��ѧ����Ϣ 
{
	char name[N];
	node  *p , *q;
	printf("����������Ҫɾ��������\n");
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
    	}  //ֱ���ҵ�Ϊֹ
    	if(strcmp(p->name,name)==0 )  //����ƥ��
    	{
		if( p == head )    //������ѧ���ǵ�һ��ѧ���Ļ�
        	{
			head = p->next;//ͷheadҪ�� ��Ȼ�Ҳ�����
			printf("��ɾ����ѧ����ϢΪ:\n");
            printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
            printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",p->major,p->name,p->id,p->a,p->b,p->c,p->d,p->e,p->cet,p->f);           
			printf("ѧ��%sɾ���ɹ�\n",name);
			}            
        	else
        	   {
			    q->next=p->next;
            	printf("��ɾ����ѧ����ϢΪ:\n");
                printf("\n\tרҵ\t����\t\tѧ��\t\t����\tӢ��\t˼��\t�ߴ�\tJava\t�Ƿ�ͨ��Ӣ���ļ�����\n");
                printf("\n\t%s\t%s\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%s\t%d\n",p->major,p->name,p->id,p->a,p->b,p->c,p->d,p->e,p->cet,p->f);
			    printf("ѧ��%sɾ���ɹ�\n",name);
			    free(q);
        	   }
	    }
	if(strcmp(p->name,name)!=0 )
	{
		printf("û��%sѧ��\n",name);
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
	printf("\nע��ٷ��ƣ�0-100\n"); 
	cout<<endl<<"������ѧ��������";fflush(stdin);
	gets(name);
	cout<<endl<<"������ѧ��רҵ��";fflush(stdin);
    gets(major);
	cout<<endl<<"������ѧ��ѧ�ţ�";fflush(stdin);
	gets(id);
	cout<<endl<<"������ѧ��Ӣ��ɼ���";fflush(stdin);
	scanf("%d",&a);
	hundred(&a);        
	cout<<endl<<"������ѧ�������ɼ���";fflush(stdin);
	scanf("%d",&b);
	hundred(&b);         
	cout<<endl<<"������ѧ��˼�޳ɼ���";fflush(stdin);
	scanf("%d",&c);
	hundred(&c);  
	cout<<endl<<"������ѧ���ߴ��ɼ���";fflush(stdin);
	scanf("%d",&d); 
	hundred(&d); 
	cout<<endl<<"������ѧ��java�ɼ���";fflush(stdin);
	scanf("%d",&e);
	hundred(&e); 
	cout<<endl<<"������ѧ��Ӣ���ļ��ɼ���";fflush(stdin);
	scanf("%d",&f);
	hundred2(&f);
	cout<<endl<<"�������Ƿ�ͨ��Ӣ���ļ���";fflush(stdin);
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
		printf("�ļ���ʧ��");
		return;
	}
    while(p)
    {
    	fprintf( w,"%s %s %s %d %d %d %d %d %s %d\n",p->id, p->major, p->name, p->a, p->b, p->c, p->d, p->e, p->cet, p->f);
    	p=p->next;
	}
	fclose(w);
	printf("�����ѱ���");
	return ; 
} 

void filein(node *head)//���浽�ļ��� 
{
    	FILE *fp;
    	node *p;
    	if((fp=fopen("test.txt","w"))==NULL)//���ļ� 
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
	//ͳ�Ʒ����ε�����
   	node *p;
	FILE *fp;
   	p = head;
	printf("A�ȼ�Ϊ90--100\nB�ȼ�Ϊ80--89\nC�ȼ�Ϊ60--80\nD�ȼ�Ϊ<60\n");
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
    printf("\n�ɼ������Ѿ����ɱ��\n"); 
	printf("\n�ȼ�\tA\tB\tC\tD\t����\n");
	printf("����\t%d\t%d\t%d\t%d\t%3d\n",n1,n2,n3,n4,n1+n2+n3+n4);
    printf("Ӣ��\t%d\t%d\t%d\t%d\t%3d\n",n5,n6,n7,n8,n5+n6+n7+n8);
	printf("˼��\t%d\t%d\t%d\t%d\t%3d\n",n9,n10,n11,n12,n9+n10+n11+n12);
	printf("�ߴ�\t%d\t%d\t%d\t%d\t%3d\n",n13,n14,n15,n16,n13+n14+n15+n16);
	printf("java\t%d\t%d\t%d\t%d\t%3d\n",n17,n18,n19,n20,n17+n18+n19+n20);
	printf("����\t%d\t%d\t%d\t%d\t%3d\n",n1+n5+n9+n13+n17,n2+n6+n10+n14+n18,n3+n7+n11+n15+n19,n4+n8+n12+n16+n20,n1+n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12+n13+n14+n15+n16+n17+n18+n19+n20);
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
	//ͳ�Ʒ����ε�����
   	node *p;
	FILE *fp;
   	p = head;
	printf("�ɼ������Ѿ����ɱ��\n�뵽abcd.txt�ļ��鿴");
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
	if((fp=fopen("abcd.txt","w"))==NULL)//���ļ� 
    	{
        	printf("can't open.\n");
        	exit(-1);
    	}
	fprintf(fp,"A�ȼ�Ϊ90--100\nB�ȼ�Ϊ80--89\nC�ȼ�Ϊ60--80\nD�ȼ�Ϊ<60\n");
	fprintf(fp,"\n�ȼ�\tA\tB\tC\tD\t����\n");
	fprintf(fp,"����\t%d\t%d\t%d\t%d\t%3d\n",n1,n2,n3,n4,n1+n2+n3+n4);
    fprintf(fp,"Ӣ��\t%d\t%d\t%d\t%d\t%3d\n",n5,n6,n7,n8,n5+n6+n7+n8);
	fprintf(fp,"˼��\t%d\t%d\t%d\t%d\t%3d\n",n9,n10,n11,n12,n9+n10+n11+n12);
	fprintf(fp,"�ߴ�\t%d\t%d\t%d\t%d\t%3d\n",n13,n14,n15,n16,n13+n14+n15+n16);
	fprintf(fp,"java\t%d\t%d\t%d\t%d\t%3d\n",n17,n18,n19,n20,n17+n18+n19+n20);
	fprintf(fp,"����\t%d\t%d\t%d\t%d\t%3d\n",n1+n5+n9+n13+n17,n2+n6+n10+n14+n18,n3+n7+n11+n15+n19,n4+n8+n12+n16+n20,n1+n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12+n13+n14+n15+n16+n17+n18+n19+n20);
	fclose(fp);
}

void hundred(int *score)
{
	if(*score>100||*score<0)
	{
		printf("������Ϸ�����(0-100): ");
		scanf("%d",score);
		hundred(score);
    }
} 

void hundred2(int *score)
{
	if(*score>710||*score<0)
	{
		printf("������Ϸ�����(0-710): ");
		scanf("%d",score);
		hundred2(score);
    }
} 

