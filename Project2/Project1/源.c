#pragma warning(disable:4996)
#include <stdio.h>

main()
{
	int d1, d2, d, m, i, a, b;
	d1 = 1;
	i = 0;

	printf("输入有几个硬币： \n");
	scanf("%d", &d2);
	printf("输入假币是第几个： \n");
	scanf("%d", &m);

	d = d2 - d1 + 1;
	if (d == 1)
	{
		printf("找到硬币，用%d次。\n", i);
	    goto end;
    }
	else
	{
		while (d >= 4)
		{
			if (d % 3 == 0)
			{
				a = (2 * d1 + d2 - 2) / 3;
				b = (d1 + 2 * d2 - 1) / 3;
				printf("将硬币平均分为三堆\n");
			}
			else if (d % 3 == 1)
			{
				a = (2 * d1 + d2 - 3) / 3;
				b = (d1 + 2 * d2 - 3) / 3;
				printf("将硬币分为三堆，最后一堆多一个。\n");
			}
			else
			{
				a = (2 * d1 + d2 - 1) / 3;
				b = (d1 + 2 * d2 + 1) / 3;
				printf("将硬币分为三堆，最后一堆少一个。\n");
			}

			if (m <= a)
			{
				d2 = a;
				printf("假币在第一堆。\n");
				++i;
			}
			else if (m > a && m <= b)
			{
				d1 = a + 1;
				d2 = b;
				printf("假币在第二堆。\n");
				++i;
			}
			else
			{
				d1 = b + 1;
				printf("假币不在第一堆或第二堆，在第三堆。\n");
				++i;
			}

			d = d2 - d1 + 1;
		}
		++i;
		printf("找到硬币，用%d次。\n", i);
		system("pause");
		goto end;
	}

end:
	system("pause");
	return 0;
}