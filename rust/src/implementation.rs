use interface::*;


/*
pub struct UserInput {
    emit: UserInputEmitter,
    username: String,
}

impl UserInputTrait for UserInput {
    fn new(emit: UserInputEmitter) -> UserInput {
        UserInput {
            emit: emit,
            username: String::new(),
        }
    }
    fn emit(&self) -> &UserInputEmitter {
        &self.emit
    }
    fn username(&self) -> &str {
        "Some Username" 
    }
    fn set_username(&mut self, value: String) {
        self.username = value;
        self.emit.username_changed();
        println!("HIII");
    }
}*/

pub struct Simple {
    emit: SimpleEmitter,
    message: String,
}


impl SimpleTrait for Simple {
    fn new(emit: SimpleEmitter) -> Simple {
        Simple {
            emit: emit,
            message: String::new(),
        }
    }
    fn emit(&self) -> &SimpleEmitter {
        &self.emit
    }
    fn message<'a>(&'a self) -> &'a str {
        let res: &'a String = &[&self.message, "lolconcat"].join(" ");
        return res;
    }
    fn set_message(&mut self, value: String) {
        self.message = value;
        self.emit.message_changed();
        println!("CPP said {}", self.message);
    }
}

