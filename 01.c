int main(){
	int a,b;
	int res = a+b;
	__ESBMC_assert( res == a+b, "a+b == res");
}