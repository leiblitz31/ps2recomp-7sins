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

// Function: sub_003A0D40
// Address: 0x3a0d40 - 0x3a1220
void sub_003A0D40_0x3a0d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0D40_0x3a0d40");
#endif

    switch (ctx->pc) {
        case 0x3a0d40u: goto label_3a0d40;
        case 0x3a0d44u: goto label_3a0d44;
        case 0x3a0d48u: goto label_3a0d48;
        case 0x3a0d4cu: goto label_3a0d4c;
        case 0x3a0d50u: goto label_3a0d50;
        case 0x3a0d54u: goto label_3a0d54;
        case 0x3a0d58u: goto label_3a0d58;
        case 0x3a0d5cu: goto label_3a0d5c;
        case 0x3a0d60u: goto label_3a0d60;
        case 0x3a0d64u: goto label_3a0d64;
        case 0x3a0d68u: goto label_3a0d68;
        case 0x3a0d6cu: goto label_3a0d6c;
        case 0x3a0d70u: goto label_3a0d70;
        case 0x3a0d74u: goto label_3a0d74;
        case 0x3a0d78u: goto label_3a0d78;
        case 0x3a0d7cu: goto label_3a0d7c;
        case 0x3a0d80u: goto label_3a0d80;
        case 0x3a0d84u: goto label_3a0d84;
        case 0x3a0d88u: goto label_3a0d88;
        case 0x3a0d8cu: goto label_3a0d8c;
        case 0x3a0d90u: goto label_3a0d90;
        case 0x3a0d94u: goto label_3a0d94;
        case 0x3a0d98u: goto label_3a0d98;
        case 0x3a0d9cu: goto label_3a0d9c;
        case 0x3a0da0u: goto label_3a0da0;
        case 0x3a0da4u: goto label_3a0da4;
        case 0x3a0da8u: goto label_3a0da8;
        case 0x3a0dacu: goto label_3a0dac;
        case 0x3a0db0u: goto label_3a0db0;
        case 0x3a0db4u: goto label_3a0db4;
        case 0x3a0db8u: goto label_3a0db8;
        case 0x3a0dbcu: goto label_3a0dbc;
        case 0x3a0dc0u: goto label_3a0dc0;
        case 0x3a0dc4u: goto label_3a0dc4;
        case 0x3a0dc8u: goto label_3a0dc8;
        case 0x3a0dccu: goto label_3a0dcc;
        case 0x3a0dd0u: goto label_3a0dd0;
        case 0x3a0dd4u: goto label_3a0dd4;
        case 0x3a0dd8u: goto label_3a0dd8;
        case 0x3a0ddcu: goto label_3a0ddc;
        case 0x3a0de0u: goto label_3a0de0;
        case 0x3a0de4u: goto label_3a0de4;
        case 0x3a0de8u: goto label_3a0de8;
        case 0x3a0decu: goto label_3a0dec;
        case 0x3a0df0u: goto label_3a0df0;
        case 0x3a0df4u: goto label_3a0df4;
        case 0x3a0df8u: goto label_3a0df8;
        case 0x3a0dfcu: goto label_3a0dfc;
        case 0x3a0e00u: goto label_3a0e00;
        case 0x3a0e04u: goto label_3a0e04;
        case 0x3a0e08u: goto label_3a0e08;
        case 0x3a0e0cu: goto label_3a0e0c;
        case 0x3a0e10u: goto label_3a0e10;
        case 0x3a0e14u: goto label_3a0e14;
        case 0x3a0e18u: goto label_3a0e18;
        case 0x3a0e1cu: goto label_3a0e1c;
        case 0x3a0e20u: goto label_3a0e20;
        case 0x3a0e24u: goto label_3a0e24;
        case 0x3a0e28u: goto label_3a0e28;
        case 0x3a0e2cu: goto label_3a0e2c;
        case 0x3a0e30u: goto label_3a0e30;
        case 0x3a0e34u: goto label_3a0e34;
        case 0x3a0e38u: goto label_3a0e38;
        case 0x3a0e3cu: goto label_3a0e3c;
        case 0x3a0e40u: goto label_3a0e40;
        case 0x3a0e44u: goto label_3a0e44;
        case 0x3a0e48u: goto label_3a0e48;
        case 0x3a0e4cu: goto label_3a0e4c;
        case 0x3a0e50u: goto label_3a0e50;
        case 0x3a0e54u: goto label_3a0e54;
        case 0x3a0e58u: goto label_3a0e58;
        case 0x3a0e5cu: goto label_3a0e5c;
        case 0x3a0e60u: goto label_3a0e60;
        case 0x3a0e64u: goto label_3a0e64;
        case 0x3a0e68u: goto label_3a0e68;
        case 0x3a0e6cu: goto label_3a0e6c;
        case 0x3a0e70u: goto label_3a0e70;
        case 0x3a0e74u: goto label_3a0e74;
        case 0x3a0e78u: goto label_3a0e78;
        case 0x3a0e7cu: goto label_3a0e7c;
        case 0x3a0e80u: goto label_3a0e80;
        case 0x3a0e84u: goto label_3a0e84;
        case 0x3a0e88u: goto label_3a0e88;
        case 0x3a0e8cu: goto label_3a0e8c;
        case 0x3a0e90u: goto label_3a0e90;
        case 0x3a0e94u: goto label_3a0e94;
        case 0x3a0e98u: goto label_3a0e98;
        case 0x3a0e9cu: goto label_3a0e9c;
        case 0x3a0ea0u: goto label_3a0ea0;
        case 0x3a0ea4u: goto label_3a0ea4;
        case 0x3a0ea8u: goto label_3a0ea8;
        case 0x3a0eacu: goto label_3a0eac;
        case 0x3a0eb0u: goto label_3a0eb0;
        case 0x3a0eb4u: goto label_3a0eb4;
        case 0x3a0eb8u: goto label_3a0eb8;
        case 0x3a0ebcu: goto label_3a0ebc;
        case 0x3a0ec0u: goto label_3a0ec0;
        case 0x3a0ec4u: goto label_3a0ec4;
        case 0x3a0ec8u: goto label_3a0ec8;
        case 0x3a0eccu: goto label_3a0ecc;
        case 0x3a0ed0u: goto label_3a0ed0;
        case 0x3a0ed4u: goto label_3a0ed4;
        case 0x3a0ed8u: goto label_3a0ed8;
        case 0x3a0edcu: goto label_3a0edc;
        case 0x3a0ee0u: goto label_3a0ee0;
        case 0x3a0ee4u: goto label_3a0ee4;
        case 0x3a0ee8u: goto label_3a0ee8;
        case 0x3a0eecu: goto label_3a0eec;
        case 0x3a0ef0u: goto label_3a0ef0;
        case 0x3a0ef4u: goto label_3a0ef4;
        case 0x3a0ef8u: goto label_3a0ef8;
        case 0x3a0efcu: goto label_3a0efc;
        case 0x3a0f00u: goto label_3a0f00;
        case 0x3a0f04u: goto label_3a0f04;
        case 0x3a0f08u: goto label_3a0f08;
        case 0x3a0f0cu: goto label_3a0f0c;
        case 0x3a0f10u: goto label_3a0f10;
        case 0x3a0f14u: goto label_3a0f14;
        case 0x3a0f18u: goto label_3a0f18;
        case 0x3a0f1cu: goto label_3a0f1c;
        case 0x3a0f20u: goto label_3a0f20;
        case 0x3a0f24u: goto label_3a0f24;
        case 0x3a0f28u: goto label_3a0f28;
        case 0x3a0f2cu: goto label_3a0f2c;
        case 0x3a0f30u: goto label_3a0f30;
        case 0x3a0f34u: goto label_3a0f34;
        case 0x3a0f38u: goto label_3a0f38;
        case 0x3a0f3cu: goto label_3a0f3c;
        case 0x3a0f40u: goto label_3a0f40;
        case 0x3a0f44u: goto label_3a0f44;
        case 0x3a0f48u: goto label_3a0f48;
        case 0x3a0f4cu: goto label_3a0f4c;
        case 0x3a0f50u: goto label_3a0f50;
        case 0x3a0f54u: goto label_3a0f54;
        case 0x3a0f58u: goto label_3a0f58;
        case 0x3a0f5cu: goto label_3a0f5c;
        case 0x3a0f60u: goto label_3a0f60;
        case 0x3a0f64u: goto label_3a0f64;
        case 0x3a0f68u: goto label_3a0f68;
        case 0x3a0f6cu: goto label_3a0f6c;
        case 0x3a0f70u: goto label_3a0f70;
        case 0x3a0f74u: goto label_3a0f74;
        case 0x3a0f78u: goto label_3a0f78;
        case 0x3a0f7cu: goto label_3a0f7c;
        case 0x3a0f80u: goto label_3a0f80;
        case 0x3a0f84u: goto label_3a0f84;
        case 0x3a0f88u: goto label_3a0f88;
        case 0x3a0f8cu: goto label_3a0f8c;
        case 0x3a0f90u: goto label_3a0f90;
        case 0x3a0f94u: goto label_3a0f94;
        case 0x3a0f98u: goto label_3a0f98;
        case 0x3a0f9cu: goto label_3a0f9c;
        case 0x3a0fa0u: goto label_3a0fa0;
        case 0x3a0fa4u: goto label_3a0fa4;
        case 0x3a0fa8u: goto label_3a0fa8;
        case 0x3a0facu: goto label_3a0fac;
        case 0x3a0fb0u: goto label_3a0fb0;
        case 0x3a0fb4u: goto label_3a0fb4;
        case 0x3a0fb8u: goto label_3a0fb8;
        case 0x3a0fbcu: goto label_3a0fbc;
        case 0x3a0fc0u: goto label_3a0fc0;
        case 0x3a0fc4u: goto label_3a0fc4;
        case 0x3a0fc8u: goto label_3a0fc8;
        case 0x3a0fccu: goto label_3a0fcc;
        case 0x3a0fd0u: goto label_3a0fd0;
        case 0x3a0fd4u: goto label_3a0fd4;
        case 0x3a0fd8u: goto label_3a0fd8;
        case 0x3a0fdcu: goto label_3a0fdc;
        case 0x3a0fe0u: goto label_3a0fe0;
        case 0x3a0fe4u: goto label_3a0fe4;
        case 0x3a0fe8u: goto label_3a0fe8;
        case 0x3a0fecu: goto label_3a0fec;
        case 0x3a0ff0u: goto label_3a0ff0;
        case 0x3a0ff4u: goto label_3a0ff4;
        case 0x3a0ff8u: goto label_3a0ff8;
        case 0x3a0ffcu: goto label_3a0ffc;
        case 0x3a1000u: goto label_3a1000;
        case 0x3a1004u: goto label_3a1004;
        case 0x3a1008u: goto label_3a1008;
        case 0x3a100cu: goto label_3a100c;
        case 0x3a1010u: goto label_3a1010;
        case 0x3a1014u: goto label_3a1014;
        case 0x3a1018u: goto label_3a1018;
        case 0x3a101cu: goto label_3a101c;
        case 0x3a1020u: goto label_3a1020;
        case 0x3a1024u: goto label_3a1024;
        case 0x3a1028u: goto label_3a1028;
        case 0x3a102cu: goto label_3a102c;
        case 0x3a1030u: goto label_3a1030;
        case 0x3a1034u: goto label_3a1034;
        case 0x3a1038u: goto label_3a1038;
        case 0x3a103cu: goto label_3a103c;
        case 0x3a1040u: goto label_3a1040;
        case 0x3a1044u: goto label_3a1044;
        case 0x3a1048u: goto label_3a1048;
        case 0x3a104cu: goto label_3a104c;
        case 0x3a1050u: goto label_3a1050;
        case 0x3a1054u: goto label_3a1054;
        case 0x3a1058u: goto label_3a1058;
        case 0x3a105cu: goto label_3a105c;
        case 0x3a1060u: goto label_3a1060;
        case 0x3a1064u: goto label_3a1064;
        case 0x3a1068u: goto label_3a1068;
        case 0x3a106cu: goto label_3a106c;
        case 0x3a1070u: goto label_3a1070;
        case 0x3a1074u: goto label_3a1074;
        case 0x3a1078u: goto label_3a1078;
        case 0x3a107cu: goto label_3a107c;
        case 0x3a1080u: goto label_3a1080;
        case 0x3a1084u: goto label_3a1084;
        case 0x3a1088u: goto label_3a1088;
        case 0x3a108cu: goto label_3a108c;
        case 0x3a1090u: goto label_3a1090;
        case 0x3a1094u: goto label_3a1094;
        case 0x3a1098u: goto label_3a1098;
        case 0x3a109cu: goto label_3a109c;
        case 0x3a10a0u: goto label_3a10a0;
        case 0x3a10a4u: goto label_3a10a4;
        case 0x3a10a8u: goto label_3a10a8;
        case 0x3a10acu: goto label_3a10ac;
        case 0x3a10b0u: goto label_3a10b0;
        case 0x3a10b4u: goto label_3a10b4;
        case 0x3a10b8u: goto label_3a10b8;
        case 0x3a10bcu: goto label_3a10bc;
        case 0x3a10c0u: goto label_3a10c0;
        case 0x3a10c4u: goto label_3a10c4;
        case 0x3a10c8u: goto label_3a10c8;
        case 0x3a10ccu: goto label_3a10cc;
        case 0x3a10d0u: goto label_3a10d0;
        case 0x3a10d4u: goto label_3a10d4;
        case 0x3a10d8u: goto label_3a10d8;
        case 0x3a10dcu: goto label_3a10dc;
        case 0x3a10e0u: goto label_3a10e0;
        case 0x3a10e4u: goto label_3a10e4;
        case 0x3a10e8u: goto label_3a10e8;
        case 0x3a10ecu: goto label_3a10ec;
        case 0x3a10f0u: goto label_3a10f0;
        case 0x3a10f4u: goto label_3a10f4;
        case 0x3a10f8u: goto label_3a10f8;
        case 0x3a10fcu: goto label_3a10fc;
        case 0x3a1100u: goto label_3a1100;
        case 0x3a1104u: goto label_3a1104;
        case 0x3a1108u: goto label_3a1108;
        case 0x3a110cu: goto label_3a110c;
        case 0x3a1110u: goto label_3a1110;
        case 0x3a1114u: goto label_3a1114;
        case 0x3a1118u: goto label_3a1118;
        case 0x3a111cu: goto label_3a111c;
        case 0x3a1120u: goto label_3a1120;
        case 0x3a1124u: goto label_3a1124;
        case 0x3a1128u: goto label_3a1128;
        case 0x3a112cu: goto label_3a112c;
        case 0x3a1130u: goto label_3a1130;
        case 0x3a1134u: goto label_3a1134;
        case 0x3a1138u: goto label_3a1138;
        case 0x3a113cu: goto label_3a113c;
        case 0x3a1140u: goto label_3a1140;
        case 0x3a1144u: goto label_3a1144;
        case 0x3a1148u: goto label_3a1148;
        case 0x3a114cu: goto label_3a114c;
        case 0x3a1150u: goto label_3a1150;
        case 0x3a1154u: goto label_3a1154;
        case 0x3a1158u: goto label_3a1158;
        case 0x3a115cu: goto label_3a115c;
        case 0x3a1160u: goto label_3a1160;
        case 0x3a1164u: goto label_3a1164;
        case 0x3a1168u: goto label_3a1168;
        case 0x3a116cu: goto label_3a116c;
        case 0x3a1170u: goto label_3a1170;
        case 0x3a1174u: goto label_3a1174;
        case 0x3a1178u: goto label_3a1178;
        case 0x3a117cu: goto label_3a117c;
        case 0x3a1180u: goto label_3a1180;
        case 0x3a1184u: goto label_3a1184;
        case 0x3a1188u: goto label_3a1188;
        case 0x3a118cu: goto label_3a118c;
        case 0x3a1190u: goto label_3a1190;
        case 0x3a1194u: goto label_3a1194;
        case 0x3a1198u: goto label_3a1198;
        case 0x3a119cu: goto label_3a119c;
        case 0x3a11a0u: goto label_3a11a0;
        case 0x3a11a4u: goto label_3a11a4;
        case 0x3a11a8u: goto label_3a11a8;
        case 0x3a11acu: goto label_3a11ac;
        case 0x3a11b0u: goto label_3a11b0;
        case 0x3a11b4u: goto label_3a11b4;
        case 0x3a11b8u: goto label_3a11b8;
        case 0x3a11bcu: goto label_3a11bc;
        case 0x3a11c0u: goto label_3a11c0;
        case 0x3a11c4u: goto label_3a11c4;
        case 0x3a11c8u: goto label_3a11c8;
        case 0x3a11ccu: goto label_3a11cc;
        case 0x3a11d0u: goto label_3a11d0;
        case 0x3a11d4u: goto label_3a11d4;
        case 0x3a11d8u: goto label_3a11d8;
        case 0x3a11dcu: goto label_3a11dc;
        case 0x3a11e0u: goto label_3a11e0;
        case 0x3a11e4u: goto label_3a11e4;
        case 0x3a11e8u: goto label_3a11e8;
        case 0x3a11ecu: goto label_3a11ec;
        case 0x3a11f0u: goto label_3a11f0;
        case 0x3a11f4u: goto label_3a11f4;
        case 0x3a11f8u: goto label_3a11f8;
        case 0x3a11fcu: goto label_3a11fc;
        case 0x3a1200u: goto label_3a1200;
        case 0x3a1204u: goto label_3a1204;
        case 0x3a1208u: goto label_3a1208;
        case 0x3a120cu: goto label_3a120c;
        case 0x3a1210u: goto label_3a1210;
        case 0x3a1214u: goto label_3a1214;
        case 0x3a1218u: goto label_3a1218;
        case 0x3a121cu: goto label_3a121c;
        default: break;
    }

    ctx->pc = 0x3a0d40u;

