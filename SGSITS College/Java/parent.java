public class parent {
    parent(){
        System.out.println("parent 0-arg");
    }
    static class child extends parent{
        child(){
            System.out.println("child 0-agg");
        }
        child(int a){
            System.out.println("child 1 arg");
        }
    }
    public static void main(String args[]){
       child a = new child();
       child b = new child(10);
    }

}