#include<iostream> 
#include <string>

using namespace std;

class Student
{
	public://����Ȩ��
	
		//���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
		
		//����    ��Ա����  ��Ա����
		//��Ϊ    ��Ա����  ��Ա����
		
		//���� 
		string m_name;
		int m_num;
		//��Ϊ 
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
			cout<<"ѧ�ţ�"<<m_num<<"������"<<m_name<<endl;
		}
};
int main()
{
	//ʵ�������󣨴���һ��ѧ���� 
	Student s1;
	//������������Ը�ֵ���� 
	s1.setName("����"); 
	s1.setNum(101);
	s1.display();
	
	return 0;
}
