#include <stdio.h>
#define MAX 100

struct Stack
{
    int a[MAX];
    int top;
};

void init(Stack &s)
{
    s.top = -1;
}

void push(Stack &s, int x)   //them phan tu 'x' vao dinh cua stack 's' .De them phan tu moi
{							 //ta tang gia tri cua 'top' len mot don vi va gan gia tri 'x' 
    s.top++;				 //vao vi tri do trong mang 'a' cua stack.
    s.a[s.top] = x;
}

int pop(Stack &s)			 //lay phan tu o dinh cua stack 's'. De lay phan tu nay, ta truy 
{							 //xuat den gia tri cua top trong stack, lay gia tri cua phan tu 
    int x = s.a[s.top];		 //o vi tri do trong mang 'a', giam gia tri cua 'top' di mot don 
    s.top--;				 //vi va tra gia tri cua phan tu do

    return x;
}

bool isEmpty(Stack s)  		 //kiem tra xem stack 's' co trong hay khong. Neu gia tri cua 'top'
{                            //la -1 thi stack trong, tra ve gia tri true. Nguoc lai, tra ve gia
    if (s.top < 0)			 // tri false
        return true;		 

    return false;
}

bool isFull(Stack s)		 //kiem tra xem stack 's' co day hay khong. Neu gia tri cua 'top'
{							 //bang 'MAX - 1'(trong truong hop nay, 'MAX' duoc dinh nghia la 
    if (s.top == MAX - 1)    //so phan tu toi da cua stack), thi stack day, tra ve gia tri true.
        return true;		 //Nguoc lai, tra ve gia tri false.

    return false;
}

void output(Stack s)
{
    for (int i = 0; i <= s.top; i++)
        printf("%d\t", s.a[i]);
    printf("\n");
}


int main()
{
    struct Stack s;
    init(s);
    push(s, 10);
    push(s, 15);
    push(s, 20);

    output(s);              // 10  15  20 
    printf("%d\n", pop(s)); // 20
    output(s);              // 10 15

	if (isEmpty(s))
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");

    if (isFull(s))
        printf("Stack is full\n");
    else
        printf("Stack is not full\n");
    return 0;
}

