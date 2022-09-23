#include <stdio.h>
#include <iostream>

#include <Windows.h>

// WINAPI
// Windows		: Operating System Window OS
// Application	: 응용 프로그램
// Programming	:
// Interface	: 함수의 집합체

// Windows 가 제공하는 함수의 집합체로
// 응용 프로그램을 프로그래밍하는 언어

// __stdcall : 함수의 호출 규정 방식 컴퓨터가 알아서 호출하는 방식
// __cdecl	 : 가장 기본적인 함수 호출 규정 방식
// HINSTACE
// 인스턴스 핸들이라 불리며 프로세서의 주소를 저장하는 자료형입니다.
// 프로세서란 ? 현재 실행중인 프로그램
// 핸들이란 ? 특정 리소스의 주소를 정수형으로 저장하는 자료형
int APIENTRY WinMain(_In_		HINSTANCE const		hInst, 
					 _In_opt_	HINSTANCE const		prevhInst,
					 _In_		LPSTR	  const		IPCmdLine,
					 _In_		int		  const		nCmdshow) 
{
	{
		WNDCLASSEX wndClass = WNDCLASSEX();

		wndClass.cbSize = sizeof(WNDCLASSEX); // 윈도우 크기 설정
		wndClass.lpfnWndProc = nullptr;		  // 메세지 처리 함수
		wndClass.hInstance = hInst;			  // 등록할 프로그램 설정
		wndClass.hIcon   = LoadIcon(nullptr, IDI_APPLICATION); 
		wndClass.hIconSm = LoadIcon(nullptr, IDI_APPLICATION); 
		wndClass.hCursor = LoadCursor(nullptr, IDC_ARROW); 
		wndClass.hbrBackground = static_cast<HBRUSH>(GetStockObject(WHITE_BRUSH));
		wndClass.lpszClassName = "Window";

		RegisterClassEx(&wndClass);
	}

	{
		CREATESTRUCT window = CREATESTRUCT();

		window.lpszClass = "Window";
		window.hInstance = hInst;
		window.cx = 1280;
		window.cy = 720;
		
		CreateWindowEx
		(
			window.dwExStyle,
			window.lpszClass,
			window.lpszName,
			window.style,
			window.x,
			window.y,
			window.cx,
			window.cy,
			window.hwndParent,
			window.hMenu,
			window.hInstance,
			window.lpCreateParams
		); 
	}
	return 0;
} 
