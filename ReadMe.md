# このソフトウェアについて #

Draw201608090710は私個人が学習目的で作成したソフトウェアです。

GDI, GDI+, DirectX9, による描画コードを書いてみました。
実行中に切り替えることができます。
[前回](https://github.com/ytyaru/Draw201608071349)からインターフェースを変更しました。

# 開発環境 #

* Windows XP SP3
* C++/Win32
* Visual C++ 2010 Express

## ライブラリ ##

* GDI+
* DirectX9

# 変更 #

* インターフェース変更
    * IDrawWndProc追加
    * IPartWndProc変更
    * 純粋仮想デストラクタ追加
    * 継承class変更

# イメージ #

## ソースコード一覧 ##

![ソース一覧](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160809/20160809120843.png)

## 実行結果 ##

キーボードの 1, 2, 3 キーを押下するとそれぞれの描画アーキテクチャに切り替わります。

### 初期表示 ###

![GDI](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160808/20160808140243.png)

### GDI ###

![GDI](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160808/20160808140324.png)

### GDI+ ###

![GDI+](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160808/20160808140343.png)

### DirectX9 ###

![DirectX9](https://cdn-ak.f.st-hatena.com/images/fotolife/y/ytyaru/20160808/20160808140408.png)

# ライセンス #

このソフトウェアはCC0ライセンスです。

[![CC0](http://i.creativecommons.org/p/zero/1.0/88x31.png "CC0")](http://creativecommons.org/publicdomain/zero/1.0/deed.ja)
