/**
 * check_specifiers - check if the charecter is a valid specifier
 * @format: the spicifier
 *
 * Return: pointer to function
 */
int (*check_specifier(char *format))(va_list)
{
	int i;

	func_t my_array[4] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_cent},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (my_array[i].t == *format)
		{
			return (my_array[i].f);
		}
	}
	

	return (NULL);
}