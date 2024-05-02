
void	strncpy1()
{
	char	str1[]="123";
	char	str2[40];
	char	str3[40];

	ft_putstr("\n\n**** TEST 1 ****\ntest case - \"123\"\n\n");
	strncpy(str2,str1, 3);
	ft_strncpy(str3,str1, 3);
	ft_putstr("ORIGINAL STRING:");
	ft_putstr(str1);
	ft_putstr("\nOG:\n");
	ft_putstr(str2);
	ft_putstr("\nFT_strncpy:\n");
	ft_putstr(str3);
	ft_putstr("\n\n");
}

void	strncpy2()
{
	char	str1[]="";
	char	str2[40];
	char	str4[40];

	ft_putstr("**** TEST 2 ****\ntest case - \"\"\n\n");
	strncpy(str2,str1,1);
	ft_strncpy(str4,str1,1);
	ft_putstr("ORIGINAL STRING:");
	ft_putstr(str1);
	ft_putstr("\nOG:\n");
	ft_putstr(str2);
	ft_putstr("\nFT_strncpy:\n");
	ft_putstr(str4);
	ft_putstr("\n\n");
}

void	strncpy3()
{
	char	str1[]="123";
	char	str2[40];
	char	str4[40];

	ft_putstr("**** TEST 3 ****\ntest case - size=0");
	strncpy(str2,str1,0);
	ft_strncpy(str4,str1,0);
	ft_putstr("ORIGINAL STRING:");
	ft_putstr(str1);
	ft_putstr("\nOG:\n");
	ft_putstr(str2);
	ft_putstr("\nFT_strncpy:\n");
	ft_putstr(str4);
	ft_putstr("\n\n");
}