label_3a0d40:
    // 0x3a0d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a0d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3a0d44:
    // 0x3a0d44: 0x8f82bd80  lw          $v0, -0x4280($gp)
    ctx->pc = 0x3a0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
label_3a0d48:
    // 0x3a0d48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a0d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3a0d4c:
    // 0x3a0d4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a0d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3a0d50:
    // 0x3a0d50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3a0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3a0d54:
    // 0x3a0d54: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a0d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3a0d58:
    // 0x3a0d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a0d5c:
    // 0x3a0d5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a0d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a0d60:
    // 0x3a0d60: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x3a0d60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a0d64:
    // 0x3a0d64: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x3a0d64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a0d68:
    // 0x3a0d68: 0x12600038  beqz        $s3, . + 4 + (0x38 << 2)
label_3a0d6c:
    if (ctx->pc == 0x3A0D6Cu) {
        ctx->pc = 0x3A0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D68u;
        // 0x3a0d6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D70u;
        goto label_3a0d70;
    }
    ctx->pc = 0x3A0D68u;
    {
        const bool branch_taken_0x3a0d68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D68u;
        // 0x3a0d6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0d68) {
            ctx->pc = 0x3A0E4Cu;
            goto label_3a0e4c;
        }
    }
    ctx->pc = 0x3A0D70u;
