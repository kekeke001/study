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























