int fun(int x,int y)
{

	return x+y;
		
}
void reset_handler(void)
{
	
	fun(5,6);
	while(1);
}
