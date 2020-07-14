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
	p=r;
	while(p!=NULL)
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
LinkList Search_1st_com(LinkList L1,LinkList L2){
	int len1=Length(L1),int len2=Length(L2);
	LinkList longlist,shortlist;
	if(len1>len2)
		longlist=L1->next;
		shortlist=L2->next;
		dist=len1-len2;
	else
		longlist=L2->next;
		shortlist=L1->next;
		dist=len2-len1;//表长差
	while(dist--)
		longlist=longlist->next;
	while(longlist!=NULL)
		if(longlist==shortlist)
			return longlist;
		else
			longlist=longlist->next;
			shortlist=shortlist->next;
	return NULL;
}

9、给定一个带头节点的单链表，设head为头指针，节点结构为（data，next），data为整型元素，next为指针，试写出算法：按递增次序输出单链表中个节点的数据元素，并释放节点所占的存储空间（要求：不允许使用数组作为辅助空间）
bool Min_Del(linkList &head){
	if(head->next==NULL)
		return false;
	while(head->next!=NULL)
		LNode *pre=head;
		LNode *p=head->next;
		while(p->next!=NULL)
			if(p->next->data<pre->next->data)
				pre=p;
			p=p->next;
		print(pre->next->data)
		u=pre->next;
		pre->next=u->next;
		free(u);
	free(head);
}

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

11、设C={a1,b1,a2,b2,...,an,bn}为线性表，采用带头节点的hc单链表存放，设计一个就地算法，将其拆分成两个线性表，使得A={a1,a2,...,an},B={bn,..,b1} 
LinkList DisCreat(LinkList &A){
	LinkList B=(LinkList)malloc(sizeof(LNode));//创建B表表头
	B->next==NULL;
	LNode *ra=A;//A尾插法，指向A的尾节点
	LNode *p=A->next;
	LNode *q;
	while (p!=NULL)
		ra->next=p;
		ra=p;
		p=p->next;
		if (p!=NULL)
			q=p->next;
			p->next=B->next;
			B->next=p;
			p=q;
	ra->next==NULL;
	return B;
}

12、在一个递增有序的线性表中，有数值相同的元素存在。若存储方式为单链表，设计算法去掉数值相同的元素，使表中不再有重复的元素，例如（7，10，10，21，30，42，42，42，51，70）将变成（7，10，21，30，42，51，70）
void DelDup(LinkList &L){
	if(L->next==NULL)
		return ;
	LNode *p=L->next;
	LNode *r=p->next;
	if(r==NULL)
		return ;
	while (r!=NULL)
		r=p->next;
		if(p->data==r->data)
			p->next=r->next;
			free(r);
		else
			p=p->next;
	return;
}


13、假设有两个按元素值递增次序排列的线性表，均以单链表形式存储。请编写算法将这两个单链表归并为一个按元素值递减次序排列的单链表，并要求利用原来两个单链表的节点存放归并后的单链表
bool Merge(LinkList &LA,LinkList &LB){
	LNode *pa=LA->next;
	LNode *pb=LB->next;
	LNode *r;
	LA->next=NULL;
	while(pa && pb)//当两链表均不空的时候循环
		if(pa->data <= pb->data)
			r=pa->next;
			pa->next=LA->next;
			LA->next=pa;
			pa=r;
		else
			r=pb->next;
			pb->next=LA->next;
			LA->next=pb;
			pb=r;
	if(pa)
		pb=pa;
	while(pb)
		r=pb->next;
		pb->next=LA->next;
		LA->next=pb;
		pb=r;
	free(LB);
}

14、设A和B使两个单链表（带头节点），其中元素递增有序。设计一个算法从A和B中的公共元素产生单链表C，要求不破坏A，B节点。
LinkList ctearteC(LinkList LA,LinkList LB){//公共元素并非指公共节点
	LC=(LinkList )malloc(sizeof(LNode));
	LNode *p=LA->next,*q=LB->next;
	LNode *r=c;
	LNode *s;
	while(p!=NULL && q!=NULL)
		if(p->data < q->data)
			p=p->next;
		else if (p->data > q->data)
			q=q->next;
		else 
			s=(LNode *)malloc(sizeof(LNode));
			s->data=p->data;
			r->next=s;
			p=p->next;
			q=q->next;
	r->next=NULL;
}

15、已知两个链表A和B分别表示两个集合，其元素递增排序。编制函数，求A和B的交集，并存放于A链表中
LinkList Union(LinkList &la,LinkList &lb){
	pa=la->next;pb=lb->next;
	pc=la;
	while(pa && pb)
		if(pa->data == pb->next)
			pc->next=pa;
			pc=pa;
			pa=pa->next;
			u=pb;
			pb=pb->next;
			free(u);
		else if (pa->data < pb->next)
			u=pa;
			pa=pa->next;
			free(u);
		else
			u=pb;
			pb=pb->next;
			free(pb);
	while(pa)
		u=pa;
		pa=pa->next;
		free(u);
	while(pb)
		u=pb;
		pb=pb->next;
		free(u);
	pc->next=NULL;
	free(lb);
	return la;
}

16、两个整数序列A=a1,a2,...,an和B=b1,b2,...,bn，已经存入两个单链表中，设计一个算法，判断序列B是否使序列A的子序列
int pattern(LinkList A,LinkList B){//假设无头节点
	LNode *p=A;
	LNode *pre=p;
	LNode *q=B;
	while(p && q)
		if(p->data==q->data)
			p=p->next;
			q=q->next;
		else
			pre=pre->next;
			p=pre;
			q=B;
	if(q==NULL)
		return 1;
	else
		return 0;
}

17、设计一个算法用于判断带头节点的循环双链表是否对称
int Symmetry(DLinkList L){
	DNode *p=L->next;
	DNode *q=L->prior;
	while(p!=q && q->next!=p)
		if(p->data==q->data)
			p=p->next;
			q=q->prior;
		else
			return 0;
	return 1;
}

18、有两个循环单链表，链表头指针分别指向h1和h2，试编写一个函数将链表h2链接到链表h1之后，要求链接后的链表仍保持循环链表形式。
bool Merge(LinkList &h1,LinkList &h2){
	LNode *p=h1;
	LNode *q;
	while(p->next!=h1)
		p=p->next;
	q=h2;
	while(q->next!=h2)
		q=q->next;
	p->next=h2;
	q->next=h1;
	return h1;
}

19、设有一个带头节点的循环单链表，其节点值均为正整数，设计一个算法，反复找出单链表中节点值最小的节点并输出，然后将该节点从中删除，直到单链表为空为止，再删除表头节点
void DelMin(LinkList &L){
	LNode *minpre;
	LNode *minp;
	LNode *pre;
	LNode *p;
	while(L->next!=L)
		min=p=L->next;
		minpre=pre=L;
		while(p!=L)
			if(p->data < min->data)
				min=p;
				minpre=pre;
			pre=pre->next;
			p=pre->next;
		printf(min->data);
		minpre->next=min->next;
		free(min);
	free(L);
}










