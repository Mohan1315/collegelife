public class authentication {

    public static void main (String args[]){
        String user_name = "mohan";
        int pswd = 1069;

        if(user_name.equals("mohan") & pswd == 1069){
            System.out.println("authentication successfully");
        }
        else {
            System.out.println("user_name/password not found");
        }
    }


}
