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
//����ݽ�������

class SpeechManager
{
public:
	//���캯��
	SpeechManager();
	//չʾ�˵�
	void show_Menu();
	//�˳�
	void existSystem();
	//��������
	~SpeechManager();
	//��ʼ������������
	void initSpeech();
	//����ѡ��
	void createSpeaker();
	//��ʼ����
	void startSpeech();
	//��ǩ
	void speechDraw();
	//����
	void speechContest();
	//��ʾ�÷�
	void showScore();
	//�����¼
	void saveRecord();
	//��ȡ��¼
	void loadRecord();
	//��ʾ�����¼
	void showRecord();
	//��ռ�¼
	void clearRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;
	//��������¼������
	map<int, vector<string>>m_Record;
	//��Ա����
	//�����һ�ֱ���ѡ�ֱ������
	vector<int>v1;
	//��һ�ֽ���
	vector<int>v2;
	//ʤ��ǰ����
	vector<int>vVitory;
	//��ű�ż���Ӧѡ��
	map<int, Speaker>m_Speaker;
	//��������
	int m_Index;
};