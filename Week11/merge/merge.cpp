// merge.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <iterator>

int main() {
	std::vector<int> vec1{ 1, 1, 4, 3, 5, 8, 6, 7, 9, 2 };
	std::vector<int> vec2{ 1, 2, 3 };

	std::sort(vec1.begin(), vec1.end());
	std::vector<int> vec(vec1);

	std::cout << "std::includes(vec1.begin(), vec1.end(), vec2.begin(), vec2.end()): " << std::includes(vec1.begin(), vec1.end(), vec2.begin(), vec2.end()) << std::endl;

	std::cout << std::endl;

	vec1.reserve(vec1.size() + vec2.size());
	vec1.insert(vec1.end(), vec2.begin(), vec2.end());
	for (auto v : vec1) std::cout << v << " ";

	std::cout << std::endl;

	std::inplace_merge(vec1.begin(), vec1.end() - vec2.size(), vec1.end());
	for (auto v : vec1) std::cout << v << " ";

	std::cout << "\n\n";

	vec2.push_back(10);

	std::cout << "vec:                      ";
	for (auto v : vec) std::cout << v << " ";
	std::cout << std::endl;
	std::cout << "vec2:                     ";
	for (auto v : vec2) std::cout << v << " ";

	std::vector<int> res;
	std::set_union(vec.begin(), vec.end(), vec2.begin(), vec2.end(),
		std::back_inserter(res));
	std::cout << "\n" << "set_union:                ";
	for (auto v : res) std::cout << v << " ";

	res = {};
	std::set_intersection(vec.begin(), vec.end(), vec2.begin(), vec2.end(),
		std::back_inserter(res));
	std::cout << "\n" << "set_intersection:         ";
	for (auto v : res) std::cout << v << " ";


	res = {};
	std::set_difference(vec.begin(), vec.end(), vec2.begin(), vec2.end(),
		std::back_inserter(res));
	std::cout << "\n" << "set_difference:           ";
	for (auto v : res) std::cout << v << " ";

	res = {};
	std::set_symmetric_difference(vec.begin(), vec.end(), vec2.begin(), vec2.end(),
		std::back_inserter(res));
	std::cout << "\n" << "set_symmetric_difference: ";
	for (auto v : res) std::cout << v << " ";

	return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
