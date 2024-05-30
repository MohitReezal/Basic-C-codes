
    class Student{
     String name;
     int age;
     public void printinfo(){
        System.out.println(this.name);
        System.out.println(this.age);
     }
     Student(String name, int age){
        this.name= name;
        this.age= age;
     }
    }

public class oop1 {
    public static void main(String args[]){
        /*pen pen1 = new pen();
        pen1.color= "Blue";
        pen1.type= "gel";
        pen1.write(); 
        pen pen2= new pen();
        pen2.color= "BLack";
        pen2.type= "Ballpoint";
        pen1.printcolor();
        pen2.printcolor();*/
        Student s1= new Student("Chiran", 20);
        s1.printinfo();
    }
    
}
