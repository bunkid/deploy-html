#include <stdio.h>
#include <stdlib.h>

struct ElementType {
	int value;
};
struct HeapRecord {
	unsigned int length;
	unsigned int heap_size;
	struct ElementType *heap_array;
};

typedef struct HeapRecord *Heap;

Heap create_heap (unsigned int capacity) {
	Heap HEAP = malloc(sizeof(struct HeapRecord));
	if (HEAP == NULL) {
		printf("Not enough memory!");
		return NULL;
	}
	HEAP->heap_array = malloc(sizeof(struct ElementType)*capacity);
	if (HEAP->heap_array == NULL) {
		printf("Not enough memory!");
		return NULL;
	}
	HEAP->heap_size = capacity - 1;
	HEAP->length = capacity - 1;
	return HEAP;
}

void MAX_HEAPIFY (Heap HEAP, int i) {
	int l = 2*i;
	int r = 2*i+1;
	int largest = i;
	if (l <= HEAP->heap_size && HEAP->heap_array[l].value > HEAP->heap_array[i].value) 
		largest = l;
	if (r <= HEAP->heap_size && HEAP->heap_array[r].value > HEAP->heap_array[largest].value) 
		largest = r;
	if (largest != i) {
		struct ElementType tmp;
		tmp = HEAP->heap_array[i];
		HEAP->heap_array[i] = HEAP->heap_array[largest];
		HEAP->heap_array[largest] = tmp;
		MAX_HEAPIFY(HEAP, largest);
	}
}

//void build_maxheap (Heap HEAP) {
//	HEAP->heap_size = HEAP->length;
//	for (int i = HEAP->length/2; i > 0; i--) {
//		MAX_HEAPIFY(HEAP, i);
//	}
//}

void show_heap (Heap HEAP) {
	for (int i = 1; i <= HEAP->heap_size; i++) {
		printf("%d ", HEAP->heap_array[i].value);
	}
}

void increase_key(heap HEAP, int i, int key){
	if(key < HEAP -> heap_array[i])
	{
		printf("the new key must be greater or equal the current!");
		return;
	}
	HEAP -> heap_array[i].value = key;
	while(i>1 && HEAP -> heap_array[i/2] < HEAP -> )
}
int main() {
	int length = 10;
	Heap HEAP = create_heap(length+1);
	int input[] = {0,16,4,10,14,7,9,3,2,8,1};
	for (int i = 1; i <= length; i++)
	HEAP->heap_array[i].value = input[i];
	show_heap(HEAP);
//	build_maxheap(HEAP);
	MAX_HEAPIFY(HEAP, 2);
	printf("\nAfter sort!\n");
	show_heap(HEAP);
	return 0;
}