#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"AVLTree.c"
#include"RBTree.c"
#include"hashTable.c"

//Insert

int testAVLInsertAscending(int number) {
	AVL* avlTree = NULL;

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		avlTree = insertAVL(avlTree, i);
	}
	int time2 = clock();

	return time2 - time1;
}  

int testRBInsertAscending(int number) {
	NILL = malloc(sizeof(struct list));
	NILL->color = BLACK;

	ROOT = NILL;

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		red_black_insert(i);
	}
	int time2 = clock();

	return time2 - time1;
}	 

int testHTInsertAscending(int number) {
	dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
	dummyItem->data = -1;
	dummyItem->key = -1;

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		insert(i, i);
	}
	int time2 = clock();

	for (size_t i = 0; i < number; i++)
	{
		delete(hashArray[i]);
	}
	
	return time2 - time1;
}

int testAVLInsertDescending(int number) {
	AVL* avlTree = NULL;

	int time1 = clock();
	for (size_t i = number; i > 0; i--)
	{
		avlTree = insertAVL(avlTree, i);
	}
	int time2 = clock();


	return time2 - time1;
}

int testRBInsertDescending(int number) {
	NILL = malloc(sizeof(struct list));
	NILL->color = BLACK;

	ROOT = NILL;

	int time1 = clock();
	for (size_t i = number; i > 0; i--)
	{
		red_black_insert(i);
	}
	int time2 = clock();

	return time2 - time1;
}

int testHTInsertDescending(int number) {
	int time1 = clock();
	for (size_t i = number; i > 0; i--)
	{
		insert(i, i);
	}
	int time2 = clock();

	for (size_t i = 0; i < number; i++)
	{
		delete(hashArray[i]);
	}

	return time2 - time1;
}

int	testAVLInsertRandom(int number) {
	AVL* avlTree = NULL;
	srand(time(0));

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		avlTree = insertAVL(avlTree, rand()*rand() % (1000000 + 1));
	}
	int time2 = clock();

	return time2 - time1;
}

int testRBInsertRandom(int number) {
	NILL = malloc(sizeof(struct list));
	NILL->color = BLACK;
	srand(time(0));
	ROOT = NILL;

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		red_black_insert(rand() * rand() % (1000000 + 1));
	}
	int time2 = clock();

	return time2 - time1;
}

int testHTInsertRandom(int number) {
	dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
	dummyItem->data = -1;
	dummyItem->key = -1;
	srand(time(0));

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		insert(i, rand() * rand() % (1000000 + 1));
	}
	int time2 = clock();

	for (size_t i = 0; i < number; i++)
	{
		delete(hashArray[i]);
	}


	return time2 - time1;
}

int testAVLInsertSameNumber(int number) {
	AVL* avlTree = NULL;

	int time1 = clock();
	for (size_t i = 0; i < 1000; i++)
	{
		avlTree = insertAVL(avlTree, number);
	}
	int time2 = clock();

	return time2 - time1;
}

int testRBInsertSameNumber(int number) {
	NILL = malloc(sizeof(struct list));
	NILL->color = BLACK;

	ROOT = NILL;

	int time1 = clock();
	for (size_t i = 0; i < 1000; i++)
	{
		red_black_insert(number);
	}
	int time2 = clock();

	return time2 - time1;
}

int testHTInsertSameNumber(int number) {
	dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
	dummyItem->data = -1;
	dummyItem->key = -1;

	int time1 = clock();
	for (size_t i = 0; i < 1000; i++)
	{
		insert(i, number);
	}
	int time2 = clock();

	for (size_t i = 0; i < 1000; i++)
	{
		delete(hashArray[i]);
	}

	return time2 - time1;
}

//Search

int testAVLSearchAscending(int number) {
	AVL* avlTree = NULL;
	AVL* find = NULL;

	for (size_t i = 0; i < number; i++)
	{
		avlTree = insertAVL(avlTree, i);
	}
	
	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		find = searchAVL(avlTree, i);
	}
	int time2 = clock();

	return time2 - time1;
}

