#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<deque>
#include"speaker.h"
#include<algorithm>
#include<functional>
#include<numeric>
#include<fstream>
#include<string>
//设计演讲管理类

class SpeechManager
{
public:
	//构造函数
	SpeechManager();
	//展示菜单
	void show_Menu();
	//退出
	void existSystem();
	//析构函数
	~SpeechManager();
	//初始化容器和属性
	void initSpeech();
	//创建选手
	void createSpeaker();
	//开始比赛
	void startSpeech();
	//抽签
	void speechDraw();
	//比赛
	void speechContest();
	//显示得分
	void showScore();
	//保存记录
	void saveRecord();
	//读取记录
	void loadRecord();
	//显示往届记录
	void showRecord();
	//清空记录
	void clearRecord();

	//判断文件是否为空
	bool fileIsEmpty;
	//存放往届记录的容器
	map<int, vector<string>>m_Record;
	//成员属性
	//保存第一轮比赛选手编号容器
	vector<int>v1;
	//第一轮晋级
	vector<int>v2;
	//胜出前三名
	vector<int>vVitory;
	//存放编号及对应选手
	map<int, Speaker>m_Speaker;
	//比赛轮数
	int m_Index;
};