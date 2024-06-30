#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0); // 입출력 속도 향상
	

	/* lower_bound(ForwardIt first, ForwardIt last, const T & value);
	<algorithm>
	- 이분 탐색을 통해 정렬된 범위에서 특정 값 이상의 첫 번째 위치를 찾는 데 사용
	- lower_bound는 first부터 last까지의 범위에서 value 이상인 첫 번째 위치를 
	가리키는 반복자를 반환
	- 만약 그런 값이 없다면, last를 반환
	- 시간 복잡도 : O(logN)
	*/ 
	priority_queue<int> pq; // push하면 내림차순으로 자동 정렬
}