label_3a0d70:
    // 0x3a0d70: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x3a0d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3a0d74:
    // 0x3a0d74: 0x1a600015  blez        $s3, . + 4 + (0x15 << 2)
label_3a0d78:
    if (ctx->pc == 0x3A0D78u) {
        ctx->pc = 0x3A0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D74u;
        // 0x3a0d78: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D7Cu;
        goto label_3a0d7c;
    }
    ctx->pc = 0x3A0D74u;
    {
        const bool branch_taken_0x3a0d74 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3A0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D74u;
        // 0x3a0d78: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0d74) {
            ctx->pc = 0x3A0DCCu;
            goto label_3a0dcc;
        }
    }
    ctx->pc = 0x3A0D7Cu;
label_3a0d7c:
    // 0x3a0d7c: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
label_3a0d80:
    if (ctx->pc == 0x3A0D80u) {
        ctx->pc = 0x3A0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D7Cu;
        // 0x3a0d80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D84u;
        goto label_3a0d84;
    }
    ctx->pc = 0x3A0D7Cu;
    {
        const bool branch_taken_0x3a0d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0d7c) {
            ctx->pc = 0x3A0D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0D7Cu;
            // 0x3a0d80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0DF4u;
            goto label_3a0df4;
        }
    }
    ctx->pc = 0x3A0D84u;
label_3a0d84:
    // 0x3a0d84: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3a0d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3a0d88:
    // 0x3a0d88: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_3a0d8c:
    if (ctx->pc == 0x3A0D8Cu) {
        ctx->pc = 0x3A0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D88u;
        // 0x3a0d8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D90u;
        goto label_3a0d90;
    }
    ctx->pc = 0x3A0D88u;
    {
        const bool branch_taken_0x3a0d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0d88) {
            ctx->pc = 0x3A0D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0D88u;
            // 0x3a0d8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0DD0u;
            goto label_3a0dd0;
        }
    }
    ctx->pc = 0x3A0D90u;
label_3a0d90:
    // 0x3a0d90: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3a0d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3a0d94:
    // 0x3a0d94: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3a0d98:
    if (ctx->pc == 0x3A0D98u) {
        ctx->pc = 0x3A0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D94u;
        // 0x3a0d98: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0D9Cu;
        goto label_3a0d9c;
    }
    ctx->pc = 0x3A0D94u;
    {
        const bool branch_taken_0x3a0d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0d94) {
            ctx->pc = 0x3A0D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0D94u;
            // 0x3a0d98: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0DB8u;
            goto label_3a0db8;
        }
    }
    ctx->pc = 0x3A0D9Cu;
label_3a0d9c:
    // 0x3a0d9c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3a0d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a0da0:
    // 0x3a0da0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3a0da4:
    if (ctx->pc == 0x3A0DA4u) {
        ctx->pc = 0x3A0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DA0u;
        // 0x3a0da4: 0x26500008  addiu       $s0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DA8u;
        goto label_3a0da8;
    }
    ctx->pc = 0x3A0DA0u;
    {
        const bool branch_taken_0x3a0da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DA0u;
        // 0x3a0da4: 0x26500008  addiu       $s0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0da0) {
            ctx->pc = 0x3A0DB0u;
            goto label_3a0db0;
        }
    }
    ctx->pc = 0x3A0DA8u;
label_3a0da8:
    // 0x3a0da8: 0xc104702  jal         func_411C08
label_3a0dac:
    if (ctx->pc == 0x3A0DACu) {
        ctx->pc = 0x3A0DB0u;
        goto label_3a0db0;
    }
    ctx->pc = 0x3A0DA8u;
    SET_GPR_U32(ctx, 31, 0x3A0DB0u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0DA8u, 0x3A0DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0DB0u;
label_3a0db0:
    // 0x3a0db0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a0db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0db4:
    // 0x3a0db4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a0db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a0db8:
    // 0x3a0db8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3a0dbc:
    if (ctx->pc == 0x3A0DBCu) {
        ctx->pc = 0x3A0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DB8u;
        // 0x3a0dbc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DC0u;
        goto label_3a0dc0;
    }
    ctx->pc = 0x3A0DB8u;
    {
        const bool branch_taken_0x3a0db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DB8u;
        // 0x3a0dbc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0db8) {
            ctx->pc = 0x3A0DC8u;
            goto label_3a0dc8;
        }
    }
    ctx->pc = 0x3A0DC0u;
label_3a0dc0:
    // 0x3a0dc0: 0xc104702  jal         func_411C08
