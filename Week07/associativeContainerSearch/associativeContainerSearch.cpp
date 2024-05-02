// associativeContainerSearch.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>
#include <set>

int main() {
	std::multiset<int> mySet{ 3,1,5,3,4,5,1,4,4,3,2,2,7,6,4,3,6 };
	for (auto s : mySet) std::cout << s << " ";

	mySet.erase(mySet.lower_bound(4), mySet.upper_bound(4));
	for (auto s : mySet)std::cout << s << " ";

	std::cout << "mySet.count(3): " << mySet.count(3) << std::endl;
	std::cout << "*mySet.find(3): " << *mySet.find(3) << std::endl;
	std::cout << "*mySet.lower_bound(3):" << *mySet.lower_bound(3) << std::endl;
	std::cout << "*mySet.upper_bound(3):" << *mySet.upper_bound(3) << std::endl;
	auto pair = mySet.equal_range(3);
	std::cout << "mySet.equal_range(3): (" << *pair.first << ", " << *pair.second << ")"
		<< std::endl;

	std::map<int, std::string> int2Str{
		{5, "five"},{1,"one"},{4,"four"},{2,"two"},{7,"seven"} };
	for (auto p : int2Str)std::cout << p.first << ", " << p.second << std::endl;

	std::cout << "int2Str.count(3):" << int2Str.count(3) << std::endl;
	std::map<int, std::string>::iterator myInt2StrIt = int2Str.find(3);
	std::cout << "int2Str.find(3):" << int2Str.find(3)->first << std::endl;
	std::cout << "int2Str.lower_bound(3):" << int2Str.lower_bound(3)->first << std::endl;
	std::cout << "int2Str.upper_bound(3):" << int2Str.upper_bound(3)->first << std::endl;
	std::pair < std::map<int, std::string>::iterator, std::map<int, std::string>::iterator>
		myRangePair = int2Str.equal_range(3);
	auto pair2 = int2Str.equal_range(3);
	std::cout << "int2Str.equal_range(3): (" << pair2.first->first << ", "
		<< pair2.second->first << ")" << std::endl;
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
