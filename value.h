#pragma once
#define zh_cn 0
#define en 1
#include<cstring>
#include<vector>
using namespace std;
namespace allvalue {
	int lang=zh_cn;//����
	/*
	zh_cn ��������
	en Ӣ��
	*/
	struct langs {
		vector<QString>cancel;
		vector<QString>next;
		vector<QString>back;
		vector<QString>SetLanguage;
		vector<QString>ok;
		vector<QString>warn;
		vector<QString>askexit;
	};
	langs Lang;
}
