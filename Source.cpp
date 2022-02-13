#include <iostream>
#include <vector>

using namespace std;

 int createmas(int n) {	
	int *arr= new int[n];
	vector <int> v1;
	srand(time(NULL));
	for (int i=0; i < n; i++) {
		arr[i] = rand() % 500;
		
	}
	for (auto i = 0; i < n; i++) {
		if (arr[i] >= 100) {
			v1.push_back(arr[i]);
		}
	}
	int summarize = 0;
	for (auto i = 0; i < v1.size(); i++) {
		summarize += v1[i];
		//cout<< v1[i]<<" ";
		
	}
	cout << endl << summarize / v1.size();
	return 0;
}
 

int main() {
	int n;
	cin >> n;
	createmas(n);

}
/*примерное количество сравнений которые будут выполнены(то есть мы получим числа больше 100) вычисляется по формуле 
(1-100:диапазон rand)*размер массива n.
Наилучшего и наихудшего случая в общем нет(т.к алгоритм в общем случае линеен), но если считать наилучшим случаем минимальное количество выведенных цифр,
то диапазон rand должен быть меньше или равно 101,а при худшем случае диапазон должен быть гораздо больше 101 */