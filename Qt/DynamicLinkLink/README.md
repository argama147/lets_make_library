# 実行ファイル→動的ライブラリA→動的ライブラリB

ライブラリとライブラリをリンクするサンプルです。
実行ファイルが動的ライブラリAを動的リンクし、動的ライブラリAが動的ライブラリBを動的リンクする場合
実行ファイルは、動的ライブラリBを意識しない（依存しない）ことも確認できます。

* 実行ファイルプロジェクト：user_libray
* 動的ライブラリAプロジェクト：make_library
* 動的ライブラリBプロジェクト：make_library2

ビルドは、動的ライブラリBプロジェクト→動的ライブラリAプロジェクト→実行ファイルプロジェクトの順番に行います。
