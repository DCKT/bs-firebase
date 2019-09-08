type firebase;
type firebaseConfig;

module Auth = BsFirebase_Auth;
module Firestore = BsFirebase_Firestore;

[@bs.module] external firebase: firebase = "firebase";

[@bs.send]
external initializeApp: (firebase, firebaseConfig) => unit = "initializeApp";

[@bs.send] external auth: (firebase, unit) => Auth.t = "auth";
[@bs.send] external firestore: (firebase, unit) => Firestore.t = "firestore";