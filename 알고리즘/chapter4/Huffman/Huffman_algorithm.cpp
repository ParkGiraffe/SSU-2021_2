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


// �켱���� ť�� heap�� ���ȴٸ�, �ʱ⿡ ���� �����ϴ� �� O(n) �ð��� �ɸ���, 
// �ּڰ� ���� �� ���ο� ������ ���� �� heap ������ O(logn) �ð��� �ɸ���. for ������ n-1�� ����Ǳ� ������ �˰����� ��ü ���� �ð��� O(nlogn)�� �ȴ�.
