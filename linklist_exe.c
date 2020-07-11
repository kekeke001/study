//1、 设计一个递归算法，删除不带头结点的单链表L中所有值为x的节点
void DelX(LinkList &L,int x){
    if(L==NULL)
        return ;
	if(L->data==x){
		p=L;
		L=L->next;
		free(p);
		DelX(L,x);
	else
		DelX(L->next,x);
	}
}

//2、在带头节点的单链表L中，删除所有值为x的节点，并释放其空间，假设值为x的节点不唯一，试编写算法以实现上述操作
void DelX(LinkList &L,int x){//法1 从头到尾扫描
	if(L->next==NULL)
		return false;
	LNode *pre=L;
	LNode *p=L->next;
	LNode *q;
	while(p!=NULL)
		if(p>data==x)
			q=p;
			p=p->next;
			pre->next=p;
			free(q);
		else
			pre=p;
			p=p->next;
}

void DelX(LinkList &L,int x){//法2 尾插法建立单链表
	if(L->next==NULL)
		return false;
	LNode *p=L->next;
	LNode *r=L;
	LNode *q;
	while(p!=NULL)
		if(p->data!=x)
			r->next=p;
			r=p;
			p=p->next;
		else 
			q=p;
			p=p->next;
			free(q);
	r->next=NULL;
}

//3、设L为带头节点的单链表，编写算法实现从尾到头反向输出每个节点的值
void output(LinkList L){//链表逆置输出 
	if(L->next==NULL)
		return false;
	LNode *p=L->next;
	LNode *r;
	L->next=NULL；
	while(p!=NULL)
		r=p->next;
		p->next=L->next;
		L->next=p;
		p=r;
	LNode *q=L->next;
	while(q!=NULL)
		printf(q->data);
		q=q->next;
}
		
void output(LinkList L){//递归
	if(L->next!=NULL)
		output(L->next);
	if(L!=NULL)
		print(L->data);
}

//4、试编写在带头节点的单链表L中删除一个最小值节点的高效算法（假设最小值节点试唯一的）
bool DelMin(LinkList &L){
	if(L->next==NULL)
		return false;
	LNode *pre=L;
	LNode *minpre=L;
	LNode *p=L->next;
	LNode *minp=L->next;
	while(p!=NULL)
		if(p->data<minp->data)
			minpre=pre;
			minp=p;
		pre=p;
		p=p->next;
	minpre->next=minp->next;
	free(minp);
	return true;
}
		
//5、试编写算法将带头节点的单链表就地逆置，所谓“就地”是指辅助空间复杂度为O(1)
LinkList Reverse(LinkList L){//头插法
	LNode *p,*r;
	p=L->next;
	L->next=NULL;
	while(P!=NULL)
		r=p->next;
		p->next=L->next;
		L->next=p;
		p=r;
	returnL;	
}

LinkList Reverse(LinkList L){//法2
	LNode *pre;
	LNode *p=L->next;
	LNode *r=p->next;
	p->next=NULL;
	while(r!=NULL)
		pre=p;
		p=r;
		r=r->next;
		p->next=pre;
	L->next=p;
	return L;
}

6、有一个带头节点的单链表L，设计一个算法使其元素递增有序
bool sort(LinkList &L){
	if(L->next==NULL)
		return false;
	LNode *p=L->next;
	LNode *r=p->next;
	LNode *pre;
	p->next=NULL;
	p=r;
	while(p!=NULL){
		r=p->next;
		pre=L;
		while(pre->next!=NULL && pre->next->data<p->data)
			pre=pre->next;
		p->next=pre->next;
		pre->next=p;
		p=r;	
	}
}

7、设在一个带表头节点的单链表中所有元素节点的数据值无序，试编写一个函数，删除表中所有介于给定的两个值（作为函数参数给出）之间的元素的元素（若存在）
bool DelMN(LinkList &L,int min,int max){
	if(L->next==NULL)
		return false;
	if(min > max)
		return false;
	LNode *pre=L;
	LNode *p=pre->next;
	while(p!=NULL)
		if(p->data>min && p->data<max)
			pre->next=p->next;
			free(p);
			p=pre->next;
		else
			pre=pre->next;
			p=pre->next;
	return true;
}

8、给定两个链表，编写算法找出两个链表的公共节点

9、给定一个带头节点的单链表，设head为头指针，节点结构为（data，next），data为整型元素，next为指针，试写出算法：按递增次序输出单链表中个节点的数据元素，并释放节点所占的存储空间（要求：不允许使用数组作为辅助空间）

10、将一个带头节点的单链表A分解为两个带头节点的单链表A和B，使得A表中含有原表中序号为奇数的元素，而B表中含有原表中序号为偶数的元素，且保持其相对顺序不变
LinkList Divide(LinkList &LA){
	if(LA->next==NULL)
		return NULL;
	int j=0;
	LNode *r1=LA;
	LNode *p=r1->next;
	r1->next=NULL;
	LB=(LinkList)malloc(sizeof(LNode));
	LNode *r2=LB;
	r2->next=NULL;
	LNode *q;
	while(p!=NULL)
		j++;
		if(j%2==0)
			r2->next=p;
			r2=p;
		else
			r1->next=p;
			r1=p;
		p=p->next;
	r1->next=NULL;
	r2->next=NULL;
	return LB;
	
}
































