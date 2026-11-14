#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010EB20
// Address: 0x10eb20 - 0x111380
void sub_0010EB20_0x10eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EB20_0x10eb20");
#endif

    switch (ctx->pc) {
        case 0x10eb68u: goto label_10eb68;
        case 0x10eb78u: goto label_10eb78;
        case 0x10eb90u: goto label_10eb90;
        case 0x10eba4u: goto label_10eba4;
        case 0x10ebb8u: goto label_10ebb8;
        case 0x10ebd0u: goto label_10ebd0;
        case 0x10ebe8u: goto label_10ebe8;
        case 0x10ebf8u: goto label_10ebf8;
        case 0x10ec0cu: goto label_10ec0c;
        case 0x10ec1cu: goto label_10ec1c;
        case 0x10ec2cu: goto label_10ec2c;
        case 0x10ec3cu: goto label_10ec3c;
        case 0x10ec4cu: goto label_10ec4c;
        case 0x10ec60u: goto label_10ec60;
        case 0x10ec78u: goto label_10ec78;
        case 0x10ec88u: goto label_10ec88;
        case 0x10eca0u: goto label_10eca0;
        case 0x10ecb4u: goto label_10ecb4;
        case 0x10ecd0u: goto label_10ecd0;
        case 0x10ece0u: goto label_10ece0;
        case 0x10ecf4u: goto label_10ecf4;
        case 0x10ed04u: goto label_10ed04;
        case 0x10ed14u: goto label_10ed14;
        case 0x10ed24u: goto label_10ed24;
        case 0x10ed34u: goto label_10ed34;
        case 0x10ed44u: goto label_10ed44;
        case 0x10ed54u: goto label_10ed54;
        case 0x10ed64u: goto label_10ed64;
        case 0x10ed78u: goto label_10ed78;
        case 0x10ed88u: goto label_10ed88;
        case 0x10eda4u: goto label_10eda4;
        case 0x10edb4u: goto label_10edb4;
        case 0x10edc8u: goto label_10edc8;
        case 0x10edd8u: goto label_10edd8;
        case 0x10ede8u: goto label_10ede8;
        case 0x10edf8u: goto label_10edf8;
        case 0x10ee0cu: goto label_10ee0c;
        case 0x10ee1cu: goto label_10ee1c;
        case 0x10ee30u: goto label_10ee30;
        case 0x10ee40u: goto label_10ee40;
        case 0x10ee50u: goto label_10ee50;
        case 0x10ee64u: goto label_10ee64;
        case 0x10ee80u: goto label_10ee80;
        case 0x10ee90u: goto label_10ee90;
        case 0x10eea8u: goto label_10eea8;
        case 0x10eec0u: goto label_10eec0;
        case 0x10eedcu: goto label_10eedc;
        case 0x10eeecu: goto label_10eeec;
        case 0x10ef00u: goto label_10ef00;
        case 0x10ef10u: goto label_10ef10;
        case 0x10ef20u: goto label_10ef20;
        case 0x10ef34u: goto label_10ef34;
        case 0x10ef44u: goto label_10ef44;
        case 0x10ef60u: goto label_10ef60;
        case 0x10ef70u: goto label_10ef70;
        case 0x10ef8cu: goto label_10ef8c;
        case 0x10efa0u: goto label_10efa0;
        case 0x10efb8u: goto label_10efb8;
        case 0x10efc8u: goto label_10efc8;
        case 0x10efe4u: goto label_10efe4;
        case 0x10eff4u: goto label_10eff4;
        case 0x10f010u: goto label_10f010;
        case 0x10f02cu: goto label_10f02c;
        case 0x10f03cu: goto label_10f03c;
        case 0x10f054u: goto label_10f054;
        case 0x10f088u: goto label_10f088;
        case 0x10f098u: goto label_10f098;
        case 0x10f0b0u: goto label_10f0b0;
        case 0x10f0c8u: goto label_10f0c8;
        case 0x10f0e0u: goto label_10f0e0;
        case 0x10f0f0u: goto label_10f0f0;
        case 0x10f108u: goto label_10f108;
        case 0x10f120u: goto label_10f120;
        case 0x10f134u: goto label_10f134;
        case 0x10f14cu: goto label_10f14c;
        case 0x10f164u: goto label_10f164;
        case 0x10f174u: goto label_10f174;
        case 0x10f18cu: goto label_10f18c;
        case 0x10f1a4u: goto label_10f1a4;
        case 0x10f1bcu: goto label_10f1bc;
        case 0x10f1d4u: goto label_10f1d4;
        case 0x10f1f0u: goto label_10f1f0;
        case 0x10f200u: goto label_10f200;
        case 0x10f218u: goto label_10f218;
        case 0x10f230u: goto label_10f230;
        case 0x10f244u: goto label_10f244;
        case 0x10f25cu: goto label_10f25c;
        case 0x10f278u: goto label_10f278;
        case 0x10f288u: goto label_10f288;
        case 0x10f29cu: goto label_10f29c;
        case 0x10f2b8u: goto label_10f2b8;
        case 0x10f2d0u: goto label_10f2d0;
        case 0x10f2e8u: goto label_10f2e8;
        case 0x10f308u: goto label_10f308;
        case 0x10f318u: goto label_10f318;
        case 0x10f32cu: goto label_10f32c;
        case 0x10f348u: goto label_10f348;
        case 0x10f360u: goto label_10f360;
        case 0x10f378u: goto label_10f378;
        case 0x10f39cu: goto label_10f39c;
        case 0x10f3acu: goto label_10f3ac;
        case 0x10f3c0u: goto label_10f3c0;
        case 0x10f3dcu: goto label_10f3dc;
        case 0x10f3f4u: goto label_10f3f4;
        case 0x10f40cu: goto label_10f40c;
        case 0x10f430u: goto label_10f430;
        case 0x10f440u: goto label_10f440;
        case 0x10f45cu: goto label_10f45c;
        case 0x10f474u: goto label_10f474;
        case 0x10f48cu: goto label_10f48c;
        case 0x10f4a4u: goto label_10f4a4;
        case 0x10f4c8u: goto label_10f4c8;
        case 0x10f4d8u: goto label_10f4d8;
        case 0x10f4f4u: goto label_10f4f4;
        case 0x10f50cu: goto label_10f50c;
        case 0x10f520u: goto label_10f520;
        case 0x10f538u: goto label_10f538;
        case 0x10f55cu: goto label_10f55c;
        case 0x10f56cu: goto label_10f56c;
        case 0x10f588u: goto label_10f588;
        case 0x10f59cu: goto label_10f59c;
        case 0x10f5b4u: goto label_10f5b4;
        case 0x10f5c8u: goto label_10f5c8;
        case 0x10f5f0u: goto label_10f5f0;
        case 0x10f600u: goto label_10f600;
        case 0x10f61cu: goto label_10f61c;
        case 0x10f630u: goto label_10f630;
        case 0x10f64cu: goto label_10f64c;
        case 0x10f664u: goto label_10f664;
        case 0x10f688u: goto label_10f688;
        case 0x10f698u: goto label_10f698;
        case 0x10f6b4u: goto label_10f6b4;
        case 0x10f6ccu: goto label_10f6cc;
        case 0x10f6e0u: goto label_10f6e0;
        case 0x10f6f4u: goto label_10f6f4;
        case 0x10f714u: goto label_10f714;
        case 0x10f724u: goto label_10f724;
        case 0x10f744u: goto label_10f744;
        case 0x10f75cu: goto label_10f75c;
        case 0x10f770u: goto label_10f770;
        case 0x10f784u: goto label_10f784;
        case 0x10f7acu: goto label_10f7ac;
        case 0x10f7bcu: goto label_10f7bc;
        case 0x10f7d8u: goto label_10f7d8;
        case 0x10f7e8u: goto label_10f7e8;
        case 0x10f800u: goto label_10f800;
        case 0x10f814u: goto label_10f814;
        case 0x10f834u: goto label_10f834;
        case 0x10f844u: goto label_10f844;
        case 0x10f864u: goto label_10f864;
        case 0x10f878u: goto label_10f878;
        case 0x10f890u: goto label_10f890;
        case 0x10f8a4u: goto label_10f8a4;
        case 0x10f8c4u: goto label_10f8c4;
        case 0x10f8d4u: goto label_10f8d4;
        case 0x10f8f4u: goto label_10f8f4;
        case 0x10f908u: goto label_10f908;
        case 0x10f920u: goto label_10f920;
        case 0x10f934u: goto label_10f934;
        case 0x10f950u: goto label_10f950;
        case 0x10f960u: goto label_10f960;
        case 0x10f97cu: goto label_10f97c;
        case 0x10f990u: goto label_10f990;
        case 0x10f9acu: goto label_10f9ac;
        case 0x10f9c0u: goto label_10f9c0;
        case 0x10f9e0u: goto label_10f9e0;
        case 0x10f9f0u: goto label_10f9f0;
        case 0x10fa0cu: goto label_10fa0c;
        case 0x10fa20u: goto label_10fa20;
        case 0x10fa30u: goto label_10fa30;
        case 0x10fa4cu: goto label_10fa4c;
        case 0x10fa70u: goto label_10fa70;
        case 0x10fa84u: goto label_10fa84;
        case 0x10fa9cu: goto label_10fa9c;
        case 0x10fab4u: goto label_10fab4;
        case 0x10fac4u: goto label_10fac4;
        case 0x10fae0u: goto label_10fae0;
        case 0x10fb04u: goto label_10fb04;
        case 0x10fb18u: goto label_10fb18;
        case 0x10fb34u: goto label_10fb34;
        case 0x10fb50u: goto label_10fb50;
        case 0x10fb60u: goto label_10fb60;
        case 0x10fb7cu: goto label_10fb7c;
        case 0x10fba0u: goto label_10fba0;
        case 0x10fbb4u: goto label_10fbb4;
        case 0x10fbccu: goto label_10fbcc;
        case 0x10fbe8u: goto label_10fbe8;
        case 0x10fc00u: goto label_10fc00;
        case 0x10fc18u: goto label_10fc18;
        case 0x10fc3cu: goto label_10fc3c;
        case 0x10fc50u: goto label_10fc50;
        case 0x10fc6cu: goto label_10fc6c;
        case 0x10fc88u: goto label_10fc88;
        case 0x10fca0u: goto label_10fca0;
        case 0x10fcb8u: goto label_10fcb8;
        case 0x10fcd8u: goto label_10fcd8;
        case 0x10fcecu: goto label_10fcec;
        case 0x10fd08u: goto label_10fd08;
        case 0x10fd24u: goto label_10fd24;
        case 0x10fd3cu: goto label_10fd3c;
        case 0x10fd50u: goto label_10fd50;
        case 0x10fd70u: goto label_10fd70;
        case 0x10fd80u: goto label_10fd80;
        case 0x10fda0u: goto label_10fda0;
        case 0x10fdb8u: goto label_10fdb8;
        case 0x10fdd0u: goto label_10fdd0;
        case 0x10fde4u: goto label_10fde4;
        case 0x10fe0cu: goto label_10fe0c;
        case 0x10fe20u: goto label_10fe20;
        case 0x10fe3cu: goto label_10fe3c;
        case 0x10fe58u: goto label_10fe58;
        case 0x10fe70u: goto label_10fe70;
        case 0x10fe88u: goto label_10fe88;
        case 0x10fea8u: goto label_10fea8;
        case 0x10feb8u: goto label_10feb8;
        case 0x10fed8u: goto label_10fed8;
        case 0x10fef4u: goto label_10fef4;
        case 0x10ff10u: goto label_10ff10;
        case 0x10ff28u: goto label_10ff28;
        case 0x10ff44u: goto label_10ff44;
        case 0x10ff54u: goto label_10ff54;
        case 0x10ff74u: goto label_10ff74;
        case 0x10ff8cu: goto label_10ff8c;
        case 0x10ffa4u: goto label_10ffa4;
        case 0x10ffb4u: goto label_10ffb4;
        case 0x10ffd8u: goto label_10ffd8;
        case 0x10ffe8u: goto label_10ffe8;
        case 0x110008u: goto label_110008;
        case 0x110024u: goto label_110024;
        case 0x110040u: goto label_110040;
        case 0x110054u: goto label_110054;
        case 0x110074u: goto label_110074;
        case 0x110084u: goto label_110084;
        case 0x1100a4u: goto label_1100a4;
        case 0x1100c0u: goto label_1100c0;
        case 0x1100dcu: goto label_1100dc;
        case 0x1100f0u: goto label_1100f0;
        case 0x110110u: goto label_110110;
        case 0x110120u: goto label_110120;
        case 0x110140u: goto label_110140;
        case 0x11015cu: goto label_11015c;
        case 0x110174u: goto label_110174;
        case 0x110188u: goto label_110188;
        case 0x1101b0u: goto label_1101b0;
        case 0x1101c0u: goto label_1101c0;
        case 0x1101e0u: goto label_1101e0;
        case 0x1101fcu: goto label_1101fc;
        case 0x110214u: goto label_110214;
        case 0x110228u: goto label_110228;
        case 0x110240u: goto label_110240;
        case 0x110250u: goto label_110250;
        case 0x110268u: goto label_110268;
        case 0x11027cu: goto label_11027c;
        case 0x110290u: goto label_110290;
        case 0x1102a8u: goto label_1102a8;
        case 0x1102c0u: goto label_1102c0;
        case 0x1102d0u: goto label_1102d0;
        case 0x1102ecu: goto label_1102ec;
        case 0x110304u: goto label_110304;
        case 0x11031cu: goto label_11031c;
        case 0x110338u: goto label_110338;
        case 0x110350u: goto label_110350;
        case 0x110360u: goto label_110360;
        case 0x110378u: goto label_110378;
        case 0x11038cu: goto label_11038c;
        case 0x1103a0u: goto label_1103a0;
        case 0x1103bcu: goto label_1103bc;
        case 0x1103e0u: goto label_1103e0;
        case 0x1103f4u: goto label_1103f4;
        case 0x110410u: goto label_110410;
        case 0x110428u: goto label_110428;
        case 0x110440u: goto label_110440;
        case 0x11045cu: goto label_11045c;
        case 0x110480u: goto label_110480;
        case 0x110494u: goto label_110494;
        case 0x1104b4u: goto label_1104b4;
        case 0x1104ccu: goto label_1104cc;
        case 0x1104e4u: goto label_1104e4;
        case 0x110500u: goto label_110500;
        case 0x110524u: goto label_110524;
        case 0x110534u: goto label_110534;
        case 0x110550u: goto label_110550;
        case 0x110568u: goto label_110568;
        case 0x110584u: goto label_110584;
        case 0x11059cu: goto label_11059c;
        case 0x1105c0u: goto label_1105c0;
        case 0x1105d0u: goto label_1105d0;
        case 0x1105f0u: goto label_1105f0;
        case 0x110604u: goto label_110604;
        case 0x11061cu: goto label_11061c;
        case 0x110638u: goto label_110638;
        case 0x11065cu: goto label_11065c;
        case 0x110670u: goto label_110670;
        case 0x110690u: goto label_110690;
        case 0x1106acu: goto label_1106ac;
        case 0x1106c8u: goto label_1106c8;
        case 0x1106e4u: goto label_1106e4;
        case 0x11070cu: goto label_11070c;
        case 0x110720u: goto label_110720;
        case 0x110740u: goto label_110740;
        case 0x11075cu: goto label_11075c;
        case 0x110778u: goto label_110778;
        case 0x110790u: goto label_110790;
        case 0x1107b4u: goto label_1107b4;
        case 0x1107c8u: goto label_1107c8;
        case 0x1107e4u: goto label_1107e4;
        case 0x110800u: goto label_110800;
        case 0x11081cu: goto label_11081c;
        case 0x110838u: goto label_110838;
        case 0x110860u: goto label_110860;
        case 0x110870u: goto label_110870;
        case 0x110890u: goto label_110890;
        case 0x1108acu: goto label_1108ac;
        case 0x1108c8u: goto label_1108c8;
        case 0x1108e4u: goto label_1108e4;
        case 0x11090cu: goto label_11090c;
        case 0x11091cu: goto label_11091c;
        case 0x11093cu: goto label_11093c;
        case 0x110958u: goto label_110958;
        case 0x110974u: goto label_110974;
        case 0x110990u: goto label_110990;
        case 0x1109b4u: goto label_1109b4;
        case 0x1109c4u: goto label_1109c4;
        case 0x1109e4u: goto label_1109e4;
        case 0x1109fcu: goto label_1109fc;
        case 0x110a18u: goto label_110a18;
        case 0x110a34u: goto label_110a34;
        case 0x110a58u: goto label_110a58;
        case 0x110a68u: goto label_110a68;
        case 0x110a88u: goto label_110a88;
        case 0x110aa0u: goto label_110aa0;
        case 0x110abcu: goto label_110abc;
        case 0x110ad8u: goto label_110ad8;
        case 0x110b00u: goto label_110b00;
        case 0x110b10u: goto label_110b10;
        case 0x110b30u: goto label_110b30;
        case 0x110b44u: goto label_110b44;
        case 0x110b5cu: goto label_110b5c;
        case 0x110b74u: goto label_110b74;
        case 0x110b98u: goto label_110b98;
        case 0x110ba8u: goto label_110ba8;
        case 0x110bc8u: goto label_110bc8;
        case 0x110be0u: goto label_110be0;
        case 0x110bfcu: goto label_110bfc;
        case 0x110c18u: goto label_110c18;
        case 0x110c40u: goto label_110c40;
        case 0x110c54u: goto label_110c54;
        case 0x110c70u: goto label_110c70;
        case 0x110c88u: goto label_110c88;
        case 0x110ca0u: goto label_110ca0;
        case 0x110cb8u: goto label_110cb8;
        case 0x110cd8u: goto label_110cd8;
        case 0x110ce8u: goto label_110ce8;
        case 0x110d08u: goto label_110d08;
        case 0x110d24u: goto label_110d24;
        case 0x110d3cu: goto label_110d3c;
        case 0x110d54u: goto label_110d54;
        case 0x110d78u: goto label_110d78;
        case 0x110d88u: goto label_110d88;
        case 0x110da8u: goto label_110da8;
        case 0x110dc0u: goto label_110dc0;
        case 0x110ddcu: goto label_110ddc;
        case 0x110df0u: goto label_110df0;
        case 0x110e18u: goto label_110e18;
        case 0x110e2cu: goto label_110e2c;
        case 0x110e48u: goto label_110e48;
        case 0x110e5cu: goto label_110e5c;
        case 0x110e78u: goto label_110e78;
        case 0x110e90u: goto label_110e90;
        case 0x110eb4u: goto label_110eb4;
        case 0x110ec4u: goto label_110ec4;
        case 0x110ee4u: goto label_110ee4;
        case 0x110f00u: goto label_110f00;
        case 0x110f18u: goto label_110f18;
        case 0x110f2cu: goto label_110f2c;
        case 0x110f50u: goto label_110f50;
        case 0x110f64u: goto label_110f64;
        case 0x110f84u: goto label_110f84;
        case 0x110fa0u: goto label_110fa0;
        case 0x110fb8u: goto label_110fb8;
        case 0x110fccu: goto label_110fcc;
        case 0x110ff4u: goto label_110ff4;
        case 0x111008u: goto label_111008;
        case 0x111024u: goto label_111024;
        case 0x111040u: goto label_111040;
        case 0x11105cu: goto label_11105c;
        case 0x111070u: goto label_111070;
        case 0x111094u: goto label_111094;
        case 0x1110a8u: goto label_1110a8;
        case 0x1110c8u: goto label_1110c8;
        case 0x1110dcu: goto label_1110dc;
        case 0x1110f4u: goto label_1110f4;
        case 0x111108u: goto label_111108;
        case 0x11112cu: goto label_11112c;
        case 0x111140u: goto label_111140;
        case 0x11115cu: goto label_11115c;
        case 0x111170u: goto label_111170;
        case 0x111184u: goto label_111184;
        case 0x111194u: goto label_111194;
        case 0x1111b0u: goto label_1111b0;
        case 0x1111c0u: goto label_1111c0;
        case 0x1111dcu: goto label_1111dc;
        case 0x1111f0u: goto label_1111f0;
        case 0x111208u: goto label_111208;
        case 0x11121cu: goto label_11121c;
        case 0x111244u: goto label_111244;
        case 0x111254u: goto label_111254;
        case 0x111268u: goto label_111268;
        case 0x111280u: goto label_111280;
        case 0x111298u: goto label_111298;
        case 0x1112acu: goto label_1112ac;
        case 0x1112d4u: goto label_1112d4;
        case 0x1112e8u: goto label_1112e8;
        case 0x111300u: goto label_111300;
        case 0x111318u: goto label_111318;
        case 0x11132cu: goto label_11132c;
        case 0x111344u: goto label_111344;
        default: break;
    }

    ctx->pc = 0x10eb20u;

    // 0x10eb20: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x10eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x10eb24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10eb28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x10eb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x10eb2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x10eb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x10eb30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x10eb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x10eb34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10eb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x10eb38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10eb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10eb3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10eb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10eb40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10eb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10eb44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10eb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10eb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10eb4c: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x10eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
    // 0x10eb50: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x10eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10eb54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10eb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10eb58: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10eb58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10eb5c: 0x24c61758  addiu       $a2, $a2, 0x1758
    ctx->pc = 0x10eb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5976));
    // 0x10eb60: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10EB60u;
    SET_GPR_U32(ctx, 31, 0x10EB68u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10EB60u, 0x10EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB68u;
label_10eb68:
    // 0x10eb68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10eb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10eb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb70: 0xc044844  jal         func_112110
    ctx->pc = 0x10EB70u;
    SET_GPR_U32(ctx, 31, 0x10EB78u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10EB70u, 0x10EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB78u;
label_10eb78:
    // 0x10eb78: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x10eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x10eb7c: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x10eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x10eb80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10eb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb84: 0x278584ec  addiu       $a1, $gp, -0x7B14
    ctx->pc = 0x10eb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935788));
    // 0x10eb88: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EB88u;
    SET_GPR_U32(ctx, 31, 0x10EB90u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EB88u, 0x10EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB90u;
label_10eb90:
    // 0x10eb90: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x10eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x10eb94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10eb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb98: 0x278584f0  addiu       $a1, $gp, -0x7B10
    ctx->pc = 0x10eb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935792));
    // 0x10eb9c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EB9Cu;
    SET_GPR_U32(ctx, 31, 0x10EBA4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EB9Cu, 0x10EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBA4u;
label_10eba4:
    // 0x10eba4: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x10eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x10eba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10eba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebac: 0x278584f4  addiu       $a1, $gp, -0x7B0C
    ctx->pc = 0x10ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935796));
    // 0x10ebb0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EBB0u;
    SET_GPR_U32(ctx, 31, 0x10EBB8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EBB0u, 0x10EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBB8u;
label_10ebb8:
    // 0x10ebb8: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x10ebb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x10ebbc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebc0: 0x278284f8  addiu       $v0, $gp, -0x7B08
    ctx->pc = 0x10ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935800));
    // 0x10ebc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ebc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebc8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EBC8u;
    SET_GPR_U32(ctx, 31, 0x10EBD0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EBC8u, 0x10EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBD0u;
label_10ebd0:
    // 0x10ebd0: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x10ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10ebd4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x10ebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10ebd8: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10ebd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10ebdc: 0x24c61768  addiu       $a2, $a2, 0x1768
    ctx->pc = 0x10ebdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5992));
    // 0x10ebe0: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10EBE0u;
    SET_GPR_U32(ctx, 31, 0x10EBE8u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10EBE0u, 0x10EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBE8u;
label_10ebe8:
    // 0x10ebe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ebe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ebecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebf0: 0xc044844  jal         func_112110
    ctx->pc = 0x10EBF0u;
    SET_GPR_U32(ctx, 31, 0x10EBF8u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10EBF0u, 0x10EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBF8u;
label_10ebf8:
    // 0x10ebf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10ebf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec00: 0x278584fc  addiu       $a1, $gp, -0x7B04
    ctx->pc = 0x10ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935804));
    // 0x10ec04: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EC04u;
    SET_GPR_U32(ctx, 31, 0x10EC0Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EC04u, 0x10EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC0Cu;
label_10ec0c:
    // 0x10ec0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ec0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec10: 0x27858500  addiu       $a1, $gp, -0x7B00
    ctx->pc = 0x10ec10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935808));
    // 0x10ec14: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EC14u;
    SET_GPR_U32(ctx, 31, 0x10EC1Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EC14u, 0x10EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC1Cu;
label_10ec1c:
    // 0x10ec1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec20: 0x27858504  addiu       $a1, $gp, -0x7AFC
    ctx->pc = 0x10ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935812));
    // 0x10ec24: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EC24u;
    SET_GPR_U32(ctx, 31, 0x10EC2Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EC24u, 0x10EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC2Cu;
label_10ec2c:
    // 0x10ec2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ec2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec30: 0x27858508  addiu       $a1, $gp, -0x7AF8
    ctx->pc = 0x10ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935816));
    // 0x10ec34: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EC34u;
    SET_GPR_U32(ctx, 31, 0x10EC3Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EC34u, 0x10EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC3Cu;
label_10ec3c:
    // 0x10ec3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ec3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec40: 0x2785850c  addiu       $a1, $gp, -0x7AF4
    ctx->pc = 0x10ec40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935820));
    // 0x10ec44: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EC44u;
    SET_GPR_U32(ctx, 31, 0x10EC4Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EC44u, 0x10EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC4Cu;
label_10ec4c:
    // 0x10ec4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ec4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec50: 0x27828510  addiu       $v0, $gp, -0x7AF0
    ctx->pc = 0x10ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935824));
    // 0x10ec54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ec54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec58: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EC58u;
    SET_GPR_U32(ctx, 31, 0x10EC60u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EC58u, 0x10EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC60u;
label_10ec60:
    // 0x10ec60: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x10ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10ec64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ec64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ec68: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10ec68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10ec6c: 0x24c61778  addiu       $a2, $a2, 0x1778
    ctx->pc = 0x10ec6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6008));
    // 0x10ec70: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10EC70u;
    SET_GPR_U32(ctx, 31, 0x10EC78u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10EC70u, 0x10EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC78u;
label_10ec78:
    // 0x10ec78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ec78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ec7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec80: 0xc044844  jal         func_112110
    ctx->pc = 0x10EC80u;
    SET_GPR_U32(ctx, 31, 0x10EC88u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10EC80u, 0x10EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC88u;
label_10ec88:
    // 0x10ec88: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x10ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x10ec8c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x10ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x10ec90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ec90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec94: 0x27858514  addiu       $a1, $gp, -0x7AEC
    ctx->pc = 0x10ec94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935828));
    // 0x10ec98: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EC98u;
    SET_GPR_U32(ctx, 31, 0x10ECA0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EC98u, 0x10ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECA0u;
label_10eca0:
    // 0x10eca0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x10eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x10eca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10eca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eca8: 0x27858518  addiu       $a1, $gp, -0x7AE8
    ctx->pc = 0x10eca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935832));
    // 0x10ecac: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10ECACu;
    SET_GPR_U32(ctx, 31, 0x10ECB4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10ECACu, 0x10ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECB4u;
label_10ecb4:
    // 0x10ecb4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10ecb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ecb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ecc0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10ecc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10ecc4: 0x24c61788  addiu       $a2, $a2, 0x1788
    ctx->pc = 0x10ecc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6024));
    // 0x10ecc8: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10ECC8u;
    SET_GPR_U32(ctx, 31, 0x10ECD0u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10ECC8u, 0x10ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECD0u;
label_10ecd0:
    // 0x10ecd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ecd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ecd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecd8: 0xc044844  jal         func_112110
    ctx->pc = 0x10ECD8u;
    SET_GPR_U32(ctx, 31, 0x10ECE0u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10ECD8u, 0x10ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECE0u;
label_10ece0:
    // 0x10ece0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ece0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ece4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ece8: 0x2785851c  addiu       $a1, $gp, -0x7AE4
    ctx->pc = 0x10ece8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935836));
    // 0x10ecec: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10ECECu;
    SET_GPR_U32(ctx, 31, 0x10ECF4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10ECECu, 0x10ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECF4u;
label_10ecf4:
    // 0x10ecf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ecf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecf8: 0x27858520  addiu       $a1, $gp, -0x7AE0
    ctx->pc = 0x10ecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935840));
    // 0x10ecfc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10ECFCu;
    SET_GPR_U32(ctx, 31, 0x10ED04u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10ECFCu, 0x10ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED04u;
label_10ed04:
    // 0x10ed04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ed04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed08: 0x27858524  addiu       $a1, $gp, -0x7ADC
    ctx->pc = 0x10ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935844));
    // 0x10ed0c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10ED0Cu;
    SET_GPR_U32(ctx, 31, 0x10ED14u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10ED0Cu, 0x10ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED14u;
label_10ed14:
    // 0x10ed14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ed14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed18: 0x27858528  addiu       $a1, $gp, -0x7AD8
    ctx->pc = 0x10ed18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935848));
    // 0x10ed1c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10ED1Cu;
    SET_GPR_U32(ctx, 31, 0x10ED24u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10ED1Cu, 0x10ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED24u;
label_10ed24:
    // 0x10ed24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed28: 0x2785852c  addiu       $a1, $gp, -0x7AD4
    ctx->pc = 0x10ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935852));
    // 0x10ed2c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10ED2Cu;
    SET_GPR_U32(ctx, 31, 0x10ED34u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10ED2Cu, 0x10ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED34u;
label_10ed34:
    // 0x10ed34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ed34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed38: 0x27858530  addiu       $a1, $gp, -0x7AD0
    ctx->pc = 0x10ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935856));
    // 0x10ed3c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10ED3Cu;
    SET_GPR_U32(ctx, 31, 0x10ED44u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10ED3Cu, 0x10ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED44u;
label_10ed44:
    // 0x10ed44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ed44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed48: 0x27858534  addiu       $a1, $gp, -0x7ACC
    ctx->pc = 0x10ed48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935860));
    // 0x10ed4c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10ED4Cu;
    SET_GPR_U32(ctx, 31, 0x10ED54u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10ED4Cu, 0x10ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED54u;
label_10ed54:
    // 0x10ed54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed58: 0x27858538  addiu       $a1, $gp, -0x7AC8
    ctx->pc = 0x10ed58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935864));
    // 0x10ed5c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10ED5Cu;
    SET_GPR_U32(ctx, 31, 0x10ED64u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10ED5Cu, 0x10ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED64u;
label_10ed64:
    // 0x10ed64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ed64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed68: 0x2782853c  addiu       $v0, $gp, -0x7AC4
    ctx->pc = 0x10ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935868));
    // 0x10ed6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ed6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed70: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10ED70u;
    SET_GPR_U32(ctx, 31, 0x10ED78u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10ED70u, 0x10ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED78u;
label_10ed78:
    // 0x10ed78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed7c: 0x27858540  addiu       $a1, $gp, -0x7AC0
    ctx->pc = 0x10ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935872));
    // 0x10ed80: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10ED80u;
    SET_GPR_U32(ctx, 31, 0x10ED88u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10ED80u, 0x10ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED88u;
label_10ed88:
    // 0x10ed88: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10ed8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ed8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed90: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x10ed90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10ed94: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10ed94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10ed98: 0x24c61798  addiu       $a2, $a2, 0x1798
    ctx->pc = 0x10ed98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6040));
    // 0x10ed9c: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10ED9Cu;
    SET_GPR_U32(ctx, 31, 0x10EDA4u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10ED9Cu, 0x10EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDA4u;
label_10eda4:
    // 0x10eda4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10eda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10eda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10edac: 0xc044844  jal         func_112110
    ctx->pc = 0x10EDACu;
    SET_GPR_U32(ctx, 31, 0x10EDB4u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10EDACu, 0x10EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDB4u;
label_10edb4:
    // 0x10edb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10edb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10edb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10edb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10edbc: 0x27858544  addiu       $a1, $gp, -0x7ABC
    ctx->pc = 0x10edbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935876));
    // 0x10edc0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EDC0u;
    SET_GPR_U32(ctx, 31, 0x10EDC8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EDC0u, 0x10EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDC8u;
label_10edc8:
    // 0x10edc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10edc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10edcc: 0x27858548  addiu       $a1, $gp, -0x7AB8
    ctx->pc = 0x10edccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    // 0x10edd0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EDD0u;
    SET_GPR_U32(ctx, 31, 0x10EDD8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EDD0u, 0x10EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDD8u;
label_10edd8:
    // 0x10edd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eddc: 0x2785854c  addiu       $a1, $gp, -0x7AB4
    ctx->pc = 0x10eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935884));
    // 0x10ede0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EDE0u;
    SET_GPR_U32(ctx, 31, 0x10EDE8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EDE0u, 0x10EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDE8u;
label_10ede8:
    // 0x10ede8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ede8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10edec: 0x27858550  addiu       $a1, $gp, -0x7AB0
    ctx->pc = 0x10edecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935888));
    // 0x10edf0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EDF0u;
    SET_GPR_U32(ctx, 31, 0x10EDF8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EDF0u, 0x10EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDF8u;
label_10edf8:
    // 0x10edf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10edf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10edfc: 0x27828554  addiu       $v0, $gp, -0x7AAC
    ctx->pc = 0x10edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935892));
    // 0x10ee00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ee00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee04: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EE04u;
    SET_GPR_U32(ctx, 31, 0x10EE0Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EE04u, 0x10EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE0Cu;
label_10ee0c:
    // 0x10ee0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ee0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee10: 0x27858558  addiu       $a1, $gp, -0x7AA8
    ctx->pc = 0x10ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935896));
    // 0x10ee14: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EE14u;
    SET_GPR_U32(ctx, 31, 0x10EE1Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EE14u, 0x10EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE1Cu;
label_10ee1c:
    // 0x10ee1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee20: 0x2782855c  addiu       $v0, $gp, -0x7AA4
    ctx->pc = 0x10ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935900));
    // 0x10ee24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ee24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee28: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EE28u;
    SET_GPR_U32(ctx, 31, 0x10EE30u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EE28u, 0x10EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE30u;
label_10ee30:
    // 0x10ee30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee34: 0x27858560  addiu       $a1, $gp, -0x7AA0
    ctx->pc = 0x10ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x10ee38: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EE38u;
    SET_GPR_U32(ctx, 31, 0x10EE40u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EE38u, 0x10EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE40u;
label_10ee40:
    // 0x10ee40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee44: 0x27858564  addiu       $a1, $gp, -0x7A9C
    ctx->pc = 0x10ee44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935908));
    // 0x10ee48: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EE48u;
    SET_GPR_U32(ctx, 31, 0x10EE50u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EE48u, 0x10EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE50u;
label_10ee50:
    // 0x10ee50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ee50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee54: 0x27828568  addiu       $v0, $gp, -0x7A98
    ctx->pc = 0x10ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935912));
    // 0x10ee58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ee58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee5c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EE5Cu;
    SET_GPR_U32(ctx, 31, 0x10EE64u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EE5Cu, 0x10EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE64u;
label_10ee64:
    // 0x10ee64: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x10ee64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10ee68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10ee68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10ee6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ee70: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10ee70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10ee74: 0x24c617a8  addiu       $a2, $a2, 0x17A8
    ctx->pc = 0x10ee74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6056));
    // 0x10ee78: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10EE78u;
    SET_GPR_U32(ctx, 31, 0x10EE80u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10EE78u, 0x10EE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE80u;
label_10ee80:
    // 0x10ee80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ee80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ee84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee88: 0xc044844  jal         func_112110
    ctx->pc = 0x10EE88u;
    SET_GPR_U32(ctx, 31, 0x10EE90u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10EE88u, 0x10EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE90u;
label_10ee90:
    // 0x10ee90: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x10ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x10ee94: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x10ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x10ee98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ee98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee9c: 0x2785856c  addiu       $a1, $gp, -0x7A94
    ctx->pc = 0x10ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935916));
    // 0x10eea0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EEA0u;
    SET_GPR_U32(ctx, 31, 0x10EEA8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EEA0u, 0x10EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EEA8u;
label_10eea8:
    // 0x10eea8: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x10eea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x10eeac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10eeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eeb0: 0x27828570  addiu       $v0, $gp, -0x7A90
    ctx->pc = 0x10eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935920));
    // 0x10eeb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10eeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eeb8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EEB8u;
    SET_GPR_U32(ctx, 31, 0x10EEC0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EEB8u, 0x10EEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EEC0u;
label_10eec0:
    // 0x10eec0: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x10eec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10eec4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10eec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eec8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x10eec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10eecc: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10eeccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10eed0: 0x24c617b8  addiu       $a2, $a2, 0x17B8
    ctx->pc = 0x10eed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6072));
    // 0x10eed4: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10EED4u;
    SET_GPR_U32(ctx, 31, 0x10EEDCu);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10EED4u, 0x10EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EEDCu;
