#include <stdio.h>
#include <iostream>

#include <Windows.h>

// WINAPI
// Windows		: Operating System Window OS
// Application	: ���� ���α׷�
// Programming	:
// Interface	: �Լ��� ����ü

// Windows �� �����ϴ� �Լ��� ����ü��
// ���� ���α׷��� ���α׷����ϴ� ���

// __stdcall : �Լ��� ȣ�� ���� ��� ��ǻ�Ͱ� �˾Ƽ� ȣ���ϴ� ���
// __cdecl	 : ���� �⺻���� �Լ� ȣ�� ���� ���
// HINSTACE
// �ν��Ͻ� �ڵ��̶� �Ҹ��� ���μ����� �ּҸ� �����ϴ� �ڷ����Դϴ�.
// ���μ����� ? ���� �������� ���α׷�
// �ڵ��̶� ? Ư�� ���ҽ��� �ּҸ� ���������� �����ϴ� �ڷ���
int APIENTRY WinMain(_In_		HINSTANCE const		hInst, 
					 _In_opt_	HINSTANCE const		prevhInst,
					 _In_		LPSTR	  const		IPCmdLine,
					 _In_		int		  const		nCmdshow) 
{
	{
		WNDCLASSEX wndClass = WNDCLASSEX();

		wndClass.cbSize = sizeof(WNDCLASSEX); // ������ ũ�� ����
		wndClass.lpfnWndProc = nullptr;		  // �޼��� ó�� �Լ�
		wndClass.hInstance = hInst;			  // ����� ���α׷� ����
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
