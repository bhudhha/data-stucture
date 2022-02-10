(function () {
  var obj1 = {
    text: "Hello World!",
    get_text: function () {
      return this.text;
    },
  };
  var obj2 = Object.create(obj1);
  obj2.text = "Greetings World!";
  console.log(obj2.get_text());
  delete obj2.text;
  console.log(obj2.get_text());
})();
