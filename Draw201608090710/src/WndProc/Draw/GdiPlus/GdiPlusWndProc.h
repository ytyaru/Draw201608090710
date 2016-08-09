#pragma once
#include "IDrawWndProc.h"
#include <Windows.h>
#include <gdiplus.h>

class GdiPlusWndProc : public IDrawWndProc
{
public:
	GdiPlusWndProc(void);
	~GdiPlusWndProc(void);
	virtual void Initialize();
	virtual void Finalize();
	virtual LRESULT CALLBACK PartWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL* pIsReturn);
private:
	void OnPaint(HDC hdc);
	Gdiplus::GdiplusStartupInput* m_gdiSI;
	ULONG_PTR m_gdiToken;
	Gdiplus::Bitmap* m_OffScreenBitmap;
	Gdiplus::Graphics* m_OffScreenGraphics;
};