int testRBSearchAscending(int number) {
	NILL = malloc(sizeof(struct list));
	NILL->color = BLACK;

	ROOT = NILL;
	
	for (size_t i = 0; i < number; i++)
	{
		red_black_insert(i);
	}

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		tree_search(i);
	}
	int time2 = clock();
	return time2 - time1;
}

int testHTSearchAscending(int number) {
	dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
	dummyItem->data = -1;
	dummyItem->key = -1;

	for (size_t i = 0; i < number; i++)
	{
		insert(i, i);
	}

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		search(i);
	}
	int time2 = clock();

	for (size_t i = 0; i < number; i++)
	{
		delete(hashArray[i]);
	}

	return time2 - time1;
}

int testAVLSearchDescending(int number) {
	AVL* avlTree = NULL;
	AVL* find = NULL;

	for (size_t i = number; i > 0; i--)
	{
		avlTree = insertAVL(avlTree, i);
	}

	int time1 = clock();
	for (size_t i = number; i > 0; i--)
	{
		find = searchAVL(avlTree, i);
	}
	int time2 = clock();

	return time2 - time1;
}

int testRBSearchDescending(int number) {
	NILL = malloc(sizeof(struct list));
	NILL->color = BLACK;

	ROOT = NILL;

	for (size_t i = number; i > 0; i--)
	{
		red_black_insert(i);
	}

	int time1 = clock();
	for (size_t i = number; i > 0; i--)
	{
		tree_search(i);
	}
	int time2 = clock();
	return time2 - time1;
}	

int testHTSearchDescending(int number) {
	dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
	dummyItem->data = -1;
	dummyItem->key = -1;

	for (size_t i = number; i > 0; i--)
	{
		insert(i, i);
	}

	int time1 = clock();
	for (size_t i = number; i > 0; i--)
	{
		search(i);
	}
	int time2 = clock();

	for (size_t i = 0; i < number; i++)
	{
		delete(hashArray[i]);
	}

	return time2 - time1;
}

int testAVLSearchRandom(int number) {
	AVL* avlTree = NULL;
	AVL* find = NULL;
	srand(time(0));
	int* array = (int*)malloc(number * sizeof(int));

	for (size_t i = 0; i < number; i++)
	{
		array[i] = rand() * rand() % (1000000 + 1);
		avlTree = insertAVL(avlTree, array[i]);
	}
	
	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		find = searchAVL(avlTree, array[i]);
	}
	int time2 = clock();

	return time2 - time1;
}

int testRBSearchRandom(int number) {
	NILL = malloc(sizeof(struct list));
	NILL->color = BLACK;
	srand(time(0));
	ROOT = NILL;
	int* array = (int*)malloc(number * sizeof(int));

	for (size_t i = 0; i < number; i++)
	{
		array[i] = rand() * rand() % (1000000 + 1);
		red_black_insert(array[i]);
	}

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		tree_search(array[i]);
	}
	int time2 = clock();
	return time2 - time1;
}

int testHTSearchRandom(int number) {
	dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
	dummyItem->data = -1;
	dummyItem->key = -1;
	srand(time(0));
	int* array = (int*)malloc(number * sizeof(int));

	for (size_t i = 0; i < number; i++)
	{
		array[i] = rand() * rand() % (1000000 + 1);
		insert(i, array[i]);
	}

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		search(i);
	}
	int time2 = clock();

	for (size_t i = 0; i < number; i++)
	{
		delete(hashArray[i]);
	}

	return time2 - time1;
}

int testAVLSearchSameNumber(int number) {
	AVL* avlTree = NULL;
	AVL* find = NULL;
	number %= 10000;

	for (size_t i = 0; i < 10000; i++)
	{
		avlTree = insertAVL(avlTree, i);
	}
	
	int time1 = clock();
	for (size_t i = 0; i < 10000; i++)
	{
		find = searchAVL(avlTree, number);
	}
	int time2 = clock();

	return time2 - time1;
}

int testRBSearchSameNumber(int number) {
	NILL = malloc(sizeof(struct list));
	NILL->color = BLACK;
	number %= 10000;
	ROOT = NILL;

	for (size_t i = 0; i < 10000; i++)
	{
		red_black_insert(i);
	}
	
	int time1 = clock();
	for (size_t i = 0; i < 10000; i++)
	{
		tree_search(number);
	}
	int time2 = clock();
	return time2 - time1;
}

