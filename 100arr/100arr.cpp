#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <typename T> void showarr(T arr[], int length) {
	cout << "������: \n[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
int searchindex(int arr[], int length, int n, int begin = 0) {
	for (int i = begin; i < length; i++) 
		if (arr[i] == n) {
			cout << "������ ��������� �������� \"" << n << "\" ��� �������� -> ";
			return i;
		}
	return -1;
}
int searchlastindex(int arr[], int length, int n, int begin = 0) {
	for (int i = length - 1; i > 0; i--)
		if (arr[i] == n) {
			cout << "��������� ��������� �������� \"" << n << "\" ��� �������� -> ";
			return i;
		}
	return -1;
}
int maxel(int arr[], int length) {
	cout << "������������ ����� ������� = ";
	int max = arr[0];
	for (int i = 0; i < length; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
int minel(int arr[], int length) {
	cout << "����������� ����� ������� = ";
	int min = arr[0];
	for (int i = 0; i < length; i++) {
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
int meanvalue(int arr[], int length) {
	int mean = 0;
	for (int i = 0; i < length; i++) 
		mean += arr[i];
	cout << "������� �������������� ������� = ";
	return mean / length;

		

}
void range(int arr[], int length, int begin, int end) {
	cout << "�������� � ��������� �� " << begin << " �� " << end << ": ";
	for (int i = 0; i < length; i++)
		if (arr[i] >= begin && arr[i] <= end)
			cout << arr[i] << ", ";
	cout << "\b\b.";
}
int counter(int arr[], int length, int n) {
	int count = 0;
	cout << "���������� ��������� �������� " << n << " � ������ = ";
	for (int i = 0; i < length; i++)
		if (arr[i] == n)
			count++;
	return count;
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n, beg,end; 
	const int length = 100;
	int arr[length];
	for (int i = 0; i < length; i++) 
		arr[i] = rand() % 200 - 100 + 1;
		showarr(arr, length);
		cout << endl;
		cout << "������� ������� �������: ";
		cin >> n;
		cout << searchindex(arr, length, n);
		cout << "\n";
		cout << searchlastindex(arr, length, n);
		cout << endl;
		cout << maxel(arr, length);
		cout << endl;
		cout << minel(arr, length);
		cout << endl;
		cout << meanvalue(arr, length);
		cout << endl;
		cout << "������� ������ ���������: ";
		cin >> beg;
		cout << "������� ����� ���������: ";
		cin >> end;
		range(arr, length, beg, end);
		cout << endl;
		cout << counter(arr, length, n);
		cout << "\n\n";
	

	return 0;
}