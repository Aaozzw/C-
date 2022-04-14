#include<iostream> 
#include <string>

using namespace std;

class Student
{
	public://公共权限
	
		//类中的属性和行为 我们统一称为 成员
		
		//属性    成员属性  成员变量
		//行为    成员函数  成员方法
		
		//属性 
		string m_name;
		int m_num;
		//行为 
		void setName(string name)
		{
			m_name = name;
		}
		void setNum(int num)
		{
			m_num = num;
		}
		void display()
		{
			cout<<"学号："<<m_num<<"姓名："<<m_name<<endl;
		}
};
int main()
{
	//实例化对象（创建一个学生） 
	Student s1;
	//给对象进行属性赋值操作 
	s1.setName("张三"); 
	s1.setNum(101);
	s1.display();
	
	return 0;
}
