//运算符重载
//对已有的运算符重新进行定义，赋予其另外一种功能，以适应不同数据类型
//1、通过成员函数重载+号 
//2、通过全局函数重载加号
//编译器给起一个通用名称 operator+
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
//	Person p3 = p1 + p2; 本质 Person p3=p1.operator(p2)
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
//	Person p3 = p1 + p2;本质 Person p3=operator(p1,p2);
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

//运算符重载也可以发生函数重载
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
//	Person p3 = p1 + p2;//本质 Person p3=operator(p1,p2);
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
//对于内置的数据类型的表达式的运算符是不可能改变的
//不要滥用运算符重载

//左移运算符重载
//作用：可以输出自定义数据类型
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//
//	//通过成员函数重载<< 左移运算符 p.operator(cout)  简化版为p<<cout
//	//不能利用成员函数重载<<运算符 因为无法实现cout在左侧
//
//	/*void opeartor << (cout)
//	{
//
//	}*/
//	int m_A;
//	int m_B;
//};
////通过全局函数重载左移运算符
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
//	cout << p1<<"end" << endl;//链式编程
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//递增运算符重载
//作用：通过重载运递增运算符，实现自己的整型数据

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
//MyInt& operator++(MyInt &m)//重载前置++
//{
//	m.myint ++;
//	return m;
//}
//MyInt operator++(MyInt &m,int)// int 占位参数 可以用于区分前置和后置递增
//{
//	//先 记录当时结果
//	//后 递增
//	//最后将记录的结果返回
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

//赋值运算符重载
//c++编译器至少给一个类添加4各函数
//1、默认构造函数（无参 函数体为空）
//2、默认析构函数（无参 函数体为空）
//3.默认拷贝构造函数，对属性值进行拷贝
//4、赋值运算符operator=，对属性值进行拷贝
//
//如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person(int age)
//	{
//		//将年龄数据开辟到堆区
//		m_age = new int(age);
//	}
//	~Person()//析构函数
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
//	Person& operator=(Person &p)//重载赋值运算符
//	{
//		m_age = new int(*p.m_age);//编译器给的代码是浅拷贝 m_age=p.m_age
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
//	cout << "年龄是：" << *p1.m_age << endl;
//	cout << "年龄是：" << *p2.m_age << endl;
//	cout << "年龄是：" << *p3.m_age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//关系运算符重载
//作用 重载关系运算符 可以让两个自定义类型对象进行对比操作
//==  ！=


//函数调用运算符重载
//函数调用运算符（）重载
//由于重载后使用的方式非常像函数的调用，因此称为仿函数
//仿函数没有固定的写法 非常灵活

//打印类
//加法类
//匿名函数对象
//MyAdd myadd;
//int ret = MyAdd(100, 100);
//cout << ret < , endl;
//cout << myadd()(100, 100) << endl;//myadd()为匿名对象