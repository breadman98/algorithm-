### 사용법
```c
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[n] = { 5,3,2,...8,9 };
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		cout << a[i] <<' ';	
	}
}
```

### 정렬할 기준을 직접 만들어주기
```c
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a,int b)
{
	return a < b; // 오름차순 정렬을 의미한다. (오른쪽이 왼쪽보다 클 때 true를 반환하므로)
	// return a>b; // 이러면 내림차순
}


int main()
{
	int arr[n] = { 5,3,2,...8,9 };
	sort(arr,arr+n,compare);
	for(int i=0;i<n;i++){
		cout << a[i] <<' ';	
	}
}



```