label_10eedc:
    // 0x10eedc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10eedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10eee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eee4: 0xc044844  jal         func_112110
    ctx->pc = 0x10EEE4u;
    SET_GPR_U32(ctx, 31, 0x10EEECu);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10EEE4u, 0x10EEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EEECu;
label_10eeec:
    // 0x10eeec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10eeecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eef4: 0x27858574  addiu       $a1, $gp, -0x7A8C
    ctx->pc = 0x10eef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935924));
    // 0x10eef8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EEF8u;
    SET_GPR_U32(ctx, 31, 0x10EF00u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EEF8u, 0x10EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF00u;
label_10ef00:
    // 0x10ef00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10ef00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef04: 0x27858578  addiu       $a1, $gp, -0x7A88
    ctx->pc = 0x10ef04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935928));
    // 0x10ef08: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EF08u;
    SET_GPR_U32(ctx, 31, 0x10EF10u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EF08u, 0x10EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF10u;
label_10ef10:
    // 0x10ef10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10ef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef14: 0x2785857c  addiu       $a1, $gp, -0x7A84
    ctx->pc = 0x10ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935932));
    // 0x10ef18: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EF18u;
    SET_GPR_U32(ctx, 31, 0x10EF20u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EF18u, 0x10EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF20u;
label_10ef20:
    // 0x10ef20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10ef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef24: 0x27828580  addiu       $v0, $gp, -0x7A80
    ctx->pc = 0x10ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935936));
    // 0x10ef28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ef28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef2c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EF2Cu;
    SET_GPR_U32(ctx, 31, 0x10EF34u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EF2Cu, 0x10EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF34u;
label_10ef34:
    // 0x10ef34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10ef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef38: 0x27858584  addiu       $a1, $gp, -0x7A7C
    ctx->pc = 0x10ef38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935940));
    // 0x10ef3c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EF3Cu;
    SET_GPR_U32(ctx, 31, 0x10EF44u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EF3Cu, 0x10EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF44u;
label_10ef44:
    // 0x10ef44: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10ef48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ef48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef4c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x10ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10ef50: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10ef50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10ef54: 0x24c617c8  addiu       $a2, $a2, 0x17C8
    ctx->pc = 0x10ef54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6088));
    // 0x10ef58: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10EF58u;
    SET_GPR_U32(ctx, 31, 0x10EF60u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10EF58u, 0x10EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF60u;
label_10ef60:
    // 0x10ef60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ef60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef68: 0xc044844  jal         func_112110
    ctx->pc = 0x10EF68u;
    SET_GPR_U32(ctx, 31, 0x10EF70u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10EF68u, 0x10EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF70u;
label_10ef70:
    // 0x10ef70: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x10ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x10ef74: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x10ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x10ef78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10ef78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef7c: 0x27828588  addiu       $v0, $gp, -0x7A78
    ctx->pc = 0x10ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935944));
    // 0x10ef80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ef80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef84: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EF84u;
    SET_GPR_U32(ctx, 31, 0x10EF8Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EF84u, 0x10EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF8Cu;
label_10ef8c:
    // 0x10ef8c: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x10ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x10ef90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10ef90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef94: 0x2785858c  addiu       $a1, $gp, -0x7A74
    ctx->pc = 0x10ef94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935948));
    // 0x10ef98: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EF98u;
    SET_GPR_U32(ctx, 31, 0x10EFA0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EF98u, 0x10EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFA0u;
label_10efa0:
    // 0x10efa0: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x10efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x10efa4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10efa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efa8: 0x27868590  addiu       $a2, $gp, -0x7A70
    ctx->pc = 0x10efa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935952));
    // 0x10efac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10efacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efb0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EFB0u;
    SET_GPR_U32(ctx, 31, 0x10EFB8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EFB0u, 0x10EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFB8u;
label_10efb8:
    // 0x10efb8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x10efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x10efbc: 0x27858594  addiu       $a1, $gp, -0x7A6C
    ctx->pc = 0x10efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935956));
    // 0x10efc0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10EFC0u;
    SET_GPR_U32(ctx, 31, 0x10EFC8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10EFC0u, 0x10EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFC8u;
label_10efc8:
    // 0x10efc8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10efcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10efccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efd0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x10efd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10efd4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10efd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10efd8: 0x24c617d8  addiu       $a2, $a2, 0x17D8
    ctx->pc = 0x10efd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6104));
    // 0x10efdc: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10EFDCu;
    SET_GPR_U32(ctx, 31, 0x10EFE4u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10EFDCu, 0x10EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFE4u;
label_10efe4:
    // 0x10efe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10efe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10efe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efec: 0xc044844  jal         func_112110
    ctx->pc = 0x10EFECu;
    SET_GPR_U32(ctx, 31, 0x10EFF4u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10EFECu, 0x10EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFF4u;
label_10eff4:
    // 0x10eff4: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x10eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x10eff8: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x10eff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x10effc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f000: 0x27828598  addiu       $v0, $gp, -0x7A68
    ctx->pc = 0x10f000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935960));
    // 0x10f004: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f008: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F008u;
    SET_GPR_U32(ctx, 31, 0x10F010u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F008u, 0x10F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F010u;
label_10f010:
    // 0x10f010: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x10f010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f014: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f018: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10f018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10f01c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f01cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f020: 0x24c617d8  addiu       $a2, $a2, 0x17D8
    ctx->pc = 0x10f020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6104));
    // 0x10f024: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F024u;
    SET_GPR_U32(ctx, 31, 0x10F02Cu);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F024u, 0x10F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F02Cu;
label_10f02c:
    // 0x10f02c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f034: 0xc044844  jal         func_112110
    ctx->pc = 0x10F034u;
    SET_GPR_U32(ctx, 31, 0x10F03Cu);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F034u, 0x10F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F03Cu;
