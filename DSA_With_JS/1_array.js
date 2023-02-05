const prompt = require("prompt-sync")({ sigint: true });

let array = [];
let i = 1;

const addElement = (element) => {
  return array.push(element);
};

const deleteElement = (element) => {
  return array.splice(array.indexOf(element), 1);
};

while (i == 1) {
  let operation = prompt(
    "Enter 1 to add element to the array\nEnter 2 to remove element from array\nEnter your choice : "
  );
  if (operation == 1) {
    const element = prompt("Enter the element to be added to the array: ");
    addElement(element);
  } else if (operation == 2) {
    const element = prompt("Enter the element to be removed from the array: ");
    deleteElement(element);
  } else {
    console.log("Invalid choice");
  }
  console.log("Array is: " + array);
  i = prompt("Enter 1 to add more elements to the array: ");
}
