#include<iostream>
#include<string>

using namespace std;

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性

//设计人类
class Person
{
public:
	//写姓名 
	 void setName(string name)
	 {
	 	m_Name = name;
	 }
	//读姓名 
	string getName()
	{
		return m_Name;
	}
	
	//读年龄  可读可写 如果想修改（范围必须是0~150之间） 
	int getAge()
	{
		//m_Age = 0;//初始化年龄 为0岁 
		return m_Age;
	 } 
	//写年龄
	void setAge(int age)
	{
		if(age<0||age>150)
		{
			m_Age=0;
			cout<<"非人类"<<endl;
			return;
		}
		m_Age=age;
	 } 
	 
	 //写情人
	 void setLover(string lover) 
	 {
	 	m_Lover=lover;
	 }

private:	
	//姓名  可读可写 
	string m_Name;
	//年龄  只读 
	int m_Age;
	//情人  只写 
	string m_Lover; 
 };

int main()
{
	Person p;
	p.setName("张三");
	
	cout<<"姓名为："<<p.getName()<<endl;
	p.setAge(18);
	cout<<"年龄为"<<p.getAge()<<endl; 
	
	p.setLover("赵四");
	
	
	return 0;
 } 
