#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<Windows.h>

void main() {

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int a = 0;
	printf("����� �� ������ ������� ����������������?\n� �� ����, �������� �� ����-1\n��� �����-2\n������������-3\n���������-4\nC�����������-5\n����������-6\n");
	scanf("%d", &a);

	if (a == 1)
	{
		SetConsoleTextAttribute(hConsole, 14);
		printf("PYTHON\n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (a == 2)
	{
		SetConsoleTextAttribute(hConsole, 14);
		printf("������� �� Scratch, �����...PYTHON\n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (a == 3)
	{
		printf("��� ���� ���� �� �������?\n���, ������ ���� ������-1\n��-2\n");
		scanf("%d", &a);

		if (a == 1)
		{
			printf("��� �������� �������...������� ��������-1 ������ ��������-2 ����������� ��������-3 ����� ������� ����(�� ����� ����� �����)-4\n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 14);
				printf("PYTHON \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				SetConsoleTextAttribute(hConsole, 14);
				printf("PYTHON \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 3)
			{
				printf("����� ������� �������? �������-1, ������-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("C \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
		}
		else
		{
			printf("����� ���������/�����? 3D ����-1 ��������� -2 ����.����-3 ���-4 \n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				printf("����� OS? IOS-1 Android-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("C \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else if (a == 3)
			{
				printf("��� ������� � Microsoft? ����� ���-1 �������-2 ����-3\n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("C# \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
				printf("��� ������ ����� �������� � �������� �������, ��� twitter? ��-1 ���-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("JAVASCRIPT \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					printf("������ ����������� ���-�� �����, �� �� ����� ���������? �� ����-1 ���-2\n");
					scanf("%d", &a);

					if (a == 1)
					{
						printf("����� � ��� ������� �������? ����-1 ���������-2 ����������, �� ������� �����-3 \n");
						scanf("%d", &a);

						if (a == 1)
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("PYTHON \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2)
						{
							SetConsoleTextAttribute(hConsole, 12);
							printf("RUBY \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("PHP \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
					else
					{
						printf("����� � ��� ������� �������? ����-1 ���������-2 ����������, �� ������� �����-3 \n");
						scanf("%d", &a);

						if (a == 1)
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("PYTHON \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2)
						{
							SetConsoleTextAttribute(hConsole, 12);
							printf("RUBY \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("PHP \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
				}
			}
		}
	}
	else if (a == 4)
	{
		printf("��� ���� ���� �� �������?\n���, ������ ���� ������-1\n��-2\n");
		scanf("%d", &a);

		if (a == 1)
		{
			printf("��� �������� �������...������� ��������-1 ������ ��������-2 ����������� ��������-3 ����� ������� ����(�� ����� ����� �����)-4\n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 14);
				printf("PYTHON \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				SetConsoleTextAttribute(hConsole, 14);
				printf("PYTHON \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 3)
			{
				printf("����� ������� �������? �������-1, ������-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("C \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
		}
		else
		{
			printf("����� ���������/�����? 3D ����-1 ��������� -2 ����.����-3 ���-4 \n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				printf("����� OS? IOS-1 Android-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("C \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else if (a == 3)
			{
				printf("��� ������� � Microsoft? ����� ���-1 �������-2 ����-3\n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("C# \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
				printf("��� ������ ����� �������� � �������� �������, ��� twitter? ��-1 ���-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("JAVASCRIPT \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					printf("������ ����������� ���-�� �����, �� �� ����� ���������? �� ����-1 ���-2\n");
					scanf("%d", &a);

					if (a == 1)
					{
						printf("����� � ��� ������� �������? ����-1 ���������-2 ����������, �� ������� �����-3 \n");
						scanf("%d", &a);

						if (a == 1)
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("PYTHON \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2)
						{
							SetConsoleTextAttribute(hConsole, 12);
							printf("RUBY \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("PHP \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
					else
					{
						printf("����� � ��� ������� �������? ����-1 ���������-2 ����������, �� ������� �����-3 \n");
						scanf("%d", &a);

						if (a == 1)
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("PYTHON \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2)
						{
							SetConsoleTextAttribute(hConsole, 12);
							printf("RUBY \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("PHP \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
				}
			}
		}
	}
	else if (a == 5)
	{
		printf("��� ���� ���� �� �������?\n���, ������ ���� ������-1\n��-2\n");
		scanf("%d", &a);

		if (a == 1)
		{
			printf("��� �������� �������...������� ��������-1 ������ ��������-2 ����������� ��������-3 ����� ������� ����(�� ����� ����� �����)-4\n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 14);
				printf("PYTHON \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				SetConsoleTextAttribute(hConsole, 14);
				printf("PYTHON \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 3)
			{
				printf("����� ������� �������? �������-1, ������-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("C \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
		}
		else
		{
			printf("����� ���������/�����? 3D ����-1 ��������� -2 ����.����-3 ���-4 \n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				printf("����� OS? IOS-1 Android-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("C \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else if (a == 3)
			{
				printf("��� ������� � Microsoft? ����� ���-1 �������-2 ����-3\n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("C# \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
				printf("��� ������ ����� �������� � �������� �������, ��� twitter? ��-1 ���-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("JAVASCRIPT \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					printf("������ ����������� ���-�� �����, �� �� ����� ���������? �� ����-1 ���-2\n");
					scanf("%d", &a);

					if (a == 1)
					{
						printf("����� � ��� ������� �������? ����-1 ���������-2 ����������, �� ������� �����-3 \n");
						scanf("%d", &a);

						if (a == 1)
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("PYTHON \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2)
						{
							SetConsoleTextAttribute(hConsole, 12);
							printf("RUBY \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("PHP \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
					else
					{
						printf("����� � ��� ������� �������? ����-1 ���������-2 ����������, �� ������� �����-3 \n");
						scanf("%d", &a);

						if (a == 1)
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("PYTHON \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2)
						{
							SetConsoleTextAttribute(hConsole, 12);
							printf("RUBY \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("PHP \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
				}
			}
		}
	}
	else
	{
		printf("����� ������-1 � ���� ���� ���� ��� ��������-2\n");
		scanf("%d", &a);

		if (a == 1)
		{
			printf("����� ���������/�����? 3D/����-1 ���������-2 ����.����-3 ���-4 � ������ ���� $$$ -5 � ���� �������� � ������� IT-��������-6\n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				printf("����� OS? IOS-1 Android-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("C \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else if (a == 3)
			{
				printf("��� ������� � Microsoft? ����� ���-1 �������-2 ����-3\n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("C# \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else if (a == 4)
			{
				printf("��������(���-���������) - 1 ������(��, ��� �� ���������) - 2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("JAVASCRIPT \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					printf("���� �������� ��....�������-1 ����������-2 \n");
					scanf("%d", &a);

					if (a == 1)
					{
						printf("������ ����������� ���-�� �����, �� �� ����� ���������? �� ����-1 ���-2\n");
						scanf("%d", &a);

						if (a == 1)
						{
							printf("����� � ��� ������� �������? ����-1 ���������-2 ����������, �� ������� �����-3 \n");
							scanf("%d", &a);

							if (a == 1)
							{
								SetConsoleTextAttribute(hConsole, 10);
								printf("PYTHON \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else if (a == 2)
							{
								SetConsoleTextAttribute(hConsole, 12);
								printf("RUBY \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else
							{
								SetConsoleTextAttribute(hConsole, 11);
								printf("PHP \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
						}
					}
					else
					{
						printf("��� ������� � Microsoft? ����� ���-1 �������-2 ����-3\n");
						scanf("%d", &a);

						if (a == 1)
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("C# \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("JAVA \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("JAVA \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
				}

			}
			else if (a == 5)
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("JAVA \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else
			{
				printf("Facebook-1 Google-2 Microsoft-3 Apple-4 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("PYTHON \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2)
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("PYTHON \n");
					SetConsoleTextAttribute(hConsole, 10);
				}
				else if (a == 3)
				{
					SetConsoleTextAttribute(hConsole, 12);
					printf("C# \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 14);
					printf("Objective-C \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
		}
		else
		{
			printf("� ���� ���� ���� ��� ��������!!!");
			printf("����� ���������/�����? 3D ����-1 ��������� -2 ����.����-3 ���-4 \n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				printf("����� OS? IOS-1 Android-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("C \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else if (a == 3)
			{
				printf("��� ������� � Microsoft? ����� ���-1 �������-2 ����-3\n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("C# \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (a == 2)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("JAVA \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
				printf("��� ������ ����� �������� � �������� �������, ��� twitter? ��-1 ���-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("JAVASCRIPT \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					printf("������ ����������� ���-�� �����, �� �� ����� ���������? �� ����-1 ���-2\n");
					scanf("%d", &a);

					if (a == 1)
					{
						printf("����� � ��� ������� �������? ����-1 ���������-2 ����������, �� ������� �����-3 \n");
						scanf("%d", &a);

						if (a == 1)
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("PYTHON \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (a == 2)
						{
							SetConsoleTextAttribute(hConsole, 12);
							printf("RUBY \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("PHP \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
				}
			}
		}
	}
}