label_10f03c:
    // 0x10f03c: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x10f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x10f040: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x10f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x10f044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f048: 0x2785859c  addiu       $a1, $gp, -0x7A64
    ctx->pc = 0x10f048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935964));
    // 0x10f04c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F04Cu;
    SET_GPR_U32(ctx, 31, 0x10F054u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F04Cu, 0x10F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F054u;
label_10f054:
    // 0x10f054: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x10f054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x10f058: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x10f058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f05c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x10f05cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10f060: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10f060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f064: 0x148508b7  bne         $a0, $a1, . + 4 + (0x8B7 << 2)
    ctx->pc = 0x10F064u;
    {
        const bool branch_taken_0x10f064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x10f064) {
            ctx->pc = 0x111344u;
            goto label_111344;
        }
    }
    ctx->pc = 0x10F06Cu;
    // 0x10f06c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f074: 0x3405ea01  ori         $a1, $zero, 0xEA01
    ctx->pc = 0x10f074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59905);
    // 0x10f078: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f07c: 0x24c617e8  addiu       $a2, $a2, 0x17E8
    ctx->pc = 0x10f07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6120));
    // 0x10f080: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F080u;
    SET_GPR_U32(ctx, 31, 0x10F088u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F080u, 0x10F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F088u;
label_10f088:
    // 0x10f088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f090: 0xc044844  jal         func_112110
    ctx->pc = 0x10F090u;
    SET_GPR_U32(ctx, 31, 0x10F098u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F090u, 0x10F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F098u;
label_10f098:
    // 0x10f098: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x10f098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x10f09c: 0x8fa50184  lw          $a1, 0x184($sp)
    ctx->pc = 0x10f09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x10f0a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0a4: 0x278585a0  addiu       $a1, $gp, -0x7A60
    ctx->pc = 0x10f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935968));
    // 0x10f0a8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F0A8u;
    SET_GPR_U32(ctx, 31, 0x10F0B0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F0A8u, 0x10F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0B0u;
label_10f0b0:
    // 0x10f0b0: 0x8fa50184  lw          $a1, 0x184($sp)
    ctx->pc = 0x10f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x10f0b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0b8: 0x278685a4  addiu       $a2, $gp, -0x7A5C
    ctx->pc = 0x10f0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935972));
    // 0x10f0bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0c0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F0C0u;
    SET_GPR_U32(ctx, 31, 0x10F0C8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F0C0u, 0x10F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0C8u;
label_10f0c8:
    // 0x10f0c8: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x10f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f0cc: 0x3405ea02  ori         $a1, $zero, 0xEA02
    ctx->pc = 0x10f0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59906);
    // 0x10f0d0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f0d4: 0x24c617f8  addiu       $a2, $a2, 0x17F8
    ctx->pc = 0x10f0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6136));
    // 0x10f0d8: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F0D8u;
    SET_GPR_U32(ctx, 31, 0x10F0E0u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F0D8u, 0x10F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0E0u;
label_10f0e0:
    // 0x10f0e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0e8: 0xc044844  jal         func_112110
    ctx->pc = 0x10F0E8u;
    SET_GPR_U32(ctx, 31, 0x10F0F0u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F0E8u, 0x10F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0F0u;
label_10f0f0:
    // 0x10f0f0: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x10f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x10f0f4: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x10f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x10f0f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0fc: 0x278585a8  addiu       $a1, $gp, -0x7A58
    ctx->pc = 0x10f0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935976));
    // 0x10f100: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F100u;
    SET_GPR_U32(ctx, 31, 0x10F108u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F100u, 0x10F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F108u;
label_10f108:
    // 0x10f108: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x10f108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x10f10c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f110: 0x278285ac  addiu       $v0, $gp, -0x7A54
    ctx->pc = 0x10f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935980));
    // 0x10f114: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f118: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F118u;
    SET_GPR_U32(ctx, 31, 0x10F120u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F118u, 0x10F120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F120u;
label_10f120:
    // 0x10f120: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x10f120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x10f124: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f128: 0x278585b0  addiu       $a1, $gp, -0x7A50
    ctx->pc = 0x10f128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x10f12c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F12Cu;
    SET_GPR_U32(ctx, 31, 0x10F134u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F12Cu, 0x10F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F134u;
label_10f134:
    // 0x10f134: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x10f134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x10f138: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f13c: 0x278685b4  addiu       $a2, $gp, -0x7A4C
    ctx->pc = 0x10f13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935988));
    // 0x10f140: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f144: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F144u;
    SET_GPR_U32(ctx, 31, 0x10F14Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F144u, 0x10F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F14Cu;
label_10f14c:
    // 0x10f14c: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x10f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f150: 0x3405ea03  ori         $a1, $zero, 0xEA03
    ctx->pc = 0x10f150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59907);
    // 0x10f154: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f154u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f158: 0x24c61808  addiu       $a2, $a2, 0x1808
    ctx->pc = 0x10f158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6152));
    // 0x10f15c: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F15Cu;
    SET_GPR_U32(ctx, 31, 0x10F164u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F15Cu, 0x10F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F164u;
label_10f164:
    // 0x10f164: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f16c: 0xc044844  jal         func_112110
    ctx->pc = 0x10F16Cu;
    SET_GPR_U32(ctx, 31, 0x10F174u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F16Cu, 0x10F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F174u;
label_10f174:
    // 0x10f174: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x10f174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x10f178: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x10f178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x10f17c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f180: 0x278585b8  addiu       $a1, $gp, -0x7A48
    ctx->pc = 0x10f180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935992));
    // 0x10f184: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F184u;
    SET_GPR_U32(ctx, 31, 0x10F18Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F184u, 0x10F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F18Cu;
label_10f18c:
    // 0x10f18c: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x10f18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x10f190: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f194: 0x278285bc  addiu       $v0, $gp, -0x7A44
    ctx->pc = 0x10f194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935996));
    // 0x10f198: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f19c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F19Cu;
    SET_GPR_U32(ctx, 31, 0x10F1A4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F19Cu, 0x10F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F1A4u;
label_10f1a4:
    // 0x10f1a4: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x10f1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x10f1a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1ac: 0x278285c0  addiu       $v0, $gp, -0x7A40
    ctx->pc = 0x10f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936000));
    // 0x10f1b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1b4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F1B4u;
    SET_GPR_U32(ctx, 31, 0x10F1BCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F1B4u, 0x10F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F1BCu;
label_10f1bc:
    // 0x10f1bc: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x10f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x10f1c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1c4: 0x278685c4  addiu       $a2, $gp, -0x7A3C
    ctx->pc = 0x10f1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936004));
    // 0x10f1c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1cc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F1CCu;
    SET_GPR_U32(ctx, 31, 0x10F1D4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F1CCu, 0x10F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F1D4u;
label_10f1d4:
    // 0x10f1d4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1dc: 0x3405ea04  ori         $a1, $zero, 0xEA04
    ctx->pc = 0x10f1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59908);
    // 0x10f1e0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f1e4: 0x24c61818  addiu       $a2, $a2, 0x1818
    ctx->pc = 0x10f1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6168));
    // 0x10f1e8: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F1E8u;
    SET_GPR_U32(ctx, 31, 0x10F1F0u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F1E8u, 0x10F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F1F0u;
label_10f1f0:
    // 0x10f1f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1f8: 0xc044844  jal         func_112110
    ctx->pc = 0x10F1F8u;
    SET_GPR_U32(ctx, 31, 0x10F200u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F1F8u, 0x10F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F200u;
label_10f200:
    // 0x10f200: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x10f200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x10f204: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x10f204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x10f208: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f20c: 0x278585c8  addiu       $a1, $gp, -0x7A38
    ctx->pc = 0x10f20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936008));
    // 0x10f210: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F210u;
    SET_GPR_U32(ctx, 31, 0x10F218u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F210u, 0x10F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F218u;
label_10f218:
    // 0x10f218: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x10f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x10f21c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f220: 0x278285cc  addiu       $v0, $gp, -0x7A34
    ctx->pc = 0x10f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936012));
    // 0x10f224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f228: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F228u;
    SET_GPR_U32(ctx, 31, 0x10F230u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F228u, 0x10F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F230u;
label_10f230:
    // 0x10f230: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x10f230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x10f234: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f238: 0x278585d0  addiu       $a1, $gp, -0x7A30
    ctx->pc = 0x10f238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936016));
    // 0x10f23c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F23Cu;
    SET_GPR_U32(ctx, 31, 0x10F244u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F23Cu, 0x10F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F244u;
label_10f244:
    // 0x10f244: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x10f244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x10f248: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f24c: 0x278685d4  addiu       $a2, $gp, -0x7A2C
    ctx->pc = 0x10f24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936020));
    // 0x10f250: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f254: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F254u;
    SET_GPR_U32(ctx, 31, 0x10F25Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F254u, 0x10F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F25Cu;
label_10f25c:
    // 0x10f25c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f264: 0x3405ea05  ori         $a1, $zero, 0xEA05
    ctx->pc = 0x10f264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59909);
    // 0x10f268: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f26c: 0x24c61828  addiu       $a2, $a2, 0x1828
    ctx->pc = 0x10f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6184));
    // 0x10f270: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F270u;
    SET_GPR_U32(ctx, 31, 0x10F278u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F270u, 0x10F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F278u;
label_10f278:
    // 0x10f278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f280: 0xc044844  jal         func_112110
    ctx->pc = 0x10F280u;
    SET_GPR_U32(ctx, 31, 0x10F288u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F280u, 0x10F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F288u;
label_10f288:
    // 0x10f288: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x10f288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x10f28c: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x10f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x10f290: 0x278585d8  addiu       $a1, $gp, -0x7A28
    ctx->pc = 0x10f290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936024));
    // 0x10f294: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F294u;
    SET_GPR_U32(ctx, 31, 0x10F29Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F294u, 0x10F29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F29Cu;
label_10f29c:
    // 0x10f29c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10f29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2a0: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x10f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x10f2a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2a8: 0x278285dc  addiu       $v0, $gp, -0x7A24
    ctx->pc = 0x10f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936028));
    // 0x10f2ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2b0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F2B0u;
    SET_GPR_U32(ctx, 31, 0x10F2B8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F2B0u, 0x10F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F2B8u;
label_10f2b8:
    // 0x10f2b8: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x10f2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x10f2bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2c0: 0x278285e0  addiu       $v0, $gp, -0x7A20
    ctx->pc = 0x10f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936032));
    // 0x10f2c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2c8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F2C8u;
    SET_GPR_U32(ctx, 31, 0x10F2D0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F2C8u, 0x10F2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F2D0u;
label_10f2d0:
    // 0x10f2d0: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x10f2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x10f2d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2d8: 0x278285e4  addiu       $v0, $gp, -0x7A1C
    ctx->pc = 0x10f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936036));
    // 0x10f2dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2e0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F2E0u;
    SET_GPR_U32(ctx, 31, 0x10F2E8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F2E0u, 0x10F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F2E8u;
label_10f2e8:
    // 0x10f2e8: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x10f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f2ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2f0: 0x3402ea06  ori         $v0, $zero, 0xEA06
    ctx->pc = 0x10f2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59910);
    // 0x10f2f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2f8: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f2fc: 0x24c61838  addiu       $a2, $a2, 0x1838
    ctx->pc = 0x10f2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6200));
    // 0x10f300: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F300u;
    SET_GPR_U32(ctx, 31, 0x10F308u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F300u, 0x10F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F308u;
label_10f308:
    // 0x10f308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f310: 0xc044844  jal         func_112110
    ctx->pc = 0x10F310u;
    SET_GPR_U32(ctx, 31, 0x10F318u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F310u, 0x10F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F318u;
label_10f318:
    // 0x10f318: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x10f318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x10f31c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x10f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x10f320: 0x278585e8  addiu       $a1, $gp, -0x7A18
    ctx->pc = 0x10f320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936040));
    // 0x10f324: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F324u;
    SET_GPR_U32(ctx, 31, 0x10F32Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F324u, 0x10F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F32Cu;
label_10f32c:
    // 0x10f32c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10f32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f330: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x10f330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x10f334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f338: 0x278285ec  addiu       $v0, $gp, -0x7A14
    ctx->pc = 0x10f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936044));
    // 0x10f33c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f340: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F340u;
    SET_GPR_U32(ctx, 31, 0x10F348u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F340u, 0x10F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F348u;
label_10f348:
    // 0x10f348: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f34c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x10f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x10f350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f354: 0x278585f0  addiu       $a1, $gp, -0x7A10
    ctx->pc = 0x10f354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936048));
    // 0x10f358: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F358u;
    SET_GPR_U32(ctx, 31, 0x10F360u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F358u, 0x10F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F360u;
label_10f360:
    // 0x10f360: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x10f360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x10f364: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f368: 0x278285f4  addiu       $v0, $gp, -0x7A0C
    ctx->pc = 0x10f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936052));
    // 0x10f36c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f370: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F370u;
    SET_GPR_U32(ctx, 31, 0x10F378u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F370u, 0x10F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F378u;
label_10f378:
    // 0x10f378: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f37c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f384: 0x3405ea36  ori         $a1, $zero, 0xEA36
    ctx->pc = 0x10f384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59958);
    // 0x10f388: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10f388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10f38c: 0x24421848  addiu       $v0, $v0, 0x1848
    ctx->pc = 0x10f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6216));
    // 0x10f390: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10f390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f394: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F394u;
    SET_GPR_U32(ctx, 31, 0x10F39Cu);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F394u, 0x10F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F39Cu;
label_10f39c:
    // 0x10f39c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3a4: 0xc044844  jal         func_112110
    ctx->pc = 0x10F3A4u;
    SET_GPR_U32(ctx, 31, 0x10F3ACu);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F3A4u, 0x10F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3ACu;
label_10f3ac:
    // 0x10f3ac: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x10f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x10f3b0: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x10f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x10f3b4: 0x278585f8  addiu       $a1, $gp, -0x7A08
    ctx->pc = 0x10f3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936056));
    // 0x10f3b8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F3B8u;
    SET_GPR_U32(ctx, 31, 0x10F3C0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F3B8u, 0x10F3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3C0u;
label_10f3c0:
    // 0x10f3c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10f3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3c4: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x10f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x10f3c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3cc: 0x278285fc  addiu       $v0, $gp, -0x7A04
    ctx->pc = 0x10f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936060));
    // 0x10f3d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3d4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F3D4u;
    SET_GPR_U32(ctx, 31, 0x10F3DCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F3D4u, 0x10F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3DCu;
label_10f3dc:
    // 0x10f3dc: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x10f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x10f3e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3e4: 0x27828600  addiu       $v0, $gp, -0x7A00
    ctx->pc = 0x10f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936064));
    // 0x10f3e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3ec: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F3ECu;
    SET_GPR_U32(ctx, 31, 0x10F3F4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F3ECu, 0x10F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3F4u;
label_10f3f4:
    // 0x10f3f4: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x10f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x10f3f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3fc: 0x27828604  addiu       $v0, $gp, -0x79FC
    ctx->pc = 0x10f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936068));
    // 0x10f400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f404: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F404u;
    SET_GPR_U32(ctx, 31, 0x10F40Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F404u, 0x10F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F40Cu;
label_10f40c:
    // 0x10f40c: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x10f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f410: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f414: 0x3406ea07  ori         $a2, $zero, 0xEA07
    ctx->pc = 0x10f414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59911);
    // 0x10f418: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f41c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10f420: 0x24421858  addiu       $v0, $v0, 0x1858
    ctx->pc = 0x10f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6232));
    // 0x10f424: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10f424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f428: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F428u;
    SET_GPR_U32(ctx, 31, 0x10F430u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F428u, 0x10F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F430u;
label_10f430:
    // 0x10f430: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f438: 0xc044844  jal         func_112110
    ctx->pc = 0x10F438u;
    SET_GPR_U32(ctx, 31, 0x10F440u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F438u, 0x10F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F440u;
label_10f440:
    // 0x10f440: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f444: 0xafa50168  sw          $a1, 0x168($sp)
    ctx->pc = 0x10f444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 5));
    // 0x10f448: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x10f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x10f44c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f450: 0x27858608  addiu       $a1, $gp, -0x79F8
    ctx->pc = 0x10f450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936072));
    // 0x10f454: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F454u;
    SET_GPR_U32(ctx, 31, 0x10F45Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F454u, 0x10F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F45Cu;
label_10f45c:
    // 0x10f45c: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x10f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x10f460: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f464: 0x2782860c  addiu       $v0, $gp, -0x79F4
    ctx->pc = 0x10f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936076));
    // 0x10f468: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f46c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F46Cu;
    SET_GPR_U32(ctx, 31, 0x10F474u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F46Cu, 0x10F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F474u;
label_10f474:
    // 0x10f474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f478: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x10f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x10f47c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f480: 0x27858610  addiu       $a1, $gp, -0x79F0
    ctx->pc = 0x10f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936080));
    // 0x10f484: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F484u;
    SET_GPR_U32(ctx, 31, 0x10F48Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F484u, 0x10F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F48Cu;
label_10f48c:
    // 0x10f48c: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x10f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x10f490: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f494: 0x27828614  addiu       $v0, $gp, -0x79EC
    ctx->pc = 0x10f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936084));
    // 0x10f498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f49c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F49Cu;
    SET_GPR_U32(ctx, 31, 0x10F4A4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F49Cu, 0x10F4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4A4u;
label_10f4a4:
    // 0x10f4a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4a8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f4ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4b0: 0x3405ea08  ori         $a1, $zero, 0xEA08
    ctx->pc = 0x10f4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59912);
    // 0x10f4b4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10f4b8: 0x24421868  addiu       $v0, $v0, 0x1868
    ctx->pc = 0x10f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6248));
    // 0x10f4bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10f4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4c0: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F4C0u;
    SET_GPR_U32(ctx, 31, 0x10F4C8u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F4C0u, 0x10F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4C8u;
label_10f4c8:
    // 0x10f4c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4d0: 0xc044844  jal         func_112110
    ctx->pc = 0x10F4D0u;
    SET_GPR_U32(ctx, 31, 0x10F4D8u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F4D0u, 0x10F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4D8u;
label_10f4d8:
    // 0x10f4d8: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x10f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x10f4dc: 0x8fa50164  lw          $a1, 0x164($sp)
    ctx->pc = 0x10f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x10f4e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4e4: 0x27828618  addiu       $v0, $gp, -0x79E8
    ctx->pc = 0x10f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936088));
    // 0x10f4e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4ec: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F4ECu;
    SET_GPR_U32(ctx, 31, 0x10F4F4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F4ECu, 0x10F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4F4u;
label_10f4f4:
    // 0x10f4f4: 0x8fa50164  lw          $a1, 0x164($sp)
    ctx->pc = 0x10f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x10f4f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4fc: 0x2786861c  addiu       $a2, $gp, -0x79E4
    ctx->pc = 0x10f4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936092));
    // 0x10f500: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f504: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F504u;
    SET_GPR_U32(ctx, 31, 0x10F50Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F504u, 0x10F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F50Cu;
label_10f50c:
    // 0x10f50c: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x10f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x10f510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f514: 0x27858620  addiu       $a1, $gp, -0x79E0
    ctx->pc = 0x10f514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936096));
    // 0x10f518: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F518u;
    SET_GPR_U32(ctx, 31, 0x10F520u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F518u, 0x10F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F520u;
label_10f520:
    // 0x10f520: 0x8fa50164  lw          $a1, 0x164($sp)
    ctx->pc = 0x10f520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x10f524: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f528: 0x27828624  addiu       $v0, $gp, -0x79DC
    ctx->pc = 0x10f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936100));
    // 0x10f52c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f530: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F530u;
    SET_GPR_U32(ctx, 31, 0x10F538u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F530u, 0x10F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F538u;
label_10f538:
    // 0x10f538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f53c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f544: 0x3405ea16  ori         $a1, $zero, 0xEA16
    ctx->pc = 0x10f544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59926);
    // 0x10f548: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10f548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10f54c: 0x24421878  addiu       $v0, $v0, 0x1878
    ctx->pc = 0x10f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6264));
    // 0x10f550: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10f550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f554: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F554u;
    SET_GPR_U32(ctx, 31, 0x10F55Cu);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F554u, 0x10F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F55Cu;
label_10f55c:
    // 0x10f55c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f564: 0xc044844  jal         func_112110
    ctx->pc = 0x10F564u;
    SET_GPR_U32(ctx, 31, 0x10F56Cu);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F564u, 0x10F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F56Cu;
