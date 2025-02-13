
let harga = [50,69,126,49,23,45,123,12,122,111];
let jumlah=[123,123,1233,543,532,123,432,4021]

let nama=["Arsyadi","Indra","Hasan","Prihambada"];
nama.forEach(a=>document.writeln("<p></p>"+a))

let biggest = (a) => {
    let terbesar=0;
    if(a<0) return 0;
    a.forEach(a=>{if(a>terbesar) terbesar=a});
    // for(i=0;i<a.length;i++){
    //     if(a[i]>terbesar) terbesar=a[i]
    // }
    return terbesar + biggest(a-1);
}

let faktorial = (a) =>{
    if (a==1) {return 1;}
    // console.table(a)
    return a*faktorial(a-1)
}
let num=10
document.writeln("<p></p>")
for(i=num;i>=1;i--){
    if(i==1)  document.writeln(i)
    else document.writeln(i + "*")
}
document.writeln(" : "+faktorial(num))
console.log( + "faktorial dari " + num + " : " + faktorial(num))
console.log("terbesar : " + biggest(harga))
console.log("terbesar : " + biggest(jumlah))

let students = ['John', 'Sara', 'Jack'];
students.forEach((item, index, arr) => {
arr[index] = 'Hello ' + item; 
});
console.log(students);


// console.log("terbesar : " + harga)
// console.log(harga[harga.length-1])

// nama="arsya","indra";
// document.writeln("Hello World")
// for(i=0;i<harga.length;i++){
//     console.table(harga[i]);
//     console.table(harga[i]-harga.length);
//     console.table("===========")
// }
// pilih=[1,2,3];

// switch(pilih){
//     case 1 :
//         console.table(harga[pilih[0]-1]);
//         break;
//     case 2 :
//         console.table(harga[pilih[1]-1]);
//         break;
//     case 3: 
//         console.table(harga[pilih[2]-1]);
//         break;
//