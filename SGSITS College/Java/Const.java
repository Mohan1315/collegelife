import java.util.*;
public class Const{
	int i,j;
	Const(){
		
		System.out.println("Hello");
		
	}
	Const(int i,int j){
		this.i = i;
		this.j = j;
		
		
	}
	Const(int i){
		this.i = i;
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int i = sc.nextInt();
		int j = sc.nextInt();
		Const obj1 = new Const();
		Const obj2 = new Const(i,j);
		Const obj3 = new Const(i);
		System.out.println(obj1);
		System.out.println(obj2.i);
		System.out.println(obj2.j);
		System.out.println(obj3.i);
		
	}
}