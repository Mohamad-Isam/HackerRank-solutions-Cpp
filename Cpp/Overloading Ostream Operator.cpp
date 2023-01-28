
ostream &operator<<(ostream &output, const Person &man){
    output << "first_name=" << man.get_first_name() << ",last_name=" << man.get_last_name();
    return output;
}

