////#include<iostream>
////#include<algorithm>
////using namespace std;
////class node
////{
////	int data;
////	node* left;
////	node* right;
////public:
////	node()
////	{
////		data = 0;
////		left = nullptr;
////		right = nullptr;
////	}
////};
////int swap(int arr[], int first, int second)
////{
////	int temp = 0;
////	temp = arr[first];
////	arr[first] = arr[second];
////	arr[second] = temp;
////	return 0;
////}
////class heap
////{
////public:
////	int* heapify_down(int arr[], int root, int buttom)
////	{
////
////		int maxchild = 0, rigthchild = 0, leftchild;
////		leftchild = 2 * root + 1;
////		rigthchild = 2 * root + 2;
////		if (leftchild <= buttom)
////		{
////			if (leftchild == buttom)
////			{
////				maxchild = leftchild;
////			}
////			else
////			{
////				if (arr[leftchild] < arr[rigthchild])
////				{
////					maxchild = rigthchild;
////				}
////				else
////				{
////					maxchild = leftchild;
////				}
////			}
////		}
////		if (arr[root] < arr[maxchild])
////		{
////
////			swap(arr, maxchild, root);
////			int a = maxchild;
////			int b = root;
////
////			heapify_down(arr, maxchild, buttom);
////
////		}
////		return arr;
////	}
////
////};
//////void heap::heapify_down(int arr[], node* root,int counter)
//////{
//////	
//////}
////int main()
////{
////
////	int arr[] = { 1,2,3,4 };
////	int counter = size(arr);
////	heap obj;  
////	obj.heapify_down(arr, 0, counter - 1);
////	cout << "Array is \n";
////	for (int i = 0; i < counter; i++)
////	{
////		cout << arr[i] << " ";
////	}
////	cout << endl;
////
////}
//
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//class node {
//	int data;
//	node* left;
//	node* right;
//public:
//	node() {
//		data = 0;
//		left = nullptr;
//		right = nullptr;
//	}
//};
//
//void swap(int arr[], int& first, int& second) {
//	int temp = first;
//	first = second;
//	second = temp;
//}
//
//class heap {
//public:
//	int* heapify_down(int arr[], int root, int bottom)
//	{
//		int max_child = 0, left_child = 0, right_child = 0;
//		left_child = 2 * root + 1;
//		right_child = 2 * root + 2;
//		max_child = root;
//		if (left_child<bottom && arr[left_child]>arr[max_child])
//		{
//			max_child = left_child;
//		}
//		else if (right_child<bottom && arr[right_child]>arr[max_child])
//		{
//			max_child = right_child;
//		}
//		if (max_child != root)
//		{
//			swap(arr[root], arr[max_child]);
//			heapify_down(arr,max_child,bottom);
//		}
//		return 0;
//	}
//	void build_heap(int arr[], int buttom)
//	{
//		int st_point = buttom / 2 - 1; int counter1 = 0;
//		for (int i = st_point; i>=0; i--)
//		{
//			cout << "Array is \tno "<<i<<" \n";
//			for (int i = 0; i < 4; i++) {
//				cout << arr[i] << " ";
//			}
//			cout << endl;
//			counter1 = arr[i];
//			heapify_down(arr, i, buttom);
//		}
//	}
//};
//
//int main() {
//
//	int arr[] = { 1, 2, 4, 3 };
//	int counter = sizeof(arr) / sizeof(arr[0]);
//	heap obj;
//	obj.build_heap(arr, counter);
//	cout << "Array is \n";
//	for (int i = 0; i < counter; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
