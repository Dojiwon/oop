// removeDuplicates.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
	std::vector<int> myVec{ 0, 0, 1, 1, 2, 2, 3, 4, 4, 5, 3, 6, 7, 8, 1, 3, 3, 8, 8, 9 };
	for (auto v : myVec) std::cout << v << " ";
	
	myVec.erase(std::unique(myVec.begin(), myVec.end()), myVec.end());
	for (auto v : myVec) std::cout << v << " ";

	std::vector<int> myVec2{ 1, 4, 3, 3, 3, 5, 7, 9, 2, 4, 1, 6, 8, 0, 3, 5, 7, 8, 7, 3, 9, 2, 4, 2, 5, 7, 3 };
	std::vector<int> resVec;
	resVec.reserve(myVec2.size());
	std::unique_copy(myVec2.begin(), myVec2.end(), std::back_inserter(resVec),
		[](int a, int b) {return (a % 2) == (b % 2); });

	for (auto v : myVec2) std::cout << v << " ";
	for (auto v : resVec) std::cout << v << " ";

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
