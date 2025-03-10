#include <iostream>
#define SIZE 9

using namespace std;

int arrays[10] = {};
int top = 0;

bool full_Check() {
	if (top >= SIZE) {
		cout << "Stack is Full!" << endl;
		return true;
	}
	else return false;
}

bool empty_Check() {

	if (top <= 0) {
		cout << "Stack is Empty!" << endl;
		return true;
	}
	else return false;
}

void push(int num) {

	if (full_Check()) return;
	arrays[top] = num;
	cout << num << " pushed";
	top++;

}

int pop() {


	if (empty_Check()) return arrays[top];
	top--;
	return arrays[top];

}

void print_array() {
	for (int i = 0; i < top; i++) cout << i+1 << ": " << arrays[i] << endl;
	return;
}

int main() {
	int choice = 0;
	int numToPush;
	while (choice != 4) {
		cout << "\n1 push | 2 pop | 3 print | 4 quit\n" << endl;
		cin >> choice;
		if (choice == 1) {
			cin >> numToPush;
			push(numToPush);
		}

		else if (choice == 2) {
			pop();
		}
		else if (choice == 3) print_array();
	}

}

