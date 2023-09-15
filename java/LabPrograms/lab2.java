public class lab2 {
    public static void main(String[] args) {
        String months[] = new String[13];
        months[0] = null;
        months[1] = "jan";
        months[2] = "feb";
        months[3] = "mar";
        months[4] = "apr";
        months[5] = "may";
        months[6] = "june";
        months[7] = "july";
        months[8] = "aug";
        months[9] = "sep";
        months[10] = "oct";
        months[11] = "nov";
        months[12] = "dec";
        if (args.length == 0) {
            System.out.println("enter between 0-12");
            System.exit(0);
        }
        int m = Integer.parseInt(args[0]);
        System.out.println(months[m]);
    }
}
