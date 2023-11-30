public class Pessoa {
//    Attributes
        private String name;
        private double wage;
        private int age;
        private int dependencies;

//    Constructor
        public Pessoa(String name, double wage, int age, int dependencies) {
            this.name = name;
            this.wage = wage;
            this.age = age;
            this.dependencies = dependencies;
        }

//    Getters and Setters
        public String getName() {
            return name;
        }

        public void setName(String name) {
            this.name = name;
        }

        public double getWage() {
            return wage;
        }

        public void setWage(double wage) {
            this.wage = wage;
        }

        public int getAge() {
            return age;
        }

        public void setAge(int age) {
            this.age = age;
        }

        public int getDependencies() {
            return dependencies;
        }

        public void setDependencies(int dependencies) {
            this.dependencies = dependencies;
        }
//        Methods
    public double calculaImposto() {
        if (age < 65) {
            if (wage <= 1787.77) {
                return 0;
            } else if (wage >= 1787.78 && wage <= 2679.29) {
                return wage * 0.075;
            } else if (wage >= 2679.30 && wage <= 3572.43) {
                return wage * 0.15;
            } else if (wage >= 3572.44 && wage <= 4463.81) {
                return wage * 0.225;
            } else if (wage >= 4463.81) {
                return wage * 0.275;
            }
        }
        return 0;
    }
}
