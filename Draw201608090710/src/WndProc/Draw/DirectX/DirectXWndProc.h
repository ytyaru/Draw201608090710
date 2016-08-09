#pragma once
#include "IDrawWndProc.h"
#include <Windows.h>
#include <d3d9.h>

class DirectXWndProc : public IDrawWndProc
{
public:
	DirectXWndProc(void);
	~DirectXWndProc(void);
	virtual void Initialize();
	virtual void Finalize();
	virtual LRESULT CALLBACK PartWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL* pIsReturn);
private:
	void OnPaint();
	LPDIRECT3D9 m_pD3D;
	LPDIRECT3DDEVICE9 m_pD3DDev;
};

