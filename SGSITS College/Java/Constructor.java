import java.util.*;
public class Constructor{
	
	double width,height,depth;
	
	Constructor (int width, int height, int depth){
		this.width = width;
		this.height= height;
		this.depth = depth;
	}
	
	public double volume(){
		return width*height*depth;
	}
	
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int width = sc.nextInt();
		int height = sc.nextInt();
		int depth = sc.nextInt();
		
		Constructor obj = new Constructor(width,height,depth);
		System.out.println(obj.volume());

	}
}