/**
 * 13. Roman to Integer
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    
    const rumanSymbol = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }
    
    const rumanSymbolArr = [...s]
    
  let sum = 0, nextKey ='', rumankey, tempKey;
  rumankey = Object.keys(rumanSymbol);
    let rumanLength = rumanSymbolArr.length;
    console.log(rumanLength)
    
    for(let i = 0; i < rumanSymbolArr.length; i++)
    {
        
        Object.keys(rumanSymbol).forEach((key, index) => {
            // console.log(key) // returns the keys in an object
            // console.log(rumanSymbol[key])  // returns the appropriate value 
            
            nextKey = rumanSymbolArr[i + 1]
            
            
            if(key == rumanSymbolArr[i]){
                 // console.log(rumanSymbol[key])
                // sum = sum + rumanSymbol[key]
                let indexKey = rumankey[index + 1]
                
                if( nextKey === indexKey){
                    sum = sum + ((rumanSymbol[indexKey]) -1)
                    tempKey = nextKey;
                    
                } else if(key === tempKey) {
                    sum = sum
                    
                } else{
                    sum = sum + (rumanSymbol[key])
                }
             }
            
        })
        
        
        // console.log(rumanSymbolArr)
    }
    console.log(sum)
    return sum
};
romanToInt('VVV')



