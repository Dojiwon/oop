﻿// find.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cctype>
#include <deque>
#include <list>
#include <algorithm>
#include <set>

bool isVowel(char c) {
    std::string myVowels{ "aeiouäÖü" };
    std::set<char> vowels(myVowels.begin(), myVowels.end());
    auto it = vowels.find(c);
    if (it != vowels.end())return true;
    return false;
}
int main(){
    std::list<char> myChars{ 'a','b','c','d','e','f','g','h','i','j' };
    int chars[] = { 'A','B','C' };
    std::cout << "*std::find(myChars.begin(), myChars.end(), 'g'):"
        << *std::find(myChars.begin(), myChars.end(), 'g') << std::endl;

    std::cout << "std::find_if(myChars.begin(), myChars.end(), isVowel):"
        << *std::find_if(myChars.begin(), myChars.end(), isVowel) << std::endl;

    std::cout << "std::find_if_not(myChars.begin(), myChars.end(), isVowel) :"
        << *std::find_if_not(myChars.begin(), myChars.end(), isVowel) << std::endl;

    auto iter = std::find_first_of(myChars.begin(), myChars.end(), chars, chars + 3,
        [](char a, char b) {return std::toupper(a) == std::toupper(b); });
    if (iter != myChars.end()) std::cout << "Common char:" << *iter << std::endl;
    else std::cout << "None of A , B or C in myChars." << std::endl;

    auto iter2 = std::find_first_of(myChars.begin(), myChars.end(), chars, chars + 3,
        [](char a, char b) {return std::toupper(a) == std::toupper(b); });
    if (iter2 != myChars.end()) std::cout << "Common char:" << *iter2 << std::endl;
    else std::cout << "None of A , B or C in myChars." << std::endl;

    auto iter3 = std::adjacent_find(myChars.begin(), myChars.end());
    if (iter3 != myChars.end()) std::cout << "Find char:" << *iter3 << std::endl;
    else std::cout << "No same adjacent characters." << std::endl;

    auto iter4 = std::adjacent_find(myChars.begin(), myChars.end(),
        [](char a, char b) {return isVowel(a) == isVowel(b); });
    if (iter4 != myChars.end()) std::cout << "Find adjacent consonants or vawels:"
        << *iter4 << std::endl;
    else std::cout << "No same adjacent characters." << std::endl;

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
