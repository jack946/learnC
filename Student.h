#pragma once

class Student
{
private:
	char* pvno;
	char* pvname;
	int pvscore;
public:
	Student(char* no, char* name, int score);
	~Student();
	friend void show(const Student &stu);     //通过普通函数show输出学生信息

};
