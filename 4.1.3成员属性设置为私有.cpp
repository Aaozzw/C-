#include<iostream>
#include<string>

using namespace std;

//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

//�������
class Person
{
public:
	//д���� 
	 void setName(string name)
	 {
	 	m_Name = name;
	 }
	//������ 
	string getName()
	{
		return m_Name;
	}
	
	//������  �ɶ���д ������޸ģ���Χ������0~150֮�䣩 
	int getAge()
	{
		//m_Age = 0;//��ʼ������ Ϊ0�� 
		return m_Age;
	 } 
	//д����
	void setAge(int age)
	{
		if(age<0||age>150)
		{
			m_Age=0;
			cout<<"������"<<endl;
			return;
		}
		m_Age=age;
	 } 
	 
	 //д����
	 void setLover(string lover) 
	 {
	 	m_Lover=lover;
	 }

private:	
	//����  �ɶ���д 
	string m_Name;
	//����  ֻ�� 
	int m_Age;
	//����  ֻд 
	string m_Lover; 
 };

int main()
{
	Person p;
	p.setName("����");
	
	cout<<"����Ϊ��"<<p.getName()<<endl;
	p.setAge(18);
	cout<<"����Ϊ"<<p.getAge()<<endl; 
	
	p.setLover("����");
	
	
	return 0;
 } 
