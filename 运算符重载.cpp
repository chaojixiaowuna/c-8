//���������
//�����е���������½��ж��壬����������һ�ֹ��ܣ�����Ӧ��ͬ��������
//1��ͨ����Ա��������+�� 
//2��ͨ��ȫ�ֺ������ؼӺ�
//����������һ��ͨ������ operator+
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	
//	Person operator+(Person p)
//	{
//		Person temp;
//		temp.m_A =this->m_A+ p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}
//	int m_A;
//	int m_B;
//};
//void print(int a)
//{
//	cout << a << endl;
//}
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 5;
//	p2.m_B = 5;
//
//	Person p3 = p1 + p2; ���� Person p3=p1.operator(p2)
//	print(p3.m_A);
//	print(p3.m_B);
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//
//	int m_A;
//	int m_B;
//};
//void print(int a)
//{
//	cout << a << endl;
//}
//Person operator+(Person p1,Person p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 5;
//	p2.m_B = 5;
//
//	Person p3 = p1 + p2;���� Person p3=operator(p1,p2);
//	print(p3.m_A);
//	print(p3.m_B);
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//���������Ҳ���Է�����������
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//
//	int m_A;
//	int m_B;
//};
//void print(int a)
//{
//	cout << a << endl;
//}
//Person operator+(Person p1,Person p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//Person operator+(Person p1,int a)
//{
//	Person temp;
//	temp.m_A = p1.m_A + a;
//	temp.m_B = p1.m_B +a;
//	return temp;
//}
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 5;
//	p2.m_B = 5;
//
//	Person p3 = p1 + p2;//���� Person p3=operator(p1,p2);
//	print(p3.m_A);
//	print(p3.m_B);
//
//	Person p4 = p1 + 10;
//	print(p4.m_A);
//	print(p4.m_B);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//�������õ��������͵ı��ʽ��������ǲ����ܸı��
//��Ҫ�������������

//�������������
//���ã���������Զ�����������
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//
//	//ͨ����Ա��������<< ��������� p.operator(cout)  �򻯰�Ϊp<<cout
//	//�������ó�Ա��������<<����� ��Ϊ�޷�ʵ��cout�����
//
//	/*void opeartor << (cout)
//	{
//
//	}*/
//	int m_A;
//	int m_B;
//};
////ͨ��ȫ�ֺ����������������
//ostream& operator<<(ostream &cout, Person &p)
//{
//	cout <<"m_A=" << p.m_A << endl;
//	cout <<"m_B=" << p.m_B << endl;
//	return cout;
//}
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 9;
//	operator<<(cout, p1);
//	cout << p1<<"end" << endl;//��ʽ���
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//�������������
//���ã�ͨ�������˵����������ʵ���Լ�����������

//#include<iostream>
//using namespace std;
//class MyInt
//{
//	friend MyInt operator++(MyInt& m, int);
//	friend MyInt& operator++(MyInt& m);
//	friend ostream& operator<<(ostream& cout, MyInt p);
//public:
//	MyInt()
//	{
//		myint = 0;
//	}
//	
//private:
//	int myint;
//};
//MyInt& operator++(MyInt &m)//����ǰ��++
//{
//	m.myint ++;
//	return m;
//}
//MyInt operator++(MyInt &m,int)// int ռλ���� ������������ǰ�úͺ��õ���
//{
//	//�� ��¼��ʱ���
//	//�� ����
//	//��󽫼�¼�Ľ������
//	MyInt a;
//	a = m;
//	++m.myint;
//	return a;
//}
//ostream& operator<<(ostream &cout, MyInt p)
//{
//	cout <<"myint=" << p.myint << endl;
//	return cout;
//}
//void test01()
//{
//	MyInt m;
//	cout<< (++m) << endl;
//	cout << m << endl;
//	cout << m++ << endl;
//	cout << m << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//��ֵ���������
//c++���������ٸ�һ�������4������
//1��Ĭ�Ϲ��캯�����޲� ������Ϊ�գ�
//2��Ĭ�������������޲� ������Ϊ�գ�
//3.Ĭ�Ͽ������캯����������ֵ���п���
//4����ֵ�����operator=��������ֵ���п���
//
//�������������ָ�����������ֵ����ʱҲ�������ǳ��������
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person(int age)
//	{
//		//���������ݿ��ٵ�����
//		m_age = new int(age);
//	}
//	~Person()//��������
//	{
//		if (m_age == NULL)
//		{
//			return;
//		}
//		else
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//	Person& operator=(Person &p)//���ظ�ֵ�����
//	{
//		m_age = new int(*p.m_age);//���������Ĵ�����ǳ���� m_age=p.m_age
//		return *this;
//	}
//	int *m_age;
//};
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p2 = p1;
//	p3 = p2 = p1;
//	cout << "�����ǣ�" << *p1.m_age << endl;
//	cout << "�����ǣ�" << *p2.m_age << endl;
//	cout << "�����ǣ�" << *p3.m_age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//��ϵ���������
//���� ���ع�ϵ����� �����������Զ������Ͷ�����жԱȲ���
//==  ��=


//�����������������
//���������������������
//�������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
//�º���û�й̶���д�� �ǳ����

//��ӡ��
//�ӷ���
//������������
//MyAdd myadd;
//int ret = MyAdd(100, 100);
//cout << ret < , endl;
//cout << myadd()(100, 100) << endl;//myadd()Ϊ��������