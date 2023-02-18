#include <stdio.h>
#include <stdlib.h> 

struct Node {
	int data;
	struct Node* next;
};

struct Node* Create_List ( ) {
	struct Node* Head_Node = ( struct Node* ) malloc ( sizeof ( struct Node ) );
	Head_Node->data = 0;
	Head_Node->next = NULL;
	return Head_Node;
}

struct Node* Create_Node ( int data ) {
	struct Node* New_Node = ( struct Node* ) malloc ( sizeof ( struct Node ) );
	New_Node->data = data;
	New_Node->next = NULL;
	return New_Node;
}

void Print_List ( struct Node* Head_Node ) {
	struct Node* pMove = Head_Node;
	while ( pMove != NULL ) {
		printf ( "%d\n" , pMove->data );
		pMove = pMove->next;
	}
}

void Insert_Node_By_Head ( struct Node* Head_Node , int data ) {
	struct Node* New_Node = Create_Node ( data );
	New_Node->next = Head_Node->next;
	Head_Node->next = New_Node;
}

void Delete_Node ( struct Node* Head_Node , int data ) {
	struct Node* pMove = Head_Node;
	struct Node* pre_pMove;
	while ( pMove->data != data ) {
		pre_pMove = pMove;
		pMove = pMove->next;
	}
	pre_pMove->next = pMove->next;
	free ( pMove );
}

int main ( ) {
	struct Node* List = Create_List ( );
	Insert_Node_By_Head ( List , 1 );
	Insert_Node_By_Head ( List , 2 );
	Insert_Node_By_Head ( List , 3 );
	Print_List ( List );
	Delete_Node ( List , 2 );
	Print_List ( List );
	return 0;
}
