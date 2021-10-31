#include <stdlib.h>
#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
semaphore wait = 1；  // 互斥信号量，表示独木桥的数量
int count1 = 0;       // 东侧车辆在独木桥上的数量
semaphore mutex1 = 1; // 东侧车辆的互斥信号量，保证count1操作的完整执行
int count2 = 0;       // 西侧车辆在独木桥上的数量
semaphore mutex2 = 1; // 西侧车辆的互斥信号量，保证count2操作的完整执行
semaphore stop = 1;   // 上桥许可证，表示同一时刻桥上只有来自同一方向的车

cobegin
process P东() {
	P(stop);
		P(mutex1);
		count1++;
		if(count1 == 1)  // 东侧第一个准备上桥的车去抢夺独木桥
			P(wait);
		V(mutex1);
	V(stop);
	{过独木桥};
	P(mutex1);
	count1--;
	if(count1 == 0)      // 东侧最后一个已经下桥的车去释放独木桥
		V(wait);
	V(mutex1);
}

process P西() {
	P(stop);
		P(mutex2);
		count2++;
		if(count2 == 1)  // 西侧第一个准备上桥的车去抢夺独木桥
			P(wait);
		V(mutex2);
	V(stop);
	{过独木桥};
	P(mutex2);
	count2--;
	if(count2 == 0)  // 西侧最后一个已经下桥的车去释放独木桥
		V(wait);
	V(mutex2);
}
coend
