#include <thread>
#include <iostream>s
//Linux -pthread
using namespace std;
void ThreadMain()
{
	cout << " begin thread mian " << this_thread::get_id() << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "in thread" << i << endl;
		this_thread::sleep_for(chrono::seconds(1));  // 1000ms
	}
	cout << " end sub thread mian " << this_thread::get_id() << endl;
}

int main(int argc, char* argv[])
{
	cout << " mian thread ID " << this_thread::get_id() << endl;
	//�̴߳�������
	thread th(ThreadMain);
	cout << " begin wait sub thread " << endl;
	//�����ȴ����߳��˳�
	th.join();
	cout << " end wait sub thread " << endl;
	return 0;
}