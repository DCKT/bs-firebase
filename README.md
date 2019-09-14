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

firebase
->auth()
->Auth.onAuthStateChanged(user => {
  switch (user->Js.Nullable.toOption) {
  | None => ()
  | Some(u) =>
    Js.log3(
      u->Auth.User.uid,
      u->Auth.User.email,
      u->Auth.User.displayName,
    )
  }
});

let signInWithGoogle = () => firebase->auth()->Auth.signInWithPopup(Auth.Provider.google());
let signInWithEmailAndPassword = (~email, ~password) => firebase->auth()->Auth.signInWithEmailAndPassword(~email, ~password);
let signOut = firebase->auth()->Auth.signOut();
```
