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
	cout << "Елементи стеку ";
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
	
	cout << "Розмір стеку " << size(s) << endl;
	cout << "Верхній елемент " << top(s) << endl;
	
	pop(s);
	cout << "Розмір стеку після видалення " << size(s) << endl;
	cout << "Новий верхній елемент " << top(s) << endl;
	cout << " " << endl;
	sdt: cout << "Створити стек цілих чисел. Ввести 6 елементів." << "\n" << "Видалити 2 елемента зі стеку. Перевірити розмір стеку." << endl;
	for (int i = 1; i <= n; i++) {
		pop(s);

	}
	printStack(s);
	cout << "Бачимо порожный стек, додаємо елементи " <<endl;
	int k = 5;
	for (int i = 0; i <= k; i++) {
		push(s, i);
	}
	cout << "Новий стек "  << endl;
	printStack(s);

	pop(s);
	pop(s);

	cout << "Cтек після видалення двох елементів " << endl;
	printStack(s);
	cout << "Розмір стеку після видалення " << size(s) << endl;

	return 0;
}
