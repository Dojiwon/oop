// mathFunctions.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <ctime>

int main() {
	std::cout << "cmath" << std::endl;
	std::cout << "std::pow(2,10): " << std::pow(2, 10) << std::endl;
	std::cout << "std::pow(2,0.5):" << std::pow(2, 0.5) << std::endl;
	std::cout << "std::exp(1): " << std::exp(1) << std::endl;
	std::cout << "std::ceil(5.5):" << std::ceil(5.5) << std::endl;
	std::cout << "std::floor(5.5):" << std::floor(5.5) << std::endl;
	std::cout << "std::fmod(5.5,2):" << std::fmod(5.5, 2) << std::endl;
	double intPart;
	auto fracPart = std::modf(5.7, &intPart);
	std::cout << "fmod(5.7,&intPart):" << intPart << " + " << fracPart << std::endl;

	std::cout << "\ncstdlib:" << "\n\n";
	std::div_t divresult = std::div(14, 5);
	std::cout << "std::div(14,5):" << divresult.quot << "reminder:" << divresult.rem << std::endl;

	std::srand(time(nullptr));
	for (int i = 0; i <= 10; ++i) {
		std::cout << "Dice: " << (rand() % 6 + 1) << std::endl;
	}
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
