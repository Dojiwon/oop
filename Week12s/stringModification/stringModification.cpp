// stringModification.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
#include <string>

int main() {
	std::cout << "ASSIGN: " << std::endl;

	std::string str{ "New String" };
	std::string str2{ "Other String" };
	std::cout << "str: " << str << std::endl;

	str.assign(str2, 4, std::string::npos);
	std::cout << str << std::endl;

	str.assign(5, '-');
	std::cout << str << std::endl;

	std::cout << "DELETE" << std::endl;

	str = { "0123456789" };
	std::cout << "str: " << str << std::endl;
	str.erase(7, 2);
	std::cout << str << std::endl;

	str.erase(str.begin() + 2, str.end() - 2);
	std::cout << str << std::endl;

	str.erase(str.begin() + 2, str.end());
	std::cout << str << std::endl;

	str.pop_back();
	std::cout << str << std::endl;

	str.erase();
	std::cout << str << std::endl;

	std::cout << "APPEND" << std::endl;

	str = "01234";
	std::cout << "str: " << str << std::endl;

	str += "56";
	std::cout << str << std::endl;

	str += '7';
	std::cout << str << std::endl;

	str += {'8', '9'};
	std::cout << str << std::endl;

	str.append(str);
	std::cout << str << std::endl;

	str.append(str, 2, 4);
	std::cout << str << std::endl;

	str.append(10, '0');
	std::cout << str << std::endl;

	str.append(str, 10, 10);
	std::cout << str << std::endl;

	str.push_back('9');
	std::cout << str << std::endl;

	std::cout << std::endl;

	std::cout << "INSERT" << std::endl;
	str = { "345" };
	std::cout << "str: " << str << std::endl;

	str.insert(3, "6789");
	std::cout << str << std::endl;

	str.insert(0, "012");
	std::cout << str << std::endl;

	std::cout << std::endl;

	std::cout << "REPLACE" << std::endl;
	str = { "only for testing purpose." };
	std::cout << "str: " << str << std::endl;

	str.replace(0, 0, "O");
	std::cout << str << std::endl;

	str.replace(0, 5, "Only", 0, 4);
	std::cout << str << std::endl;

	str.replace(16, 8, "");
	std::cout << str << std::endl;

	str.replace(4, 0, 5, 'y');
	std::cout << str << std::endl;

	str.replace(str.begin(), str.end(), "Only for testing purpose.");
	std::cout << str << std::endl;

	str.replace(str.begin() + 4, str.end() - 8, 10, '#');
	std::cout << str << std::endl;

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
