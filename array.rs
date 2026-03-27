fn main() {
    // Create a fixed-size array
    let arr = [10, 20, 30, 40, 50];

    // Print each element with its index
    for (index, value) in arr.iter().enumerate() {
        println!("Index {}: {}", index, value);
    }
}