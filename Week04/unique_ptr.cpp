// unique_ptr.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <memory>

struct MyInt {
    MyInt(int i):i_(i){}
    ~MyInt() {
        std::cout << "Destroying MyInt i = " << i_ << std::endl;
    }
    int i_;

};

int main()
{
    std::unique_ptr<MyInt> uniquePtr1{ new MyInt(1988) };
    std::cout << "uniquePtr1.get()  = " << uniquePtr1.get() << std::endl;

    std::unique_ptr<MyInt> uniquePtr2{std::move(uniquePtr1) };
    std::cout << "uniquePtr1.get() = " << uniquePtr1.get() << std::endl;
    std::cout << "uniquePtr2.get() = " << uniquePtr2.get() << std::endl;


    {
    std::unique_ptr<MyInt> localPtr{ new MyInt(2024) };
    }
    uniquePtr2.reset(new MyInt(3024));

    MyInt* myint = uniquePtr2.release();
    delete myint;

    std::unique_ptr<MyInt> uniquePtr3{ new MyInt(2017) };
    std::unique_ptr<MyInt> uniquePtr4{ new MyInt(2022) };

    std::cout << "uniquePtr3.get() = " << uniquePtr3.get() << std::endl;
    std::cout << "uniquePtr4.get() = " << uniquePtr4.get() << std::endl;

    swap(uniquePtr3, uniquePtr4);

    std::cout << "uniquePtr3.get() = " << uniquePtr3.get() << std::endl;
    std::cout << "uniquePtr4.get() = " << uniquePtr4.get() << std::endl;

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