label_3a0dc4:
    if (ctx->pc == 0x3A0DC4u) {
        ctx->pc = 0x3A0DC8u;
        goto label_3a0dc8;
    }
    ctx->pc = 0x3A0DC0u;
    SET_GPR_U32(ctx, 31, 0x3A0DC8u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0DC0u, 0x3A0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0DC8u;
label_3a0dc8:
    // 0x3a0dc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a0dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a0dcc:
    // 0x3a0dcc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a0dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a0dd0:
    // 0x3a0dd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3a0dd4:
    if (ctx->pc == 0x3A0DD4u) {
        ctx->pc = 0x3A0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DD0u;
        // 0x3a0dd4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DD8u;
        goto label_3a0dd8;
    }
    ctx->pc = 0x3A0DD0u;
    {
        const bool branch_taken_0x3a0dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DD0u;
        // 0x3a0dd4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0dd0) {
            ctx->pc = 0x3A0DE0u;
            goto label_3a0de0;
        }
    }
    ctx->pc = 0x3A0DD8u;
label_3a0dd8:
    // 0x3a0dd8: 0xc104702  jal         func_411C08
label_3a0ddc:
    if (ctx->pc == 0x3A0DDCu) {
        ctx->pc = 0x3A0DE0u;
        goto label_3a0de0;
    }
    ctx->pc = 0x3A0DD8u;
    SET_GPR_U32(ctx, 31, 0x3A0DE0u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0DD8u, 0x3A0DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0DE0u;
label_3a0de0:
    // 0x3a0de0: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3a0de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3a0de4:
    // 0x3a0de4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3a0de8:
    if (ctx->pc == 0x3A0DE8u) {
        ctx->pc = 0x3A0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DE4u;
        // 0x3a0de8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DECu;
        goto label_3a0dec;
    }
    ctx->pc = 0x3A0DE4u;
    {
        const bool branch_taken_0x3a0de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DE4u;
        // 0x3a0de8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0de4) {
            ctx->pc = 0x3A0E4Cu;
            goto label_3a0e4c;
        }
    }
    ctx->pc = 0x3A0DECu;
label_3a0dec:
    // 0x3a0dec: 0x0  nop
    ctx->pc = 0x3a0decu;
    // NOP
label_3a0df0:
    // 0x3a0df0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a0df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a0df4:
    // 0x3a0df4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3a0df8:
    if (ctx->pc == 0x3A0DF8u) {
        ctx->pc = 0x3A0DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DF4u;
        // 0x3a0df8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0DFCu;
        goto label_3a0dfc;
    }
    ctx->pc = 0x3A0DF4u;
    {
        const bool branch_taken_0x3a0df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0df4) {
            ctx->pc = 0x3A0DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0DF4u;
            // 0x3a0df8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0E08u;
            goto label_3a0e08;
        }
    }
    ctx->pc = 0x3A0DFCu;
label_3a0dfc:
    // 0x3a0dfc: 0xc104702  jal         func_411C08
label_3a0e00:
    if (ctx->pc == 0x3A0E00u) {
        ctx->pc = 0x3A0E04u;
        goto label_3a0e04;
    }
    ctx->pc = 0x3A0DFCu;
    SET_GPR_U32(ctx, 31, 0x3A0E04u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0DFCu, 0x3A0E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0E04u;
label_3a0e04:
    // 0x3a0e04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3a0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a0e08:
    // 0x3a0e08: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3a0e0c:
    if (ctx->pc == 0x3A0E0Cu) {
        ctx->pc = 0x3A0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E08u;
        // 0x3a0e0c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0E10u;
        goto label_3a0e10;
    }
    ctx->pc = 0x3A0E08u;
    {
        const bool branch_taken_0x3a0e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0e08) {
            ctx->pc = 0x3A0E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0E08u;
            // 0x3a0e0c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0E1Cu;
            goto label_3a0e1c;
        }
    }
    ctx->pc = 0x3A0E10u;
label_3a0e10:
    // 0x3a0e10: 0xc104702  jal         func_411C08
label_3a0e14:
    if (ctx->pc == 0x3A0E14u) {
        ctx->pc = 0x3A0E18u;
        goto label_3a0e18;
    }
    ctx->pc = 0x3A0E10u;
    SET_GPR_U32(ctx, 31, 0x3A0E18u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0E10u, 0x3A0E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0E18u;
label_3a0e18:
    // 0x3a0e18: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3a0e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a0e1c:
    // 0x3a0e1c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3a0e20:
    if (ctx->pc == 0x3A0E20u) {
        ctx->pc = 0x3A0E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E1Cu;
        // 0x3a0e20: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0E24u;
        goto label_3a0e24;
    }
    ctx->pc = 0x3A0E1Cu;
    {
        const bool branch_taken_0x3a0e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0e1c) {
            ctx->pc = 0x3A0E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0E1Cu;
            // 0x3a0e20: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0E30u;
            goto label_3a0e30;
        }
    }
    ctx->pc = 0x3A0E24u;
label_3a0e24:
    // 0x3a0e24: 0xc104702  jal         func_411C08
label_3a0e28:
    if (ctx->pc == 0x3A0E28u) {
        ctx->pc = 0x3A0E2Cu;
        goto label_3a0e2c;
    }
    ctx->pc = 0x3A0E24u;
    SET_GPR_U32(ctx, 31, 0x3A0E2Cu);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0E24u, 0x3A0E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0E2Cu;
label_3a0e2c:
    // 0x3a0e2c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3a0e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a0e30:
    // 0x3a0e30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3a0e34:
    if (ctx->pc == 0x3A0E34u) {
        ctx->pc = 0x3A0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E30u;
        // 0x3a0e34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0E38u;
        goto label_3a0e38;
    }
    ctx->pc = 0x3A0E30u;
    {
        const bool branch_taken_0x3a0e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E30u;
        // 0x3a0e34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0e30) {
            ctx->pc = 0x3A0E40u;
            goto label_3a0e40;
        }
    }
    ctx->pc = 0x3A0E38u;
label_3a0e38:
    // 0x3a0e38: 0xc104702  jal         func_411C08
label_3a0e3c:
    if (ctx->pc == 0x3A0E3Cu) {
        ctx->pc = 0x3A0E40u;
        goto label_3a0e40;
    }
    ctx->pc = 0x3A0E38u;
    SET_GPR_U32(ctx, 31, 0x3A0E40u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x3A0E38u, 0x3A0E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0E40u;
label_3a0e40:
    // 0x3a0e40: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3a0e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3a0e44:
    // 0x3a0e44: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3a0e48:
    if (ctx->pc == 0x3A0E48u) {
        ctx->pc = 0x3A0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E44u;
        // 0x3a0e48: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0E4Cu;
        goto label_3a0e4c;
    }
    ctx->pc = 0x3A0E44u;
    {
        const bool branch_taken_0x3a0e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E44u;
        // 0x3a0e48: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0e44) {
            ctx->pc = 0x3A0DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0df0;
        }
    }
    ctx->pc = 0x3A0E4Cu;
label_3a0e4c:
    // 0x3a0e4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a0e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a0e50:
    // 0x3a0e50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0e54:
    // 0x3a0e54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a0e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a0e58:
    // 0x3a0e58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a0e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a0e5c:
    // 0x3a0e5c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a0e5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a0e60:
    // 0x3a0e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a0e64:
    // 0x3a0e64: 0x3e00008  jr          $ra
label_3a0e68:
    if (ctx->pc == 0x3A0E68u) {
        ctx->pc = 0x3A0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E64u;
        // 0x3a0e68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0E6Cu;
        goto label_3a0e6c;
    }
    ctx->pc = 0x3A0E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E64u;
        // 0x3a0e68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0E6Cu;
label_3a0e6c:
    // 0x3a0e6c: 0x0  nop
    ctx->pc = 0x3a0e6cu;
    // NOP
