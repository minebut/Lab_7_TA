#include <iostream>
#include <Windows.h>

using namespace std;


const int n = 15;
struct Stack
{
	int a[n];
	int last;
	Stack() { last = 0; }
};

bool empty(Stack& s)
{
	return (s.last == 0);
}

void push(Stack& s, int x)
{
	if (s.last == n)
	{

		return;
	}
	s.a[s.last++] = x;
}

void printStack(Stack& s)
{
	if (empty(s))
	{
		return;
	}
	cout << "�������� ����� ";
	for (int i = 0; i < s.last; ++i)
	{
		cout << s.a[i] << " ";
	}
	cout << endl;
}

int pop(Stack& s)
{
	if (empty(s))
	{
		cout << "Stack Underflow" << endl;
		return -1;
	}
	return s.a[--s.last];
}

int top(Stack& s)
{
	if (empty(s))
	{
		cout << "Stack is empty" << endl;
		return -1;
	}
	return s.a[s.last - 1];
}

int size(Stack& s)
{
	return s.last;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Stack s;
	for (int i = 1; i <= n; i++) {
		push(s, i);
	}
	printStack(s);
	
	cout << "����� ����� " << size(s) << endl;
	cout << "������ ������� " << top(s) << endl;
	
	pop(s);
	cout << "����� ����� ���� ��������� " << size(s) << endl;
	cout << "����� ������ ������� " << top(s) << endl;
	cout << " " << endl;
	sdt: cout << "�������� ���� ����� �����. ������ 6 ��������." << "\n" << "�������� 2 �������� � �����. ��������� ����� �����." << endl;
	for (int i = 1; i <= n; i++) {
		pop(s);

	}
	printStack(s);
	cout << "������ �������� ����, ������ �������� " <<endl;
	int k = 5;
	for (int i = 0; i <= k; i++) {
		push(s, i);
	}
	cout << "����� ���� "  << endl;
	printStack(s);

	pop(s);
	pop(s);

	cout << "C��� ���� ��������� ���� �������� " << endl;
	printStack(s);
	cout << "����� ����� ���� ��������� " << size(s) << endl;

	return 0;
}
