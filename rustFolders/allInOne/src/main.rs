// https://youtu.be/U1EFgCNLDB8 tutorial

use std::{i8, i16, i32, i64, u8, u16, u32, u64, isize, usize, f32, f64};

use std::io::stdin;



fn main() {
    println!("Hello, world!");

    let num = 10;

    let mut age: i32 = 40;

    let is_it_true: bool = true;

    let let_x: char = 'x';

    println!("I'm {} years old", age);

    let (f_name, l_name) = ("Mike", "Johnson");

    println!("It is {0} that {1} is {0}",
    is_it_true, let_x);

    println!("{:.2}", 1.234);

    println!("B: {:b} H: {:x} O: {:o}", 10, 10, 10);

    println!("{ten:>ws$}", ten=10, ws=5);
    println!("{ten:>0ws$}", ten=10, ws=5);

    // ...math here, just skipping now and putting in what interests me, similar to javascript

    // it's difficult to care or retain knowledge without repeated application of the knowledge...

    // thinking I should read and comment something written by another programmer to learn...

    // also I'm not sure what I want to make with rust or c++

    // I will watch Derek Banas videos to get introduced to the lang, but wont be doing this for c++ and just not finishing this..
}
