/*
 * Main.cpp
 *
 *  Created on: Apr 17, 2015
 *      Author: Christina
 */

#include "BH.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "NodeHeap.hpp"

//void readandwritefile(string oldfile, string newfile);

using namespace std;
void readHeapNumsFromFile (string heapfile, BH *heap);

int main() {
	BH *heap = new BH();
	readHeapNumsFromFile("heapnums2.txt",heap);
/*	heap->printTree();
	heap->remove();
	heap->printTree();
	heap->remove();
	heap->printTree();
	heap->remove();
	heap->printTree();
	*/return 0;
} //main

void readHeapNumsFromFile (string heapfile, BH *heap) {
	ifstream file(heapfile.c_str());
	int x;
	while (!file.eof()) {
		file >> x;
		if (!file.eof()) {
			heap->insert(x);
		} //if
	} //while
	return;
} //readHeapNumsFromFile
