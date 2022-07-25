#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

typedef struct nd{
	int prn;
	struct nd* next;
}node;

node* create_list(int n);


int main(){
	int n;
	printf("Enter the number of elements in the list: -\n");
	scanf("%d", &n);
	node* head;
	head = create_list(n);
	return 0;
}

node* create_list(int n){
	node* p;
	node* head;
	for(int i=0;i<n;i++){
		if(i == 0){
			p = (*node)malloc(sizeof(node));
			head = p;
		}
		else{
			p->next = (*node)malloc(sizeof(node));
			p = p->next;
		}
	}
	p->next = NULL;
	return head;
}