label_10f56c:
    // 0x10f56c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x10f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x10f570: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x10f570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x10f574: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f578: 0x27828628  addiu       $v0, $gp, -0x79D8
    ctx->pc = 0x10f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936104));
    // 0x10f57c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f580: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F580u;
    SET_GPR_U32(ctx, 31, 0x10F588u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F580u, 0x10F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F588u;
label_10f588:
    // 0x10f588: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x10f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x10f58c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f590: 0x2785862c  addiu       $a1, $gp, -0x79D4
    ctx->pc = 0x10f590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936108));
    // 0x10f594: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F594u;
    SET_GPR_U32(ctx, 31, 0x10F59Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F594u, 0x10F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F59Cu;
label_10f59c:
    // 0x10f59c: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x10f59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x10f5a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5a4: 0x27828630  addiu       $v0, $gp, -0x79D0
    ctx->pc = 0x10f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936112));
    // 0x10f5a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5ac: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F5ACu;
    SET_GPR_U32(ctx, 31, 0x10F5B4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F5ACu, 0x10F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5B4u;
label_10f5b4:
    // 0x10f5b4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x10f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x10f5b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5bc: 0x27858634  addiu       $a1, $gp, -0x79CC
    ctx->pc = 0x10f5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936116));
    // 0x10f5c0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F5C0u;
    SET_GPR_U32(ctx, 31, 0x10F5C8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F5C0u, 0x10F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5C8u;
label_10f5c8:
    // 0x10f5c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5cc: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x10f5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f5d0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10f5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5d4: 0x3402ea0b  ori         $v0, $zero, 0xEA0B
    ctx->pc = 0x10f5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59915);
    // 0x10f5d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5dc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10f5e0: 0x24421888  addiu       $v0, $v0, 0x1888
    ctx->pc = 0x10f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6280));
    // 0x10f5e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10f5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5e8: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F5E8u;
    SET_GPR_U32(ctx, 31, 0x10F5F0u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F5E8u, 0x10F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5F0u;
label_10f5f0:
    // 0x10f5f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5f8: 0xc044844  jal         func_112110
    ctx->pc = 0x10F5F8u;
    SET_GPR_U32(ctx, 31, 0x10F600u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F5F8u, 0x10F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F600u;
label_10f600:
    // 0x10f600: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f604: 0xafa5015c  sw          $a1, 0x15C($sp)
    ctx->pc = 0x10f604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 5));
    // 0x10f608: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x10f608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x10f60c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f610: 0x27858638  addiu       $a1, $gp, -0x79C8
    ctx->pc = 0x10f610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936120));
    // 0x10f614: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F614u;
    SET_GPR_U32(ctx, 31, 0x10F61Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F614u, 0x10F61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F61Cu;
label_10f61c:
    // 0x10f61c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x10f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x10f620: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f624: 0x2785863c  addiu       $a1, $gp, -0x79C4
    ctx->pc = 0x10f624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936124));
    // 0x10f628: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F628u;
    SET_GPR_U32(ctx, 31, 0x10F630u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F628u, 0x10F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F630u;
label_10f630:
    // 0x10f630: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f634: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x10f634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x10f638: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10f638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f63c: 0x27828640  addiu       $v0, $gp, -0x79C0
    ctx->pc = 0x10f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936128));
    // 0x10f640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f644: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F644u;
    SET_GPR_U32(ctx, 31, 0x10F64Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F644u, 0x10F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F64Cu;
label_10f64c:
    // 0x10f64c: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x10f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x10f650: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f654: 0x27828644  addiu       $v0, $gp, -0x79BC
    ctx->pc = 0x10f654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936132));
    // 0x10f658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f65c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F65Cu;
    SET_GPR_U32(ctx, 31, 0x10F664u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F65Cu, 0x10F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F664u;
label_10f664:
    // 0x10f664: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f668: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f66c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f670: 0x3405ea09  ori         $a1, $zero, 0xEA09
    ctx->pc = 0x10f670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59913);
    // 0x10f674: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10f674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10f678: 0x24421898  addiu       $v0, $v0, 0x1898
    ctx->pc = 0x10f678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6296));
    // 0x10f67c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10f67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f680: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F680u;
    SET_GPR_U32(ctx, 31, 0x10F688u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F680u, 0x10F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F688u;
label_10f688:
    // 0x10f688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f68c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f690: 0xc044844  jal         func_112110
    ctx->pc = 0x10F690u;
    SET_GPR_U32(ctx, 31, 0x10F698u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F690u, 0x10F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F698u;
label_10f698:
    // 0x10f698: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x10f698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x10f69c: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x10f69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x10f6a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f6a4: 0x27828648  addiu       $v0, $gp, -0x79B8
    ctx->pc = 0x10f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936136));
    // 0x10f6a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f6ac: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F6ACu;
    SET_GPR_U32(ctx, 31, 0x10F6B4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F6ACu, 0x10F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6B4u;
label_10f6b4:
    // 0x10f6b4: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x10f6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x10f6b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f6bc: 0x2786864c  addiu       $a2, $gp, -0x79B4
    ctx->pc = 0x10f6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936140));
    // 0x10f6c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f6c4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F6C4u;
    SET_GPR_U32(ctx, 31, 0x10F6CCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F6C4u, 0x10F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6CCu;
label_10f6cc:
    // 0x10f6cc: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x10f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x10f6d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f6d4: 0x27858650  addiu       $a1, $gp, -0x79B0
    ctx->pc = 0x10f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936144));
    // 0x10f6d8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F6D8u;
    SET_GPR_U32(ctx, 31, 0x10F6E0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F6D8u, 0x10F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6E0u;
label_10f6e0:
    // 0x10f6e0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x10f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x10f6e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f6e8: 0x27858654  addiu       $a1, $gp, -0x79AC
    ctx->pc = 0x10f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936148));
    // 0x10f6ec: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F6ECu;
    SET_GPR_U32(ctx, 31, 0x10F6F4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F6ECu, 0x10F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6F4u;
label_10f6f4:
    // 0x10f6f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f6f8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f700: 0x3405ea3c  ori         $a1, $zero, 0xEA3C
    ctx->pc = 0x10f700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59964);
    // 0x10f704: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f708: 0x24c618a8  addiu       $a2, $a2, 0x18A8
    ctx->pc = 0x10f708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6312));
    // 0x10f70c: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F70Cu;
    SET_GPR_U32(ctx, 31, 0x10F714u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F70Cu, 0x10F714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F714u;
label_10f714:
    // 0x10f714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f71c: 0xc044844  jal         func_112110
    ctx->pc = 0x10F71Cu;
    SET_GPR_U32(ctx, 31, 0x10F724u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F71Cu, 0x10F724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F724u;
label_10f724:
    // 0x10f724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f728: 0xafa40154  sw          $a0, 0x154($sp)
    ctx->pc = 0x10f728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 4));
    // 0x10f72c: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x10f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x10f730: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f734: 0x27828658  addiu       $v0, $gp, -0x79A8
    ctx->pc = 0x10f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936152));
    // 0x10f738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f73c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F73Cu;
    SET_GPR_U32(ctx, 31, 0x10F744u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F73Cu, 0x10F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F744u;
label_10f744:
    // 0x10f744: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x10f744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x10f748: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f74c: 0x2786865c  addiu       $a2, $gp, -0x79A4
    ctx->pc = 0x10f74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936156));
    // 0x10f750: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f754: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F754u;
    SET_GPR_U32(ctx, 31, 0x10F75Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F754u, 0x10F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F75Cu;
label_10f75c:
    // 0x10f75c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x10f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x10f760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f764: 0x27858660  addiu       $a1, $gp, -0x79A0
    ctx->pc = 0x10f764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936160));
    // 0x10f768: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F768u;
    SET_GPR_U32(ctx, 31, 0x10F770u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F768u, 0x10F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F770u;
label_10f770:
    // 0x10f770: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x10f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x10f774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f778: 0x27858664  addiu       $a1, $gp, -0x799C
    ctx->pc = 0x10f778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936164));
    // 0x10f77c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F77Cu;
    SET_GPR_U32(ctx, 31, 0x10F784u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F77Cu, 0x10F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F784u;
label_10f784:
    // 0x10f784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f788: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x10f788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f78c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10f78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f790: 0x3402ea0a  ori         $v0, $zero, 0xEA0A
    ctx->pc = 0x10f790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59914);
    // 0x10f794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f798: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10f798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10f79c: 0x244218b8  addiu       $v0, $v0, 0x18B8
    ctx->pc = 0x10f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6328));
    // 0x10f7a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10f7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f7a4: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F7A4u;
    SET_GPR_U32(ctx, 31, 0x10F7ACu);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F7A4u, 0x10F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7ACu;
label_10f7ac:
    // 0x10f7ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f7b4: 0xc044844  jal         func_112110
    ctx->pc = 0x10F7B4u;
    SET_GPR_U32(ctx, 31, 0x10F7BCu);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F7B4u, 0x10F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7BCu;
label_10f7bc:
    // 0x10f7bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f7c0: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x10f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
    // 0x10f7c4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x10f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10f7c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f7cc: 0x27858668  addiu       $a1, $gp, -0x7998
    ctx->pc = 0x10f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936168));
    // 0x10f7d0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F7D0u;
    SET_GPR_U32(ctx, 31, 0x10F7D8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F7D0u, 0x10F7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7D8u;
label_10f7d8:
    // 0x10f7d8: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x10f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10f7dc: 0x2785866c  addiu       $a1, $gp, -0x7994
    ctx->pc = 0x10f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936172));
    // 0x10f7e0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F7E0u;
    SET_GPR_U32(ctx, 31, 0x10F7E8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F7E0u, 0x10F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7E8u;
label_10f7e8:
    // 0x10f7e8: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x10f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10f7ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f7f0: 0x27868670  addiu       $a2, $gp, -0x7990
    ctx->pc = 0x10f7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936176));
    // 0x10f7f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f7f8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F7F8u;
    SET_GPR_U32(ctx, 31, 0x10F800u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F7F8u, 0x10F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F800u;
label_10f800:
    // 0x10f800: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x10f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10f804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f808: 0x27858674  addiu       $a1, $gp, -0x798C
    ctx->pc = 0x10f808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936180));
    // 0x10f80c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F80Cu;
    SET_GPR_U32(ctx, 31, 0x10F814u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F80Cu, 0x10F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F814u;
label_10f814:
    // 0x10f814: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f818: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f81c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f820: 0x3405ea14  ori         $a1, $zero, 0xEA14
    ctx->pc = 0x10f820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59924);
    // 0x10f824: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f824u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f828: 0x24c618c8  addiu       $a2, $a2, 0x18C8
    ctx->pc = 0x10f828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6344));
    // 0x10f82c: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F82Cu;
    SET_GPR_U32(ctx, 31, 0x10F834u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F82Cu, 0x10F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F834u;
label_10f834:
    // 0x10f834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f83c: 0xc044844  jal         func_112110
    ctx->pc = 0x10F83Cu;
    SET_GPR_U32(ctx, 31, 0x10F844u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F83Cu, 0x10F844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F844u;
label_10f844:
    // 0x10f844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f848: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x10f848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x10f84c: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x10f84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x10f850: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f854: 0x27868678  addiu       $a2, $gp, -0x7988
    ctx->pc = 0x10f854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936184));
    // 0x10f858: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f85c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F85Cu;
    SET_GPR_U32(ctx, 31, 0x10F864u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F85Cu, 0x10F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F864u;
label_10f864:
    // 0x10f864: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x10f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x10f868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f86c: 0x2785867c  addiu       $a1, $gp, -0x7984
    ctx->pc = 0x10f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936188));
    // 0x10f870: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F870u;
    SET_GPR_U32(ctx, 31, 0x10F878u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F870u, 0x10F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F878u;
label_10f878:
    // 0x10f878: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f87c: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x10f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x10f880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f884: 0x27858680  addiu       $a1, $gp, -0x7980
    ctx->pc = 0x10f884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936192));
    // 0x10f888: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F888u;
    SET_GPR_U32(ctx, 31, 0x10F890u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F888u, 0x10F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F890u;
label_10f890:
    // 0x10f890: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x10f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x10f894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f898: 0x27858684  addiu       $a1, $gp, -0x797C
    ctx->pc = 0x10f898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936196));
    // 0x10f89c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F89Cu;
    SET_GPR_U32(ctx, 31, 0x10F8A4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F89Cu, 0x10F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8A4u;
label_10f8a4:
    // 0x10f8a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8a8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f8ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8b0: 0x3405ea17  ori         $a1, $zero, 0xEA17
    ctx->pc = 0x10f8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59927);
    // 0x10f8b4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f8b8: 0x24c618d8  addiu       $a2, $a2, 0x18D8
    ctx->pc = 0x10f8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6360));
    // 0x10f8bc: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F8BCu;
    SET_GPR_U32(ctx, 31, 0x10F8C4u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F8BCu, 0x10F8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8C4u;
label_10f8c4:
    // 0x10f8c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8cc: 0xc044844  jal         func_112110
    ctx->pc = 0x10F8CCu;
    SET_GPR_U32(ctx, 31, 0x10F8D4u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F8CCu, 0x10F8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8D4u;
label_10f8d4:
    // 0x10f8d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8d8: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x10f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x10f8dc: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x10f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x10f8e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8e4: 0x27868688  addiu       $a2, $gp, -0x7978
    ctx->pc = 0x10f8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936200));
    // 0x10f8e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8ec: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F8ECu;
    SET_GPR_U32(ctx, 31, 0x10F8F4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F8ECu, 0x10F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8F4u;
label_10f8f4:
    // 0x10f8f4: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x10f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x10f8f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8fc: 0x2785868c  addiu       $a1, $gp, -0x7974
    ctx->pc = 0x10f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936204));
    // 0x10f900: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F900u;
    SET_GPR_U32(ctx, 31, 0x10F908u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F900u, 0x10F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F908u;
label_10f908:
    // 0x10f908: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f90c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x10f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x10f910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f914: 0x27858690  addiu       $a1, $gp, -0x7970
    ctx->pc = 0x10f914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936208));
    // 0x10f918: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F918u;
    SET_GPR_U32(ctx, 31, 0x10F920u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F918u, 0x10F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F920u;
label_10f920:
    // 0x10f920: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x10f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x10f924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f928: 0x27858694  addiu       $a1, $gp, -0x796C
    ctx->pc = 0x10f928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936212));
    // 0x10f92c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F92Cu;
    SET_GPR_U32(ctx, 31, 0x10F934u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F92Cu, 0x10F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F934u;
label_10f934:
    // 0x10f934: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f93c: 0x3405ea18  ori         $a1, $zero, 0xEA18
    ctx->pc = 0x10f93cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59928);
    // 0x10f940: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f940u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f944: 0x24c618e8  addiu       $a2, $a2, 0x18E8
    ctx->pc = 0x10f944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6376));
    // 0x10f948: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F948u;
    SET_GPR_U32(ctx, 31, 0x10F950u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F948u, 0x10F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F950u;
label_10f950:
    // 0x10f950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f958: 0xc044844  jal         func_112110
    ctx->pc = 0x10F958u;
    SET_GPR_U32(ctx, 31, 0x10F960u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F958u, 0x10F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F960u;
label_10f960:
    // 0x10f960: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x10f960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x10f964: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x10f964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x10f968: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f96c: 0x27868698  addiu       $a2, $gp, -0x7968
    ctx->pc = 0x10f96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936216));
    // 0x10f970: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10f970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f974: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F974u;
    SET_GPR_U32(ctx, 31, 0x10F97Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F974u, 0x10F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F97Cu;
label_10f97c:
    // 0x10f97c: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x10f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x10f980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f984: 0x2785869c  addiu       $a1, $gp, -0x7964
    ctx->pc = 0x10f984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936220));
    // 0x10f988: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F988u;
    SET_GPR_U32(ctx, 31, 0x10F990u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F988u, 0x10F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F990u;
label_10f990:
    // 0x10f990: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f994: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x10f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x10f998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f99c: 0x278286a0  addiu       $v0, $gp, -0x7960
    ctx->pc = 0x10f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936224));
    // 0x10f9a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9a4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F9A4u;
    SET_GPR_U32(ctx, 31, 0x10F9ACu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F9A4u, 0x10F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F9ACu;
label_10f9ac:
    // 0x10f9ac: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x10f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x10f9b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9b4: 0x278586a4  addiu       $a1, $gp, -0x795C
    ctx->pc = 0x10f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936228));
    // 0x10f9b8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10F9B8u;
    SET_GPR_U32(ctx, 31, 0x10F9C0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10F9B8u, 0x10F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F9C0u;
label_10f9c0:
    // 0x10f9c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9c4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10f9c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9cc: 0x3405ea19  ori         $a1, $zero, 0xEA19
    ctx->pc = 0x10f9ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59929);
    // 0x10f9d0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10f9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x10f9d4: 0x24c61900  addiu       $a2, $a2, 0x1900
    ctx->pc = 0x10f9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6400));
    // 0x10f9d8: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10F9D8u;
    SET_GPR_U32(ctx, 31, 0x10F9E0u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10F9D8u, 0x10F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F9E0u;
label_10f9e0:
    // 0x10f9e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9e8: 0xc044844  jal         func_112110
    ctx->pc = 0x10F9E8u;
    SET_GPR_U32(ctx, 31, 0x10F9F0u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10F9E8u, 0x10F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F9F0u;
label_10f9f0:
    // 0x10f9f0: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x10f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x10f9f4: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x10f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10f9f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10f9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9fc: 0x278686a8  addiu       $a2, $gp, -0x7958
    ctx->pc = 0x10f9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936232));
    // 0x10fa00: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10fa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa04: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FA04u;
    SET_GPR_U32(ctx, 31, 0x10FA0Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FA04u, 0x10FA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA0Cu;
label_10fa0c:
    // 0x10fa0c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x10fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10fa10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa14: 0x278586ac  addiu       $a1, $gp, -0x7954
    ctx->pc = 0x10fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936236));
    // 0x10fa18: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FA18u;
    SET_GPR_U32(ctx, 31, 0x10FA20u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FA18u, 0x10FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA20u;
label_10fa20:
    // 0x10fa20: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x10fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10fa24: 0x278586b0  addiu       $a1, $gp, -0x7950
    ctx->pc = 0x10fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936240));
    // 0x10fa28: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FA28u;
    SET_GPR_U32(ctx, 31, 0x10FA30u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FA28u, 0x10FA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA30u;
label_10fa30:
    // 0x10fa30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fa30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa34: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x10fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10fa38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa3c: 0x278286b4  addiu       $v0, $gp, -0x794C
    ctx->pc = 0x10fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936244));
    // 0x10fa40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa44: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FA44u;
    SET_GPR_U32(ctx, 31, 0x10FA4Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FA44u, 0x10FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA4Cu;
label_10fa4c:
    // 0x10fa4c: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x10fa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10fa50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa54: 0x3402ea20  ori         $v0, $zero, 0xEA20
    ctx->pc = 0x10fa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59936);
    // 0x10fa58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fa58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa5c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10fa60: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x10fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x10fa64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fa64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa68: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10FA68u;
    SET_GPR_U32(ctx, 31, 0x10FA70u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10FA68u, 0x10FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA70u;
label_10fa70:
    // 0x10fa70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10fa74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa7c: 0xc044844  jal         func_112110
    ctx->pc = 0x10FA7Cu;
    SET_GPR_U32(ctx, 31, 0x10FA84u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10FA7Cu, 0x10FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA84u;
label_10fa84:
    // 0x10fa84: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x10fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x10fa88: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x10fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x10fa8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa90: 0x278586b8  addiu       $a1, $gp, -0x7948
    ctx->pc = 0x10fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936248));
    // 0x10fa94: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FA94u;
    SET_GPR_U32(ctx, 31, 0x10FA9Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FA94u, 0x10FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA9Cu;
label_10fa9c:
    // 0x10fa9c: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x10fa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x10faa0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10faa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10faa4: 0x278286bc  addiu       $v0, $gp, -0x7944
    ctx->pc = 0x10faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936252));
    // 0x10faa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10faa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10faac: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FAACu;
    SET_GPR_U32(ctx, 31, 0x10FAB4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FAACu, 0x10FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FAB4u;
label_10fab4:
    // 0x10fab4: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x10fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x10fab8: 0x278586c0  addiu       $a1, $gp, -0x7940
    ctx->pc = 0x10fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936256));
    // 0x10fabc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FABCu;
    SET_GPR_U32(ctx, 31, 0x10FAC4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FABCu, 0x10FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FAC4u;
label_10fac4:
    // 0x10fac4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fac8: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x10fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x10facc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10faccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fad0: 0x278286c4  addiu       $v0, $gp, -0x793C
    ctx->pc = 0x10fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936260));
    // 0x10fad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fad8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FAD8u;
    SET_GPR_U32(ctx, 31, 0x10FAE0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FAD8u, 0x10FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FAE0u;
label_10fae0:
    // 0x10fae0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fae4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10fae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10faec: 0x3405ea1a  ori         $a1, $zero, 0xEA1A
    ctx->pc = 0x10faecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59930);
    // 0x10faf0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10faf4: 0x24421920  addiu       $v0, $v0, 0x1920
    ctx->pc = 0x10faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6432));
    // 0x10faf8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10faf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fafc: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10FAFCu;
    SET_GPR_U32(ctx, 31, 0x10FB04u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10FAFCu, 0x10FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB04u;
label_10fb04:
    // 0x10fb04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10fb08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb10: 0xc044844  jal         func_112110
    ctx->pc = 0x10FB10u;
    SET_GPR_U32(ctx, 31, 0x10FB18u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10FB10u, 0x10FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB18u;
label_10fb18:
    // 0x10fb18: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x10fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x10fb1c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x10fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x10fb20: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb24: 0x278286c8  addiu       $v0, $gp, -0x7938
    ctx->pc = 0x10fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936264));
    // 0x10fb28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb2c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FB2Cu;
    SET_GPR_U32(ctx, 31, 0x10FB34u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FB2Cu, 0x10FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB34u;
label_10fb34:
    // 0x10fb34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb38: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x10fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x10fb3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb40: 0x278286cc  addiu       $v0, $gp, -0x7934
    ctx->pc = 0x10fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936268));
    // 0x10fb44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb48: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FB48u;
    SET_GPR_U32(ctx, 31, 0x10FB50u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FB48u, 0x10FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB50u;
label_10fb50:
    // 0x10fb50: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x10fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x10fb54: 0x278586d0  addiu       $a1, $gp, -0x7930
    ctx->pc = 0x10fb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936272));
    // 0x10fb58: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FB58u;
    SET_GPR_U32(ctx, 31, 0x10FB60u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FB58u, 0x10FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB60u;
label_10fb60:
    // 0x10fb60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb64: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x10fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x10fb68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb6c: 0x278286d4  addiu       $v0, $gp, -0x792C
    ctx->pc = 0x10fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936276));
    // 0x10fb70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb74: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FB74u;
    SET_GPR_U32(ctx, 31, 0x10FB7Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FB74u, 0x10FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB7Cu;
label_10fb7c:
    // 0x10fb7c: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x10fb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10fb80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb84: 0x3402ea1b  ori         $v0, $zero, 0xEA1B
    ctx->pc = 0x10fb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59931);
    // 0x10fb88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb8c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10fb90: 0x24421930  addiu       $v0, $v0, 0x1930
    ctx->pc = 0x10fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6448));
    // 0x10fb94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb98: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10FB98u;
    SET_GPR_U32(ctx, 31, 0x10FBA0u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10FB98u, 0x10FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBA0u;
label_10fba0:
    // 0x10fba0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fba4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10fba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbac: 0xc044844  jal         func_112110
    ctx->pc = 0x10FBACu;
    SET_GPR_U32(ctx, 31, 0x10FBB4u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10FBACu, 0x10FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBB4u;
label_10fbb4:
    // 0x10fbb4: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x10fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x10fbb8: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x10fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x10fbbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbc0: 0x278586d8  addiu       $a1, $gp, -0x7928
    ctx->pc = 0x10fbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936280));
    // 0x10fbc4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FBC4u;
    SET_GPR_U32(ctx, 31, 0x10FBCCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FBC4u, 0x10FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBCCu;
label_10fbcc:
    // 0x10fbcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fbccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbd0: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x10fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x10fbd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbd8: 0x278286dc  addiu       $v0, $gp, -0x7924
    ctx->pc = 0x10fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936284));
    // 0x10fbdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbe0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FBE0u;
    SET_GPR_U32(ctx, 31, 0x10FBE8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FBE0u, 0x10FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBE8u;
label_10fbe8:
    // 0x10fbe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbec: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x10fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x10fbf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbf4: 0x278586e0  addiu       $a1, $gp, -0x7920
    ctx->pc = 0x10fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936288));
    // 0x10fbf8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FBF8u;
    SET_GPR_U32(ctx, 31, 0x10FC00u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FBF8u, 0x10FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC00u;
label_10fc00:
    // 0x10fc00: 0x8fa50134  lw          $a1, 0x134($sp)
    ctx->pc = 0x10fc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x10fc04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc08: 0x278286e4  addiu       $v0, $gp, -0x791C
    ctx->pc = 0x10fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936292));
    // 0x10fc0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc10: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FC10u;
    SET_GPR_U32(ctx, 31, 0x10FC18u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FC10u, 0x10FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC18u;
label_10fc18:
    // 0x10fc18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc1c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10fc20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc24: 0x3405ea1e  ori         $a1, $zero, 0xEA1E
    ctx->pc = 0x10fc24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59934);
    // 0x10fc28: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10fc2c: 0x24421940  addiu       $v0, $v0, 0x1940
    ctx->pc = 0x10fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
    // 0x10fc30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc34: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10FC34u;
    SET_GPR_U32(ctx, 31, 0x10FC3Cu);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10FC34u, 0x10FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC3Cu;
