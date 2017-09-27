#include <stdio.h>

main()
{
	int d1, d2, d, m, i, a;
	d1 = 1;
	i = 0;

	printf("输入有几个硬币： \n");
	scanf_s("%d", &d2, 10);
	printf("输入假币是第几个： \n");
	scanf_s("%d", &m, 10);

	d = d2 - d1 + 1;
	if (d = 1)
	{
		printf("找到硬币，用%d次。\n", i);
	    goto end;
    }
	else
	{
		while (d >= 4)
		{
			if (d % 2 == 0)            /*偶数*/
			{
				a = (d2 + d1 - 1) / 2;
				if (m <= a)
				{
					++i;
					d2 = a;
					d = d2 - d1 + 1;
					printf("假币在前半堆。\n");
				}
				else
				{
					++i;
					d1 = a + 1;
					d = d2 - d1 + 1;
					printf("假币在后半堆。\n");
				}
			}
			else                  /*奇数*/
			{
				if (m == d2)
					goto goodluck;
				else
				{
					d2 = d2 - 1;
					d = d2 - d1 + 1;
					printf("拿走最后一个硬币进行对半分\n");
				}
			}
		}
		++i;
		printf("找到硬币，用%d次。\n", i);
		system("pause");
		goto end;

	goodluck:
		++i;
		printf("人品大爆发，找到硬币，用%d次。\n", i);
	}

end:
	system("pause");
	return 0;
}