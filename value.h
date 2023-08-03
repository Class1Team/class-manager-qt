#pragma once
#define zh_cn 0
#define en 1
#include<cstring>
#include<vector>
using namespace std;
namespace allvalue {
	int lang=zh_cn;//语言
	/*
	zh_cn 简体中文
	en 英文
	*/
	struct langs {
		vector<QString>cancel;
		vector<QString>next;
		vector<QString>back;
		vector<QString>SetLanguage;
	};
	langs Lang;
}