int testHTSearchSameNumber(int number) {
	dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
	dummyItem->data = -1;
	dummyItem->key = -1;
	number %= 10000;
	int index;

	for (size_t i = 0; i < 10000; i++)
	{
		if (i == number) {
			index = i;
		}
		insert(i, i);
	}

	int time1 = clock();
	for (size_t i = 0; i < 10000; i++)
	{
		search(index);
	}
	int time2 = clock();

	for (size_t i = 0; i < 10000; i++)
	{
		delete(hashArray[i]);
	}

	return time2 - time1;
}

int testAVLSearchAfterInsert(int number) {
	AVL* avlTree = NULL;
	AVL* find = NULL;
	srand(time(0));
	int* array = (int*)malloc(number * sizeof(int));

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		array[i] = rand() * rand() % (1000000 + 1);
		avlTree = insertAVL(avlTree, array[i]);
		find = searchAVL(avlTree, array[i]);
	}
	int time2 = clock();

	return time2 - time1;
}

int testRBSearchAfterInsert(int number) {
	NILL = malloc(sizeof(struct list));
	NILL->color = BLACK;
	srand(time(0));
	ROOT = NILL;
	int* array = (int*)malloc(number * sizeof(int));

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		array[i] = rand() * rand() % (1000000 + 1);
		red_black_insert(array[i]);
		tree_search(array[i]);
	}
	int time2 = clock();

	return time2 - time1;
}

int testHTSearchAfterInsert(int number) {
	dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
	dummyItem->data = -1;
	dummyItem->key = -1;
	int* array = (int*)malloc(number * sizeof(int));
	srand(time(0));

	int time1 = clock();
	for (size_t i = 0; i < number; i++)
	{
		array[i] = rand() * rand() % (1000000 + 1);
		insert(i, array[i]);
		search(i);
	}
	int time2 = clock();

	for (size_t i = 0; i < number; i++)
	{
		delete(hashArray[i]);
	}

	return time2 - time1;
}

