// weakPtr.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <memory>

class MyInt {
public:
    MyInt(int i) :i_(i) {}
    int get() const { return i_; }
private:
    int i_;

};

int main() {

    std::weak_ptr<MyInt> weakPtr;

    auto sharedPtr = std:: make_shared<MyInt>(2011);
    // std::shared_ptr<MyInt> sharedPtr(new MyInt(2011);
    std::cout << "sharedPtr.use_count() : " << sharedPtr.use_count() << std::endl;

    weakPtr = sharedPtr;
    std::cout << "weekPtr.use_count(): " << weakPtr.use_count() << std::endl;
    std::cout << "weekPtr.expired(): " << weakPtr.expired() << std::endl;

    std::weak_ptr<MyInt> weakPtr1(sharedPtr);

    std::cout << "sharedPtr->get(): " << sharedPtr->get() << std::endl;
    //std::cout << "weakPtr->get()" << weakPtr->get() << std::endl;

    if (std::shared_ptr<MyInt> sharedPtr1 = weakPtr.lock()) {
        std::cout << "sharedPtr->get(): " << sharedPtr->get() << std::endl;
    }
    else {
        std::cout << "Don't get the resource!" << std::endl;
    }
    // weakPtr 리셋
    weakPtr.reset();
    if (std::shared_ptr<MyInt> sharedPtr1 = weakPtr.lock()) {
        std::cout << "sharedPtr->get(): " << sharedPtr->get() << std::endl;
    }
    else {
        std::cout << "Don't get the resource!" << std::endl;
    }
    std::shared_ptr<MyInt> sharedPtr2(new MyInt(2));
    std::shared_ptr<MyInt> sharedPtr3(new MyInt(3));
    std::weak_ptr<MyInt> weakPtr2(sharedPtr2);
    std::weak_ptr<MyInt> weakPtr3(sharedPtr3);

    if (std::shared_ptr<MyInt> sharedFromWeak2 = weakPtr2.lock()) {
        std::cout << "sharedFromWeak2->get(): " << sharedFromWeak2->get() << std::endl;
    }
    weakPtr2.swap(weakPtr3);
    if (std::shared_ptr<MyInt> sharedFromWeak2 = weakPtr2.lock()) {
        std::cout << "sharedFromWeak2->get(): " << sharedFromWeak2->get() << std::endl;
    }

    std::swap(weakPtr2, weakPtr3);
    if (std::shared_ptr<MyInt> sharedFromWeak2 = weakPtr2.lock()) {
        std::cout << "sharedFromWeak2->get():" << sharedFromWeak2->get() << std::endl;

        return 0;
     }

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