label_3a0e70:
    // 0x3a0e70: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3a0e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_3a0e74:
    // 0x3a0e74: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3a0e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3a0e78:
    // 0x3a0e78: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x3a0e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_3a0e7c:
    // 0x3a0e7c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a0e80:
    // 0x3a0e80: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x3a0e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_3a0e84:
    // 0x3a0e84: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3a0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3a0e88:
    // 0x3a0e88: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x3a0e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_3a0e8c:
    // 0x3a0e8c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3a0e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3a0e90:
    // 0x3a0e90: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x3a0e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_3a0e94:
    // 0x3a0e94: 0x2606c5f0  addiu       $a2, $s0, -0x3A10
    ctx->pc = 0x3a0e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952432));
label_3a0e98:
    // 0x3a0e98: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x3a0e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_3a0e9c:
    // 0x3a0e9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a0e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0ea0:
    // 0x3a0ea0: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x3a0ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_3a0ea4:
    // 0x3a0ea4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a0ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3a0ea8:
    // 0x3a0ea8: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x3a0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_3a0eac:
    // 0x3a0eac: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x3a0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_3a0eb0:
    // 0x3a0eb0: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x3a0eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_3a0eb4:
    // 0x3a0eb4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3a0eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3a0eb8:
    // 0x3a0eb8: 0xaf80bd74  sw          $zero, -0x428C($gp)
    ctx->pc = 0x3a0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 0));
label_3a0ebc:
    // 0x3a0ebc: 0x8c930014  lw          $s3, 0x14($a0)
    ctx->pc = 0x3a0ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3a0ec0:
    // 0x3a0ec0: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x3a0ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a0ec4:
    // 0x3a0ec4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a0ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a0ec8:
    // 0x3a0ec8: 0xa3a30029  sb          $v1, 0x29($sp)
    ctx->pc = 0x3a0ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 41), (uint8_t)GPR_U32(ctx, 3));
label_3a0ecc:
    // 0x3a0ecc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3a0eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3a0ed0:
    // 0x3a0ed0: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x3a0ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
label_3a0ed4:
    // 0x3a0ed4: 0xa3a00028  sb          $zero, 0x28($sp)
    ctx->pc = 0x3a0ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 0));
label_3a0ed8:
    // 0x3a0ed8: 0xa3a0002a  sb          $zero, 0x2A($sp)
    ctx->pc = 0x3a0ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 42), (uint8_t)GPR_U32(ctx, 0));
label_3a0edc:
    // 0x3a0edc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a0edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a0ee0:
    // 0x3a0ee0: 0xaf86bd70  sw          $a2, -0x4290($gp)
    ctx->pc = 0x3a0ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 6));
label_3a0ee4:
    // 0x3a0ee4: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x3a0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3a0ee8:
    // 0x3a0ee8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x3a0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_3a0eec:
    // 0x3a0eec: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3a0eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3a0ef0:
    // 0x3a0ef0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3a0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3a0ef4:
    // 0x3a0ef4: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x3a0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_3a0ef8:
    // 0x3a0ef8: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x3a0ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
label_3a0efc:
    // 0x3a0efc: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x3a0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_3a0f00:
    // 0x3a0f00: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x3a0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_3a0f04:
    // 0x3a0f04: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3a0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3a0f08:
    // 0x3a0f08: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x3a0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_3a0f0c:
    // 0x3a0f0c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3a0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_3a0f10:
    // 0x3a0f10: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x3a0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_3a0f14:
    // 0x3a0f14: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3a0f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3a0f18:
    // 0x3a0f18: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3a0f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_3a0f1c:
    // 0x3a0f1c: 0x40f809  jalr        $v0
label_3a0f20:
    if (ctx->pc == 0x3A0F20u) {
        ctx->pc = 0x3A0F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F1Cu;
        // 0x3a0f20: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F24u;
        goto label_3a0f24;
    }
    ctx->pc = 0x3A0F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A0F24u);
        ctx->pc = 0x3A0F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F1Cu;
        // 0x3a0f20: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0F1Cu, 0x3A0F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A0F24u;
label_3a0f24:
    // 0x3a0f24: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
label_3a0f28:
    if (ctx->pc == 0x3A0F28u) {
        ctx->pc = 0x3A0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F24u;
        // 0x3a0f28: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F2Cu;
        goto label_3a0f2c;
    }
    ctx->pc = 0x3A0F24u;
    {
        const bool branch_taken_0x3a0f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F24u;
        // 0x3a0f28: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f24) {
            ctx->pc = 0x3A11ECu;
            goto label_3a11ec;
        }
    }
    ctx->pc = 0x3A0F2Cu;
label_3a0f2c:
    // 0x3a0f2c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a0f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3a0f30:
    // 0x3a0f30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3a0f34:
    if (ctx->pc == 0x3A0F34u) {
        ctx->pc = 0x3A0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F30u;
        // 0x3a0f34: 0x8f84bd74  lw          $a0, -0x428C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F38u;
        goto label_3a0f38;
    }
    ctx->pc = 0x3A0F30u;
    {
        const bool branch_taken_0x3a0f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F30u;
        // 0x3a0f34: 0x8f84bd74  lw          $a0, -0x428C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f30) {
            ctx->pc = 0x3A0F44u;
            goto label_3a0f44;
        }
    }
    ctx->pc = 0x3A0F38u;
label_3a0f38:
    // 0x3a0f38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a0f3c:
    // 0x3a0f3c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3a0f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_3a0f40:
    // 0x3a0f40: 0x8f84bd74  lw          $a0, -0x428C($gp)
    ctx->pc = 0x3a0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
label_3a0f44:
    // 0x3a0f44: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3a0f48:
    if (ctx->pc == 0x3A0F48u) {
        ctx->pc = 0x3A0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F44u;
        // 0x3a0f48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F4Cu;
        goto label_3a0f4c;
    }
    ctx->pc = 0x3A0F44u;
    {
        const bool branch_taken_0x3a0f44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F44u;
        // 0x3a0f48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f44) {
            ctx->pc = 0x3A0F60u;
            goto label_3a0f60;
        }
    }
    ctx->pc = 0x3A0F4Cu;
label_3a0f4c:
    // 0x3a0f4c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x3a0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3a0f50:
    // 0x3a0f50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a0f54:
    // 0x3a0f54: 0xaf82bd74  sw          $v0, -0x428C($gp)
    ctx->pc = 0x3a0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 2));
label_3a0f58:
    // 0x3a0f58: 0x10000023  b           . + 4 + (0x23 << 2)
label_3a0f5c:
    if (ctx->pc == 0x3A0F5Cu) {
        ctx->pc = 0x3A0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F58u;
        // 0x3a0f5c: 0xaf83bd70  sw          $v1, -0x4290($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F60u;
        goto label_3a0f60;
    }
    ctx->pc = 0x3A0F58u;
    {
        const bool branch_taken_0x3a0f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F58u;
        // 0x3a0f5c: 0xaf83bd70  sw          $v1, -0x4290($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f58) {
            ctx->pc = 0x3A0FE8u;
            goto label_3a0fe8;
        }
    }
    ctx->pc = 0x3A0F60u;
label_3a0f60:
    // 0x3a0f60: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_3a0f64:
    if (ctx->pc == 0x3A0F64u) {
        ctx->pc = 0x3A0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F60u;
        // 0x3a0f64: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F68u;
        goto label_3a0f68;
    }
    ctx->pc = 0x3A0F60u;
    {
        const bool branch_taken_0x3a0f60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F60u;
        // 0x3a0f64: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f60) {
            ctx->pc = 0x3A0F70u;
            goto label_3a0f70;
        }
    }
    ctx->pc = 0x3A0F68u;
label_3a0f68:
    // 0x3a0f68: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3a0f6c:
    if (ctx->pc == 0x3A0F6Cu) {
        ctx->pc = 0x3A0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F68u;
        // 0x3a0f6c: 0xaf80bd74  sw          $zero, -0x428C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F70u;
        goto label_3a0f70;
    }
    ctx->pc = 0x3A0F68u;
    {
        const bool branch_taken_0x3a0f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F68u;
        // 0x3a0f6c: 0xaf80bd74  sw          $zero, -0x428C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f68) {
            ctx->pc = 0x3A0FE8u;
            goto label_3a0fe8;
        }
    }
    ctx->pc = 0x3A0F70u;
