#pragma warning(disable:4996)
#include <stdio.h>

main()
{
	int d1, d2, d, m, i, a, b;
	d1 = 1;
	i = 0;

	printf("�����м���Ӳ�ң� \n");
	scanf("%d", &d2);
	printf("����ٱ��ǵڼ����� \n");
	scanf("%d", &m);

	d = d2 - d1 + 1;
	if (d == 1)
	{
		printf("�ҵ�Ӳ�ң���%d�Ρ�\n", i);
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
				printf("��Ӳ��ƽ����Ϊ����\n");
			}
			else if (d % 3 == 1)
			{
				a = (2 * d1 + d2 - 3) / 3;
				b = (d1 + 2 * d2 - 3) / 3;
				printf("��Ӳ�ҷ�Ϊ���ѣ����һ�Ѷ�һ����\n");
			}
			else
			{
				a = (2 * d1 + d2 - 1) / 3;
				b = (d1 + 2 * d2 + 1) / 3;
				printf("��Ӳ�ҷ�Ϊ���ѣ����һ����һ����\n");
			}

			if (m <= a)
			{
				d2 = a;
				printf("�ٱ��ڵ�һ�ѡ�\n");
				++i;
			}
			else if (m > a && m <= b)
			{
				d1 = a + 1;
				d2 = b;
				printf("�ٱ��ڵڶ��ѡ�\n");
				++i;
			}
			else
			{
				d1 = b + 1;
				printf("�ٱҲ��ڵ�һ�ѻ�ڶ��ѣ��ڵ����ѡ�\n");
				++i;
			}

			d = d2 - d1 + 1;
		}
		++i;
		printf("�ҵ�Ӳ�ң���%d�Ρ�\n", i);
		system("pause");
		goto end;
	}

end:
	system("pause");
	return 0;
}