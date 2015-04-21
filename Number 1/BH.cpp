/*
 * BH.cpp
 *
 *  Created on: Apr 17, 2015
 *      Author: Christina
 */
#include<math.h>
#include"BH.hpp"
#include"NodeHeap.hpp"
#include<iostream>
using namespace std;

BH::BH(){

}//BH()

BH::~BH(){

}//~BH()

int getLeftChild(int nodeIndex) {
	return 2 * nodeIndex + 1;
} //getLeftChild

int getRightChild(int nodeIndex){
	return 2 * nodeIndex + 2;
} //getRightChild

int getParent(int nodeIndex){
	return floor((nodeIndex - 1) / 2);
} //getParent

void BH::insert(int x){ //is this a heap or array
	int fileArray[13];
	for(int i = 0; i < 13; i++){
		fileArray[i] = x;
	} //for
	cout << fileArray[13] << endl;

}//insert(int x)

int BH::maxChild(){
/*	if(lChild > rChild){
		mChild = lChild;
		return mChild;
	} //if

	else{
		mChild = rChild;
		return mChild;
	} //else
} //maxChild

void BH::remove(){
	parent = 0;
	bool flag = true;
	while(flag){
		lChild = 2 * parent + 1;
		rChild = lChild + 1;
		if(lChild >= currsize){
			flag = false;
		}//if

	else{
		mChild = lChild; //mChild = max Child!
		if(rChild < currsize && arr[rChild] > arr[lChild]){
			mChild = rChild;
		} //if

		if(arr[parent] >= arr[mChild]){
			flag = false;
		}//if

		else{
			arr[parent] = arr[mChild];
			arr[mChild] = arr[parent];
			parent = mChild;
		}//else
	}//else
	} //while
}//remove

void BH::printTree(){
*/
}//printTree
