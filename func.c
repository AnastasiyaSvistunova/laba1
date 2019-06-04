# include  < stdio.h >
# include  < fh >
# include  < math.h >



двойная  сумма(n)
{
	int i = 0;
	double a = 0;
	делать
	{
		a + = pow(-1 , i) * ((1 + 3 * i) / (pow(3 , i)));
		++я;
	} while (i <= n - 1);
	вернуть;
}


double  summ2(двойной eps)
{
	double a = pow(-1, 0) * ((1 + 3 * 0) / (pow(3, 0)));
	двойной с = а;
	int i = 1;
	делать
	{

		a = pow(-1 , i) * ((1 + 3 * i) / (pow(3 , i)));
		s = s + a;
		++я;
	} while (fabs(a) > eps);
	возврат с;
}


void  print(int n, int k)
{
	int q = 1;
	int i = 0;
	делать
	{
		если(q == k)
		{
			q = 1;
			продолжить;
		}
		еще
		{
			double a = pow(-1 , i) * ((1 + 3 * i) / (pow(3 , i)));
			printf(" % .3lf  " , а);
		}
		++д;
		++я;
	} while (i <= n - 1);
}



int  findFirstElement(двойной eps)
{
	int i = 0;
	делать
	{
		double a = pow(-1 , i) * ((1 + 3 * i) / (pow(3 , i)));
		if (fabs(a) <= eps)
		{
			перерыв;
		}
		++я;
	} while (1);
	вернуть я;
}



int  findFirstNegativeElement(двойной eps)
{
	int i = 0;
	делать
	{
		double a = pow(-1 , i) * ((1 + 3 * i) / (pow(3 , i)));
		if (fabs(a) <= eps && a < 0)
		{
			вернуть я;
		}
		++я;
	} while (1);
}