label_3a0f70:
    // 0x3a0f70: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
label_3a0f74:
    if (ctx->pc == 0x3A0F74u) {
        ctx->pc = 0x3A0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F70u;
        // 0x3a0f74: 0x8e630024  lw          $v1, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F78u;
        goto label_3a0f78;
    }
    ctx->pc = 0x3A0F70u;
    {
        const bool branch_taken_0x3a0f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a0f70) {
            ctx->pc = 0x3A0F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0F70u;
            // 0x3a0f74: 0x8e630024  lw          $v1, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0F8Cu;
            goto label_3a0f8c;
        }
    }
    ctx->pc = 0x3A0F78u;
label_3a0f78:
    // 0x3a0f78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a0f7c:
    // 0x3a0f7c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3a0f80:
    if (ctx->pc == 0x3A0F80u) {
        ctx->pc = 0x3A0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F7Cu;
        // 0x3a0f80: 0xaf82bd74  sw          $v0, -0x428C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F84u;
        goto label_3a0f84;
    }
    ctx->pc = 0x3A0F7Cu;
    {
        const bool branch_taken_0x3a0f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F7Cu;
        // 0x3a0f80: 0xaf82bd74  sw          $v0, -0x428C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f7c) {
            ctx->pc = 0x3A0FA0u;
            goto label_3a0fa0;
        }
    }
    ctx->pc = 0x3A0F84u;
label_3a0f84:
    // 0x3a0f84: 0x1000009a  b           . + 4 + (0x9A << 2)
label_3a0f88:
    if (ctx->pc == 0x3A0F88u) {
        ctx->pc = 0x3A0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F84u;
        // 0x3a0f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F8Cu;
        goto label_3a0f8c;
    }
    ctx->pc = 0x3A0F84u;
    {
        const bool branch_taken_0x3a0f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F84u;
        // 0x3a0f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f84) {
            ctx->pc = 0x3A11F0u;
            goto label_3a11f0;
        }
    }
    ctx->pc = 0x3A0F8Cu;
label_3a0f8c:
    // 0x3a0f8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a0f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a0f90:
    // 0x3a0f90: 0x8f85bd70  lw          $a1, -0x4290($gp)
    ctx->pc = 0x3a0f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950256)));
label_3a0f94:
    // 0x3a0f94: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x3a0f94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_3a0f98:
    // 0x3a0f98: 0xaf84bd74  sw          $a0, -0x428C($gp)
    ctx->pc = 0x3a0f98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 4));
label_3a0f9c:
    // 0x3a0f9c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3a0f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_3a0fa0:
    // 0x3a0fa0: 0x9e63001c  lwu         $v1, 0x1C($s3)
    ctx->pc = 0x3a0fa0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_3a0fa4:
    // 0x3a0fa4: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x3a0fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
label_3a0fa8:
    // 0x3a0fa8: 0x9f82bd74  lwu         $v0, -0x428C($gp)
    ctx->pc = 0x3a0fa8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
label_3a0fac:
    // 0x3a0fac: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x3a0facu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
label_3a0fb0:
    // 0x3a0fb0: 0x34e70404  ori         $a3, $a3, 0x404
    ctx->pc = 0x3a0fb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1028);
label_3a0fb4:
    // 0x3a0fb4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3a0fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_3a0fb8:
    // 0x3a0fb8: 0x8f84bd74  lw          $a0, -0x428C($gp)
    ctx->pc = 0x3a0fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
label_3a0fbc:
    // 0x3a0fbc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a0fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3a0fc0:
    // 0x3a0fc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a0fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0fc4:
    // 0x3a0fc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a0fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3a0fc8:
    // 0x3a0fc8: 0x2605c5f0  addiu       $a1, $s0, -0x3A10
    ctx->pc = 0x3a0fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952432));
label_3a0fcc:
    // 0x3a0fcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a0fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3a0fd0:
    // 0x3a0fd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a0fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a0fd4:
    // 0x3a0fd4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3a0fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_3a0fd8:
    // 0x3a0fd8: 0xaf84bd74  sw          $a0, -0x428C($gp)
    ctx->pc = 0x3a0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 4));
label_3a0fdc:
    // 0x3a0fdc: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x3a0fdcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_3a0fe0:
    // 0x3a0fe0: 0xaf85bd70  sw          $a1, -0x4290($gp)
    ctx->pc = 0x3a0fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950256), GPR_U32(ctx, 5));
label_3a0fe4:
    // 0x3a0fe4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3a0fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_3a0fe8:
    // 0x3a0fe8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x3a0fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3a0fec:
    // 0x3a0fec: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3a0fecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0ff0:
    // 0x3a0ff0: 0x8f85bd70  lw          $a1, -0x4290($gp)
    ctx->pc = 0x3a0ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950256)));
label_3a0ff4:
    // 0x3a0ff4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3a0ff4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0ff8:
    // 0x3a0ff8: 0x8f86bd74  lw          $a2, -0x428C($gp)
    ctx->pc = 0x3a0ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950260)));
label_3a0ffc:
    // 0x3a0ffc: 0xc10f898  jal         func_43E260
label_3a1000:
    if (ctx->pc == 0x3A1000u) {
        ctx->pc = 0x3A1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0FFCu;
        // 0x3a1000: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1004u;
        goto label_3a1004;
    }
    ctx->pc = 0x3A0FFCu;
    SET_GPR_U32(ctx, 31, 0x3A1004u);
    ctx->pc = 0x3A1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0FFCu;
    // 0x3a1000: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E260u, 0x3A0FFCu, 0x3A1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1004u;
label_3a1004:
    // 0x3a1004: 0x8fb5000c  lw          $s5, 0xC($sp)
    ctx->pc = 0x3a1004u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3a1008:
    // 0x3a1008: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3a1008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3a100c:
    // 0x3a100c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x3a100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3a1010:
    // 0x3a1010: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x3a1010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_3a1014:
    // 0x3a1014: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3a1014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3a1018:
    // 0x3a1018: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
label_3a101c:
    if (ctx->pc == 0x3A101Cu) {
        ctx->pc = 0x3A101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1018u;
        // 0x3a101c: 0x2a28821  addu        $s1, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1020u;
        goto label_3a1020;
    }
    ctx->pc = 0x3A1018u;
    {
        const bool branch_taken_0x3a1018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1018u;
        // 0x3a101c: 0x2a28821  addu        $s1, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1018) {
            ctx->pc = 0x3A11D8u;
            goto label_3a11d8;
        }
    }
    ctx->pc = 0x3A1020u;
label_3a1020:
    // 0x3a1020: 0x3c160007  lui         $s6, 0x7
    ctx->pc = 0x3a1020u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)7 << 16));
label_3a1024:
    // 0x3a1024: 0x24920004  addiu       $s2, $a0, 0x4
    ctx->pc = 0x3a1024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3a1028:
    // 0x3a1028: 0x36d6fff8  ori         $s6, $s6, 0xFFF8
    ctx->pc = 0x3a1028u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65528);
label_3a102c:
    // 0x3a102c: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x3a102cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3a1030:
    // 0x3a1030: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a1030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a1034:
    // 0x3a1034: 0x24469988  addiu       $a2, $v0, -0x6678
    ctx->pc = 0x3a1034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941064));
label_3a1038:
    // 0x3a1038: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x3a1038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_3a103c:
    // 0x3a103c: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x3a103cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3a1040:
    // 0x3a1040: 0xaba30093  swl         $v1, 0x93($sp)
    ctx->pc = 0x3a1040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 147); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a1044:
    // 0x3a1044: 0xbba30090  swr         $v1, 0x90($sp)
    ctx->pc = 0x3a1044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a1048:
    // 0x3a1048: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x3a1048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_3a104c:
    // 0x3a104c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_3a1050:
    if (ctx->pc == 0x3A1050u) {
        ctx->pc = 0x3A1054u;
        goto label_3a1054;
    }
    ctx->pc = 0x3A104Cu;
    {
        const bool branch_taken_0x3a104c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a104c) {
            ctx->pc = 0x3A1064u;
            goto label_3a1064;
        }
    }
    ctx->pc = 0x3A1054u;
