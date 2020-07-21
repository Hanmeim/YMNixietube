enum pins{
//%
}
}
//% color="#11A78D" iconWidth=50 iconHeight=40
namespace YMNixietube  {
    //% block="设置数码管[POS]显示：[CONT]"  blocktype="command"
    //% POS.shadow="dropdown" POS.options="PIN_Nixietube"
    //% CONT.shadow="number" CONT.defl="123.4"
     export function keypadinit(parameter: any, block: any) {
        let position = parameter.POS.code
        let content = parameter.CONT.code
        Generator.addInclude(`YMport`, `#include <YoungMakerPort.h>`);
        Generator.addInclude(`YMNixinit`, `#include <YoungMaker7SegmentDisplay.h>`);
        Generator.addObject(`YMNixie`, `YoungMaker7SegmentDisplay`, `seg_YoungMaker${position}(${position});`);
        Generator.addCode(`seg_YoungMaker${position}.display(${content});`)
}
