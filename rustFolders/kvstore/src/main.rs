// tutorial https://youtu.be/WnWGO-tLtLA  
// I didn't get it and probably should return to this after doing more beginner stuff and reading docs
//use std::env::Args;   ???


use std::collections::HashMap;

fn main() {
    let mut argys = std::env::args().skip(1);
    let key = argys.next().expect("no key");
    let value = argys.next().unwrap();
    println!("The key is '{}' and the value is '{}'", key, value);
    
    let mut database = Database::new().expect("create db failed");
    database.insert(key.to_uppercase(), value.clone());
    database.insert(key, value);
    match database.flush() {
        Ok(()) => println!("yay"),
        Err(err) => println!("boo error {}", err),
    }
}


struct Database { //structs are like JSON?
    map: HashMap<String, String>,
 }  //maps are like JSON


impl Database {
    fn new() -> Result<Database, std::io::Error> {
        /* read kv.db
        let contents = match std::fs::read_to_string("kv.db") {
            Ok(c) => c,
            Err(e) => {
                return Err(error);
            }
        }
        */
        let mut map = HashMap::new();
        let contents = std::fs::read_to_string("kv.db")?;
        for line in contents.lines() {
            let mut chunks = line.splitn(2, '\t');
            let key = chunks.next().expect("no key");
            let value = chunks.next().expect("no value");
            map.insert(key.to_owned(), value.to_owned());
        }
        // parse the string
        // populate map
        Ok(Database {
            map: map, flush: false
        })
    }


    fn insert(&mut self, key: String, value: String) {
        self.map.insert(key, value);
    }


    fn flush(&self) -> std::io::Result<()> {
        do_flush(&self);
    }
}

impl Drop for Database {
    fn drop(&mut self) {
        if !self.flush {
            let _ = do_flush(self);
        }
    }
}

fn do_flush(database: &Database) -> std::io::Result<()> {
    println!("do flush called");
    let mut contents = String::new();
    for (key, value) in &self.map {
        contents.push_str(key);
        contents.push_str('\t');
        contents.push_str(value);
        contents.push_str('\n');
    }
    std::fs::write("kv.db", contents);
}