function  Bor3y(y,z,operator)

switch operator
case '+'
         fprintf('The result is %f\n',y+z);
case '-'
         fprintf('The result is %f\n',y-z);
case '*'
         fprintf('The result is %f\n',y*z);
case '/'
         fprintf('The result is %f\n',y/z);         
otherwise
         fprintf('wrong operator \n');
end  