label_10fc3c:
    // 0x10fc3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10fc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc48: 0xc044844  jal         func_112110
    ctx->pc = 0x10FC48u;
    SET_GPR_U32(ctx, 31, 0x10FC50u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10FC48u, 0x10FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC50u;
label_10fc50:
    // 0x10fc50: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x10fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x10fc54: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x10fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10fc58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc5c: 0x278286e8  addiu       $v0, $gp, -0x7918
    ctx->pc = 0x10fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936296));
    // 0x10fc60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc64: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FC64u;
    SET_GPR_U32(ctx, 31, 0x10FC6Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FC64u, 0x10FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC6Cu;
label_10fc6c:
    // 0x10fc6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc70: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x10fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10fc74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc78: 0x278286ec  addiu       $v0, $gp, -0x7914
    ctx->pc = 0x10fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936300));
    // 0x10fc7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc80: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FC80u;
    SET_GPR_U32(ctx, 31, 0x10FC88u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FC80u, 0x10FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC88u;
label_10fc88:
    // 0x10fc88: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x10fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10fc8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc90: 0x278286f0  addiu       $v0, $gp, -0x7910
    ctx->pc = 0x10fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936304));
    // 0x10fc94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc98: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FC98u;
    SET_GPR_U32(ctx, 31, 0x10FCA0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FC98u, 0x10FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCA0u;
label_10fca0:
    // 0x10fca0: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x10fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10fca4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fca8: 0x278686f4  addiu       $a2, $gp, -0x790C
    ctx->pc = 0x10fca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936308));
    // 0x10fcac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10fcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcb0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FCB0u;
    SET_GPR_U32(ctx, 31, 0x10FCB8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FCB0u, 0x10FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCB8u;
label_10fcb8:
    // 0x10fcb8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10fcbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcc0: 0x3405ea0c  ori         $a1, $zero, 0xEA0C
    ctx->pc = 0x10fcc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59916);
    // 0x10fcc4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10fcc8: 0x24421950  addiu       $v0, $v0, 0x1950
    ctx->pc = 0x10fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6480));
    // 0x10fccc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fcccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcd0: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10FCD0u;
    SET_GPR_U32(ctx, 31, 0x10FCD8u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10FCD0u, 0x10FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCD8u;
label_10fcd8:
    // 0x10fcd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fcd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10fcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fce4: 0xc044844  jal         func_112110
    ctx->pc = 0x10FCE4u;
    SET_GPR_U32(ctx, 31, 0x10FCECu);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10FCE4u, 0x10FCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCECu;
label_10fcec:
    // 0x10fcec: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x10fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x10fcf0: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x10fcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x10fcf4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcf8: 0x278286f8  addiu       $v0, $gp, -0x7908
    ctx->pc = 0x10fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936312));
    // 0x10fcfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd00: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FD00u;
    SET_GPR_U32(ctx, 31, 0x10FD08u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FD00u, 0x10FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD08u;
label_10fd08:
    // 0x10fd08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd0c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x10fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x10fd10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd14: 0x278286fc  addiu       $v0, $gp, -0x7904
    ctx->pc = 0x10fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936316));
    // 0x10fd18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd1c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FD1Cu;
    SET_GPR_U32(ctx, 31, 0x10FD24u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FD1Cu, 0x10FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD24u;
label_10fd24:
    // 0x10fd24: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x10fd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x10fd28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd2c: 0x27828700  addiu       $v0, $gp, -0x7900
    ctx->pc = 0x10fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936320));
    // 0x10fd30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd34: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FD34u;
    SET_GPR_U32(ctx, 31, 0x10FD3Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FD34u, 0x10FD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD3Cu;
label_10fd3c:
    // 0x10fd3c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x10fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x10fd40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd44: 0x27858704  addiu       $a1, $gp, -0x78FC
    ctx->pc = 0x10fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936324));
    // 0x10fd48: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FD48u;
    SET_GPR_U32(ctx, 31, 0x10FD50u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FD48u, 0x10FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD50u;
label_10fd50:
    // 0x10fd50: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x10fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10fd54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd58: 0x3402ea24  ori         $v0, $zero, 0xEA24
    ctx->pc = 0x10fd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
    // 0x10fd5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd60: 0x27828948  addiu       $v0, $gp, -0x76B8
    ctx->pc = 0x10fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936904));
    // 0x10fd64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fd64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd68: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10FD68u;
    SET_GPR_U32(ctx, 31, 0x10FD70u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10FD68u, 0x10FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD70u;
label_10fd70:
    // 0x10fd70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10fd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd78: 0xc044844  jal         func_112110
    ctx->pc = 0x10FD78u;
    SET_GPR_U32(ctx, 31, 0x10FD80u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10FD78u, 0x10FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD80u;
label_10fd80:
    // 0x10fd80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd84: 0xafa50128  sw          $a1, 0x128($sp)
    ctx->pc = 0x10fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 5));
    // 0x10fd88: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x10fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x10fd8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd90: 0x27868708  addiu       $a2, $gp, -0x78F8
    ctx->pc = 0x10fd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936328));
    // 0x10fd94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10fd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd98: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FD98u;
    SET_GPR_U32(ctx, 31, 0x10FDA0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FD98u, 0x10FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDA0u;
label_10fda0:
    // 0x10fda0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x10fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x10fda4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fda8: 0x2782870c  addiu       $v0, $gp, -0x78F4
    ctx->pc = 0x10fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936332));
    // 0x10fdac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fdb0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FDB0u;
    SET_GPR_U32(ctx, 31, 0x10FDB8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FDB0u, 0x10FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDB8u;
label_10fdb8:
    // 0x10fdb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fdbc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x10fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x10fdc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fdc4: 0x27858710  addiu       $a1, $gp, -0x78F0
    ctx->pc = 0x10fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936336));
    // 0x10fdc8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FDC8u;
    SET_GPR_U32(ctx, 31, 0x10FDD0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FDC8u, 0x10FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDD0u;
label_10fdd0:
    // 0x10fdd0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x10fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x10fdd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fdd8: 0x27858714  addiu       $a1, $gp, -0x78EC
    ctx->pc = 0x10fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936340));
    // 0x10fddc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FDDCu;
    SET_GPR_U32(ctx, 31, 0x10FDE4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FDDCu, 0x10FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDE4u;
label_10fde4:
    // 0x10fde4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fde8: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x10fde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10fdec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10fdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fdf0: 0x3402ea25  ori         $v0, $zero, 0xEA25
    ctx->pc = 0x10fdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59941);
    // 0x10fdf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fdf8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10fdfc: 0x24421970  addiu       $v0, $v0, 0x1970
    ctx->pc = 0x10fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6512));
    // 0x10fe00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fe00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe04: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10FE04u;
    SET_GPR_U32(ctx, 31, 0x10FE0Cu);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10FE04u, 0x10FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE0Cu;
