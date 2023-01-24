// public class test{

//     public static void main(string args[]){

//             system.out.println("Hello");
//     }
// }


// public class test {
//   public static void main(String[] args) {
//     System.out.println("Hello World");
//   }
// }

public class test{

  public static int Odd(int val){
    int n=0;
      if(val%2!=0){
          // System.out.println("It is Odd Number!");
          n = 1;
      }
      return n;
  }

  public static void main(String[] args){
    System.out.println("Hey");

    System.out.println("I want to be your bf!");

    int n =10;
    if(n%2==0){
      System.out.println("Yeah, It is even number!");
    }

    int odd = Odd(4);
    System.out.println(odd);

    var m = "Country";

    System.out.println(m);
  }
}