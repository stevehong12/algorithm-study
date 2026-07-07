import java.util.Scanner;
class 데이터입출력2
{
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int b = scan.nextInt();
		System.out.printf("%d", a + b);
		scan.close();
	}
}