label_10fe0c:
    // 0x10fe0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fe0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10fe10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe18: 0xc044844  jal         func_112110
    ctx->pc = 0x10FE18u;
    SET_GPR_U32(ctx, 31, 0x10FE20u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10FE18u, 0x10FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE20u;
label_10fe20:
    // 0x10fe20: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x10fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x10fe24: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x10fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x10fe28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe2c: 0x27828718  addiu       $v0, $gp, -0x78E8
    ctx->pc = 0x10fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936344));
    // 0x10fe30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fe30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe34: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FE34u;
    SET_GPR_U32(ctx, 31, 0x10FE3Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FE34u, 0x10FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE3Cu;
label_10fe3c:
    // 0x10fe3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fe3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe40: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x10fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x10fe44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe48: 0x2782871c  addiu       $v0, $gp, -0x78E4
    ctx->pc = 0x10fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936348));
    // 0x10fe4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe50: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FE50u;
    SET_GPR_U32(ctx, 31, 0x10FE58u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FE50u, 0x10FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE58u;
label_10fe58:
    // 0x10fe58: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x10fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x10fe5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe60: 0x27828720  addiu       $v0, $gp, -0x78E0
    ctx->pc = 0x10fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936352));
    // 0x10fe64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fe64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe68: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FE68u;
    SET_GPR_U32(ctx, 31, 0x10FE70u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FE68u, 0x10FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE70u;
label_10fe70:
    // 0x10fe70: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x10fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x10fe74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fe74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe78: 0x27868724  addiu       $a2, $gp, -0x78DC
    ctx->pc = 0x10fe78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936356));
    // 0x10fe7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10fe7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe80: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FE80u;
    SET_GPR_U32(ctx, 31, 0x10FE88u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FE80u, 0x10FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE88u;
label_10fe88:
    // 0x10fe88: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10fe8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe90: 0x3405ea26  ori         $a1, $zero, 0xEA26
    ctx->pc = 0x10fe90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59942);
    // 0x10fe94: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10fe98: 0x24421980  addiu       $v0, $v0, 0x1980
    ctx->pc = 0x10fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x10fe9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10fe9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fea0: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10FEA0u;
    SET_GPR_U32(ctx, 31, 0x10FEA8u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10FEA0u, 0x10FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEA8u;
label_10fea8:
    // 0x10fea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10fea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10feac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10feacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10feb0: 0xc044844  jal         func_112110
    ctx->pc = 0x10FEB0u;
    SET_GPR_U32(ctx, 31, 0x10FEB8u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10FEB0u, 0x10FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEB8u;
label_10feb8:
    // 0x10feb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10feb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10febc: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x10febcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x10fec0: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x10fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10fec4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fec8: 0x27828728  addiu       $v0, $gp, -0x78D8
    ctx->pc = 0x10fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936360));
    // 0x10fecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10feccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fed0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FED0u;
    SET_GPR_U32(ctx, 31, 0x10FED8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FED0u, 0x10FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FED8u;
label_10fed8:
    // 0x10fed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fedc: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x10fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10fee0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10fee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fee4: 0x2782872c  addiu       $v0, $gp, -0x78D4
    ctx->pc = 0x10fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936364));
    // 0x10fee8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10feec: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FEECu;
    SET_GPR_U32(ctx, 31, 0x10FEF4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FEECu, 0x10FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEF4u;
label_10fef4:
    // 0x10fef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fef8: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x10fef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10fefc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff00: 0x27828730  addiu       $v0, $gp, -0x78D0
    ctx->pc = 0x10ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936368));
    // 0x10ff04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ff04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff08: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FF08u;
    SET_GPR_U32(ctx, 31, 0x10FF10u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FF08u, 0x10FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF10u;
label_10ff10:
    // 0x10ff10: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x10ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10ff14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10ff14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff18: 0x27868734  addiu       $a2, $gp, -0x78CC
    ctx->pc = 0x10ff18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936372));
    // 0x10ff1c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10ff1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff20: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FF20u;
    SET_GPR_U32(ctx, 31, 0x10FF28u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FF20u, 0x10FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF28u;
label_10ff28:
    // 0x10ff28: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x10ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10ff2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ff2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff30: 0x3405ea27  ori         $a1, $zero, 0xEA27
    ctx->pc = 0x10ff30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59943);
    // 0x10ff34: 0x27828950  addiu       $v0, $gp, -0x76B0
    ctx->pc = 0x10ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936912));
    // 0x10ff38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10ff38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff3c: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10FF3Cu;
    SET_GPR_U32(ctx, 31, 0x10FF44u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10FF3Cu, 0x10FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF44u;
label_10ff44:
    // 0x10ff44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ff44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ff48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff4c: 0xc044844  jal         func_112110
    ctx->pc = 0x10FF4Cu;
    SET_GPR_U32(ctx, 31, 0x10FF54u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10FF4Cu, 0x10FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF54u;
label_10ff54:
    // 0x10ff54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ff54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff58: 0xafa5011c  sw          $a1, 0x11C($sp)
    ctx->pc = 0x10ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 5));
    // 0x10ff5c: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x10ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x10ff60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff64: 0x27868738  addiu       $a2, $gp, -0x78C8
    ctx->pc = 0x10ff64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936376));
    // 0x10ff68: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10ff68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff6c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FF6Cu;
    SET_GPR_U32(ctx, 31, 0x10FF74u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FF6Cu, 0x10FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF74u;
label_10ff74:
    // 0x10ff74: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x10ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x10ff78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ff78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff7c: 0x2782873c  addiu       $v0, $gp, -0x78C4
    ctx->pc = 0x10ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936380));
    // 0x10ff80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ff80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff84: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FF84u;
    SET_GPR_U32(ctx, 31, 0x10FF8Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FF84u, 0x10FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF8Cu;
label_10ff8c:
    // 0x10ff8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ff8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff90: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x10ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x10ff94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff98: 0x27858740  addiu       $a1, $gp, -0x78C0
    ctx->pc = 0x10ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936384));
    // 0x10ff9c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FF9Cu;
    SET_GPR_U32(ctx, 31, 0x10FFA4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FF9Cu, 0x10FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFA4u;
label_10ffa4:
    // 0x10ffa4: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x10ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x10ffa8: 0x27858744  addiu       $a1, $gp, -0x78BC
    ctx->pc = 0x10ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936388));
    // 0x10ffac: 0xc0444e0  jal         func_111380
    ctx->pc = 0x10FFACu;
    SET_GPR_U32(ctx, 31, 0x10FFB4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x10FFACu, 0x10FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFB4u;
label_10ffb4:
    // 0x10ffb4: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x10ffb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x10ffb8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10ffb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffbc: 0x3406ea28  ori         $a2, $zero, 0xEA28
    ctx->pc = 0x10ffbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59944);
    // 0x10ffc0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10ffc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffc4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x10ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x10ffc8: 0x24421990  addiu       $v0, $v0, 0x1990
    ctx->pc = 0x10ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6544));
    // 0x10ffcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10ffccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffd0: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x10FFD0u;
    SET_GPR_U32(ctx, 31, 0x10FFD8u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x10FFD0u, 0x10FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFD8u;
label_10ffd8:
    // 0x10ffd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ffd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ffdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffe0: 0xc044844  jal         func_112110
    ctx->pc = 0x10FFE0u;
    SET_GPR_U32(ctx, 31, 0x10FFE8u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x10FFE0u, 0x10FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFE8u;
label_10ffe8:
    // 0x10ffe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ffe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffec: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x10ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
    // 0x10fff0: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x10fff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x10fff4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10fff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fff8: 0x27828748  addiu       $v0, $gp, -0x78B8
    ctx->pc = 0x10fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936392));
    // 0x10fffc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110000: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110000u;
    SET_GPR_U32(ctx, 31, 0x110008u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110000u, 0x110008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110008u;
label_110008:
    // 0x110008: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11000c: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x11000cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x110010: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x110010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110014: 0x2782874c  addiu       $v0, $gp, -0x78B4
    ctx->pc = 0x110014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936396));
    // 0x110018: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11001c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x11001Cu;
    SET_GPR_U32(ctx, 31, 0x110024u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x11001Cu, 0x110024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110024u;
label_110024:
    // 0x110024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110028: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x110028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x11002c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11002cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110030: 0x27868750  addiu       $a2, $gp, -0x78B0
    ctx->pc = 0x110030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936400));
    // 0x110034: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110038: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110038u;
    SET_GPR_U32(ctx, 31, 0x110040u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110038u, 0x110040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110040u;
label_110040:
    // 0x110040: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x110040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x110044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110048: 0x27858754  addiu       $a1, $gp, -0x78AC
    ctx->pc = 0x110048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936404));
    // 0x11004c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x11004Cu;
    SET_GPR_U32(ctx, 31, 0x110054u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x11004Cu, 0x110054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110054u;
label_110054:
    // 0x110054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110058: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x110058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x11005c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110060: 0x3405ea29  ori         $a1, $zero, 0xEA29
    ctx->pc = 0x110060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59945);
    // 0x110064: 0x27828958  addiu       $v0, $gp, -0x76A8
    ctx->pc = 0x110064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936920));
    // 0x110068: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11006c: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x11006Cu;
    SET_GPR_U32(ctx, 31, 0x110074u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x11006Cu, 0x110074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110074u;
label_110074:
    // 0x110074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11007c: 0xc044844  jal         func_112110
    ctx->pc = 0x11007Cu;
    SET_GPR_U32(ctx, 31, 0x110084u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x11007Cu, 0x110084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110084u;
label_110084:
    // 0x110084: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110088: 0xafa50114  sw          $a1, 0x114($sp)
    ctx->pc = 0x110088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 5));
    // 0x11008c: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x11008cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x110090: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110094: 0x27828758  addiu       $v0, $gp, -0x78A8
    ctx->pc = 0x110094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936408));
    // 0x110098: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11009c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x11009Cu;
    SET_GPR_U32(ctx, 31, 0x1100A4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x11009Cu, 0x1100A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100A4u;
label_1100a4:
    // 0x1100a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1100a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100a8: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x1100a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x1100ac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1100acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100b0: 0x2782875c  addiu       $v0, $gp, -0x78A4
    ctx->pc = 0x1100b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936412));
    // 0x1100b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1100b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100b8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1100B8u;
    SET_GPR_U32(ctx, 31, 0x1100C0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1100B8u, 0x1100C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100C0u;
label_1100c0:
    // 0x1100c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1100c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100c4: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x1100c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x1100c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1100c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100cc: 0x27868760  addiu       $a2, $gp, -0x78A0
    ctx->pc = 0x1100ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936416));
    // 0x1100d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1100d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100d4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1100D4u;
    SET_GPR_U32(ctx, 31, 0x1100DCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1100D4u, 0x1100DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100DCu;
label_1100dc:
    // 0x1100dc: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x1100dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x1100e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1100e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100e4: 0x27858764  addiu       $a1, $gp, -0x789C
    ctx->pc = 0x1100e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936420));
    // 0x1100e8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1100E8u;
    SET_GPR_U32(ctx, 31, 0x1100F0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1100E8u, 0x1100F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100F0u;
label_1100f0:
    // 0x1100f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1100f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100f4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1100f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1100f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1100f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100fc: 0x3405ea2b  ori         $a1, $zero, 0xEA2B
    ctx->pc = 0x1100fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59947);
    // 0x110100: 0x27828960  addiu       $v0, $gp, -0x76A0
    ctx->pc = 0x110100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936928));
    // 0x110104: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110108: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110108u;
    SET_GPR_U32(ctx, 31, 0x110110u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110108u, 0x110110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110110u;
label_110110:
    // 0x110110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110118: 0xc044844  jal         func_112110
    ctx->pc = 0x110118u;
    SET_GPR_U32(ctx, 31, 0x110120u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110118u, 0x110120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110120u;
label_110120:
    // 0x110120: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110124: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x110124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x110128: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x110128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11012c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110130: 0x27828768  addiu       $v0, $gp, -0x7898
    ctx->pc = 0x110130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936424));
    // 0x110134: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110138: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110138u;
    SET_GPR_U32(ctx, 31, 0x110140u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110138u, 0x110140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110140u;
label_110140:
    // 0x110140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110144: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x110144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x110148: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x110148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11014c: 0x2782876c  addiu       $v0, $gp, -0x7894
    ctx->pc = 0x11014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936428));
    // 0x110150: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110154: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110154u;
    SET_GPR_U32(ctx, 31, 0x11015Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110154u, 0x11015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11015Cu;
label_11015c:
    // 0x11015c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x11015cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x110160: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110164: 0x27868770  addiu       $a2, $gp, -0x7890
    ctx->pc = 0x110164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936432));
    // 0x110168: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11016c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x11016Cu;
    SET_GPR_U32(ctx, 31, 0x110174u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x11016Cu, 0x110174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110174u;
label_110174:
    // 0x110174: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x110174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x110178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11017c: 0x27858774  addiu       $a1, $gp, -0x788C
    ctx->pc = 0x11017cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936436));
    // 0x110180: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110180u;
    SET_GPR_U32(ctx, 31, 0x110188u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110180u, 0x110188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110188u;
label_110188:
    // 0x110188: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11018c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x11018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110194: 0x3402ea2c  ori         $v0, $zero, 0xEA2C
    ctx->pc = 0x110194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59948);
    // 0x110198: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11019c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x11019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1101a0: 0x244219a0  addiu       $v0, $v0, 0x19A0
    ctx->pc = 0x1101a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6560));
    // 0x1101a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1101a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101a8: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x1101A8u;
    SET_GPR_U32(ctx, 31, 0x1101B0u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x1101A8u, 0x1101B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101B0u;
label_1101b0:
    // 0x1101b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1101b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1101b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101b8: 0xc044844  jal         func_112110
    ctx->pc = 0x1101B8u;
    SET_GPR_U32(ctx, 31, 0x1101C0u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x1101B8u, 0x1101C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101C0u;
label_1101c0:
    // 0x1101c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1101c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101c4: 0xafa5010c  sw          $a1, 0x10C($sp)
    ctx->pc = 0x1101c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 5));
    // 0x1101c8: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x1101c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1101cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1101ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101d0: 0x27828778  addiu       $v0, $gp, -0x7888
    ctx->pc = 0x1101d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x1101d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1101d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101d8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1101D8u;
    SET_GPR_U32(ctx, 31, 0x1101E0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1101D8u, 0x1101E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101E0u;
label_1101e0:
    // 0x1101e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1101e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101e4: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x1101e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1101e8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1101e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101ec: 0x2782877c  addiu       $v0, $gp, -0x7884
    ctx->pc = 0x1101ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936444));
    // 0x1101f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1101f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101f4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1101F4u;
    SET_GPR_U32(ctx, 31, 0x1101FCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1101F4u, 0x1101FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101FCu;
label_1101fc:
    // 0x1101fc: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x1101fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x110200: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110204: 0x27868780  addiu       $a2, $gp, -0x7880
    ctx->pc = 0x110204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936448));
    // 0x110208: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11020c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x11020Cu;
    SET_GPR_U32(ctx, 31, 0x110214u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x11020Cu, 0x110214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110214u;
label_110214:
    // 0x110214: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x110214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x110218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11021c: 0x27858784  addiu       $a1, $gp, -0x787C
    ctx->pc = 0x11021cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936452));
    // 0x110220: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110220u;
    SET_GPR_U32(ctx, 31, 0x110228u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110220u, 0x110228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110228u;
label_110228:
    // 0x110228: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x110228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x11022c: 0x3405ea2e  ori         $a1, $zero, 0xEA2E
    ctx->pc = 0x11022cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59950);
    // 0x110230: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x110230u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x110234: 0x24c619b8  addiu       $a2, $a2, 0x19B8
    ctx->pc = 0x110234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6584));
    // 0x110238: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110238u;
    SET_GPR_U32(ctx, 31, 0x110240u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110238u, 0x110240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110240u;
label_110240:
    // 0x110240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110248: 0xc044844  jal         func_112110
    ctx->pc = 0x110248u;
    SET_GPR_U32(ctx, 31, 0x110250u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110248u, 0x110250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110250u;
label_110250:
    // 0x110250: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x110250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x110254: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x110254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x110258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11025c: 0x27858788  addiu       $a1, $gp, -0x7878
    ctx->pc = 0x11025cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936456));
    // 0x110260: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110260u;
    SET_GPR_U32(ctx, 31, 0x110268u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110260u, 0x110268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110268u;
label_110268:
    // 0x110268: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x110268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x11026c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110270: 0x2785878c  addiu       $a1, $gp, -0x7874
    ctx->pc = 0x110270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936460));
    // 0x110274: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110274u;
    SET_GPR_U32(ctx, 31, 0x11027Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110274u, 0x11027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11027Cu;
label_11027c:
    // 0x11027c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x11027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x110280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110284: 0x27858790  addiu       $a1, $gp, -0x7870
    ctx->pc = 0x110284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936464));
    // 0x110288: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110288u;
    SET_GPR_U32(ctx, 31, 0x110290u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110288u, 0x110290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110290u;
label_110290:
    // 0x110290: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x110290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x110294: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x110294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110298: 0x27828794  addiu       $v0, $gp, -0x786C
    ctx->pc = 0x110298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936468));
    // 0x11029c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11029cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102a0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1102A0u;
    SET_GPR_U32(ctx, 31, 0x1102A8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1102A0u, 0x1102A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102A8u;
label_1102a8:
    // 0x1102a8: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1102a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1102ac: 0x3405ea2f  ori         $a1, $zero, 0xEA2F
    ctx->pc = 0x1102acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59951);
    // 0x1102b0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1102b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1102b4: 0x24c619c8  addiu       $a2, $a2, 0x19C8
    ctx->pc = 0x1102b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6600));
    // 0x1102b8: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x1102B8u;
    SET_GPR_U32(ctx, 31, 0x1102C0u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x1102B8u, 0x1102C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102C0u;
label_1102c0:
    // 0x1102c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1102c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1102c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102c8: 0xc044844  jal         func_112110
    ctx->pc = 0x1102C8u;
    SET_GPR_U32(ctx, 31, 0x1102D0u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x1102C8u, 0x1102D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102D0u;
label_1102d0:
    // 0x1102d0: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1102d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x1102d4: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x1102d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1102d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1102d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102dc: 0x27828798  addiu       $v0, $gp, -0x7868
    ctx->pc = 0x1102dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936472));
    // 0x1102e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1102e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102e4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1102E4u;
    SET_GPR_U32(ctx, 31, 0x1102ECu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1102E4u, 0x1102ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102ECu;
label_1102ec:
    // 0x1102ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1102ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102f0: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1102f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1102f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1102f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102f8: 0x2785879c  addiu       $a1, $gp, -0x7864
    ctx->pc = 0x1102f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936476));
    // 0x1102fc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1102FCu;
    SET_GPR_U32(ctx, 31, 0x110304u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1102FCu, 0x110304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110304u;
label_110304:
    // 0x110304: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x110304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x110308: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11030c: 0x278287a0  addiu       $v0, $gp, -0x7860
    ctx->pc = 0x11030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936480));
    // 0x110310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110314: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110314u;
    SET_GPR_U32(ctx, 31, 0x11031Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110314u, 0x11031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11031Cu;
label_11031c:
    // 0x11031c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11031cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110320: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x110320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x110324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110328: 0x278287a4  addiu       $v0, $gp, -0x785C
    ctx->pc = 0x110328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936484));
    // 0x11032c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11032cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110330: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110330u;
    SET_GPR_U32(ctx, 31, 0x110338u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110330u, 0x110338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110338u;
label_110338:
    // 0x110338: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x110338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x11033c: 0x3405ea30  ori         $a1, $zero, 0xEA30
    ctx->pc = 0x11033cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59952);
    // 0x110340: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x110340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x110344: 0x24c619d8  addiu       $a2, $a2, 0x19D8
    ctx->pc = 0x110344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6616));
    // 0x110348: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110348u;
    SET_GPR_U32(ctx, 31, 0x110350u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110348u, 0x110350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110350u;
label_110350:
    // 0x110350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110358: 0xc044844  jal         func_112110
    ctx->pc = 0x110358u;
    SET_GPR_U32(ctx, 31, 0x110360u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110358u, 0x110360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110360u;
label_110360:
    // 0x110360: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x110360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x110364: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x110364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x110368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11036c: 0x278587a8  addiu       $a1, $gp, -0x7858
    ctx->pc = 0x11036cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936488));
    // 0x110370: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110370u;
    SET_GPR_U32(ctx, 31, 0x110378u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110370u, 0x110378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110378u;
label_110378:
    // 0x110378: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x110378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x11037c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110380: 0x278587ac  addiu       $a1, $gp, -0x7854
    ctx->pc = 0x110380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936492));
    // 0x110384: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110384u;
    SET_GPR_U32(ctx, 31, 0x11038Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110384u, 0x11038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11038Cu;
label_11038c:
    // 0x11038c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x11038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x110390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110394: 0x278587b0  addiu       $a1, $gp, -0x7850
    ctx->pc = 0x110394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936496));
    // 0x110398: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110398u;
    SET_GPR_U32(ctx, 31, 0x1103A0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110398u, 0x1103A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103A0u;
label_1103a0:
    // 0x1103a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1103a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103a4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1103a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1103a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1103a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103ac: 0x278287b4  addiu       $v0, $gp, -0x784C
    ctx->pc = 0x1103acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936500));
    // 0x1103b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1103b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103b4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1103B4u;
    SET_GPR_U32(ctx, 31, 0x1103BCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1103B4u, 0x1103BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103BCu;
label_1103bc:
    // 0x1103bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1103bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103c0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1103c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1103c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1103c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103c8: 0x3405ea3b  ori         $a1, $zero, 0xEA3B
    ctx->pc = 0x1103c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59963);
    // 0x1103cc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1103ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1103d0: 0x244219e8  addiu       $v0, $v0, 0x19E8
    ctx->pc = 0x1103d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6632));
    // 0x1103d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1103d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103d8: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x1103D8u;
    SET_GPR_U32(ctx, 31, 0x1103E0u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x1103D8u, 0x1103E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103E0u;
label_1103e0:
    // 0x1103e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1103e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1103e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1103e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103ec: 0xc044844  jal         func_112110
    ctx->pc = 0x1103ECu;
    SET_GPR_U32(ctx, 31, 0x1103F4u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x1103ECu, 0x1103F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103F4u;
label_1103f4:
    // 0x1103f4: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1103f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x1103f8: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x1103f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1103fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1103fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110400: 0x278287b8  addiu       $v0, $gp, -0x7848
    ctx->pc = 0x110400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936504));
    // 0x110404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110408: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110408u;
    SET_GPR_U32(ctx, 31, 0x110410u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110408u, 0x110410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110410u;
label_110410:
    // 0x110410: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110414: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x110414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x110418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11041c: 0x278587bc  addiu       $a1, $gp, -0x7844
    ctx->pc = 0x11041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936508));
    // 0x110420: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110420u;
    SET_GPR_U32(ctx, 31, 0x110428u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110420u, 0x110428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110428u;
label_110428:
    // 0x110428: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x110428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x11042c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110430: 0x278287c0  addiu       $v0, $gp, -0x7840
    ctx->pc = 0x110430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936512));
    // 0x110434: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110438: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110438u;
    SET_GPR_U32(ctx, 31, 0x110440u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110438u, 0x110440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110440u;
label_110440:
    // 0x110440: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110444: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x110444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x110448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11044c: 0x278287c4  addiu       $v0, $gp, -0x783C
    ctx->pc = 0x11044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936516));
    // 0x110450: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110454: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110454u;
    SET_GPR_U32(ctx, 31, 0x11045Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110454u, 0x11045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11045Cu;
label_11045c:
    // 0x11045c: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x11045cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110460: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110464: 0x3402ea0d  ori         $v0, $zero, 0xEA0D
    ctx->pc = 0x110464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59917);
    // 0x110468: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11046c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x11046cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110470: 0x244219f8  addiu       $v0, $v0, 0x19F8
    ctx->pc = 0x110470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6648));
    // 0x110474: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110478: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110478u;
    SET_GPR_U32(ctx, 31, 0x110480u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110478u, 0x110480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110480u;
label_110480:
    // 0x110480: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110484: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x110484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11048c: 0xc044844  jal         func_112110
    ctx->pc = 0x11048Cu;
    SET_GPR_U32(ctx, 31, 0x110494u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x11048Cu, 0x110494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110494u;
label_110494:
    // 0x110494: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110498: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x110498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x11049c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x11049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1104a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1104a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104a4: 0x278287c8  addiu       $v0, $gp, -0x7838
    ctx->pc = 0x1104a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936520));
    // 0x1104a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1104a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104ac: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1104ACu;
    SET_GPR_U32(ctx, 31, 0x1104B4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1104ACu, 0x1104B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104B4u;
label_1104b4:
    // 0x1104b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1104b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104b8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1104b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1104bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1104bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104c0: 0x278587cc  addiu       $a1, $gp, -0x7834
    ctx->pc = 0x1104c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936524));
    // 0x1104c4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1104C4u;
    SET_GPR_U32(ctx, 31, 0x1104CCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1104C4u, 0x1104CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104CCu;
label_1104cc:
    // 0x1104cc: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1104ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1104d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1104d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104d4: 0x278287d0  addiu       $v0, $gp, -0x7830
    ctx->pc = 0x1104d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936528));
    // 0x1104d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1104d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104dc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1104DCu;
    SET_GPR_U32(ctx, 31, 0x1104E4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1104DCu, 0x1104E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104E4u;
label_1104e4:
    // 0x1104e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1104e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104e8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1104e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1104ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1104ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104f0: 0x278287d4  addiu       $v0, $gp, -0x782C
    ctx->pc = 0x1104f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936532));
    // 0x1104f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1104f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104f8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1104F8u;
    SET_GPR_U32(ctx, 31, 0x110500u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1104F8u, 0x110500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110500u;
label_110500:
    // 0x110500: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x110500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110504: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110508: 0x3402ea0e  ori         $v0, $zero, 0xEA0E
    ctx->pc = 0x110508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59918);
    // 0x11050c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11050cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110510: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x110510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110514: 0x24421a08  addiu       $v0, $v0, 0x1A08
    ctx->pc = 0x110514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6664));
    // 0x110518: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11051c: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x11051Cu;
    SET_GPR_U32(ctx, 31, 0x110524u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x11051Cu, 0x110524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110524u;
label_110524:
    // 0x110524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11052c: 0xc044844  jal         func_112110
    ctx->pc = 0x11052Cu;
    SET_GPR_U32(ctx, 31, 0x110534u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x11052Cu, 0x110534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110534u;
label_110534:
    // 0x110534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110538: 0xafa500f4  sw          $a1, 0xF4($sp)
    ctx->pc = 0x110538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 5));
    // 0x11053c: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x11053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x110540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110544: 0x278587d8  addiu       $a1, $gp, -0x7828
    ctx->pc = 0x110544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936536));
    // 0x110548: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110548u;
    SET_GPR_U32(ctx, 31, 0x110550u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110548u, 0x110550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110550u;
label_110550:
    // 0x110550: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x110550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x110554: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110558: 0x278287dc  addiu       $v0, $gp, -0x7824
    ctx->pc = 0x110558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936540));
    // 0x11055c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11055cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110560: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110560u;
    SET_GPR_U32(ctx, 31, 0x110568u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110560u, 0x110568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110568u;
label_110568:
    // 0x110568: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11056c: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x11056cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x110570: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110574: 0x278687e0  addiu       $a2, $gp, -0x7820
    ctx->pc = 0x110574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936544));
    // 0x110578: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11057c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x11057Cu;
    SET_GPR_U32(ctx, 31, 0x110584u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x11057Cu, 0x110584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110584u;
label_110584:
    // 0x110584: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x110584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x110588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11058c: 0x278287e4  addiu       $v0, $gp, -0x781C
    ctx->pc = 0x11058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936548));
    // 0x110590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110594: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110594u;
    SET_GPR_U32(ctx, 31, 0x11059Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110594u, 0x11059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11059Cu;
label_11059c:
    // 0x11059c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11059cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105a0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1105a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1105a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1105a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105a8: 0x3405ea0f  ori         $a1, $zero, 0xEA0F
    ctx->pc = 0x1105a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59919);
    // 0x1105ac: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1105acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1105b0: 0x24421a18  addiu       $v0, $v0, 0x1A18
    ctx->pc = 0x1105b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6680));
    // 0x1105b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1105b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105b8: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x1105B8u;
    SET_GPR_U32(ctx, 31, 0x1105C0u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x1105B8u, 0x1105C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105C0u;
label_1105c0:
    // 0x1105c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1105c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1105c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105c8: 0xc044844  jal         func_112110
    ctx->pc = 0x1105C8u;
    SET_GPR_U32(ctx, 31, 0x1105D0u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x1105C8u, 0x1105D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105D0u;
label_1105d0:
    // 0x1105d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1105d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105d4: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x1105d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x1105d8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1105d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1105dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1105dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105e0: 0x278687e8  addiu       $a2, $gp, -0x7818
    ctx->pc = 0x1105e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936552));
    // 0x1105e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1105e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105e8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1105E8u;
    SET_GPR_U32(ctx, 31, 0x1105F0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1105E8u, 0x1105F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105F0u;
label_1105f0:
    // 0x1105f0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1105f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1105f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1105f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105f8: 0x278587ec  addiu       $a1, $gp, -0x7814
    ctx->pc = 0x1105f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936556));
    // 0x1105fc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1105FCu;
    SET_GPR_U32(ctx, 31, 0x110604u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1105FCu, 0x110604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110604u;
label_110604:
    // 0x110604: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x110604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x110608: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11060c: 0x278287f0  addiu       $v0, $gp, -0x7810
    ctx->pc = 0x11060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936560));
    // 0x110610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110614: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110614u;
    SET_GPR_U32(ctx, 31, 0x11061Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110614u, 0x11061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11061Cu;
label_11061c:
    // 0x11061c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11061cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110620: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x110620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x110624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110628: 0x278287f4  addiu       $v0, $gp, -0x780C
    ctx->pc = 0x110628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936564));
    // 0x11062c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11062cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110630: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110630u;
    SET_GPR_U32(ctx, 31, 0x110638u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110630u, 0x110638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110638u;
label_110638:
    // 0x110638: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x110638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x11063c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110640: 0x3402ea10  ori         $v0, $zero, 0xEA10
    ctx->pc = 0x110640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59920);
    // 0x110644: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110648: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x110648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x11064c: 0x24421a28  addiu       $v0, $v0, 0x1A28
    ctx->pc = 0x11064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6696));
    // 0x110650: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110654: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110654u;
    SET_GPR_U32(ctx, 31, 0x11065Cu);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110654u, 0x11065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11065Cu;
label_11065c:
    // 0x11065c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110660: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x110660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110668: 0xc044844  jal         func_112110
    ctx->pc = 0x110668u;
    SET_GPR_U32(ctx, 31, 0x110670u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110668u, 0x110670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110670u;
label_110670:
    // 0x110670: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110674: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x110674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
    // 0x110678: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x110678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x11067c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11067cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110680: 0x278287f8  addiu       $v0, $gp, -0x7808
    ctx->pc = 0x110680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936568));
    // 0x110684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110688: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110688u;
    SET_GPR_U32(ctx, 31, 0x110690u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110688u, 0x110690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110690u;
label_110690:
    // 0x110690: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110694: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x110694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x110698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11069c: 0x278287fc  addiu       $v0, $gp, -0x7804
    ctx->pc = 0x11069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936572));
    // 0x1106a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1106a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106a4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1106A4u;
    SET_GPR_U32(ctx, 31, 0x1106ACu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1106A4u, 0x1106ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1106ACu;
label_1106ac:
    // 0x1106ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1106acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106b0: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x1106b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1106b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1106b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106b8: 0x27828800  addiu       $v0, $gp, -0x7800
    ctx->pc = 0x1106b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936576));
    // 0x1106bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1106bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106c0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1106C0u;
    SET_GPR_U32(ctx, 31, 0x1106C8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1106C0u, 0x1106C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1106C8u;
label_1106c8:
    // 0x1106c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1106c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106cc: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x1106ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1106d0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1106d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106d4: 0x27828804  addiu       $v0, $gp, -0x77FC
    ctx->pc = 0x1106d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936580));
    // 0x1106d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1106d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106dc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1106DCu;
    SET_GPR_U32(ctx, 31, 0x1106E4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1106DCu, 0x1106E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1106E4u;
label_1106e4:
    // 0x1106e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1106e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106e8: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x1106e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1106ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1106ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106f0: 0x3402ea11  ori         $v0, $zero, 0xEA11
    ctx->pc = 0x1106f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59921);
    // 0x1106f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1106f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106f8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1106f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1106fc: 0x24421a38  addiu       $v0, $v0, 0x1A38
    ctx->pc = 0x1106fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6712));
    // 0x110700: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110704: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110704u;
    SET_GPR_U32(ctx, 31, 0x11070Cu);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110704u, 0x11070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11070Cu;
