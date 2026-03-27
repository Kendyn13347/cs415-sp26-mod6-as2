#[derive(Debug)]
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
}

fn main() {
    // Create a variable
    let today = Day::Wednesday;

    // Print its value
    println!("Today is: {:?}", today);
}