// forwardList.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <forward_list>

int main(){
	
	std::forward_list<int> myForList;

	std::cout << "myForList.empty(): " << myForList.empty() << std::endl;
	myForList.push_front(7);
	myForList.push_front(6);
	myForList.push_front(5);
	myForList.push_front(4);
	myForList.push_front(3);
	myForList.push_front(2);
	myForList.push_front(1);

	std::cout << "myForList.empty(): " << std::endl;
	for (auto It = myForList.cbegin();It != myForList.cend();++It) std::cout << *It << " ";

	std::cout << "myForList.erase_after(myForList.before_begin()):" << std::endl;

	myForList.erase_after(myForList.before_begin());
	std::cout << "myForList.front():" << myForList.front() << "\n\n";

	std::forward_list<int>myForList2;
	myForList2.insert_after(myForList2.before_begin(), 1);
	myForList2.insert_after(myForList2.before_begin()++, 2);
	myForList2.insert_after((myForList2.before_begin()++)++, 3);

	myForList2.push_front(1000);

	std::cout << "myForList2:" << std::endl;
	for(auto It = myForList2.cbegin();It != myForList2.cend();++It) std::cout << *It << " ";
	std::cout << "\n\n";
	auto IteratorTo5 = std::find(myForList.begin(), myForList.end(), 5);
	myForList.splice_after(IteratorTo5, std::move(myForList2));

	std::cout << "myForList.splice_after(IteractorTo5,std::move(myForList2)):" << std::endl;
	for (auto It = myForList.cbegin();It != myForList.cend();++It) std::cout << *It << " ";

	myForList.sort();

	std::cout << "myForList.sort():" << std::endl;
	for (auto It = myForList.cbegin();It != myForList.cend();++It) std::cout << *It << " ";

	myForList.reverse();

	std::cout << "myForList.reverse(): " << std::endl;
	for (auto It = myForList.cbegin();It != myForList.cend();++It) std::cout << *It << " ";

	myForList.unique();

	std::cout << "myForList.unique(): " << std::endl;
	for (auto It = myForList.cbegin();It != myForList.cend();++It) std::cout << *It << " ";

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
