import React from "react";
import Entry from "./Entry";
import emojipedia from "../emojipedia";

function createEntry(entry) {
  return (
    <Entry
      key={entry.id}
      name={entry.name}
      emoji={entry.emoji}
      meaning={entry.meaning}
    />
  );
}

function App() {
  return (
    <div>
      <h1>
        <span>emojipedia</span>
      </h1>

      <dl className="dictionary">{emojipedia.map(createEntry)}</dl>
    </div>
  );
}

export default App;

// 1. Create Entry Component
// 2. Create props to replace hardcoded data
// 3a. Import the emojipedia const
// 3b. Map through the emojipedia array and render Entry components