label_11070c:
    // 0x11070c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11070cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110710: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x110710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110718: 0xc044844  jal         func_112110
    ctx->pc = 0x110718u;
    SET_GPR_U32(ctx, 31, 0x110720u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110718u, 0x110720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110720u;
label_110720:
    // 0x110720: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110724: 0xafa600e8  sw          $a2, 0xE8($sp)
    ctx->pc = 0x110724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 6));
    // 0x110728: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x110728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x11072c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11072cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110730: 0x27828808  addiu       $v0, $gp, -0x77F8
    ctx->pc = 0x110730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936584));
    // 0x110734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110738: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110738u;
    SET_GPR_U32(ctx, 31, 0x110740u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110738u, 0x110740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110740u;
label_110740:
    // 0x110740: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110744: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x110744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x110748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11074c: 0x2782880c  addiu       $v0, $gp, -0x77F4
    ctx->pc = 0x11074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936588));
    // 0x110750: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110754: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110754u;
    SET_GPR_U32(ctx, 31, 0x11075Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110754u, 0x11075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11075Cu;
label_11075c:
    // 0x11075c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11075cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110760: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x110760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x110764: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110768: 0x27868810  addiu       $a2, $gp, -0x77F0
    ctx->pc = 0x110768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936592));
    // 0x11076c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11076cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110770: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110770u;
    SET_GPR_U32(ctx, 31, 0x110778u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110770u, 0x110778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110778u;
label_110778:
    // 0x110778: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x110778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x11077c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11077cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110780: 0x27828814  addiu       $v0, $gp, -0x77EC
    ctx->pc = 0x110780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936596));
    // 0x110784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110788: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110788u;
    SET_GPR_U32(ctx, 31, 0x110790u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110788u, 0x110790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110790u;
label_110790:
    // 0x110790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110794: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x110794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11079c: 0x3405ea12  ori         $a1, $zero, 0xEA12
    ctx->pc = 0x11079cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59922);
    // 0x1107a0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1107a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1107a4: 0x24421a48  addiu       $v0, $v0, 0x1A48
    ctx->pc = 0x1107a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6728));
    // 0x1107a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1107a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107ac: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x1107ACu;
    SET_GPR_U32(ctx, 31, 0x1107B4u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x1107ACu, 0x1107B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107B4u;
label_1107b4:
    // 0x1107b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1107b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1107b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1107bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107c0: 0xc044844  jal         func_112110
    ctx->pc = 0x1107C0u;
    SET_GPR_U32(ctx, 31, 0x1107C8u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x1107C0u, 0x1107C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107C8u;
label_1107c8:
    // 0x1107c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1107c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107cc: 0xafa500e4  sw          $a1, 0xE4($sp)
    ctx->pc = 0x1107ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
    // 0x1107d0: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x1107d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1107d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1107d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107d8: 0x27858818  addiu       $a1, $gp, -0x77E8
    ctx->pc = 0x1107d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936600));
    // 0x1107dc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1107DCu;
    SET_GPR_U32(ctx, 31, 0x1107E4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1107DCu, 0x1107E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107E4u;
label_1107e4:
    // 0x1107e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1107e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107e8: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x1107e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1107ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1107ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107f0: 0x2782881c  addiu       $v0, $gp, -0x77E4
    ctx->pc = 0x1107f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936604));
    // 0x1107f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1107f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107f8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1107F8u;
    SET_GPR_U32(ctx, 31, 0x110800u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1107F8u, 0x110800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110800u;
label_110800:
    // 0x110800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110804: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x110804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x110808: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11080c: 0x27828820  addiu       $v0, $gp, -0x77E0
    ctx->pc = 0x11080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936608));
    // 0x110810: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110814: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110814u;
    SET_GPR_U32(ctx, 31, 0x11081Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110814u, 0x11081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11081Cu;
label_11081c:
    // 0x11081c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11081cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110820: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x110820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x110824: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x110824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110828: 0x27828824  addiu       $v0, $gp, -0x77DC
    ctx->pc = 0x110828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936612));
    // 0x11082c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11082cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110830: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110830u;
    SET_GPR_U32(ctx, 31, 0x110838u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110830u, 0x110838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110838u;
label_110838:
    // 0x110838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11083c: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x11083cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110840: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110844: 0x3406ea13  ori         $a2, $zero, 0xEA13
    ctx->pc = 0x110844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59923);
    // 0x110848: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11084c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x11084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110850: 0x24421a58  addiu       $v0, $v0, 0x1A58
    ctx->pc = 0x110850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6744));
    // 0x110854: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110858: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110858u;
    SET_GPR_U32(ctx, 31, 0x110860u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110858u, 0x110860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110860u;
label_110860:
    // 0x110860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110868: 0xc044844  jal         func_112110
    ctx->pc = 0x110868u;
    SET_GPR_U32(ctx, 31, 0x110870u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110868u, 0x110870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110870u;
label_110870:
    // 0x110870: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110874: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x110874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x110878: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x110878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11087c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11087cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110880: 0x27828828  addiu       $v0, $gp, -0x77D8
    ctx->pc = 0x110880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936616));
    // 0x110884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110888: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110888u;
    SET_GPR_U32(ctx, 31, 0x110890u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110888u, 0x110890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110890u;
label_110890:
    // 0x110890: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110894: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x110894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x110898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11089c: 0x2782882c  addiu       $v0, $gp, -0x77D4
    ctx->pc = 0x11089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936620));
    // 0x1108a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1108a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108a4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1108A4u;
    SET_GPR_U32(ctx, 31, 0x1108ACu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1108A4u, 0x1108ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108ACu;
label_1108ac:
    // 0x1108ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1108acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108b0: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x1108b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1108b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1108b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108b8: 0x27828830  addiu       $v0, $gp, -0x77D0
    ctx->pc = 0x1108b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936624));
    // 0x1108bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1108bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108c0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1108C0u;
    SET_GPR_U32(ctx, 31, 0x1108C8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1108C0u, 0x1108C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108C8u;
label_1108c8:
    // 0x1108c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1108c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108cc: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x1108ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1108d0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1108d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108d4: 0x27828834  addiu       $v0, $gp, -0x77CC
    ctx->pc = 0x1108d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936628));
    // 0x1108d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1108d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108dc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1108DCu;
    SET_GPR_U32(ctx, 31, 0x1108E4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1108DCu, 0x1108E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108E4u;
label_1108e4:
    // 0x1108e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1108e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108e8: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x1108e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1108ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1108ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108f0: 0x3406ea22  ori         $a2, $zero, 0xEA22
    ctx->pc = 0x1108f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59938);
    // 0x1108f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1108f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108f8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1108f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1108fc: 0x24421a68  addiu       $v0, $v0, 0x1A68
    ctx->pc = 0x1108fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6760));
    // 0x110900: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110904: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110904u;
    SET_GPR_U32(ctx, 31, 0x11090Cu);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110904u, 0x11090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11090Cu;
label_11090c:
    // 0x11090c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11090cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110914: 0xc044844  jal         func_112110
    ctx->pc = 0x110914u;
    SET_GPR_U32(ctx, 31, 0x11091Cu);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110914u, 0x11091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11091Cu;
label_11091c:
    // 0x11091c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11091cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110920: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x110920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x110924: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x110924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x110928: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11092c: 0x27828838  addiu       $v0, $gp, -0x77C8
    ctx->pc = 0x11092cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936632));
    // 0x110930: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110934: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110934u;
    SET_GPR_U32(ctx, 31, 0x11093Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110934u, 0x11093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11093Cu;
label_11093c:
    // 0x11093c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11093cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110940: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x110940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x110944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110948: 0x2782883c  addiu       $v0, $gp, -0x77C4
    ctx->pc = 0x110948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936636));
    // 0x11094c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11094cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110950: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110950u;
    SET_GPR_U32(ctx, 31, 0x110958u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110950u, 0x110958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110958u;
label_110958:
    // 0x110958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11095c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x11095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x110960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110964: 0x27828840  addiu       $v0, $gp, -0x77C0
    ctx->pc = 0x110964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936640));
    // 0x110968: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11096c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x11096Cu;
    SET_GPR_U32(ctx, 31, 0x110974u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x11096Cu, 0x110974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110974u;
label_110974:
    // 0x110974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110978: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x110978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x11097c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11097cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110980: 0x27828844  addiu       $v0, $gp, -0x77BC
    ctx->pc = 0x110980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936644));
    // 0x110984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110988: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110988u;
    SET_GPR_U32(ctx, 31, 0x110990u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110988u, 0x110990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110990u;
label_110990:
    // 0x110990: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x110990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110994: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110998: 0x3406ea15  ori         $a2, $zero, 0xEA15
    ctx->pc = 0x110998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59925);
    // 0x11099c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11099cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109a0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1109a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1109a4: 0x24421a78  addiu       $v0, $v0, 0x1A78
    ctx->pc = 0x1109a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6776));
    // 0x1109a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1109a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109ac: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x1109ACu;
    SET_GPR_U32(ctx, 31, 0x1109B4u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x1109ACu, 0x1109B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109B4u;
label_1109b4:
    // 0x1109b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1109b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1109b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109bc: 0xc044844  jal         func_112110
    ctx->pc = 0x1109BCu;
    SET_GPR_U32(ctx, 31, 0x1109C4u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x1109BCu, 0x1109C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109C4u;
label_1109c4:
    // 0x1109c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1109c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109c8: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x1109c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x1109cc: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1109ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1109d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1109d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109d4: 0x27828848  addiu       $v0, $gp, -0x77B8
    ctx->pc = 0x1109d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936648));
    // 0x1109d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1109d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109dc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1109DCu;
    SET_GPR_U32(ctx, 31, 0x1109E4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1109DCu, 0x1109E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109E4u;
label_1109e4:
    // 0x1109e4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1109e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1109e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1109e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109ec: 0x2782884c  addiu       $v0, $gp, -0x77B4
    ctx->pc = 0x1109ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936652));
    // 0x1109f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1109f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109f4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1109F4u;
    SET_GPR_U32(ctx, 31, 0x1109FCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1109F4u, 0x1109FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109FCu;
label_1109fc:
    // 0x1109fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1109fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a00: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x110a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x110a04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a08: 0x27828850  addiu       $v0, $gp, -0x77B0
    ctx->pc = 0x110a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936656));
    // 0x110a0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a10: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110A10u;
    SET_GPR_U32(ctx, 31, 0x110A18u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110A10u, 0x110A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A18u;
label_110a18:
    // 0x110a18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a1c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x110a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x110a20: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x110a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a24: 0x27828854  addiu       $v0, $gp, -0x77AC
    ctx->pc = 0x110a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936660));
    // 0x110a28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a2c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110A2Cu;
    SET_GPR_U32(ctx, 31, 0x110A34u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110A2Cu, 0x110A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A34u;
label_110a34:
    // 0x110a34: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x110a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110a38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a3c: 0x3406ea1c  ori         $a2, $zero, 0xEA1C
    ctx->pc = 0x110a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59932);
    // 0x110a40: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a44: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x110a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110a48: 0x24421a88  addiu       $v0, $v0, 0x1A88
    ctx->pc = 0x110a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6792));
    // 0x110a4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a50: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110A50u;
    SET_GPR_U32(ctx, 31, 0x110A58u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110A50u, 0x110A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A58u;
label_110a58:
    // 0x110a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a60: 0xc044844  jal         func_112110
    ctx->pc = 0x110A60u;
    SET_GPR_U32(ctx, 31, 0x110A68u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110A60u, 0x110A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A68u;
label_110a68:
    // 0x110a68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a6c: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x110a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x110a70: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x110a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x110a74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a78: 0x27868858  addiu       $a2, $gp, -0x77A8
    ctx->pc = 0x110a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936664));
    // 0x110a7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a80: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110A80u;
    SET_GPR_U32(ctx, 31, 0x110A88u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110A80u, 0x110A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A88u;
label_110a88:
    // 0x110a88: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x110a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x110a8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a90: 0x2782885c  addiu       $v0, $gp, -0x77A4
    ctx->pc = 0x110a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936668));
    // 0x110a94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a98: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110A98u;
    SET_GPR_U32(ctx, 31, 0x110AA0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110A98u, 0x110AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110AA0u;
label_110aa0:
    // 0x110aa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110aa4: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x110aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x110aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110aac: 0x27828860  addiu       $v0, $gp, -0x77A0
    ctx->pc = 0x110aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936672));
    // 0x110ab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ab4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110AB4u;
    SET_GPR_U32(ctx, 31, 0x110ABCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110AB4u, 0x110ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110ABCu;
label_110abc:
    // 0x110abc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ac0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x110ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x110ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ac8: 0x27828864  addiu       $v0, $gp, -0x779C
    ctx->pc = 0x110ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936676));
    // 0x110acc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ad0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110AD0u;
    SET_GPR_U32(ctx, 31, 0x110AD8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110AD0u, 0x110AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110AD8u;
label_110ad8:
    // 0x110ad8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110adc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x110adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ae4: 0x3406ea1d  ori         $a2, $zero, 0xEA1D
    ctx->pc = 0x110ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59933);
    // 0x110ae8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110aec: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x110aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110af0: 0x24421a98  addiu       $v0, $v0, 0x1A98
    ctx->pc = 0x110af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6808));
    // 0x110af4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110af8: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110AF8u;
    SET_GPR_U32(ctx, 31, 0x110B00u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110AF8u, 0x110B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B00u;
label_110b00:
    // 0x110b00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b08: 0xc044844  jal         func_112110
    ctx->pc = 0x110B08u;
    SET_GPR_U32(ctx, 31, 0x110B10u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110B08u, 0x110B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B10u;
label_110b10:
    // 0x110b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b14: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x110b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x110b18: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x110b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x110b1c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b20: 0x27868868  addiu       $a2, $gp, -0x7798
    ctx->pc = 0x110b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936680));
    // 0x110b24: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b28: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110B28u;
    SET_GPR_U32(ctx, 31, 0x110B30u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110B28u, 0x110B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B30u;
label_110b30:
    // 0x110b30: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x110b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x110b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b38: 0x2785886c  addiu       $a1, $gp, -0x7794
    ctx->pc = 0x110b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936684));
    // 0x110b3c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110B3Cu;
    SET_GPR_U32(ctx, 31, 0x110B44u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110B3Cu, 0x110B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B44u;
label_110b44:
    // 0x110b44: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x110b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x110b48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b4c: 0x27828870  addiu       $v0, $gp, -0x7790
    ctx->pc = 0x110b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936688));
    // 0x110b50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b54: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110B54u;
    SET_GPR_U32(ctx, 31, 0x110B5Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110B54u, 0x110B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B5Cu;
label_110b5c:
    // 0x110b5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b60: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x110b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x110b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b68: 0x27858874  addiu       $a1, $gp, -0x778C
    ctx->pc = 0x110b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936692));
    // 0x110b6c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110B6Cu;
    SET_GPR_U32(ctx, 31, 0x110B74u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110B6Cu, 0x110B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B74u;
label_110b74:
    // 0x110b74: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x110b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110b78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b7c: 0x3402ea1f  ori         $v0, $zero, 0xEA1F
    ctx->pc = 0x110b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59935);
    // 0x110b80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b84: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x110b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110b88: 0x24421aa8  addiu       $v0, $v0, 0x1AA8
    ctx->pc = 0x110b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6824));
    // 0x110b8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b90: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110B90u;
    SET_GPR_U32(ctx, 31, 0x110B98u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110B90u, 0x110B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B98u;
label_110b98:
    // 0x110b98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ba0: 0xc044844  jal         func_112110
    ctx->pc = 0x110BA0u;
    SET_GPR_U32(ctx, 31, 0x110BA8u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110BA0u, 0x110BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BA8u;
label_110ba8:
    // 0x110ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bac: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x110bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x110bb0: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x110bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x110bb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bb8: 0x27868878  addiu       $a2, $gp, -0x7788
    ctx->pc = 0x110bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936696));
    // 0x110bbc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bc0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110BC0u;
    SET_GPR_U32(ctx, 31, 0x110BC8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110BC0u, 0x110BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BC8u;
label_110bc8:
    // 0x110bc8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x110bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x110bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bd0: 0x2782887c  addiu       $v0, $gp, -0x7784
    ctx->pc = 0x110bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936700));
    // 0x110bd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bd8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110BD8u;
    SET_GPR_U32(ctx, 31, 0x110BE0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110BD8u, 0x110BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BE0u;
label_110be0:
    // 0x110be0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110be4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x110be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x110be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bec: 0x27828880  addiu       $v0, $gp, -0x7780
    ctx->pc = 0x110becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936704));
    // 0x110bf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bf4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110BF4u;
    SET_GPR_U32(ctx, 31, 0x110BFCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110BF4u, 0x110BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BFCu;
label_110bfc:
    // 0x110bfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c00: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x110c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x110c04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c08: 0x27828884  addiu       $v0, $gp, -0x777C
    ctx->pc = 0x110c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936708));
    // 0x110c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c10: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110C10u;
    SET_GPR_U32(ctx, 31, 0x110C18u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110C10u, 0x110C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C18u;
label_110c18:
    // 0x110c18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c1c: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x110c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110c20: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x110c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c24: 0x3402ea2a  ori         $v0, $zero, 0xEA2A
    ctx->pc = 0x110c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59946);
    // 0x110c28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c2c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x110c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110c30: 0x24421ac0  addiu       $v0, $v0, 0x1AC0
    ctx->pc = 0x110c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x110c34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c38: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110C38u;
    SET_GPR_U32(ctx, 31, 0x110C40u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110C38u, 0x110C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C40u;
label_110c40:
    // 0x110c40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x110c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c4c: 0xc044844  jal         func_112110
    ctx->pc = 0x110C4Cu;
    SET_GPR_U32(ctx, 31, 0x110C54u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110C4Cu, 0x110C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C54u;
label_110c54:
    // 0x110c54: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x110c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x110c58: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x110c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x110c5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c60: 0x27828888  addiu       $v0, $gp, -0x7778
    ctx->pc = 0x110c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936712));
    // 0x110c64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c68: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110C68u;
    SET_GPR_U32(ctx, 31, 0x110C70u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110C68u, 0x110C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C70u;
label_110c70:
    // 0x110c70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c74: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x110c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x110c78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c7c: 0x2785888c  addiu       $a1, $gp, -0x7774
    ctx->pc = 0x110c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936716));
    // 0x110c80: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110C80u;
    SET_GPR_U32(ctx, 31, 0x110C88u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110C80u, 0x110C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C88u;
label_110c88:
    // 0x110c88: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x110c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x110c8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c90: 0x27828890  addiu       $v0, $gp, -0x7770
    ctx->pc = 0x110c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936720));
    // 0x110c94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c98: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110C98u;
    SET_GPR_U32(ctx, 31, 0x110CA0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110C98u, 0x110CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CA0u;
label_110ca0:
    // 0x110ca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ca4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x110ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x110ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cac: 0x27858894  addiu       $a1, $gp, -0x776C
    ctx->pc = 0x110cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936724));
    // 0x110cb0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110CB0u;
    SET_GPR_U32(ctx, 31, 0x110CB8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110CB0u, 0x110CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CB8u;
label_110cb8:
    // 0x110cb8: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x110cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110cbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cc0: 0x3402ea2d  ori         $v0, $zero, 0xEA2D
    ctx->pc = 0x110cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59949);
    // 0x110cc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cc8: 0x27828968  addiu       $v0, $gp, -0x7698
    ctx->pc = 0x110cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936936));
    // 0x110ccc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cd0: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110CD0u;
    SET_GPR_U32(ctx, 31, 0x110CD8u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110CD0u, 0x110CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CD8u;
label_110cd8:
    // 0x110cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ce0: 0xc044844  jal         func_112110
    ctx->pc = 0x110CE0u;
    SET_GPR_U32(ctx, 31, 0x110CE8u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110CE0u, 0x110CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CE8u;
label_110ce8:
    // 0x110ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cec: 0xafa500c4  sw          $a1, 0xC4($sp)
    ctx->pc = 0x110cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 5));
    // 0x110cf0: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x110cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x110cf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cf8: 0x27828898  addiu       $v0, $gp, -0x7768
    ctx->pc = 0x110cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936728));
    // 0x110cfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d00: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110D00u;
    SET_GPR_U32(ctx, 31, 0x110D08u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110D00u, 0x110D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D08u;
label_110d08:
    // 0x110d08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d0c: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x110d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x110d10: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x110d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d14: 0x2782889c  addiu       $v0, $gp, -0x7764
    ctx->pc = 0x110d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936732));
    // 0x110d18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d1c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110D1Cu;
    SET_GPR_U32(ctx, 31, 0x110D24u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110D1Cu, 0x110D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D24u;
label_110d24:
    // 0x110d24: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x110d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x110d28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d2c: 0x278288a0  addiu       $v0, $gp, -0x7760
    ctx->pc = 0x110d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936736));
    // 0x110d30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d34: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110D34u;
    SET_GPR_U32(ctx, 31, 0x110D3Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110D34u, 0x110D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D3Cu;
label_110d3c:
    // 0x110d3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d40: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x110d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x110d44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d48: 0x278588a4  addiu       $a1, $gp, -0x775C
    ctx->pc = 0x110d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936740));
    // 0x110d4c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110D4Cu;
    SET_GPR_U32(ctx, 31, 0x110D54u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110D4Cu, 0x110D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D54u;
label_110d54:
    // 0x110d54: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x110d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110d58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d5c: 0x3402ea31  ori         $v0, $zero, 0xEA31
    ctx->pc = 0x110d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59953);
    // 0x110d60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d64: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x110d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110d68: 0x24421ad8  addiu       $v0, $v0, 0x1AD8
    ctx->pc = 0x110d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6872));
    // 0x110d6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d70: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110D70u;
    SET_GPR_U32(ctx, 31, 0x110D78u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110D70u, 0x110D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D78u;
label_110d78:
    // 0x110d78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d80: 0xc044844  jal         func_112110
    ctx->pc = 0x110D80u;
    SET_GPR_U32(ctx, 31, 0x110D88u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110D80u, 0x110D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D88u;
label_110d88:
    // 0x110d88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d8c: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x110d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x110d90: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x110d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x110d94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d98: 0x278288a8  addiu       $v0, $gp, -0x7758
    ctx->pc = 0x110d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936744));
    // 0x110d9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110da0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110DA0u;
    SET_GPR_U32(ctx, 31, 0x110DA8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110DA0u, 0x110DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DA8u;
label_110da8:
    // 0x110da8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x110da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x110dac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110db0: 0x278288ac  addiu       $v0, $gp, -0x7754
    ctx->pc = 0x110db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936748));
    // 0x110db4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110db8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110DB8u;
    SET_GPR_U32(ctx, 31, 0x110DC0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110DB8u, 0x110DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DC0u;
label_110dc0:
    // 0x110dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dc4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x110dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x110dc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dcc: 0x278288b0  addiu       $v0, $gp, -0x7750
    ctx->pc = 0x110dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936752));
    // 0x110dd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dd4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110DD4u;
    SET_GPR_U32(ctx, 31, 0x110DDCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110DD4u, 0x110DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DDCu;
label_110ddc:
    // 0x110ddc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x110ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x110de0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110de4: 0x278588b4  addiu       $a1, $gp, -0x774C
    ctx->pc = 0x110de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936756));
    // 0x110de8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110DE8u;
    SET_GPR_U32(ctx, 31, 0x110DF0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110DE8u, 0x110DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DF0u;
label_110df0:
    // 0x110df0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110df4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x110df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dfc: 0x3402ea32  ori         $v0, $zero, 0xEA32
    ctx->pc = 0x110dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59954);
    // 0x110e00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e04: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x110e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110e08: 0x24421ae8  addiu       $v0, $v0, 0x1AE8
    ctx->pc = 0x110e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6888));
    // 0x110e0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e10: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110E10u;
    SET_GPR_U32(ctx, 31, 0x110E18u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110E10u, 0x110E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E18u;
label_110e18:
    // 0x110e18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x110e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e24: 0xc044844  jal         func_112110
    ctx->pc = 0x110E24u;
    SET_GPR_U32(ctx, 31, 0x110E2Cu);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110E24u, 0x110E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E2Cu;
label_110e2c:
    // 0x110e2c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x110e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x110e30: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x110e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x110e34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e38: 0x278288b8  addiu       $v0, $gp, -0x7748
    ctx->pc = 0x110e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936760));
    // 0x110e3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e40: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110E40u;
    SET_GPR_U32(ctx, 31, 0x110E48u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110E40u, 0x110E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E48u;
label_110e48:
    // 0x110e48: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x110e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x110e4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e50: 0x278588bc  addiu       $a1, $gp, -0x7744
    ctx->pc = 0x110e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936764));
    // 0x110e54: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110E54u;
    SET_GPR_U32(ctx, 31, 0x110E5Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110E54u, 0x110E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E5Cu;
label_110e5c:
    // 0x110e5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e60: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x110e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x110e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e68: 0x278288c0  addiu       $v0, $gp, -0x7740
    ctx->pc = 0x110e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936768));
    // 0x110e6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e70: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110E70u;
    SET_GPR_U32(ctx, 31, 0x110E78u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110E70u, 0x110E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E78u;
label_110e78:
    // 0x110e78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e7c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x110e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x110e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e84: 0x278588c4  addiu       $a1, $gp, -0x773C
    ctx->pc = 0x110e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936772));
    // 0x110e88: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110E88u;
    SET_GPR_U32(ctx, 31, 0x110E90u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110E88u, 0x110E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E90u;
label_110e90:
    // 0x110e90: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x110e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110e94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e98: 0x3402ea33  ori         $v0, $zero, 0xEA33
    ctx->pc = 0x110e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59955);
    // 0x110e9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ea0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x110ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110ea4: 0x24421af8  addiu       $v0, $v0, 0x1AF8
    ctx->pc = 0x110ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6904));
    // 0x110ea8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110eac: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110EACu;
    SET_GPR_U32(ctx, 31, 0x110EB4u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110EACu, 0x110EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EB4u;
label_110eb4:
    // 0x110eb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ebc: 0xc044844  jal         func_112110
    ctx->pc = 0x110EBCu;
    SET_GPR_U32(ctx, 31, 0x110EC4u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110EBCu, 0x110EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EC4u;
label_110ec4:
    // 0x110ec4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ec8: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x110ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x110ecc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x110eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x110ed0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ed4: 0x278288c8  addiu       $v0, $gp, -0x7738
    ctx->pc = 0x110ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936776));
    // 0x110ed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110edc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110EDCu;
    SET_GPR_U32(ctx, 31, 0x110EE4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110EDCu, 0x110EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EE4u;
label_110ee4:
    // 0x110ee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ee8: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x110ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x110eec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x110eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ef0: 0x278288cc  addiu       $v0, $gp, -0x7734
    ctx->pc = 0x110ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936780));
    // 0x110ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ef8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110EF8u;
    SET_GPR_U32(ctx, 31, 0x110F00u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110EF8u, 0x110F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F00u;
label_110f00:
    // 0x110f00: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x110f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x110f04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f08: 0x278288d0  addiu       $v0, $gp, -0x7730
    ctx->pc = 0x110f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936784));
    // 0x110f0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f10: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110F10u;
    SET_GPR_U32(ctx, 31, 0x110F18u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110F10u, 0x110F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F18u;
label_110f18:
    // 0x110f18: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x110f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x110f1c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f20: 0x278588d4  addiu       $a1, $gp, -0x772C
    ctx->pc = 0x110f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936788));
    // 0x110f24: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110F24u;
    SET_GPR_U32(ctx, 31, 0x110F2Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110F24u, 0x110F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F2Cu;
label_110f2c:
    // 0x110f2c: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x110f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110f30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f34: 0x3406ea34  ori         $a2, $zero, 0xEA34
    ctx->pc = 0x110f34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59956);
    // 0x110f38: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f3c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x110f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110f40: 0x24421b08  addiu       $v0, $v0, 0x1B08
    ctx->pc = 0x110f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6920));
    // 0x110f44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f48: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110F48u;
    SET_GPR_U32(ctx, 31, 0x110F50u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110F48u, 0x110F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F50u;
label_110f50:
    // 0x110f50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f5c: 0xc044844  jal         func_112110
    ctx->pc = 0x110F5Cu;
    SET_GPR_U32(ctx, 31, 0x110F64u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x110F5Cu, 0x110F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F64u;
label_110f64:
    // 0x110f64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f68: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x110f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x110f6c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x110f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x110f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f74: 0x278288d8  addiu       $v0, $gp, -0x7728
    ctx->pc = 0x110f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936792));
    // 0x110f78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f7c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110F7Cu;
    SET_GPR_U32(ctx, 31, 0x110F84u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110F7Cu, 0x110F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F84u;
label_110f84:
    // 0x110f84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f88: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x110f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x110f8c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x110f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f90: 0x278288dc  addiu       $v0, $gp, -0x7724
    ctx->pc = 0x110f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936796));
    // 0x110f94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f98: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110F98u;
    SET_GPR_U32(ctx, 31, 0x110FA0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110F98u, 0x110FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FA0u;
label_110fa0:
    // 0x110fa0: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x110fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x110fa4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fa8: 0x278288e0  addiu       $v0, $gp, -0x7720
    ctx->pc = 0x110fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936800));
    // 0x110fac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fb0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110FB0u;
    SET_GPR_U32(ctx, 31, 0x110FB8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110FB0u, 0x110FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FB8u;
label_110fb8:
    // 0x110fb8: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x110fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x110fbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fc0: 0x278588e4  addiu       $a1, $gp, -0x771C
    ctx->pc = 0x110fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936804));
    // 0x110fc4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x110FC4u;
    SET_GPR_U32(ctx, 31, 0x110FCCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x110FC4u, 0x110FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FCCu;
label_110fcc:
    // 0x110fcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fd0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x110fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x110fd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fd8: 0x3402ea35  ori         $v0, $zero, 0xEA35
    ctx->pc = 0x110fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59957);
    // 0x110fdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fe0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x110fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x110fe4: 0x24421b20  addiu       $v0, $v0, 0x1B20
    ctx->pc = 0x110fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6944));
    // 0x110fe8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x110fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fec: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x110FECu;
    SET_GPR_U32(ctx, 31, 0x110FF4u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x110FECu, 0x110FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FF4u;
label_110ff4:
    // 0x110ff4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ff8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x110ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111000: 0xc044844  jal         func_112110
    ctx->pc = 0x111000u;
    SET_GPR_U32(ctx, 31, 0x111008u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x111000u, 0x111008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111008u;
label_111008:
    // 0x111008: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x111008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x11100c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x11100cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x111010: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x111010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111014: 0x278288e8  addiu       $v0, $gp, -0x7718
    ctx->pc = 0x111014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936808));
    // 0x111018: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11101c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x11101Cu;
    SET_GPR_U32(ctx, 31, 0x111024u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x11101Cu, 0x111024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111024u;
label_111024:
    // 0x111024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x111024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111028: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x111028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11102c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111030: 0x278288ec  addiu       $v0, $gp, -0x7714
    ctx->pc = 0x111030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936812));
    // 0x111034: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111038: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111038u;
    SET_GPR_U32(ctx, 31, 0x111040u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111038u, 0x111040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111040u;
label_111040:
    // 0x111040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111044: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x111044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x111048: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x111048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11104c: 0x278288f0  addiu       $v0, $gp, -0x7710
    ctx->pc = 0x11104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936816));
    // 0x111050: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111054: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111054u;
    SET_GPR_U32(ctx, 31, 0x11105Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111054u, 0x11105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11105Cu;
label_11105c:
    // 0x11105c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x11105cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x111060: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x111060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111064: 0x278588f4  addiu       $a1, $gp, -0x770C
    ctx->pc = 0x111064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936820));
    // 0x111068: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111068u;
    SET_GPR_U32(ctx, 31, 0x111070u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111068u, 0x111070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111070u;
label_111070:
    // 0x111070: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x111070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x111074: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x111074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111078: 0x3406ea37  ori         $a2, $zero, 0xEA37
    ctx->pc = 0x111078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59959);
    // 0x11107c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11107cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111080: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x111080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x111084: 0x24421b30  addiu       $v0, $v0, 0x1B30
    ctx->pc = 0x111084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6960));
    // 0x111088: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x111088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11108c: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x11108Cu;
    SET_GPR_U32(ctx, 31, 0x111094u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x11108Cu, 0x111094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111094u;
label_111094:
    // 0x111094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x111094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11109c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110a0: 0xc044844  jal         func_112110
    ctx->pc = 0x1110A0u;
    SET_GPR_U32(ctx, 31, 0x1110A8u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x1110A0u, 0x1110A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110A8u;
label_1110a8:
    // 0x1110a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1110a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110ac: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x1110acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x1110b0: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x1110b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1110b4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1110b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110b8: 0x278288f8  addiu       $v0, $gp, -0x7708
    ctx->pc = 0x1110b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936824));
    // 0x1110bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1110bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110c0: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1110C0u;
    SET_GPR_U32(ctx, 31, 0x1110C8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1110C0u, 0x1110C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110C8u;
label_1110c8:
    // 0x1110c8: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x1110c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1110cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1110ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110d0: 0x278588fc  addiu       $a1, $gp, -0x7704
    ctx->pc = 0x1110d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936828));
    // 0x1110d4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1110D4u;
    SET_GPR_U32(ctx, 31, 0x1110DCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1110D4u, 0x1110DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110DCu;
label_1110dc:
    // 0x1110dc: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x1110dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1110e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1110e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110e4: 0x27828900  addiu       $v0, $gp, -0x7700
    ctx->pc = 0x1110e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936832));
    // 0x1110e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1110e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110ec: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1110ECu;
    SET_GPR_U32(ctx, 31, 0x1110F4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1110ECu, 0x1110F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110F4u;
label_1110f4:
    // 0x1110f4: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x1110f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1110f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1110f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110fc: 0x27858904  addiu       $a1, $gp, -0x76FC
    ctx->pc = 0x1110fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936836));
    // 0x111100: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111100u;
    SET_GPR_U32(ctx, 31, 0x111108u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111100u, 0x111108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111108u;
label_111108:
    // 0x111108: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x111108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x11110c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11110cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111110: 0x3406ea38  ori         $a2, $zero, 0xEA38
    ctx->pc = 0x111110u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59960);
    // 0x111114: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x111114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111118: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x111118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x11111c: 0x24421b40  addiu       $v0, $v0, 0x1B40
    ctx->pc = 0x11111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x111120: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x111120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111124: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x111124u;
    SET_GPR_U32(ctx, 31, 0x11112Cu);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x111124u, 0x11112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11112Cu;
