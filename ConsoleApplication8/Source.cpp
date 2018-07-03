#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<Windows.h>

void main() {

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int a = 0;
	printf("Зачем вы хотите изучить программирование?\nЯ не знаю, выберите за меня-1\nДля детей-2\nПоразвлечься-3\nИнтересно-4\nCаморазвитие-5\nЗаработать-6\n");
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
		printf("Начните со Scratch, затем...PYTHON\n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (a == 3)
	{
		printf("Уже есть идея на миллион?\nНет, просто хочу начать-1\nДа-2\n");
		scanf("%d", &a);

		if (a == 1)
		{
			printf("Мне нравится учиться...простым способом-1 лучшим способом-2 трудненьким способом-3 очень сложный путь(но потом будет легче)-4\n");
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
				printf("Какая коробка передач? Автомат-1, Ручная-2 \n");
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
			printf("Какая платформа/сфера? 3D игры-1 Мобильная -2 Корп.софт-3 Веб-4 \n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				printf("Какая OS? IOS-1 Android-2 \n");
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
				printf("Что скажете о Microsoft? Люблю его-1 Неплохо-2 Фууу-3\n");
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
				printf("Ваш сервис будет работать в реальном времени, как twitter? Да-1 Нет-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("JAVASCRIPT \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					printf("Хотите попробовать что-то новое, но не очень трудоёмкое? Не знаю-1 Нет-2\n");
					scanf("%d", &a);

					if (a == 1)
					{
						printf("Какая у вас любимая игрушка? Лего-1 Пластилин-2 Старенький, но любимый мишка-3 \n");
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
						printf("Какая у вас любимая игрушка? Лего-1 Пластилин-2 Старенький, но любимый мишка-3 \n");
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
		printf("Уже есть идея на миллион?\nНет, просто хочу начать-1\nДа-2\n");
		scanf("%d", &a);

		if (a == 1)
		{
			printf("Мне нравится учиться...простым способом-1 лучшим способом-2 трудненьким способом-3 очень сложный путь(но потом будет легче)-4\n");
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
				printf("Какая коробка передач? Автомат-1, Ручная-2 \n");
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
			printf("Какая платформа/сфера? 3D игры-1 Мобильная -2 Корп.софт-3 Веб-4 \n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				printf("Какая OS? IOS-1 Android-2 \n");
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
				printf("Что скажете о Microsoft? Люблю его-1 Неплохо-2 Фууу-3\n");
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
				printf("Ваш сервис будет работать в реальном времени, как twitter? Да-1 Нет-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("JAVASCRIPT \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					printf("Хотите попробовать что-то новое, но не очень трудоёмкое? Не знаю-1 Нет-2\n");
					scanf("%d", &a);

					if (a == 1)
					{
						printf("Какая у вас любимая игрушка? Лего-1 Пластилин-2 Старенький, но любимый мишка-3 \n");
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
						printf("Какая у вас любимая игрушка? Лего-1 Пластилин-2 Старенький, но любимый мишка-3 \n");
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
		printf("Уже есть идея на миллион?\nНет, просто хочу начать-1\nДа-2\n");
		scanf("%d", &a);

		if (a == 1)
		{
			printf("Мне нравится учиться...простым способом-1 лучшим способом-2 трудненьким способом-3 очень сложный путь(но потом будет легче)-4\n");
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
				printf("Какая коробка передач? Автомат-1, Ручная-2 \n");
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
			printf("Какая платформа/сфера? 3D игры-1 Мобильная -2 Корп.софт-3 Веб-4 \n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				printf("Какая OS? IOS-1 Android-2 \n");
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
				printf("Что скажете о Microsoft? Люблю его-1 Неплохо-2 Фууу-3\n");
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
				printf("Ваш сервис будет работать в реальном времени, как twitter? Да-1 Нет-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("JAVASCRIPT \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					printf("Хотите попробовать что-то новое, но не очень трудоёмкое? Не знаю-1 Нет-2\n");
					scanf("%d", &a);

					if (a == 1)
					{
						printf("Какая у вас любимая игрушка? Лего-1 Пластилин-2 Старенький, но любимый мишка-3 \n");
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
						printf("Какая у вас любимая игрушка? Лего-1 Пластилин-2 Старенький, но любимый мишка-3 \n");
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
		printf("Найти работу-1 У меня есть идея для стартапа-2\n");
		scanf("%d", &a);

		if (a == 1)
		{
			printf("Какая платформа/сфера? 3D/игры-1 Мобильная-2 Корп.софт-3 Веб-4 Я просто хочу $$$ -5 Я хочу работать в крупной IT-компании-6\n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				printf("Какая OS? IOS-1 Android-2 \n");
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
				printf("Что скажете о Microsoft? Люблю его-1 Неплохо-2 Фууу-3\n");
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
				printf("Фронтенд(веб-интерфейс) - 1 Бэкенд(то, что за вебсайтом) - 2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("JAVASCRIPT \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					printf("Хочу работать на....Стартап-1 Корпорацию-2 \n");
					scanf("%d", &a);

					if (a == 1)
					{
						printf("Хотите попробовать что-то новое, но не очень трудоёмкое? Не знаю-1 Нет-2\n");
						scanf("%d", &a);

						if (a == 1)
						{
							printf("Какая у вас любимая игрушка? Лего-1 Пластилин-2 Старенький, но любимый мишка-3 \n");
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
						printf("Что скажете о Microsoft? Люблю его-1 Неплохо-2 Фууу-3\n");
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
			printf("У меня есть идея для стартапа!!!");
			printf("Какая платформа/сфера? 3D игры-1 Мобильная -2 Корп.софт-3 Веб-4 \n");
			scanf("%d", &a);

			if (a == 1)
			{
				SetConsoleTextAttribute(hConsole, 12);
				printf("C++ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (a == 2)
			{
				printf("Какая OS? IOS-1 Android-2 \n");
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
				printf("Что скажете о Microsoft? Люблю его-1 Неплохо-2 Фууу-3\n");
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
				printf("Ваш сервис будет работать в реальном времени, как twitter? Да-1 Нет-2 \n");
				scanf("%d", &a);

				if (a == 1)
				{
					SetConsoleTextAttribute(hConsole, 13);
					printf("JAVASCRIPT \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					printf("Хотите попробовать что-то новое, но не очень трудоёмкое? Не знаю-1 Нет-2\n");
					scanf("%d", &a);

					if (a == 1)
					{
						printf("Какая у вас любимая игрушка? Лего-1 Пластилин-2 Старенький, но любимый мишка-3 \n");
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
