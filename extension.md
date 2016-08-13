- Historically, the first extensions used for C++ were .c and .h, exactly like for C. 
  This caused practical problems, especially the .c which didn't allow build systems to easily differentiate C++ and C files.

- Unix, on which C++ has been developed, has case sensitive file systems. So some used .C for C++ files.   
  Other used .c++, .cc and .cxx.  .C and .c++ have the problem that they aren't available on other file systems and 
  their use quickly dropped. 
  DOS and Windows C++ compilers tended to use .cpp, and some of them make the choice difficult, if not impossible, to configure. 
  Portability consideration made that choice the most common, even outside MS-Windows.

- Headers have used the corresponding .H, .h++, .hh, .hxx and .hpp. But unlike the main files, 
  .h remains to this day a popular choice for C++ even with the disadvantage that it doesn't allow to know 
  if the header can be included in C context or not. Standard headers now have no extension at all.

- Additionally, some are using .ii, .ixx, .ipp, .inl for headers providing inline definitions and  
  .txx, .tpp and .tpl for template definitions. Those are either included in the headers providing the definition, 
  or manually in the contexts where they are needed.

- Compilers and tools usually don't care about what extensions are used, 
  but using an extension that they associate with C++ prevents the need to track out how to configure them 
  so they correctly recognise the language used.
