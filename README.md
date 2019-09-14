# bs-firebase

🚧 WIP

## Initialize app

```reason
[@bs.module]
external firebaseConfig: firebaseConfig = "./config/firebase-config.json";

firebase->initializeApp(firebaseConfig);
```

## Authentication

```reason
open BsFirebase;

let signInWithGoogle = () => firebase->auth()->Auth.signInWithPopup(Auth.Provider.google());
let signInWithEmailAndPassword = (~email, ~password) => firebase->auth()->Auth.signInWithEmailAndPassword(~email, ~password);
let signOut = firebase->auth()->Auth.signOut();
```