label_11112c:
    // 0x11112c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111138: 0xc044844  jal         func_112110
    ctx->pc = 0x111138u;
    SET_GPR_U32(ctx, 31, 0x111140u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x111138u, 0x111140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111140u;
label_111140:
    // 0x111140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111144: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x111144u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111148: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11114c: 0x27868908  addiu       $a2, $gp, -0x76F8
    ctx->pc = 0x11114cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936840));
    // 0x111150: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x111150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111154: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111154u;
    SET_GPR_U32(ctx, 31, 0x11115Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111154u, 0x11115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11115Cu;
label_11115c:
    // 0x11115c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11115cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111160: 0x2782890c  addiu       $v0, $gp, -0x76F4
    ctx->pc = 0x111160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936844));
    // 0x111164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111168: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111168u;
    SET_GPR_U32(ctx, 31, 0x111170u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111168u, 0x111170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111170u;
label_111170:
    // 0x111170: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111174: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111178: 0x27858910  addiu       $a1, $gp, -0x76F0
    ctx->pc = 0x111178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936848));
    // 0x11117c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x11117Cu;
    SET_GPR_U32(ctx, 31, 0x111184u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x11117Cu, 0x111184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111184u;
label_111184:
    // 0x111184: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111188: 0x27858914  addiu       $a1, $gp, -0x76EC
    ctx->pc = 0x111188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936852));
    // 0x11118c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x11118Cu;
    SET_GPR_U32(ctx, 31, 0x111194u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x11118Cu, 0x111194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111194u;
label_111194:
    // 0x111194: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x111194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x111198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x111198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11119c: 0x3405ea39  ori         $a1, $zero, 0xEA39
    ctx->pc = 0x11119cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59961);
    // 0x1111a0: 0x27828970  addiu       $v0, $gp, -0x7690
    ctx->pc = 0x1111a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936944));
    // 0x1111a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1111a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111a8: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x1111A8u;
    SET_GPR_U32(ctx, 31, 0x1111B0u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x1111A8u, 0x1111B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111B0u;
label_1111b0:
    // 0x1111b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1111b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1111b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111b8: 0xc044844  jal         func_112110
    ctx->pc = 0x1111B8u;
    SET_GPR_U32(ctx, 31, 0x1111C0u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x1111B8u, 0x1111C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111C0u;
label_1111c0:
    // 0x1111c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1111c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111c4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1111c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1111c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111cc: 0x27868918  addiu       $a2, $gp, -0x76E8
    ctx->pc = 0x1111ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936856));
    // 0x1111d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1111d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111d4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1111D4u;
    SET_GPR_U32(ctx, 31, 0x1111DCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1111D4u, 0x1111DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111DCu;
label_1111dc:
    // 0x1111dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1111dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111e0: 0x2782891c  addiu       $v0, $gp, -0x76E4
    ctx->pc = 0x1111e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936860));
    // 0x1111e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1111e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111e8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1111E8u;
    SET_GPR_U32(ctx, 31, 0x1111F0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1111E8u, 0x1111F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111F0u;
label_1111f0:
    // 0x1111f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1111f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1111f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111f8: 0x27868920  addiu       $a2, $gp, -0x76E0
    ctx->pc = 0x1111f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936864));
    // 0x1111fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1111fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111200: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111200u;
    SET_GPR_U32(ctx, 31, 0x111208u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111200u, 0x111208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111208u;
label_111208:
    // 0x111208: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x111208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11120c: 0x27828924  addiu       $v0, $gp, -0x76DC
    ctx->pc = 0x11120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936868));
    // 0x111210: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111214: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111214u;
    SET_GPR_U32(ctx, 31, 0x11121Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111214u, 0x11121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11121Cu;
label_11121c:
    // 0x11121c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11121cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111220: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x111220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x111224: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x111224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111228: 0x3402ea3a  ori         $v0, $zero, 0xEA3A
    ctx->pc = 0x111228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59962);
    // 0x11122c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11122cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111230: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x111230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x111234: 0x24421b50  addiu       $v0, $v0, 0x1B50
    ctx->pc = 0x111234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6992));
    // 0x111238: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x111238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11123c: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x11123Cu;
    SET_GPR_U32(ctx, 31, 0x111244u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x11123Cu, 0x111244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111244u;
label_111244:
    // 0x111244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11124c: 0xc044844  jal         func_112110
    ctx->pc = 0x11124Cu;
    SET_GPR_U32(ctx, 31, 0x111254u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x11124Cu, 0x111254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111254u;
label_111254:
    // 0x111254: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x111254u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111258: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x111258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11125c: 0x27858928  addiu       $a1, $gp, -0x76D8
    ctx->pc = 0x11125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936872));
    // 0x111260: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111260u;
    SET_GPR_U32(ctx, 31, 0x111268u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111260u, 0x111268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111268u;
label_111268:
    // 0x111268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11126c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11126cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111270: 0x2782892c  addiu       $v0, $gp, -0x76D4
    ctx->pc = 0x111270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936876));
    // 0x111274: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111278: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111278u;
    SET_GPR_U32(ctx, 31, 0x111280u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111278u, 0x111280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111280u;
label_111280:
    // 0x111280: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111284: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x111284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111288: 0x27868930  addiu       $a2, $gp, -0x76D0
    ctx->pc = 0x111288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936880));
    // 0x11128c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11128cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111290: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111290u;
    SET_GPR_U32(ctx, 31, 0x111298u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111290u, 0x111298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111298u;
label_111298:
    // 0x111298: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x111298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11129c: 0x27828934  addiu       $v0, $gp, -0x76CC
    ctx->pc = 0x11129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936884));
    // 0x1112a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1112a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112a4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1112A4u;
    SET_GPR_U32(ctx, 31, 0x1112ACu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1112A4u, 0x1112ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112ACu;
label_1112ac:
    // 0x1112ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1112acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112b0: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x1112b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1112b4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1112b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112b8: 0x3402ea3d  ori         $v0, $zero, 0xEA3D
    ctx->pc = 0x1112b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59965);
    // 0x1112bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1112bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112c0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1112c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1112c4: 0x24421b68  addiu       $v0, $v0, 0x1B68
    ctx->pc = 0x1112c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7016));
    // 0x1112c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1112c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112cc: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x1112CCu;
    SET_GPR_U32(ctx, 31, 0x1112D4u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x1112CCu, 0x1112D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112D4u;
label_1112d4:
    // 0x1112d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1112d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1112d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1112dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112e0: 0xc044844  jal         func_112110
    ctx->pc = 0x1112E0u;
    SET_GPR_U32(ctx, 31, 0x1112E8u);
    ctx->pc = 0x112110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112110u, 0x1112E0u, 0x1112E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112E8u;
label_1112e8:
    // 0x1112e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1112e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1112ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1112f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112f4: 0x27858938  addiu       $a1, $gp, -0x76C8
    ctx->pc = 0x1112f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936888));
    // 0x1112f8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1112F8u;
    SET_GPR_U32(ctx, 31, 0x111300u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1112F8u, 0x111300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111300u;
label_111300:
    // 0x111300: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x111300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111304: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x111304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111308: 0x2782893c  addiu       $v0, $gp, -0x76C4
    ctx->pc = 0x111308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936892));
    // 0x11130c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11130cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111310: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111310u;
    SET_GPR_U32(ctx, 31, 0x111318u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111310u, 0x111318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111318u;
label_111318:
    // 0x111318: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x111318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11131c: 0x27828940  addiu       $v0, $gp, -0x76C0
    ctx->pc = 0x11131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936896));
    // 0x111320: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111324: 0xc0444e0  jal         func_111380
    ctx->pc = 0x111324u;
    SET_GPR_U32(ctx, 31, 0x11132Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x111324u, 0x11132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11132Cu;
label_11132c:
    // 0x11132c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11132cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111330: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x111330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111334: 0x27828944  addiu       $v0, $gp, -0x76BC
    ctx->pc = 0x111334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936900));
    // 0x111338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11133c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x11133Cu;
    SET_GPR_U32(ctx, 31, 0x111344u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x11133Cu, 0x111344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111344u;
label_111344:
    // 0x111344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x111344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111348: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x111348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11134c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11134cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x111350: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x111350u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x111354: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x111354u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x111358: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x111358u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11135c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11135cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111360: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x111360u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111364: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x111364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x111368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11136c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11136cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111374: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x111374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x111378: 0x3e00008  jr          $ra
    ctx->pc = 0x111378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111380u;
}
