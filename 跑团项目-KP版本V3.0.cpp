#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <random>
#include <time.h>

using namespace std;
using std::default_random_engine;
using std::uniform_int_distribution;

int main()
{
	//初始标题
	SetConsoleTitle("跑团项目-V3.0				by.灵劫 | QQ:908095447");
	//随机数
	srand((unsigned)time(NULL));
	int A1 = 0, A2 = 0, A3 = 0;
	//变量
	float Kp_Off; //检测是否为KP
	float Player_List; //检测玩家人数
	string Name_1; //玩家1名字
	string Name_2; //玩家2名字
	string Name_3; //玩家3名字
	string Name_4; //玩家4名字
	string Name_5; //玩家5名字
	string Name_6; //玩家6名字
	string Profession_1; //玩家1职业
	string Profession_2; //玩家2职业
	string Profession_3; //玩家3职业
	string Profession_4; //玩家4职业
	string Profession_5; //玩家5职业
	string Profession_6; //玩家6职业
	float Hp_1 = 0; //玩家1血量
	float Hp_1_Max = 0;//玩家1最大血量
	float Hp_2 = 0;	//玩家2血量
	float Hp_2_Max = 0; //玩家2最大血量
	float Hp_3 = 0; //玩家3血量
	float Hp_3_Max = 0; //玩家3最大血量
	float Hp_4 = 0;	//玩家4血量
	float Hp_4_Max = 0; //玩家4最大血量
	float Hp_5 = 0;	//玩家5血量
	float Hp_5_Max = 0; //玩家5最大血量
	float Hp_6 = 0;	//玩家6血量
	float Hp_6_Max = 0; //玩家6最大血量
	float Sense_1 = 0; //玩家1理智
	float Sense_2 = 0; //玩家2理智
	float Sense_3 = 0; //玩家3理智
	float Sense_4 = 0; //玩家4理智
	float Sense_5 = 0; //玩家5理智
	float Sense_6 = 0; //玩家6理智
	int Attribute_Str_1 = 0; //玩家1力量
	int Attribute_Str_2 = 0; //玩家2力量
	int Attribute_Str_3 = 0; //玩家3力量
	int Attribute_Str_4 = 0; //玩家4力量
	int Attribute_Str_5 = 0; //玩家5力量
	int Attribute_Str_6 = 0; //玩家6力量
	int Attribute_Dex_1 = 0; //玩家1敏捷
	int Attribute_Dex_2 = 0; //玩家2敏捷
	int Attribute_Dex_3 = 0; //玩家3敏捷
	int Attribute_Dex_4 = 0; //玩家4敏捷
	int Attribute_Dex_5 = 0; //玩家5敏捷
	int Attribute_Dex_6 = 0; //玩家6敏捷
	int Attribute_Pow_1 = 0; //玩家1意志
	int Attribute_Pow_2 = 0; //玩家2意志
	int Attribute_Pow_3 = 0; //玩家3意志
	int Attribute_Pow_4 = 0; //玩家4意志
	int Attribute_Pow_5 = 0; //玩家5意志
	int Attribute_Pow_6 = 0; //玩家6意志
	int Attribute_Con_1 = 0; //玩家1体质
	int Attribute_Con_2 = 0; //玩家2体质
	int Attribute_Con_3 = 0; //玩家3体质
	int Attribute_Con_4 = 0; //玩家4体质
	int Attribute_Con_5 = 0; //玩家5体质
	int Attribute_Con_6 = 0; //玩家6体质
	int Attribute_App_1 = 0; //玩家1魅力
	int Attribute_App_2 = 0; //玩家2魅力
	int Attribute_App_3 = 0; //玩家3魅力
	int Attribute_App_4 = 0; //玩家4魅力
	int Attribute_App_5 = 0; //玩家5魅力
	int Attribute_App_6 = 0; //玩家6魅力
	int Attribute_Edu_1 = 0; //玩家1教育
	int Attribute_Edu_2 = 0; //玩家2教育
	int Attribute_Edu_3 = 0; //玩家3教育
	int Attribute_Edu_4 = 0; //玩家4教育
	int Attribute_Edu_5 = 0; //玩家5教育
	int Attribute_Edu_6 = 0; //玩家6教育
	int Attribute_Siz_1 = 0; //玩家1体型
	int Attribute_Siz_2 = 0; //玩家2体型
	int Attribute_Siz_3 = 0; //玩家3体型
	int Attribute_Siz_4 = 0; //玩家4体型
	int Attribute_Siz_5 = 0; //玩家5体型
	int Attribute_Siz_6 = 0; //玩家6体型
	int Attribute_Int_1 = 0; //玩家1智力
	int Attribute_Int_2 = 0; //玩家2智力
	int Attribute_Int_3 = 0; //玩家3智力
	int Attribute_Int_4 = 0; //玩家4智力
	int Attribute_Int_5 = 0; //玩家5智力
	int Attribute_Int_6 = 0; //玩家6智力
	int Attribute_Luck_1 = 0; //玩家1幸运
	int Attribute_Luck_2 = 0; //玩家2幸运
	int Attribute_Luck_3 = 0; //玩家3幸运
	int Attribute_Luck_4 = 0; //玩家4幸运
	int Attribute_Luck_5 = 0; //玩家5幸运
	int Attribute_Luck_6 = 0; //玩家6幸运
	string Left_Hand_1 = "[空]"; //玩家1左手装备
	string Left_Hand_2 = "[空]"; //玩家2左手装备
	string Left_Hand_3 = "[空]"; //玩家3左手装备
	string Left_Hand_4 = "[空]"; //玩家4左手装备
	string Left_Hand_5 = "[空]"; //玩家5左手装备
	string Left_Hand_6 = "[空]"; //玩家6左手装备
	string Right_Hand_1 = "[空]"; //玩家1右手装备
	string Right_Hand_2 = "[空]"; //玩家2右手装备
	string Right_Hand_3 = "[空]"; //玩家3右手装备
	string Right_Hand_4 = "[空]"; //玩家4右手装备
	string Right_Hand_5 = "[空]"; //玩家5右手装备
	string Right_Hand_6 = "[空]"; //玩家6右手装备
	string Backpack_1_1 = "[空]"; //玩家1背包1号位
	string Backpack_1_2 = "[空]"; //玩家1背包2号位
	string Backpack_1_3 = "[空]"; //玩家1背包3号位
	string Backpack_1_4 = "[空]"; //玩家1背包4号位
	string Backpack_2_1 = "[空]"; //玩家2背包1号位
	string Backpack_2_2 = "[空]"; //玩家2背包2号位
	string Backpack_2_3 = "[空]"; //玩家2背包3号位
	string Backpack_2_4 = "[空]"; //玩家2背包4号位
	string Backpack_3_1 = "[空]"; //玩家3背包1号位
	string Backpack_3_2 = "[空]"; //玩家3背包2号位
	string Backpack_3_3 = "[空]"; //玩家3背包3号位
	string Backpack_3_4 = "[空]"; //玩家3背包4号位
	string Backpack_4_1 = "[空]"; //玩家4背包1号位
	string Backpack_4_2 = "[空]"; //玩家4背包2号位
	string Backpack_4_3 = "[空]"; //玩家4背包3号位
	string Backpack_4_4 = "[空]"; //玩家4背包4号位
	string Backpack_5_1 = "[空]"; //玩家5背包1号位
	string Backpack_5_2 = "[空]"; //玩家5背包2号位
	string Backpack_5_3 = "[空]"; //玩家5背包3号位
	string Backpack_5_4 = "[空]"; //玩家5背包4号位
	string Backpack_6_1 = "[空]"; //玩家6背包1号位
	string Backpack_6_2 = "[空]"; //玩家6背包2号位
	string Backpack_6_3 = "[空]"; //玩家6背包3号位
	string Backpack_6_4 = "[空]"; //玩家6背包4号位
	string Skill_1_1 = "[无]"; //玩家1技能1号位
	string Skill_1_2 = "[无]"; //玩家1技能2号位
	string Skill_1_3 = "[无]"; //玩家1技能3号位
	string Skill_1_4 = "[无]"; //玩家1技能4号位
	string Skill_1_5 = "[无]"; //玩家1技能5号位
	string Skill_1_6 = "[无]"; //玩家1技能6号位
	string Skill_1_7 = "[无]"; //玩家1技能7号位
	string Skill_1_8 = "[无]"; //玩家1技能8号位
	string Skill_2_1 = "[无]"; //玩家2技能1号位
	string Skill_2_2 = "[无]"; //玩家2技能2号位
	string Skill_2_3 = "[无]"; //玩家2技能3号位
	string Skill_2_4 = "[无]"; //玩家2技能4号位
	string Skill_2_5 = "[无]"; //玩家2技能5号位
	string Skill_2_6 = "[无]"; //玩家2技能6号位
	string Skill_2_7 = "[无]"; //玩家2技能7号位
	string Skill_2_8 = "[无]"; //玩家2技能8号位
	string Skill_3_1 = "[无]"; //玩家3技能1号位
	string Skill_3_2 = "[无]"; //玩家3技能2号位
	string Skill_3_3 = "[无]"; //玩家3技能3号位
	string Skill_3_4 = "[无]"; //玩家3技能4号位
	string Skill_3_5 = "[无]"; //玩家3技能5号位
	string Skill_3_6 = "[无]"; //玩家3技能6号位
	string Skill_3_7 = "[无]"; //玩家3技能7号位
	string Skill_3_8 = "[无]"; //玩家3技能8号位
	string Skill_4_1 = "[无]"; //玩家4技能1号位
	string Skill_4_2 = "[无]"; //玩家4技能2号位
	string Skill_4_3 = "[无]"; //玩家4技能3号位
	string Skill_4_4 = "[无]"; //玩家4技能4号位
	string Skill_4_5 = "[无]"; //玩家4技能5号位
	string Skill_4_6 = "[无]"; //玩家4技能6号位
	string Skill_4_7 = "[无]"; //玩家4技能7号位
	string Skill_4_8 = "[无]"; //玩家4技能8号位
	string Skill_5_1 = "[无]"; //玩家5技能1号位
	string Skill_5_2 = "[无]"; //玩家5技能2号位
	string Skill_5_3 = "[无]"; //玩家5技能3号位
	string Skill_5_4 = "[无]"; //玩家5技能4号位
	string Skill_5_5 = "[无]"; //玩家5技能5号位
	string Skill_5_6 = "[无]"; //玩家5技能6号位
	string Skill_5_7 = "[无]"; //玩家5技能7号位
	string Skill_5_8 = "[无]"; //玩家5技能8号位
	string Skill_6_1 = "[无]"; //玩家6技能1号位
	string Skill_6_2 = "[无]"; //玩家6技能2号位
	string Skill_6_3 = "[无]"; //玩家6技能3号位
	string Skill_6_4 = "[无]"; //玩家6技能4号位
	string Skill_6_5 = "[无]"; //玩家6技能5号位
	string Skill_6_6 = "[无]"; //玩家6技能6号位
	string Skill_6_7 = "[无]"; //玩家6技能7号位
	string Skill_6_8 = "[无]"; //玩家6技能8号位
	float Skill_1_Level_1 = 0; //玩家1技能等级1号位
	float Skill_1_Level_2 = 0; //玩家1技能等级2号位
	float Skill_1_Level_3 = 0; //玩家1技能等级3号位
	float Skill_1_Level_4 = 0; //玩家1技能等级4号位
	float Skill_1_Level_5 = 0; //玩家1技能等级5号位
	float Skill_1_Level_6 = 0; //玩家1技能等级6号位
	float Skill_1_Level_7 = 0; //玩家1技能等级7号位
	float Skill_1_Level_8 = 0; //玩家1技能等级8号位
	float Skill_2_Level_1 = 0; //玩家2技能等级1号位
	float Skill_2_Level_2 = 0; //玩家2技能等级2号位
	float Skill_2_Level_3 = 0; //玩家2技能等级3号位
	float Skill_2_Level_4 = 0; //玩家2技能等级4号位
	float Skill_2_Level_5 = 0; //玩家2技能等级5号位
	float Skill_2_Level_6 = 0; //玩家2技能等级6号位
	float Skill_2_Level_7 = 0; //玩家2技能等级7号位
	float Skill_2_Level_8 = 0; //玩家2技能等级8号位
	float Skill_3_Level_1 = 0; //玩家3技能等级1号位
	float Skill_3_Level_2 = 0; //玩家3技能等级2号位
	float Skill_3_Level_3 = 0; //玩家3技能等级3号位
	float Skill_3_Level_4 = 0; //玩家3技能等级4号位
	float Skill_3_Level_5 = 0; //玩家3技能等级5号位
	float Skill_3_Level_6 = 0; //玩家3技能等级6号位
	float Skill_3_Level_7 = 0; //玩家3技能等级7号位
	float Skill_3_Level_8 = 0; //玩家3技能等级8号位
	float Skill_4_Level_1 = 0; //玩家4技能等级1号位
	float Skill_4_Level_2 = 0; //玩家4技能等级2号位
	float Skill_4_Level_3 = 0; //玩家4技能等级3号位
	float Skill_4_Level_4 = 0; //玩家4技能等级4号位
	float Skill_4_Level_5 = 0; //玩家4技能等级5号位
	float Skill_4_Level_6 = 0; //玩家4技能等级6号位
	float Skill_4_Level_7 = 0; //玩家4技能等级7号位
	float Skill_4_Level_8 = 0; //玩家4技能等级8号位
	float Skill_5_Level_1 = 0; //玩家5技能等级1号位
	float Skill_5_Level_2 = 0; //玩家5技能等级2号位
	float Skill_5_Level_3 = 0; //玩家5技能等级3号位
	float Skill_5_Level_4 = 0; //玩家5技能等级4号位
	float Skill_5_Level_5 = 0; //玩家5技能等级5号位
	float Skill_5_Level_6 = 0; //玩家5技能等级6号位
	float Skill_5_Level_7 = 0; //玩家5技能等级7号位
	float Skill_5_Level_8 = 0; //玩家5技能等级8号位
	float Skill_6_Level_1 = 0; //玩家6技能等级1号位
	float Skill_6_Level_2 = 0; //玩家6技能等级2号位
	float Skill_6_Level_3 = 0; //玩家6技能等级3号位
	float Skill_6_Level_4 = 0; //玩家6技能等级4号位
	float Skill_6_Level_5 = 0; //玩家6技能等级5号位
	float Skill_6_Level_6 = 0; //玩家6技能等级6号位
	float Skill_6_Level_7 = 0; //玩家6技能等级7号位
	float Skill_6_Level_8 = 0; //玩家6技能等级8号位
	string Record_1; //玩家1履历
	string Record_2; //玩家2履历
	string Record_3; //玩家3履历
	string Record_4; //玩家4履历
	string Record_5; //玩家5履历
	string Record_6; //玩家6履历
	float Player_Old_1 = 0; //玩家1年龄
	float Player_Old_2 = 0; //玩家2年龄
	float Player_Old_3 = 0; //玩家3年龄
	float Player_Old_4 = 0; //玩家4年龄
	float Player_Old_5 = 0; //玩家5年龄
	float Player_Old_6 = 0; //玩家6年龄
	string State_health_1; //玩家1血量状态
	string State_health_2; //玩家2血量状态
	string State_health_3; //玩家3血量状态
	string State_health_4; //玩家4血量状态
	string State_health_5; //玩家5血量状态
	string State_health_6; //玩家6血量状态
	string State_Sense_1; //玩家1精神状态
	string State_Sense_2; //玩家2精神状态
	string State_Sense_3; //玩家3精神状态
	string State_Sense_4; //玩家4精神状态
	string State_Sense_5; //玩家5精神状态
	string State_Sense_6; //玩家6精神状态
	int Rand_All = 0; //骰子数值合1
	//菜单定义
	int Menu_Open; //主菜单选择
	int Menu_Name; //姓名菜单玩家选择
	int Menu_Old;  //年龄菜单玩家选择
	int Menu_Attribute; //玩家选择设定属性
	int Menu_Player_Attribute; //属性菜单玩家选择
	//程序开始运行
	cout << "欢迎使用本跑团软件,软件开发全程由[灵劫]独自制作." << endl;
	cout << "版权>>>>>[灵劫]<<<<<持有全部." << endl;
	cout << "遇见BUG之类的请联系[灵劫]QQ:908095447." << endl;
L2:
	system("pause");
	system("cls");
	cout << "请告诉我你是否为KP.(1/0)" << endl;
	cout << "输入栏: ";
	cin >> Kp_Off;
	if (Kp_Off == 1)
	{
		cout << "检测到您是尊贵的KP!" << endl;
		cout << "已为您启动KP模式." << endl;
		SetConsoleTitle("跑团-KP模式");
	}
	else if (Kp_Off == 0)
	{
		cout << "检测到您是尊贵的调查员!" << endl;
		cout << "已为您启动调查员模式." << endl;
		SetConsoleTitle("跑团-调查员模式");
	}
	else if (Kp_Off > 1 || Kp_Off < 0)
	{
		cout << "警告:您输入的数值有误!!!" << endl;
		cout << "提示:输入[1]=是,输入[0]=否." << endl;
		goto L2;
	}
L3:
	system("cls");
	cout << "请告诉我这场游戏有几个玩家.(1-6人)" << endl;
	cout << "输入栏: ";
	cin >> Player_List;
	if (Kp_Off == 1 && Player_List == 1)
	{
		cout << "尊贵的KP您好,检测到您选择的玩家数为[" << Player_List << "]人." << endl;
		cout << "已为您开启[" << Player_List << "]人模块" << endl;
		SetConsoleTitle("跑团-KP模式 [1]人模块");
	}
	else if (Kp_Off == 1 && Player_List == 2)
	{
		cout << "尊贵的KP您好,检测到您选择的玩家数为[" << Player_List << "]人." << endl;
		cout << "已为您开启[" << Player_List << "]人模块" << endl;
		SetConsoleTitle("跑团-KP模式 [2]人模块");
	}
	else if (Kp_Off == 1 && Player_List == 3)
	{
		cout << "尊贵的KP您好,检测到您选择的玩家数为[" << Player_List << "]人." << endl;
		cout << "已为您开启[" << Player_List << "]人模块" << endl;
		SetConsoleTitle("跑团-KP模式 [3]人模块");
	}
	else if (Kp_Off == 1 && Player_List == 4)
	{
		cout << "尊贵的KP您好,检测到您选择的玩家数为[" << Player_List << "]人." << endl;
		cout << "已为您开启[" << Player_List << "]人模块" << endl;
		SetConsoleTitle("跑团-KP模式 [4]人模块");
	}
	else if (Kp_Off == 1 && Player_List == 5)
	{
		cout << "尊贵的KP您好,检测到您选择的玩家数为[" << Player_List << "]人." << endl;
		cout << "已为您开启[" << Player_List << "]人模块" << endl;
		SetConsoleTitle("跑团-KP模式 [5]人模块");
	}
	else if (Kp_Off == 1 && Player_List == 6)
	{
		cout << "尊贵的KP您好,检测到您选择的玩家数为[" << Player_List << "]人." << endl;
		cout << "已为您开启[" << Player_List << "]人模块" << endl;
		SetConsoleTitle("跑团-KP模式 [6]人模块");
	}
	else if (Kp_Off == 0)
	{
		cout << "尊贵的调查员您好!!!" << endl;
		cout << "已为您开启调查员模块." << endl;
		SetConsoleTitle("跑团-调查员模式");
	}
	else if (Player_List > 6 || Player_List < 1)
	{
		cout << "警告:您输入的数值有误." << endl;
		cout << "提示:本软件支持的游玩人数为1-6人." << endl;
		system("pause");
		goto L3;
	}
	system("cls");
	cout << "接下来我将为您启动HUD模块." << endl;
	system("pause");
	system("cls");
L1:
	//生死判定
	if (Hp_1 >= 1)
	{
		State_health_1 = "存活";
	}
	else if (Hp_2 >= 1)
	{
		State_health_2 = "存活";
	}
	else if (Hp_3 >= 1)
	{
		State_health_3 = "存活";
	}
	else if (Hp_4 >= 1)
	{
		State_health_4 = "存活";
	}
	else if (Hp_5 >= 1)
	{
		State_health_5 = "存活";
	}
	else if (Hp_6 >= 1)
	{
		State_health_6 = "存活";
	}
	else if (Hp_1 <= 0)
	{
		State_health_1 = "死亡";
	}
	else if (Hp_2 <= 0)
	{
		State_health_2 = "死亡";
	}
	else if (Hp_3 <= 0)
	{
		State_health_3 = "死亡";
	}
	else if (Hp_4 <= 0)
	{
		State_health_4 = "死亡";
	}
	else if (Hp_5 <= 0)
	{
		State_health_5 = "死亡";
	}
	else if (Hp_6 <= 0)
	{
		State_health_6 = "死亡";
	}
	//精神判定
	if (Sense_1 >= 70)
	{
		State_Sense_1 = "精神良好";
	}
	else if (Sense_1 < 69 && Sense_1 >= 50)
	{
		State_Sense_1 = "略微疲惫";
	}
	else if (Sense_1 < 49 && Sense_1 >= 40)
	{
		State_Sense_1 = "疲惫";
	}
	else if (Sense_1 < 39 && Sense_1 >= 30)
	{
		State_Sense_1 = "精神涣散";
	}
	else if (Sense_1 < 29 && Sense_1 >= 10)
	{
		State_Sense_1 = "失去理智";
	}
	else if (Sense_1 < 9 && Sense_1 >= 1)
	{
		State_Sense_1 = "失去感知";
	}
	else if (Sense_1 <= 1)
	{
		State_Sense_1 = "人格消失";
	}
	if (Sense_2 >= 70)
	{
		State_Sense_2 = "精神良好";
	}
	else if (Sense_2 < 69 && Sense_2 >= 50)
	{
		State_Sense_2 = "略微疲惫";
	}
	else if (Sense_2 < 49 && Sense_2 >= 40)
	{
		State_Sense_2 = "疲惫";
	}
	else if (Sense_2 < 39 && Sense_2 >= 30)
	{
		State_Sense_2 = "精神涣散";
	}
	else if (Sense_2 < 29 && Sense_2 >= 10)
	{
		State_Sense_2 = "失去理智";
	}
	else if (Sense_2 < 9 && Sense_2 >= 1)
	{
		State_Sense_2 = "失去感知";
	}
	else if (Sense_2 <= 1)
	{
		State_Sense_2 = "人格消失";
	}
	if (Sense_3 >= 70)
	{
		State_Sense_3 = "精神良好";
	}
	else if (Sense_3 < 69 && Sense_3 >= 50)
	{
		State_Sense_3 = "略微疲惫";
	}
	else if (Sense_3 < 49 && Sense_3 >= 40)
	{
		State_Sense_3 = "疲惫";
	}
	else if (Sense_3 < 39 && Sense_3 >= 30)
	{
		State_Sense_3 = "精神涣散";
	}
	else if (Sense_3 < 29 && Sense_3 >= 10)
	{
		State_Sense_3 = "失去理智";
	}
	else if (Sense_3 < 9 && Sense_3 >= 1)
	{
		State_Sense_3 = "失去感知";
	}
	else if (Sense_3 <= 1)
	{
		State_Sense_3 = "人格消失";
	}
	if (Sense_4 >= 70)
	{
		State_Sense_4 = "精神良好";
	}
	else if (Sense_4 < 69 && Sense_4 >= 50)
	{
		State_Sense_4 = "略微疲惫";
	}
	else if (Sense_4 < 49 && Sense_4 >= 40)
	{
		State_Sense_4 = "疲惫";
	}
	else if (Sense_4 < 39 && Sense_4 >= 30)
	{
		State_Sense_4 = "精神涣散";
	}
	else if (Sense_4 < 29 && Sense_4 >= 10)
	{
		State_Sense_4 = "失去理智";
	}
	else if (Sense_4 < 9 && Sense_4 >= 1)
	{
		State_Sense_4 = "失去感知";
	}
	else if (Sense_4 <= 1)
	{
		State_Sense_4 = "人格消失";
	}
	if (Sense_5 >= 70)
	{
		State_Sense_5 = "精神良好";
	}
	else if (Sense_5 < 69 && Sense_5 >= 50)
	{
		State_Sense_5 = "略微疲惫";
	}
	else if (Sense_5 < 49 && Sense_5 >= 40)
	{
		State_Sense_5 = "疲惫";
	}
	else if (Sense_5 < 39 && Sense_5 >= 30)
	{
		State_Sense_5 = "精神涣散";
	}
	else if (Sense_5 < 29 && Sense_5 >= 10)
	{
		State_Sense_5 = "失去理智";
	}
	else if (Sense_5 < 9 && Sense_5 >= 1)
	{
		State_Sense_5 = "失去感知";
	}
	else if (Sense_5 <= 1)
	{
		State_Sense_5 = "人格消失";
	}
	if (Sense_6 >= 70)
	{
		State_Sense_6 = "精神良好";
	}
	else if (Sense_6 < 69 && Sense_6 >= 50)
	{
		State_Sense_6 = "略微疲惫";
	}
	else if (Sense_6 < 49 && Sense_6 >= 40)
	{
		State_Sense_6 = "疲惫";
	}
	else if (Sense_6 < 39 && Sense_6 >= 30)
	{
		State_Sense_6 = "精神涣散";
	}
	else if (Sense_6 < 29 && Sense_6 >= 10)
	{
		State_Sense_6 = "失去理智";
	}
	else if (Sense_6 < 9 && Sense_6 >= 1)
	{
		State_Sense_6 = "失去感知";
	}
	else if (Sense_6 <= 1)
	{
		State_Sense_6 = "人格消失";
	}
	//HUD模块
	if (Kp_Off == 1 && Player_List == 1)
	{
		cout << "姓名: " << Name_1 << endl;
		cout << "年龄: " << Player_Old_1 << endl;
		cout << "状态: " << State_health_1 << " | " << State_Sense_1 << endl;
		cout << "血量: " << Hp_1 << " / " << Hp_1_Max << endl;
		cout << "理智: " << Sense_1 << endl;
		cout << "力量: " << Attribute_Str_1 << endl;
		cout << "敏捷: " << Attribute_Dex_1 << endl;
		cout << "意志: " << Attribute_Pow_1 << endl;
		cout << "体质: " << Attribute_Con_1 << endl;
		cout << "魅力: " << Attribute_App_1 << endl;
		cout << "教育: " << Attribute_Edu_1 << endl;
		cout << "体型: " << Attribute_Siz_1 << endl;
		cout << "智力: " << Attribute_Int_1 << endl;
		cout << "运气: " << Attribute_Luck_1 << endl;
		cout << "\n" << endl;
		cout << "左手装备: " << Left_Hand_1 << endl;
		cout << "右手装备: " << Right_Hand_1 << endl;
		cout << "\n" << endl;
		cout << "背包:" << endl;
		cout << "背包[1]: " << Backpack_1_1 << ". | " << "背包[2]: " << Backpack_1_2 << ". | " << "背包[3]: " << Backpack_1_3 << ". | " << "背包[4]: " << Backpack_1_4 << "." << endl;
		cout << "\n" << endl;
		cout << "技能:" << endl;
		cout << "技能[1]: " << Skill_1_1 << ". | " << "技能[2]: " << Skill_1_2 << ". | " << "技能[3]: " << Skill_1_3 << ". | " << "技能[4]: " << Skill_1_4 << "." << endl;
		cout << "技能[5]: " << Skill_1_5 << ". | " << "技能[6]: " << Skill_1_6 << ". | " << "技能[7]: " << Skill_1_7 << ". | " << "技能[8]: " << Skill_1_8 << "." << endl;
		cout << "\n" << endl;
		cout << "履历:" << endl;
		cout << Record_1 << endl;
		cout << "\n" << endl;
	}
	else if (Kp_Off == 0)
	{
		cout << "姓名: " << Name_1 << endl;
		cout << "年龄: " << Player_Old_1 << endl;
		cout << "状态: " << State_health_1 << " | " << State_Sense_1 << endl;
		cout << "血量: " << Hp_1 << " / " << Hp_1_Max << endl;
		cout << "理智: " << Sense_1 << endl;
		cout << "力量: " << Attribute_Str_1 << endl;
		cout << "敏捷: " << Attribute_Dex_1 << endl;
		cout << "意志: " << Attribute_Pow_1 << endl;
		cout << "体质: " << Attribute_Con_1 << endl;
		cout << "魅力: " << Attribute_App_1 << endl;
		cout << "教育: " << Attribute_Edu_1 << endl;
		cout << "体型: " << Attribute_Siz_1 << endl;
		cout << "智力: " << Attribute_Int_1 << endl;
		cout << "运气: " << Attribute_Luck_1 << endl;
		cout << "\n" << endl;
		cout << "左手装备: " << Left_Hand_1 << endl;
		cout << "右手装备: " << Right_Hand_1 << endl;
		cout << "\n" << endl;
		cout << "背包:" << endl;
		cout << "背包[1]: " << Backpack_1_1 << ". | " << "背包[2]: " << Backpack_1_2 << ". | " << "背包[3]: " << Backpack_1_3 << ". | " << "背包[4]: " << Backpack_1_4 << "." << endl;
		cout << "\n" << endl;
		cout << "技能:" << endl;
		cout << "技能[1]: " << Skill_1_1 << ". | " << "技能[2]: " << Skill_1_2 << ". | " << "技能[3]: " << Skill_1_3 << ". | " << "技能[4]: " << Skill_1_4 << "." << endl;
		cout << "技能[5]: " << Skill_1_5 << ". | " << "技能[6]: " << Skill_1_6 << ". | " << "技能[7]: " << Skill_1_7 << ". | " << "技能[8]: " << Skill_1_8 << "." << endl;
		cout << "\n" << endl;
		cout << "履历:" << endl;
		cout << Record_1 << endl;
		cout << "\n" << endl;
	}
	else if (Kp_Off == 1 && Player_List == 2)
	{

	}
	else if (Kp_Off == 1 && Player_List == 3)
	{

	}
	else if (Kp_Off == 1 && Player_List == 4)
	{

	}
	else if (Kp_Off == 1 && Player_List == 5)
	{

	}
	else if (Kp_Off == 1 && Player_List == 6)
	{

	}
	//菜单
	cout << "菜单列表: " << endl;
	cout << "1.玩家姓名菜单." << endl;
	cout << "2.玩家年龄菜单." << endl;
	cout << "3.玩家属性菜单." << endl;
	cout << "4.玩家手持菜单." << endl;
	cout << "5.玩家背包菜单." << endl;
	cout << "6.玩家技能菜单." << endl;
	cout << "7.玩家履历菜单." << endl;
	cout << "8.玩家血量菜单." << endl;
	cout << "9.玩家理智菜单." << endl;
	cout << "10.内置骰子." << endl;
	cout << "输入栏: ";
	cin >> Menu_Open;
	switch (Menu_Open)
	{
		//玩家姓名菜单
	case 1:
		//非KP玩家
		if (Kp_Off == 0)
		{
			system("cls");
			cout << "启动玩家姓名菜单模块." << endl;
			cout << "请设定玩家名字." << endl;
			cout << "输入栏: ";
			cin >> Name_1;
		}
		//是KP玩家1
		else if (Kp_Off == 1 && Player_List == 1)
		{
			system("cls");
			cout << "启动玩家姓名菜单模块." << endl;
			cout << "请设定玩家[1]名字." << endl;
			cout << "输入栏: ";
			cin >> Name_1;
		}
		//是KP玩家2
		else if (Kp_Off == 1 && Player_List == 2)
		{
			system("cls");
			cout << "启动玩家姓名菜单模块." << endl;
			cout << "检测到多名玩家." << endl;
			cout << "请选择为几号玩家设定姓名?" << endl;
			cout << "1.选择1号玩家." << endl;
			cout << "2.选择2号玩家." << endl;
			cout << "输入栏: ";
			cin >> Menu_Name;
			switch (Menu_Name)
			{
				//选择为1号玩家设定姓名
			case 1:
				system("cls");
				cout << "您选择为1号玩家设定姓名." << endl;
				cout << "请输入1号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_1;
				break;
				//选择为2号玩家设定姓名
			case 2:
				system("cls");
				cout << "您选择为2号玩家设定姓名." << endl;
				cout << "请输入2号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_2;
				break;
			}
		}
		//是KP玩家3
		else if (Kp_Off == 1 && Player_List == 3)
		{
			system("cls");
			cout << "启动玩家姓名菜单模块." << endl;
			cout << "检测到多名玩家." << endl;
			cout << "请选择为几号玩家设定姓名?" << endl;
			cout << "1.选择1号玩家." << endl;
			cout << "2.选择2号玩家." << endl;
			cout << "3.选择3号玩家." << endl;
			cout << "输入栏: ";
			cin >> Menu_Name;
			switch (Menu_Name)
			{
				//选择为1号玩家设定姓名
			case 1:
				system("cls");
				cout << "您选择为1号玩家设定姓名." << endl;
				cout << "请输入1号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_1;
				break;
				//选择为2号玩家设定姓名
			case 2:
				system("cls");
				cout << "您选择为2号玩家设定姓名." << endl;
				cout << "请输入2号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_2;
				break;
				//选择为3号玩家设定姓名
			case 3:
				system("cls");
				cout << "您选择为3号玩家设定姓名." << endl;
				cout << "请输入3号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_3;
				break;
			}
		}
		//是KP玩家4
		else if (Kp_Off == 1 && Player_List == 4)
		{
			system("cls");
			cout << "启动玩家姓名菜单模块." << endl;
			cout << "检测到多名玩家." << endl;
			cout << "请选择为几号玩家设定姓名?" << endl;
			cout << "1.选择1号玩家." << endl;
			cout << "2.选择2号玩家." << endl;
			cout << "3.选择3号玩家." << endl;
			cout << "4.选择4号玩家." << endl;
			cout << "输入栏: ";
			cin >> Menu_Name;
			switch (Menu_Name)
			{
				//选择为1号玩家设定姓名
			case 1:
				system("cls");
				cout << "您选择为1号玩家设定姓名." << endl;
				cout << "请输入1号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_1;
				break;
				//选择为2号玩家设定姓名
			case 2:
				system("cls");
				cout << "您选择为2号玩家设定姓名." << endl;
				cout << "请输入2号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_2;
				break;
				//选择为3号玩家设定姓名
			case 3:
				system("cls");
				cout << "您选择为3号玩家设定姓名." << endl;
				cout << "请输入3号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_3;
				break;
				//选择为4号玩家设定姓名
			case 4:
				system("cls");
				cout << "您选择为4号玩家设定姓名." << endl;
				cout << "请输入4号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_4;
				break;
			}
		}
		//是KP玩家5
		else if (Kp_Off == 1 && Player_List == 5)
		{
			system("cls");
			cout << "启动玩家姓名菜单模块." << endl;
			cout << "检测到多名玩家." << endl;
			cout << "请选择为几号玩家设定姓名?" << endl;
			cout << "1.选择1号玩家." << endl;
			cout << "2.选择2号玩家." << endl;
			cout << "3.选择3号玩家." << endl;
			cout << "4.选择4号玩家." << endl;
			cout << "5.选择5号玩家." << endl;
			cout << "输入栏: ";
			cin >> Menu_Name;
			switch (Menu_Name)
			{
				//选择为1号玩家设定姓名
			case 1:
				system("cls");
				cout << "您选择为1号玩家设定姓名." << endl;
				cout << "请输入1号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_1;
				break;
				//选择为2号玩家设定姓名
			case 2:
				system("cls");
				cout << "您选择为2号玩家设定姓名." << endl;
				cout << "请输入2号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_2;
				break;
				//选择为3号玩家设定姓名
			case 3:
				system("cls");
				cout << "您选择为3号玩家设定姓名." << endl;
				cout << "请输入3号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_3;
				break;
				//选择为4号玩家设定姓名
			case 4:
				system("cls");
				cout << "您选择为4号玩家设定姓名." << endl;
				cout << "请输入4号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_4;
				break;
				//选择为5号玩家设定姓名
			case 5:
				system("cls");
				cout << "您选择为5号玩家设定姓名." << endl;
				cout << "请输入5号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_5;
				break;
			}
		}
		//是KP玩家6
		else if (Kp_Off == 1 && Player_List == 6)
		{
			system("cls");
			cout << "启动玩家姓名菜单模块." << endl;
			cout << "检测到多名玩家." << endl;
			cout << "请选择为几号玩家设定姓名?" << endl;
			cout << "1.选择1号玩家." << endl;
			cout << "2.选择2号玩家." << endl;
			cout << "3.选择3号玩家." << endl;
			cout << "4.选择4号玩家." << endl;
			cout << "5.选择5号玩家." << endl;
			cout << "6.选择6号玩家." << endl;
			cout << "输入栏: ";
			cin >> Menu_Name;
			switch (Menu_Name)
			{
				//选择为1号玩家设定姓名
			case 1:
				system("cls");
				cout << "您选择为1号玩家设定姓名." << endl;
				cout << "请输入1号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_1;
				break;
				//选择为2号玩家设定姓名
			case 2:
				system("cls");
				cout << "您选择为2号玩家设定姓名." << endl;
				cout << "请输入2号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_2;
				break;
				//选择为3号玩家设定姓名
			case 3:
				system("cls");
				cout << "您选择为3号玩家设定姓名." << endl;
				cout << "请输入3号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_3;
				break;
				//选择为4号玩家设定姓名
			case 4:
				system("cls");
				cout << "您选择为4号玩家设定姓名." << endl;
				cout << "请输入4号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_4;
				break;
				//选择为5号玩家设定姓名
			case 5:
				system("cls");
				cout << "您选择为5号玩家设定姓名." << endl;
				cout << "请输入5号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_5;
				break;
				//选择为6号玩家设定姓名
			case 6:
				system("cls");
				cout << "您选择为6号玩家设定姓名." << endl;
				cout << "请输入6号玩家的姓名." << endl;
				cout << "输入栏: ";
				cin >> Name_6;
				break;
			}
		}
		//玩家姓名菜单结束
		break;
	//玩家年龄菜单
	case 2:
		//非KP玩家
		if (Kp_Off == 0)
		{
			system("cls");
			cout << "启动玩家年龄菜单模块." << endl;
			cout << "请设定玩家年龄." << endl;
			cout << "输入栏: ";
			cin >> Player_Old_1;
		}
		//是KP玩家1
		else if (Kp_Off == 1 && Player_List == 1)
		{
			system("cls");
			cout << "启动玩家年龄菜单模块." << endl;
			cout << "请设定玩家年龄." << endl;
			cout << "输入栏: ";
			cin >> Player_Old_1;
		}
		//是KP玩家2
		else if (Kp_Off == 1 && Player_List == 2)
		{
			system("cls");
			cout << "启动玩家年龄菜单模块." << endl;
			cout << "检测到多名玩家." << endl;
			cout << "请选择为几号玩家设定年龄?" << endl;
			cout << "1.选择1号玩家." << endl;
			cout << "2.选择2号玩家." << endl;
			cout << "输入栏: ";
			cin >> Menu_Old;
			switch (Menu_Old)
			{
			//为1号玩家设定年龄
			case 1:
				system("cls");
				cout << "您选择为1号玩家设定年龄." << endl;
				cout << "请输入1号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_1;
				break;
			//为2号玩家设定年龄
			case 2:
				system("cls");
				cout << "您选择为2号玩家设定年龄." << endl;
				cout << "请输入2号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_2;
				break;
			}
		}
		//是KP玩家3
		else if (Kp_Off == 1 && Player_List == 3)
		{
			system("cls");
			cout << "启动玩家年龄菜单模块." << endl;
			cout << "检测到多名玩家." << endl;
			cout << "请选择为几号玩家设定年龄?" << endl;
			cout << "1.选择1号玩家." << endl;
			cout << "2.选择2号玩家." << endl;
			cout << "3.选择3号玩家." << endl;
			cout << "输入栏: ";
			cin >> Menu_Old;
			switch (Menu_Old)
			{
				//为1号玩家设定年龄
			case 1:
				system("cls");
				cout << "您选择为1号玩家设定年龄." << endl;
				cout << "请输入1号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_1;
				break;
				//为2号玩家设定年龄
			case 2:
				system("cls");
				cout << "您选择为2号玩家设定年龄." << endl;
				cout << "请输入2号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_2;
				break;
				//为3号玩家设定年龄
			case 3:
				system("cls");
				cout << "您选择为3号玩家设定年龄." << endl;
				cout << "请输入3号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_3;
				break;
			}
		}
		//是KP玩家4
		else if (Kp_Off == 1 && Player_List == 4)
		{
			system("cls");
			cout << "启动玩家年龄菜单模块." << endl;
			cout << "检测到多名玩家." << endl;
			cout << "请选择为几号玩家设定年龄?" << endl;
			cout << "1.选择1号玩家." << endl;
			cout << "2.选择2号玩家." << endl;
			cout << "3.选择3号玩家." << endl;
			cout << "4.选择4号玩家." << endl;
			cout << "输入栏: ";
			cin >> Menu_Old;
			switch (Menu_Old)
			{
				//为1号玩家设定年龄
			case 1:
				system("cls");
				cout << "您选择为1号玩家设定年龄." << endl;
				cout << "请输入1号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_1;
				break;
				//为2号玩家设定年龄
			case 2:
				system("cls");
				cout << "您选择为2号玩家设定年龄." << endl;
				cout << "请输入2号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_2;
				break;
				//为3号玩家设定年龄
			case 3:
				system("cls");
				cout << "您选择为3号玩家设定年龄." << endl;
				cout << "请输入3号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_3;
				break;
				//为4号玩家设定年龄
			case 4:
				system("cls");
				cout << "您选择为4号玩家设定年龄." << endl;
				cout << "请输入4号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_4;
				break;
			}
		}
		//是KP玩家5
		else if (Kp_Off == 1 && Player_List == 5)
		{
			system("cls");
			cout << "启动玩家年龄菜单模块." << endl;
			cout << "检测到多名玩家." << endl;
			cout << "请选择为几号玩家设定年龄?" << endl;
			cout << "1.选择1号玩家." << endl;
			cout << "2.选择2号玩家." << endl;
			cout << "3.选择3号玩家." << endl;
			cout << "4.选择4号玩家." << endl;
			cout << "5.选择5号玩家." << endl;
			cout << "输入栏: ";
			cin >> Menu_Old;
			switch (Menu_Old)
			{
				//为1号玩家设定年龄
			case 1:
				system("cls");
				cout << "您选择为1号玩家设定年龄." << endl;
				cout << "请输入1号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_1;
				break;
				//为2号玩家设定年龄
			case 2:
				system("cls");
				cout << "您选择为2号玩家设定年龄." << endl;
				cout << "请输入2号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_2;
				break;
				//为3号玩家设定年龄
			case 3:
				system("cls");
				cout << "您选择为3号玩家设定年龄." << endl;
				cout << "请输入3号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_3;
				break;
				//为4号玩家设定年龄
			case 4:
				system("cls");
				cout << "您选择为4号玩家设定年龄." << endl;
				cout << "请输入4号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_4;
				break;
			case 5:
				system("cls");
				cout << "您选择为5号玩家设定年龄." << endl;
				cout << "请输入5号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_5;
				break;
			}
		}
		//是KP玩家6
		else if (Kp_Off == 1 && Player_List == 6)
		{
			system("cls");
			cout << "启动玩家年龄菜单模块." << endl;
			cout << "检测到多名玩家." << endl;
			cout << "请选择为几号玩家设定年龄?" << endl;
			cout << "1.选择1号玩家." << endl;
			cout << "2.选择2号玩家." << endl;
			cout << "3.选择3号玩家." << endl;
			cout << "4.选择4号玩家." << endl;
			cout << "5.选择5号玩家." << endl;
			cout << "6.选择6号玩家." << endl;
			cout << "输入栏: ";
			cin >> Menu_Old;
			switch (Menu_Old)
			{
				//为1号玩家设定年龄
			case 1:
				system("cls");
				cout << "您选择为1号玩家设定年龄." << endl;
				cout << "请输入1号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_1;
				break;
				//为2号玩家设定年龄
			case 2:
				system("cls");
				cout << "您选择为2号玩家设定年龄." << endl;
				cout << "请输入2号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_2;
				break;
				//为3号玩家设定年龄
			case 3:
				system("cls");
				cout << "您选择为3号玩家设定年龄." << endl;
				cout << "请输入3号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_3;
				break;
				//为4号玩家设定年龄
			case 4:
				system("cls");
				cout << "您选择为4号玩家设定年龄." << endl;
				cout << "请输入4号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_4;
				break;
			case 5:
				system("cls");
				cout << "您选择为5号玩家设定年龄." << endl;
				cout << "请输入5号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_5;
				break;
			case 6:
				system("cls");
				cout << "您选择为6号玩家设定年龄." << endl;
				cout << "请输入6号玩家的年龄." << endl;
				cout << "输入栏: ";
				cin >> Player_Old_6;
				break;
			}
		}
		//玩家年龄菜单结束
		break;
	}
	system("cls");
	goto L1;
}
