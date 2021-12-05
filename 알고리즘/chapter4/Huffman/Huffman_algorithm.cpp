#include <stdio.h>

// struct nodeType
// {
//     char symbol; // the value of character
//     int frequency; // the number of times the characteris in the file.
//     nodeType* left;
//     nodeType* right;
// } NODE; 



// typedef struct node{
// 	struct node *left; // left child
// 	struct node *right; // right child
// }node

// *node huffman (int n,node PQ){
// 	node *a, *b, *r;
// 	int i;
    
//     for (i=1;i<n;i++){
// 		remove(PQ,a);
// 		remove(PQ,b);
// 		r->left=a;
// 		r->right=b;
// 		r->freq=a->freq+b->freq;
// 		insert(PQ,r);
// 	}
// 	remove(PQ,r);
// 	return r;
// }


// 우선순위 큐로 heap이 사용된다면, 초기에 힙을 구성하는 데 O(n) 시간이 걸리고, 
// 최솟값 제거 및 새로운 원소의 삽입 등 heap 연산은 O(logn) 시간이 걸린다. for 루프는 n-1번 수행되기 때문에 알고리즘의 전체 수행 시간은 O(nlogn)이 된다.
