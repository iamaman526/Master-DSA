const names = ["Youtube", "facebook", "instagram", "Netflix", "amazon",];

// for (const n of names) {
//     console.log(n);
// }

const symbols = {
    yt: "youtube",
    ig: "instagram",
    fb: "facebook",
    lco: "learncodeonline.in",
}

for (const n in symbols) {
    console.log(`key is : ${n} and value is : ${symbols[n]}`);
}