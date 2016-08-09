#pragma once
#include "IDrawWndProc.h"

class GdiWndProc : public IDrawWndProc
{
public:
	GdiWndProc(void);
	~GdiWndProc(void);
	virtual void Initialize();
	virtual void Finalize();
	virtual LRESULT CALLBACK PartWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL* pIsReturn);
private:
	void OnPaint(HDC hdc);
};

