class parent {
	void display(){
		System.out.println("parent");
	}
}
class child extends parent{
	void display(){
		System.out.println("child");
	}
}
class Main1{
	public static void main(String args[]){
		child obj = new child();
		parent obj1 = new parent();
		obj.display();
		obj1.display();
	}
}