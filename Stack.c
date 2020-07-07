Stack & Queue
Stack
//逻辑结构（定义）
只允许在一端进行插入或者删除操作的线性表--后进先出（LIFO）
顺序栈--栈顺序存储的实现--数组
//定义
# define MaxSize 10
typedef struct{
	int data[MaxSize];
	int top;//栈顶指针
}SqStack;

//栈顶指针指向栈顶元素
//初始化
void InitStack(SqStack &S){
	s.top=-1;
}

//判栈空
bool StackEmpty(SqStack S){
	if(S.top==-1)
		return true;
	else
		return false;
}

//进栈
bool Push(SqStack &s,int x){
	if(S.top==MaxSize-1)
		return false;//栈满
	S.data[++S.top]=x;
	return true;
}

//出栈
bool Pop(SqStack &S，int &e){
	if(S.top==-1)
		return false;//栈空
	e=S.data[S.top--];
	return true;
}

//读栈顶元素
bool GetTop(SqStack s,int &e){
	if(S.top==-1)
		return false;
	e=S.data[S.top];
	return true;
}

//栈的另一种写法，栈顶指针指向栈顶元素的下一个位置
//初始化
void InitStack(SqStack &S){
	S.top==0;
}

//判栈空
bool StackEmpty(SqStack S){
	if(S.top==0)
		return true;
	else
		return false;
}

//进栈
bool Push(SqStack &s,int x){
	if(S.top==MaxSize)
		return false;//栈满
	S.data[S.top++]=x;
	return true;
}

//出栈
bool Pop(SqStack &S，int &e){
	if(S.top==0)
		return false;//栈空
	e=S.data[--S.top];
	return true;
}

//读栈顶元素
bool GetTop(SqStack s,int &e){
	if(S.top==0)
		return false;
	e=S.data[S.top];
	return true;
}

//共享栈--两个栈同享一个存储空间
# define MaxSize 10
typedef struct{
	int data[MaxSize];
	int top0;//0号栈顶指针
	int top1;//1号栈顶指针
	
}ShStack;

//初始化
void InitStack(SqStack &S){
	S.top0=-1;
	S.top1=MaxSize;
}
栈满：top0+1==top1

栈的链式存储---后进先出

//定义
typedef struct Linknode{
	int data;
	struct Linknode *next;
}*LiStack;

入栈//头插法，将带头节点的一端作为栈顶

