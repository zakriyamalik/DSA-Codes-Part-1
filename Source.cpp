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
//void swap(int& x, int& y) {
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
//class heap {
//public:
//	void heapify_down(int arr[],int i,int buttom)
//	{
//		int l = 2*i+1;
//		int r = 2*i+2;
//		int smallest = i;
//		if (l < buttom && arr[l] > arr[i])
//			smallest = l;
//		if (r < buttom && arr[r] > arr[smallest])
//			smallest = r;
//		if (smallest != i) {
//			swap(arr[i], arr[smallest]);
//			heapify_down(arr,smallest,buttom);
//		}
//	}
//	void heapify_up(int root,int arr[], int buttom)
//	{
//		int parent=0;
//		parent = buttom / 2 - 1;
//
//		if (parent > root)
//		{
//			if (arr[parent] < arr[buttom])
//			{
//				swap(arr[parent], arr[buttom]);
//				heapify_up(root, arr, parent);
//			}
//		}
//	}
//};
//
//int main() {
//	int arr[] = { 1, 2, 3, 4 };
//	int counter = sizeof(arr) / sizeof(arr[0]);
//	heap obj;
//	obj.heapify_down(arr, 0, counter - 1);
//	cout << "Array is \n";
//	for (int i = 0; i < counter; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
