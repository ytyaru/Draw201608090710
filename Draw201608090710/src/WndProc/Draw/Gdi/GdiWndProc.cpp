#include "GdiWndProc.h"

GdiWndProc::GdiWndProc(void) {}
GdiWndProc::~GdiWndProc(void) {}
void GdiWndProc::Initialize() {}
void GdiWndProc::Finalize() {}
LRESULT CALLBACK GdiWndProc::PartWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL* pIsReturn)
{
	switch (uMsg) {
		// バグる
		//case WM_ERASEBKGND:
		//	*pIsReturn = TRUE;
		//	return TRUE;
		case WM_PAINT:
			HDC hdc;
			PAINTSTRUCT ps;
			hdc = BeginPaint(hWnd , &ps);
			OnPaint(hdc);
			EndPaint(hWnd , &ps);
			break;
		default:
			break;
	}
	return (0L);
}
void GdiWndProc::OnPaint(HDC hdc)
{
	LPTSTR lptStr = TEXT("この文字列はGDIで描画しています。");
	TextOut(hdc , 10 , 10 , lptStr , _tcslen(lptStr));
}