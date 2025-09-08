/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    let asw = strs[0];

    for(let i = 1; i < strs.length; i++){
        while(strs[i].indexOf(asw) != 0){
            asw = asw.slice(0, asw.length-1);
        }
    }

    return asw;
};