int main() {

	printf("<INSERT>\n\n");
	
	printf("Insert 1000 vzostupne do AVL trval: %d ms\n", testAVLInsertAscending(1000));
	printf("Insert 1000 vzostupne do RB trval: %d ms\n", testRBInsertAscending(1000));
	printf("Insert 1000 vzostupne do hashovacej tabulky trval: %d ms\n\n", testHTInsertAscending(1000));
	printf("Insert 10000 vzostupne do AVL trval: %d ms\n", testAVLInsertAscending(10000));
	printf("Insert 10000 vzostupne do RB trval: %d ms\n", testRBInsertAscending(10000));
	printf("Insert 10000 vzostupne do hashovacej tabulky trval: %d ms\n\n", testHTInsertAscending(10000));
	printf("Insert 100000 vzostupne do AVL trval: %d ms\n", testAVLInsertAscending(100000));
	printf("Insert 100000 vzostupne do RB trval: %d ms\n", testRBInsertAscending(100000));
	printf("Insert 100000 vzostupne do hashovacej tabulky trval: %d ms\n\n", testHTInsertAscending(100000));
	printf("Insert 1000000 vzostupne do AVL trval: %d ms\n", testAVLInsertAscending(1000000));
	printf("Insert 1000000 vzostupne do RB trval: %d ms\n", testRBInsertAscending(1000000));
	printf("Insert 1000000 vzostupne do hashovacej tabulky trval: %d ms\n\n", testHTInsertAscending(1000000));

	printf("------------------------------------------------------------------------------------\n\n");

	printf("Insert 1000 zovstupne do AVL trval: %d ms\n", testAVLInsertDescending(1000));
	printf("Insert 1000 zostupne do RB trval: %d ms\n", testRBInsertDescending(1000));
	printf("Insert 1000 zostupne do hashovacej tabulky trval: %d ms\n\n", testHTInsertDescending(1000));
	printf("Insert 10000 zostupne do AVL trval: %d ms\n", testAVLInsertDescending(10000));
	printf("Insert 10000 zostupne do RB trval: %d ms\n", testRBInsertDescending(10000));
	printf("Insert 10000 zostupne do hashovacej tabulky trval: %d ms\n\n", testHTInsertDescending(10000));
	printf("Insert 100000 zostupne do AVL trval: %d ms\n", testAVLInsertDescending(100000));
	printf("Insert 100000 zostupne do RB trval: %d ms\n", testRBInsertDescending(100000));
	printf("Insert 100000 zostupne do hashovacej tabulky trval: %d ms\n\n", testHTInsertDescending(100000));
	printf("Insert 1000000 zostupne do AVL trval: %d ms\n", testAVLInsertDescending(1000000));
	printf("Insert 1000000 zostupne do RB trval: %d ms\n", testRBInsertDescending(1000000));
	//printf("Insert 1000000 zostupne do hashovacej tabulky trval: %d ms\n\n", testHTInsertDescending(1000000));
	
	printf("------------------------------------------------------------------------------------\n\n");

	printf("Insert 1000 nahodne do AVL trval: %d ms\n", testAVLInsertRandom(1000));
	printf("Insert 1000 nahodne do RB trval: %d ms\n", testRBInsertRandom(1000));
	printf("Insert 1000 nahodne do hashovacej tabulky trval: %d ms\n\n", testHTInsertRandom(1000));
	printf("Insert 10000 nahodne do AVL trval: %d ms\n", testAVLInsertRandom(10000));
	printf("Insert 10000 nahodne do RB trval: %d ms\n", testRBInsertRandom(10000));
	printf("Insert 10000 nahodne do hashovacej tabulky trval: %d ms\n\n", testHTInsertRandom(10000));
	printf("Insert 100000 nahodne do AVL trval: %d ms\n", testAVLInsertRandom(100000));
	printf("Insert 100000 nahodne do RB trval: %d ms\n", testRBInsertRandom(100000));
	printf("Insert 100000 nahodne do hashovacej tabulky trval: %d ms\n\n", testHTInsertRandom(100000));
	printf("Insert 1000000 nahodne do AVL trval: %d ms\n", testAVLInsertRandom(1000000));
	printf("Insert 1000000 nahodne do RB trval: %d ms\n", testRBInsertRandom(1000000));
	//printf("Insert 1000000 nahodne do hashovacej tabulky trval: %d ms\n\n", testHTInsertRandom(1000000));

	printf("------------------------------------------------------------------------------------\n\n");

	printf("Insert rovnakeho cisla do AVL trval: %d ms\n", testAVLInsertSameNumber(10));
	printf("Insert rovnakeho cisla do RB trval: %d ms\n", testRBInsertSameNumber(10));
	printf("Insert rovnakeho cisla do hashovacej tabulky trval: %d ms\n\n", testHTInsertSameNumber(10));

	printf("</INSERT>\n\n");
	printf("<SEARCH>\n\n");

	printf("Search 1000 vzostupnych cisel v AVL trval: %d ms\n", testAVLSearchAscending(1000));
	printf("Search 1000 vzostupnych cisel v RB trval: %d ms\n", testRBSearchAscending(1000));
	printf("Search 1000 vzostupnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchAscending(1000));
	printf("Search 10000 vzostupnych cisel v AVL trval: %d ms\n", testAVLSearchAscending(10000));
	printf("Search 10000 vzostupnych cisel v RB trval: %d ms\n", testRBSearchAscending(10000));
	printf("Search 10000 vzostupnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchAscending(10000));
	printf("Search 100000 vzostupnych cisel v AVL trval: %d ms\n", testAVLSearchAscending(100000));
	printf("Search 100000 vzostupnych cisel v RB trval: %d ms\n", testRBSearchAscending(100000));
	printf("Search 100000 vzostupnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchAscending(100000));
	printf("Search 1000000 vzostupnych cisel v AVL trval: %d ms\n", testAVLSearchAscending(1000000));
	printf("Search 1000000 vzostupnych cisel v RB trval: %d ms\n", testRBSearchAscending(1000000));
	//printf("Search 1000000 vzostupnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchAscending(1000000));

	printf("------------------------------------------------------------------------------------\n\n");

	printf("Search 1000 zostupnych cisel v AVL trval: %d ms\n", testAVLSearchDescending(1000));
	printf("Search 1000 zostupnych cisel v RB trval: %d ms\n", testRBSearchDescending(1000));
	printf("Search 1000 zostupnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchDescending(1000));
	printf("Search 10000 zostupnych cisel v AVL trval: %d ms\n", testAVLSearchDescending(10000));
	printf("Search 10000 zostupnych cisel v RB trval: %d ms\n", testRBSearchDescending(10000));
	printf("Search 10000 zostupnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchDescending(10000));
	printf("Search 100000 zostupnych cisel v AVL trval: %d ms\n", testAVLSearchDescending(100000));
	printf("Search 100000 zostupnych cisel v RB trval: %d ms\n", testRBSearchDescending(100000));
	printf("Search 100000 zostupnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchDescending(100000));
	printf("Search 1000000 zostupnych cisel v AVL trval: %d ms\n", testAVLSearchDescending(1000000));
	printf("Search 1000000 zostupnych cisel v RB trval: %d ms\n", testRBSearchDescending(1000000));
	//printf("Search 1000000 zostupnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchDescending(1000000));

	printf("------------------------------------------------------------------------------------\n\n");

	printf("Search 1000 nahodnych cisel v AVL trval: %d ms\n", testAVLSearchRandom(1000));
	printf("Search 1000 nahodnych cisel v RB trval: %d ms\n", testRBSearchRandom(1000));
	printf("Search 1000 nahodnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchRandom(1000));
	printf("Search 10000 nahodnych cisel v AVL trval: %d ms\n", testAVLSearchRandom(10000));
	printf("Search 10000 nahodnych cisel v RB trval: %d ms\n", testRBSearchRandom(10000));
	printf("Search 10000 nahodnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchRandom(10000));
	printf("Search 100000 nahodnych cisel v AVL trval: %d ms\n", testAVLSearchRandom(100000));
	printf("Search 100000 nahodnych cisel v RB trval: %d ms\n", testRBSearchRandom(100000));
	printf("Search 100000 nahodnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchRandom(100000));
	printf("Search 1000000 nahodnych cisel v AVL trval: %d ms\n", testAVLSearchRandom(1000000));
	printf("Search 1000000 nahodnych cisel v RB trval: %d ms\n", testRBSearchRandom(1000000));
	//printf("Search 1000000 nahodnych cisel v hashovacej tabulke trval: %d ms\n\n", testHTSearchRandom(1000000));

	printf("------------------------------------------------------------------------------------\n\n");

	printf("Search rovnakeho cisla v AVL trval: %d ms\n", testAVLSearchSameNumber(4000));
	printf("Search rovnakeho cisla v RB trval: %d ms\n", testRBSearchSameNumber(4000));
	printf("Search rovnakeho cisla v hashovacej tabulke trval: %d ms\n\n", testHTSearchSameNumber(4000));

	printf("------------------------------------------------------------------------------------\n\n");

	printf("Search cisla hned po inserte v AVL trval: %d ms\n", testAVLSearchAfterInsert(10000));
	printf("Search cisla hned po inserte v RB trval: %d ms\n", testRBSearchAfterInsert(10000));
	printf("Search cisla hned po inserte v hashovacej tabulke trval: %d ms\n\n", testHTSearchAfterInsert(10000));

	printf("</SEARCH>\n\n");
	return 0;
}		  

/*
int main() {
	dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
	dummyItem->data = -1;
	dummyItem->key = -1;

	insert(1, 20);
	insert(2, 70);
	insert(42, 80);
	insert(4, 25);
	insert(12, 44);
	insert(14, 32);
	insert(17, 11);
	insert(13, 78);
	insert(37, 97);

	display();
	item = search(37);

	if (item != NULL) {
		printf("Element found: %d\n", item->data);
	}
	else {
		printf("Element not found\n");
	}

	delete(item);
	item = search(37);

	if (item != NULL) {
		printf("Element found: %d\n", item->data);
	}
	else {
		printf("Element not found\n");
	}
}
*/