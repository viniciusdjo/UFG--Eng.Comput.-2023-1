public class TestBook {
    public static void main(String[] args) {
        // Instantiating the object
        Book book1 = new Book("Spare", "Prince Harry The Duke of Sussex", "Random House", 2023);
        Book book2 = new Book("Atomic Habits: An Easy & Proven Way to Build Good Habits & Break Bad Ones ", "James Clear", "Avery", 2018);
        Book book3 = new Book("Lessons in Chemistry: A Novel", "Bonnie Garmus", "Doubleday", 2022);

        //Sets
            //Title
            book1.setTitle("Spare");
            book2.setTitle("Atomic Habits: An Easy & Proven Way to Build Good Habits & Break Bad Ones ");
            book3.setTitle("Lessons in Chemistry: A Novel");

            //Author
            book1.setAuthor("Prince Harry The Duke of Sussex");
            book2.setAuthor("James Clear");
            book3.setAuthor("Bonnie Garmus");

            //Publishing Company
            book1.setPublishingCompany("Random House");
            book2.setPublishingCompany("Avery");
            book3.setPublishingCompany("Doubleday");

            //Year
            book1.setYear(2023);
            book2.setYear(2018);
            book3.setYear(2022);

        //Print
        System.out.println(book1.toString());
        System.out.println(book2.toString());
        System.out.println(book3.toString());
    }
}
