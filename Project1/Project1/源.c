#include <stdio.h>

main()
{
	int d1, d2, d, m, i, a;
	d1 = 1;
	i = 0;

	printf("�����м���Ӳ�ң� \n");
	scanf_s("%d", &d2, 10);
	printf("����ٱ��ǵڼ����� \n");
	scanf_s("%d", &m, 10);

	d = d2 - d1 + 1;
	if (d = 1)
	{
		printf("�ҵ�Ӳ�ң���%d�Ρ�\n", i);
	    goto end;
    }
	else
	{
		while (d >= 4)
		{
			if (d % 2 == 0)            /*ż��*/
			{
				a = (d2 + d1 - 1) / 2;
				if (m <= a)
				{
					++i;
					d2 = a;
					d = d2 - d1 + 1;
					printf("�ٱ���ǰ��ѡ�\n");
				}
				else
				{
					++i;
					d1 = a + 1;
					d = d2 - d1 + 1;
					printf("�ٱ��ں��ѡ�\n");
				}
			}
			else                  /*����*/
			{
				if (m == d2)
					goto goodluck;
				else
				{
					d2 = d2 - 1;
					d = d2 - d1 + 1;
					printf("�������һ��Ӳ�ҽ��ж԰��\n");
				}
			}
		}
		++i;
		printf("�ҵ�Ӳ�ң���%d�Ρ�\n", i);
		system("pause");
		goto end;

	goodluck:
		++i;
		printf("��Ʒ�󱬷����ҵ�Ӳ�ң���%d�Ρ�\n", i);
	}

end:
	system("pause");
	return 0;
}