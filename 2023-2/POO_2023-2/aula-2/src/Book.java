public class Book {
//    Attributes
    private String title;
    private String author;
    private int year;
    private String publishingCompany;

//    Methods
    //toString
    @Override
    public String toString(){
        return title + "\n" + author + "\n" + publishingCompany + ", " + year + "\n";
    }
    //Title
        public void setTitle(String title) {
            this.title = title;
        }
        public String getTitle(){
            return title;
        }
    //Author
        public void setAuthor(String author) {
            this.author = author;
        }
        public String getAuthor(){
            return author;
        }
    //Year
        public void setYear(int year) {
            this.year = year;
        }
        public int getYear(){
            return year;
        }
    //Publishing Company
        public void setPublishingCompany(String publishingCompany){
            this.publishingCompany = publishingCompany;
        }
        public String getPublishingCompany(){
            return publishingCompany;
        }
}
