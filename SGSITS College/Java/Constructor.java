import java.util.*;
public class Constructor{
	
	float width,height,depth;
	
	Constructor (int width, int height, int depth){
		this.width = width;
		this.height= height;
		this.depth = depth;
	}
	
	public float volume(){
	
		return width*height*depth;
		
		
	}
	
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int width = sc.nextInt();
		int height = sc.nextInt();
		int depth = sc.nextInt();
		
		Constructor obj = new Constructor(width,height,depth);
		float vol = obj.volume();
		int vol2 = (int)vol;
		if(vol > 10){
			//float vol1 = vol;
			System.out.println(vol);
		}
		else{
			System.out.println(vol2);
		}
		
		

	}
}