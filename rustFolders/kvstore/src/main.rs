// tutorial https://youtu.be/WnWGO-tLtLA
//use std::env::Args;
use std::collections::HashMap;

fn main() {
    let mut argys = std::env::args().skip(1);
    let key = argys.next().expect("no key");
    let value = argys.next().unwrap();
    println!("The key is '{}' and the value is '{}'", key, value);
    
    let database = Database::new().expect("create db failed");
    database.insert(key, value);
    database.insert(key.to_uppercase(), value);
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
            map: map,
        })
    }


    fn insert(mut self, key: String, value: String) {
        self.map.insert(key, value);
    }
}