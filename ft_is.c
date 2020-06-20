int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_is_alphalower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_alphaupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\r'
			|| c == '\f');
}
