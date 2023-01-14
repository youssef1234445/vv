<!DOCTYPE html>
<html>
  <head>
    <title>Flexbox Practice</title>
  </head>
  <body style="padding-bottom: 1000px;">
    <div style="
      display: flex;
      flex-direction: row;
    ">
      <div style="background-color: lightblue;">div 1 text</div>
      <div style="background-color: lightpink;">div 2 <p>text</p></div>
    </div>

    <div style="
      margin-top: 30px;
      display: flex;
      flex-direction: row;
    ">
      <div style="
        background-color: lightblue;
        width: 100px;
      ">100px</div>
      <div style="
        background-color: lightpink;
        flex: 1;
      ">flex: 1</div>
    </div>

    <div style="
      margin-top: 30px;
      display: flex;
      flex-direction: row;
    ">
      <div style="
        background-color: lightblue;
        flex: 1;
      ">flex: 1</div>
      <div style="
        background-color: lightpink;
        width: 100px;
      ">100px</div>
      <div style="
        background-color: lightblue;
        flex: 2;
      ">flex: 2</div>
    </div>

    <div style="
      margin-top: 30px;
      height: 70px;
      border-width: 1px;
      border-style: solid;
      border-color: gray;

      display: flex;
      flex-direction: row;
      justify-content: center;
    ">
      <div style="
        background-color: lightblue;
        width: 100px;
      ">100px</div>
      <div style="
        background-color: lightpink;
        width: 100px;
      ">100px</div>
      <div style="
        background-color: lightblue;
        width: 100px;
      ">100px</div>
    </div>

    <div style="
      margin-top: 30px;
      height: 70px;
      border-width: 1px;
      border-style: solid;
      border-color: gray;

      display: flex;
      flex-direction: row;
      justify-content: space-between;
    ">
      <div style="
        background-color: lightblue;
        width: 100px;
      ">100px</div>
      <div style="
        background-color: lightpink;
        width: 100px;
      ">100px</div>
      <div style="
        background-color: lightblue;
        width: 100px;
      ">100px</div>
    </div>

    <div style="
      margin-top: 30px;
      height: 70px;
      border-width: 1px;
      border-style: solid;
      border-color: gray;

      display: flex;
      flex-direction: row;
      justify-content: space-between;
      align-items: center;
    ">
      <div style="
        background-color: lightblue;
        width: 100px;
      ">100px</div>
      <div style="
        background-color: lightpink;
        width: 100px;
      ">100px</div>
      <div style="
        background-color: lightblue;
        width: 100px;
      ">100px</div>
    </div>
  </body>
</html>

<!DOCTYPE html>
<html>
  <head>
    <title>Grid Practice</title>
  </head>
  <body style="padding-bottom: 1000px;">
    <div style="
      display: grid;
      grid-template-columns: 100px 100px;
    ">
      <div style="background-color: lightblue;">div 1</div>
      <div style="background-color: lightpink;">div 2<p>text</p></div>
    </div>

    <div style="
      margin-top: 30px;
      display: grid;
      grid-template-columns: 100px 100px 200px;
    ">
      <div style="background-color: lightblue;">100px</div>
      <div style="background-color: lightpink;">100px<p>text</p></div>
      <div style="background-color: lightblue;">200px</div>
      <div style="background-color: lightpink;">100px</div>
    </div>

    <div style="
      margin-top: 30px;
      display: grid;
      grid-template-columns: 100px 1fr;
    ">
      <div style="background-color: lightblue;">100px</div>
      <div style="background-color: lightpink;">1fr</div>
    </div>

    <div style="
      margin-top: 30px;
      display: grid;
      grid-template-columns: 100px 1fr 2fr;
    ">
      <div style="background-color: lightblue;">100px</div>
      <div style="background-color: lightpink;">1fr</div>
      <div style="background-color: lightblue;">2fr</div>
    </div>

    <div style="
      margin-top: 30px;
      display: grid;
      grid-template-columns: 1fr 1fr 1fr;
      column-gap: 20px;
      row-gap: 40px;
    ">
      <div style="background-color: lightblue; height: 200px;">1fr</div>
      <div style="background-color: lightpink; height: 200px;">1fr</div>
      <div style="background-color: lightblue; height: 200px;">1fr</div>
      <div style="background-color: lightpink; height: 200px;">1fr</div>
      <div style="background-color: lightblue; height: 200px;">1fr</div>
      <div style="background-color: lightpink; height: 200px;">1fr</div>
    </div>
  </body>
</html>

<!DOCTYPE html>
<html>
  <head>
    <title>Position Practice</title>
  </head>
  <body style="
    height: 3000px;
    padding-top: 60px;
    padding-left: 80px;
  ">
    <div style="
      background-color: black;
      color: white;
      position: fixed;
      top: 0;
      left: 0;
      right: 0;
      height: 50px;
      z-index: 100;
    ">header</div>

    <div style="
      background-color: green;
      color: white;
      position: fixed;
      left: 0;
      bottom: 0;
      top: 50px;
      width: 72px;
    ">
      sidebar
      <div style="
        position: absolute;
        background-color: red;
        color: white;
        top: 0;
        right: 0;
      ">
        X
      </div>
    </div>

    <div style="
      position: absolute;
      background-color: red;
      color: white;
      top: 60px;
      right: 10px;
    ">
      absolute
    </div>

    <div style="
      background-color: lightblue;
      height: 200px;
      width: 200px;
      position: static;
    ">div 1</div>
    <div style="
      background-color: lightpink;
      height: 200px;
      width: 200px;
      position: relative;
    ">
      div 2
      <div style="
        position: absolute;
        background-color: black;
        color: white;
        bottom: 10px;
        right: 10px;
      ">
        5:00
      </div>
    </div>

  </body>
</html>