label_3a1054:
    // 0x3a1054: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a1054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1058:
    // 0x3a1058: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3a1058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3a105c:
    // 0x3a105c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x3a105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_3a1060:
    // 0x3a1060: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x3a1060u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_3a1064:
    // 0x3a1064: 0x107e0006  beq         $v1, $fp, . + 4 + (0x6 << 2)
label_3a1068:
    if (ctx->pc == 0x3A1068u) {
        ctx->pc = 0x3A1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1064u;
        // 0x3a1068: 0x93a20028  lbu         $v0, 0x28($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A106Cu;
        goto label_3a106c;
    }
    ctx->pc = 0x3A1064u;
    {
        const bool branch_taken_0x3a1064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x3A1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1064u;
        // 0x3a1068: 0x93a20028  lbu         $v0, 0x28($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1064) {
            ctx->pc = 0x3A1080u;
            goto label_3a1080;
        }
    }
    ctx->pc = 0x3A106Cu;
label_3a106c:
    // 0x3a106c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3a106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3a1070:
    // 0x3a1070: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x3a1070u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a1074:
    // 0x3a1074: 0x8c570014  lw          $s7, 0x14($v0)
    ctx->pc = 0x3a1074u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3a1078:
    // 0x3a1078: 0xafb70004  sw          $s7, 0x4($sp)
    ctx->pc = 0x3a1078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 23));
label_3a107c:
    // 0x3a107c: 0x93a20028  lbu         $v0, 0x28($sp)
    ctx->pc = 0x3a107cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
label_3a1080:
    // 0x3a1080: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3a1080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3a1084:
    // 0x3a1084: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3a1084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_3a1088:
    // 0x3a1088: 0xafb1002c  sw          $s1, 0x2C($sp)
    ctx->pc = 0x3a1088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 17));
label_3a108c:
    // 0x3a108c: 0xa3a2002b  sb          $v0, 0x2B($sp)
    ctx->pc = 0x3a108cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 43), (uint8_t)GPR_U32(ctx, 2));
label_3a1090:
    // 0x3a1090: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x3a1090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_3a1094:
    // 0x3a1094: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a1094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1098:
    // 0x3a1098: 0xafb20030  sw          $s2, 0x30($sp)
    ctx->pc = 0x3a1098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
label_3a109c:
    // 0x3a109c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a10a0:
    // 0x3a10a0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3a10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_3a10a4:
    // 0x3a10a4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3a10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3a10a8:
    // 0x3a10a8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x3a10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_3a10ac:
    // 0x3a10ac: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x3a10acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_3a10b0:
    // 0x3a10b0: 0x8ba30093  lwl         $v1, 0x93($sp)
    ctx->pc = 0x3a10b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 147); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_3a10b4:
    // 0x3a10b4: 0x9ba30090  lwr         $v1, 0x90($sp)
    ctx->pc = 0x3a10b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3a10b8:
    // 0x3a10b8: 0xaba30047  swl         $v1, 0x47($sp)
    ctx->pc = 0x3a10b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a10bc:
    // 0x3a10bc: 0xbba30044  swr         $v1, 0x44($sp)
    ctx->pc = 0x3a10bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a10c0:
    // 0x3a10c0: 0x93a2002a  lbu         $v0, 0x2A($sp)
    ctx->pc = 0x3a10c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 42)));
label_3a10c4:
    // 0x3a10c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3a10c8:
    if (ctx->pc == 0x3A10C8u) {
        ctx->pc = 0x3A10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A10C4u;
        // 0x3a10c8: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A10CCu;
        goto label_3a10cc;
    }
    ctx->pc = 0x3A10C4u;
    {
        const bool branch_taken_0x3a10c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A10C4u;
        // 0x3a10c8: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a10c4) {
            ctx->pc = 0x3A10E4u;
            goto label_3a10e4;
        }
    }
    ctx->pc = 0x3A10CCu;
label_3a10cc:
    // 0x3a10cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a10d0:
    // 0x3a10d0: 0x88430007  lwl         $v1, 0x7($v0)
    ctx->pc = 0x3a10d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_3a10d4:
    // 0x3a10d4: 0x98430004  lwr         $v1, 0x4($v0)
    ctx->pc = 0x3a10d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3a10d8:
    // 0x3a10d8: 0xaba30047  swl         $v1, 0x47($sp)
    ctx->pc = 0x3a10d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a10dc:
    // 0x3a10dc: 0xbba30044  swr         $v1, 0x44($sp)
    ctx->pc = 0x3a10dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a10e0:
    // 0x3a10e0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3a10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3a10e4:
    // 0x3a10e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a10e8:
    // 0x3a10e8: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_3a10ec:
    if (ctx->pc == 0x3A10ECu) {
        ctx->pc = 0x3A10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A10E8u;
        // 0x3a10ec: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A10F0u;
        goto label_3a10f0;
    }
    ctx->pc = 0x3A10E8u;
    {
        const bool branch_taken_0x3a10e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A10E8u;
        // 0x3a10ec: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a10e8) {
            ctx->pc = 0x3A1198u;
            goto label_3a1198;
        }
    }
    ctx->pc = 0x3A10F0u;
label_3a10f0:
    // 0x3a10f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3a10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3a10f4:
    // 0x3a10f4: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x3a10f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3a10f8:
    // 0x3a10f8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3a10f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3a10fc:
    // 0x3a10fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a1100:
    // 0x3a1100: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3a1104:
    if (ctx->pc == 0x3A1104u) {
        ctx->pc = 0x3A1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1100u;
        // 0x3a1104: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1108u;
        goto label_3a1108;
    }
    ctx->pc = 0x3A1100u;
    {
        const bool branch_taken_0x3a1100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1100u;
        // 0x3a1104: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1100) {
            ctx->pc = 0x3A1124u;
            goto label_3a1124;
        }
    }
    ctx->pc = 0x3A1108u;
label_3a1108:
    // 0x3a1108: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a1108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a110c:
    // 0x3a110c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3a1110:
    if (ctx->pc == 0x3A1110u) {
        ctx->pc = 0x3A1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A110Cu;
        // 0x3a1110: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1114u;
        goto label_3a1114;
    }
    ctx->pc = 0x3A110Cu;
    {
        const bool branch_taken_0x3a110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a110c) {
            ctx->pc = 0x3A1110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A110Cu;
            // 0x3a1110: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1130u;
            goto label_3a1130;
        }
    }
    ctx->pc = 0x3A1114u;
label_3a1114:
    // 0x3a1114: 0x40f809  jalr        $v0
label_3a1118:
    if (ctx->pc == 0x3A1118u) {
        ctx->pc = 0x3A1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1114u;
        // 0x3a1118: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A111Cu;
        goto label_3a111c;
    }
    ctx->pc = 0x3A1114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A111Cu);
        ctx->pc = 0x3A1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1114u;
        // 0x3a1118: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1114u, 0x3A111Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A111Cu;
label_3a111c:
    // 0x3a111c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a1120:
    if (ctx->pc == 0x3A1120u) {
        ctx->pc = 0x3A1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A111Cu;
        // 0x3a1120: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1124u;
        goto label_3a1124;
    }
    ctx->pc = 0x3A111Cu;
    {
        const bool branch_taken_0x3a111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A111Cu;
        // 0x3a1120: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a111c) {
            ctx->pc = 0x3A1130u;
            goto label_3a1130;
        }
    }
    ctx->pc = 0x3A1124u;
label_3a1124:
    // 0x3a1124: 0x961025  or          $v0, $a0, $s6
    ctx->pc = 0x3a1124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 22));
