// An exceptionally useful comment
function func(param) {
    var text = 'string\n other string';
    for (var i = 0; i < param.length; i++ ) {
        text += i;
    }
    return {
        "text": text,
        "boolean": false
    }
}