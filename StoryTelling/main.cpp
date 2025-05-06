// 스토리 게임 구성 요소
// 콘솔 유틸리티 함수, 
// Image 클래스
// ImageModel 객체 구조체
// Actor - Tell(), Selection()


/*
*  등장 인물.
*  등장 배경.
*  "사건"
*/

#include "Console.h"
#include <iostream>
#include "ImageModel.h"
#include "Image.h"
#include "Actor.h"

int main()
{
    ImageModel model;
    Actor actor;
    Console::CursorVisible(false);

    Image bat(model.batArt, 7);

    Console::GoToXY(20, 20);
    actor.Tell("나레이션", "박쥐가 먹이를 찾고 있습니다."); // 대사
    bat.move(0, 5, 10, 100);           // 박쥐 애니메이션

    actor.Tell("나레이션", "정면에 호랑이가 나타났습니다.");
    actor.Tell("나레이션", "박쥐는 어떤 선택을 해야하나요?????/");
    bool b1 = actor.Selection("박쥐", "도망칩니다.", "맞서싸웁니다.");
    
    if (b1)
    {
        std::cout << "박쥐가 도망쳐서 이 후의 스토리 진행";



        bool b2 = actor.Selection("박쥐", "도망칩니다.", "맞서싸웁니다.");

    }
    else
    {
        std::cout << "Bad Ending";




    }


    while (true);
}