label_3a1128:
    // 0x3a1128: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3a1128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3a112c:
    // 0x3a112c: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x3a112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3a1130:
    // 0x3a1130: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x3a1130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_3a1134:
    // 0x3a1134: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a1138:
    if (ctx->pc == 0x3A1138u) {
        ctx->pc = 0x3A1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1134u;
        // 0x3a1138: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A113Cu;
        goto label_3a113c;
    }
    ctx->pc = 0x3A1134u;
    {
        const bool branch_taken_0x3a1134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1134u;
        // 0x3a1138: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1134) {
            ctx->pc = 0x3A114Cu;
            goto label_3a114c;
        }
    }
    ctx->pc = 0x3A113Cu;
label_3a113c:
    // 0x3a113c: 0xc0e8488  jal         func_3A1220
label_3a1140:
    if (ctx->pc == 0x3A1140u) {
        ctx->pc = 0x3A1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A113Cu;
        // 0x3a1140: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1144u;
        goto label_3a1144;
    }
    ctx->pc = 0x3A113Cu;
    SET_GPR_U32(ctx, 31, 0x3A1144u);
    ctx->pc = 0x3A1140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A113Cu;
    // 0x3a1140: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1220u, 0x3A113Cu, 0x3A1144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1144u;
label_3a1144:
    // 0x3a1144: 0x1040ff8f  beqz        $v0, . + 4 + (-0x71 << 2)
label_3a1148:
    if (ctx->pc == 0x3A1148u) {
        ctx->pc = 0x3A1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1144u;
        // 0x3a1148: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A114Cu;
        goto label_3a114c;
    }
    ctx->pc = 0x3A1144u;
    {
        const bool branch_taken_0x3a1144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1144u;
        // 0x3a1148: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1144) {
            ctx->pc = 0x3A0F84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0f84;
        }
    }
    ctx->pc = 0x3A114Cu;
label_3a114c:
    // 0x3a114c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3a114cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a1150:
    // 0x3a1150: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3a1150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3a1154:
    // 0x3a1154: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_3a1158:
    if (ctx->pc == 0x3A1158u) {
        ctx->pc = 0x3A1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1154u;
        // 0x3a1158: 0x8f82bdd0  lw          $v0, -0x4230($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A115Cu;
        goto label_3a115c;
    }
    ctx->pc = 0x3A1154u;
    {
        const bool branch_taken_0x3a1154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1154u;
        // 0x3a1158: 0x8f82bdd0  lw          $v0, -0x4230($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1154) {
            ctx->pc = 0x3A1198u;
            goto label_3a1198;
        }
    }
    ctx->pc = 0x3A115Cu;
label_3a115c:
    // 0x3a115c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3a115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3a1160:
    // 0x3a1160: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3a1160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3a1164:
    // 0x3a1164: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a1164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a1168:
    // 0x3a1168: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x3a1168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3a116c:
    // 0x3a116c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3a116cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3a1170:
    // 0x3a1170: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x3a1170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3a1174:
    // 0x3a1174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a1174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a1178:
    // 0x3a1178: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x3a1178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3a117c:
    // 0x3a117c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x3a117cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_3a1180:
    // 0x3a1180: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3a1180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a1184:
    // 0x3a1184: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x3a1184u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_3a1188:
    // 0x3a1188: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3a1188u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_3a118c:
    // 0x3a118c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a1190:
    // 0x3a1190: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x3a1190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_3a1194:
    // 0x3a1194: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x3a1194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_3a1198:
    // 0x3a1198: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3a1198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3a119c:
    // 0x3a119c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a119cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a11a0:
    // 0x3a11a0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x3a11a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3a11a4:
    // 0x3a11a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3a11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3a11a8:
    // 0x3a11a8: 0x40f809  jalr        $v0
label_3a11ac:
    if (ctx->pc == 0x3A11ACu) {
        ctx->pc = 0x3A11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11A8u;
        // 0x3a11ac: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11B0u;
        goto label_3a11b0;
    }
    ctx->pc = 0x3A11A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A11B0u);
        ctx->pc = 0x3A11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11A8u;
        // 0x3a11ac: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A11A8u, 0x3A11B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A11B0u;
label_3a11b0:
    // 0x3a11b0: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x3a11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_3a11b4:
    // 0x3a11b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3a11b8:
    if (ctx->pc == 0x3A11B8u) {
        ctx->pc = 0x3A11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11B4u;
        // 0x3a11b8: 0x96a20004  lhu         $v0, 0x4($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11BCu;
        goto label_3a11bc;
    }
    ctx->pc = 0x3A11B4u;
    {
        const bool branch_taken_0x3a11b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a11b4) {
            ctx->pc = 0x3A11B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A11B4u;
            // 0x3a11b8: 0x96a20004  lhu         $v0, 0x4($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A11C8u;
            goto label_3a11c8;
        }
    }
    ctx->pc = 0x3A11BCu;
label_3a11bc:
    // 0x3a11bc: 0x40f809  jalr        $v0
label_3a11c0:
    if (ctx->pc == 0x3A11C0u) {
        ctx->pc = 0x3A11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11BCu;
        // 0x3a11c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11C4u;
        goto label_3a11c4;
    }
    ctx->pc = 0x3A11BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A11C4u);
        ctx->pc = 0x3A11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11BCu;
        // 0x3a11c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A11BCu, 0x3A11C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A11C4u;
label_3a11c4:
    // 0x3a11c4: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x3a11c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_3a11c8:
    // 0x3a11c8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3a11c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3a11cc:
    // 0x3a11cc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x3a11ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a11d0:
    // 0x3a11d0: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
label_3a11d4:
    if (ctx->pc == 0x3A11D4u) {
        ctx->pc = 0x3A11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11D0u;
        // 0x3a11d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11D8u;
        goto label_3a11d8;
    }
    ctx->pc = 0x3A11D0u;
    {
        const bool branch_taken_0x3a11d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11D0u;
        // 0x3a11d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a11d0) {
            ctx->pc = 0x3A1030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1030;
        }
    }
    ctx->pc = 0x3A11D8u;
label_3a11d8:
    // 0x3a11d8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3a11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3a11dc:
    // 0x3a11dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3a11e0:
    if (ctx->pc == 0x3A11E0u) {
        ctx->pc = 0x3A11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11DCu;
        // 0x3a11e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11E4u;
        goto label_3a11e4;
    }
    ctx->pc = 0x3A11DCu;
    {
        const bool branch_taken_0x3a11dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a11dc) {
            ctx->pc = 0x3A11E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A11DCu;
            // 0x3a11e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A11F0u;
            goto label_3a11f0;
        }
    }
    ctx->pc = 0x3A11E4u;
label_3a11e4:
    // 0x3a11e4: 0x40f809  jalr        $v0
label_3a11e8:
    if (ctx->pc == 0x3A11E8u) {
        ctx->pc = 0x3A11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11E4u;
        // 0x3a11e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11ECu;
        goto label_3a11ec;
    }
    ctx->pc = 0x3A11E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A11ECu);
        ctx->pc = 0x3A11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11E4u;
        // 0x3a11e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A11E4u, 0x3A11ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A11ECu;
label_3a11ec:
    // 0x3a11ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a11f0:
    // 0x3a11f0: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x3a11f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3a11f4:
    // 0x3a11f4: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x3a11f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3a11f8:
    // 0x3a11f8: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x3a11f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3a11fc:
    // 0x3a11fc: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x3a11fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3a1200:
    // 0x3a1200: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x3a1200u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3a1204:
    // 0x3a1204: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x3a1204u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3a1208:
    // 0x3a1208: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x3a1208u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3a120c:
    // 0x3a120c: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x3a120cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3a1210:
    // 0x3a1210: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x3a1210u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3a1214:
    // 0x3a1214: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3a1214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3a1218:
    // 0x3a1218: 0x3e00008  jr          $ra
label_3a121c:
    if (ctx->pc == 0x3A121Cu) {
        ctx->pc = 0x3A121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1218u;
        // 0x3a121c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1220u;
        goto label_fallthrough_0x3a1218;
    }
    ctx->pc = 0x3A1218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1218u;
        // 0x3a121c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a1218:
    ctx->pc = 0x3A1220u;
}
