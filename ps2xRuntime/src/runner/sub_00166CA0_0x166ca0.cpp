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

// Function: sub_00166CA0
// Address: 0x166ca0 - 0x167230
void sub_00166CA0_0x166ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166CA0_0x166ca0");
#endif

    switch (ctx->pc) {
        case 0x166ca0u: goto label_166ca0;
        case 0x166ca4u: goto label_166ca4;
        case 0x166ca8u: goto label_166ca8;
        case 0x166cacu: goto label_166cac;
        case 0x166cb0u: goto label_166cb0;
        case 0x166cb4u: goto label_166cb4;
        case 0x166cb8u: goto label_166cb8;
        case 0x166cbcu: goto label_166cbc;
        case 0x166cc0u: goto label_166cc0;
        case 0x166cc4u: goto label_166cc4;
        case 0x166cc8u: goto label_166cc8;
        case 0x166cccu: goto label_166ccc;
        case 0x166cd0u: goto label_166cd0;
        case 0x166cd4u: goto label_166cd4;
        case 0x166cd8u: goto label_166cd8;
        case 0x166cdcu: goto label_166cdc;
        case 0x166ce0u: goto label_166ce0;
        case 0x166ce4u: goto label_166ce4;
        case 0x166ce8u: goto label_166ce8;
        case 0x166cecu: goto label_166cec;
        case 0x166cf0u: goto label_166cf0;
        case 0x166cf4u: goto label_166cf4;
        case 0x166cf8u: goto label_166cf8;
        case 0x166cfcu: goto label_166cfc;
        case 0x166d00u: goto label_166d00;
        case 0x166d04u: goto label_166d04;
        case 0x166d08u: goto label_166d08;
        case 0x166d0cu: goto label_166d0c;
        case 0x166d10u: goto label_166d10;
        case 0x166d14u: goto label_166d14;
        case 0x166d18u: goto label_166d18;
        case 0x166d1cu: goto label_166d1c;
        case 0x166d20u: goto label_166d20;
        case 0x166d24u: goto label_166d24;
        case 0x166d28u: goto label_166d28;
        case 0x166d2cu: goto label_166d2c;
        case 0x166d30u: goto label_166d30;
        case 0x166d34u: goto label_166d34;
        case 0x166d38u: goto label_166d38;
        case 0x166d3cu: goto label_166d3c;
        case 0x166d40u: goto label_166d40;
        case 0x166d44u: goto label_166d44;
        case 0x166d48u: goto label_166d48;
        case 0x166d4cu: goto label_166d4c;
        case 0x166d50u: goto label_166d50;
        case 0x166d54u: goto label_166d54;
        case 0x166d58u: goto label_166d58;
        case 0x166d5cu: goto label_166d5c;
        case 0x166d60u: goto label_166d60;
        case 0x166d64u: goto label_166d64;
        case 0x166d68u: goto label_166d68;
        case 0x166d6cu: goto label_166d6c;
        case 0x166d70u: goto label_166d70;
        case 0x166d74u: goto label_166d74;
        case 0x166d78u: goto label_166d78;
        case 0x166d7cu: goto label_166d7c;
        case 0x166d80u: goto label_166d80;
        case 0x166d84u: goto label_166d84;
        case 0x166d88u: goto label_166d88;
        case 0x166d8cu: goto label_166d8c;
        case 0x166d90u: goto label_166d90;
        case 0x166d94u: goto label_166d94;
        case 0x166d98u: goto label_166d98;
        case 0x166d9cu: goto label_166d9c;
        case 0x166da0u: goto label_166da0;
        case 0x166da4u: goto label_166da4;
        case 0x166da8u: goto label_166da8;
        case 0x166dacu: goto label_166dac;
        case 0x166db0u: goto label_166db0;
        case 0x166db4u: goto label_166db4;
        case 0x166db8u: goto label_166db8;
        case 0x166dbcu: goto label_166dbc;
        case 0x166dc0u: goto label_166dc0;
        case 0x166dc4u: goto label_166dc4;
        case 0x166dc8u: goto label_166dc8;
        case 0x166dccu: goto label_166dcc;
        case 0x166dd0u: goto label_166dd0;
        case 0x166dd4u: goto label_166dd4;
        case 0x166dd8u: goto label_166dd8;
        case 0x166ddcu: goto label_166ddc;
        case 0x166de0u: goto label_166de0;
        case 0x166de4u: goto label_166de4;
        case 0x166de8u: goto label_166de8;
        case 0x166decu: goto label_166dec;
        case 0x166df0u: goto label_166df0;
        case 0x166df4u: goto label_166df4;
        case 0x166df8u: goto label_166df8;
        case 0x166dfcu: goto label_166dfc;
        case 0x166e00u: goto label_166e00;
        case 0x166e04u: goto label_166e04;
        case 0x166e08u: goto label_166e08;
        case 0x166e0cu: goto label_166e0c;
        case 0x166e10u: goto label_166e10;
        case 0x166e14u: goto label_166e14;
        case 0x166e18u: goto label_166e18;
        case 0x166e1cu: goto label_166e1c;
        case 0x166e20u: goto label_166e20;
        case 0x166e24u: goto label_166e24;
        case 0x166e28u: goto label_166e28;
        case 0x166e2cu: goto label_166e2c;
        case 0x166e30u: goto label_166e30;
        case 0x166e34u: goto label_166e34;
        case 0x166e38u: goto label_166e38;
        case 0x166e3cu: goto label_166e3c;
        case 0x166e40u: goto label_166e40;
        case 0x166e44u: goto label_166e44;
        case 0x166e48u: goto label_166e48;
        case 0x166e4cu: goto label_166e4c;
        case 0x166e50u: goto label_166e50;
        case 0x166e54u: goto label_166e54;
        case 0x166e58u: goto label_166e58;
        case 0x166e5cu: goto label_166e5c;
        case 0x166e60u: goto label_166e60;
        case 0x166e64u: goto label_166e64;
        case 0x166e68u: goto label_166e68;
        case 0x166e6cu: goto label_166e6c;
        case 0x166e70u: goto label_166e70;
        case 0x166e74u: goto label_166e74;
        case 0x166e78u: goto label_166e78;
        case 0x166e7cu: goto label_166e7c;
        case 0x166e80u: goto label_166e80;
        case 0x166e84u: goto label_166e84;
        case 0x166e88u: goto label_166e88;
        case 0x166e8cu: goto label_166e8c;
        case 0x166e90u: goto label_166e90;
        case 0x166e94u: goto label_166e94;
        case 0x166e98u: goto label_166e98;
        case 0x166e9cu: goto label_166e9c;
        case 0x166ea0u: goto label_166ea0;
        case 0x166ea4u: goto label_166ea4;
        case 0x166ea8u: goto label_166ea8;
        case 0x166eacu: goto label_166eac;
        case 0x166eb0u: goto label_166eb0;
        case 0x166eb4u: goto label_166eb4;
        case 0x166eb8u: goto label_166eb8;
        case 0x166ebcu: goto label_166ebc;
        case 0x166ec0u: goto label_166ec0;
        case 0x166ec4u: goto label_166ec4;
        case 0x166ec8u: goto label_166ec8;
        case 0x166eccu: goto label_166ecc;
        case 0x166ed0u: goto label_166ed0;
        case 0x166ed4u: goto label_166ed4;
        case 0x166ed8u: goto label_166ed8;
        case 0x166edcu: goto label_166edc;
        case 0x166ee0u: goto label_166ee0;
        case 0x166ee4u: goto label_166ee4;
        case 0x166ee8u: goto label_166ee8;
        case 0x166eecu: goto label_166eec;
        case 0x166ef0u: goto label_166ef0;
        case 0x166ef4u: goto label_166ef4;
        case 0x166ef8u: goto label_166ef8;
        case 0x166efcu: goto label_166efc;
        case 0x166f00u: goto label_166f00;
        case 0x166f04u: goto label_166f04;
        case 0x166f08u: goto label_166f08;
        case 0x166f0cu: goto label_166f0c;
        case 0x166f10u: goto label_166f10;
        case 0x166f14u: goto label_166f14;
        case 0x166f18u: goto label_166f18;
        case 0x166f1cu: goto label_166f1c;
        case 0x166f20u: goto label_166f20;
        case 0x166f24u: goto label_166f24;
        case 0x166f28u: goto label_166f28;
        case 0x166f2cu: goto label_166f2c;
        case 0x166f30u: goto label_166f30;
        case 0x166f34u: goto label_166f34;
        case 0x166f38u: goto label_166f38;
        case 0x166f3cu: goto label_166f3c;
        case 0x166f40u: goto label_166f40;
        case 0x166f44u: goto label_166f44;
        case 0x166f48u: goto label_166f48;
        case 0x166f4cu: goto label_166f4c;
        case 0x166f50u: goto label_166f50;
        case 0x166f54u: goto label_166f54;
        case 0x166f58u: goto label_166f58;
        case 0x166f5cu: goto label_166f5c;
        case 0x166f60u: goto label_166f60;
        case 0x166f64u: goto label_166f64;
        case 0x166f68u: goto label_166f68;
        case 0x166f6cu: goto label_166f6c;
        case 0x166f70u: goto label_166f70;
        case 0x166f74u: goto label_166f74;
        case 0x166f78u: goto label_166f78;
        case 0x166f7cu: goto label_166f7c;
        case 0x166f80u: goto label_166f80;
        case 0x166f84u: goto label_166f84;
        case 0x166f88u: goto label_166f88;
        case 0x166f8cu: goto label_166f8c;
        case 0x166f90u: goto label_166f90;
        case 0x166f94u: goto label_166f94;
        case 0x166f98u: goto label_166f98;
        case 0x166f9cu: goto label_166f9c;
        case 0x166fa0u: goto label_166fa0;
        case 0x166fa4u: goto label_166fa4;
        case 0x166fa8u: goto label_166fa8;
        case 0x166facu: goto label_166fac;
        case 0x166fb0u: goto label_166fb0;
        case 0x166fb4u: goto label_166fb4;
        case 0x166fb8u: goto label_166fb8;
        case 0x166fbcu: goto label_166fbc;
        case 0x166fc0u: goto label_166fc0;
        case 0x166fc4u: goto label_166fc4;
        case 0x166fc8u: goto label_166fc8;
        case 0x166fccu: goto label_166fcc;
        case 0x166fd0u: goto label_166fd0;
        case 0x166fd4u: goto label_166fd4;
        case 0x166fd8u: goto label_166fd8;
        case 0x166fdcu: goto label_166fdc;
        case 0x166fe0u: goto label_166fe0;
        case 0x166fe4u: goto label_166fe4;
        case 0x166fe8u: goto label_166fe8;
        case 0x166fecu: goto label_166fec;
        case 0x166ff0u: goto label_166ff0;
        case 0x166ff4u: goto label_166ff4;
        case 0x166ff8u: goto label_166ff8;
        case 0x166ffcu: goto label_166ffc;
        case 0x167000u: goto label_167000;
        case 0x167004u: goto label_167004;
        case 0x167008u: goto label_167008;
        case 0x16700cu: goto label_16700c;
        case 0x167010u: goto label_167010;
        case 0x167014u: goto label_167014;
        case 0x167018u: goto label_167018;
        case 0x16701cu: goto label_16701c;
        case 0x167020u: goto label_167020;
        case 0x167024u: goto label_167024;
        case 0x167028u: goto label_167028;
        case 0x16702cu: goto label_16702c;
        case 0x167030u: goto label_167030;
        case 0x167034u: goto label_167034;
        case 0x167038u: goto label_167038;
        case 0x16703cu: goto label_16703c;
        case 0x167040u: goto label_167040;
        case 0x167044u: goto label_167044;
        case 0x167048u: goto label_167048;
        case 0x16704cu: goto label_16704c;
        case 0x167050u: goto label_167050;
        case 0x167054u: goto label_167054;
        case 0x167058u: goto label_167058;
        case 0x16705cu: goto label_16705c;
        case 0x167060u: goto label_167060;
        case 0x167064u: goto label_167064;
        case 0x167068u: goto label_167068;
        case 0x16706cu: goto label_16706c;
        case 0x167070u: goto label_167070;
        case 0x167074u: goto label_167074;
        case 0x167078u: goto label_167078;
        case 0x16707cu: goto label_16707c;
        case 0x167080u: goto label_167080;
        case 0x167084u: goto label_167084;
        case 0x167088u: goto label_167088;
        case 0x16708cu: goto label_16708c;
        case 0x167090u: goto label_167090;
        case 0x167094u: goto label_167094;
        case 0x167098u: goto label_167098;
        case 0x16709cu: goto label_16709c;
        case 0x1670a0u: goto label_1670a0;
        case 0x1670a4u: goto label_1670a4;
        case 0x1670a8u: goto label_1670a8;
        case 0x1670acu: goto label_1670ac;
        case 0x1670b0u: goto label_1670b0;
        case 0x1670b4u: goto label_1670b4;
        case 0x1670b8u: goto label_1670b8;
        case 0x1670bcu: goto label_1670bc;
        case 0x1670c0u: goto label_1670c0;
        case 0x1670c4u: goto label_1670c4;
        case 0x1670c8u: goto label_1670c8;
        case 0x1670ccu: goto label_1670cc;
        case 0x1670d0u: goto label_1670d0;
        case 0x1670d4u: goto label_1670d4;
        case 0x1670d8u: goto label_1670d8;
        case 0x1670dcu: goto label_1670dc;
        case 0x1670e0u: goto label_1670e0;
        case 0x1670e4u: goto label_1670e4;
        case 0x1670e8u: goto label_1670e8;
        case 0x1670ecu: goto label_1670ec;
        case 0x1670f0u: goto label_1670f0;
        case 0x1670f4u: goto label_1670f4;
        case 0x1670f8u: goto label_1670f8;
        case 0x1670fcu: goto label_1670fc;
        case 0x167100u: goto label_167100;
        case 0x167104u: goto label_167104;
        case 0x167108u: goto label_167108;
        case 0x16710cu: goto label_16710c;
        case 0x167110u: goto label_167110;
        case 0x167114u: goto label_167114;
        case 0x167118u: goto label_167118;
        case 0x16711cu: goto label_16711c;
        case 0x167120u: goto label_167120;
        case 0x167124u: goto label_167124;
        case 0x167128u: goto label_167128;
        case 0x16712cu: goto label_16712c;
        case 0x167130u: goto label_167130;
        case 0x167134u: goto label_167134;
        case 0x167138u: goto label_167138;
        case 0x16713cu: goto label_16713c;
        case 0x167140u: goto label_167140;
        case 0x167144u: goto label_167144;
        case 0x167148u: goto label_167148;
        case 0x16714cu: goto label_16714c;
        case 0x167150u: goto label_167150;
        case 0x167154u: goto label_167154;
        case 0x167158u: goto label_167158;
        case 0x16715cu: goto label_16715c;
        case 0x167160u: goto label_167160;
        case 0x167164u: goto label_167164;
        case 0x167168u: goto label_167168;
        case 0x16716cu: goto label_16716c;
        case 0x167170u: goto label_167170;
        case 0x167174u: goto label_167174;
        case 0x167178u: goto label_167178;
        case 0x16717cu: goto label_16717c;
        case 0x167180u: goto label_167180;
        case 0x167184u: goto label_167184;
        case 0x167188u: goto label_167188;
        case 0x16718cu: goto label_16718c;
        case 0x167190u: goto label_167190;
        case 0x167194u: goto label_167194;
        case 0x167198u: goto label_167198;
        case 0x16719cu: goto label_16719c;
        case 0x1671a0u: goto label_1671a0;
        case 0x1671a4u: goto label_1671a4;
        case 0x1671a8u: goto label_1671a8;
        case 0x1671acu: goto label_1671ac;
        case 0x1671b0u: goto label_1671b0;
        case 0x1671b4u: goto label_1671b4;
        case 0x1671b8u: goto label_1671b8;
        case 0x1671bcu: goto label_1671bc;
        case 0x1671c0u: goto label_1671c0;
        case 0x1671c4u: goto label_1671c4;
        case 0x1671c8u: goto label_1671c8;
        case 0x1671ccu: goto label_1671cc;
        case 0x1671d0u: goto label_1671d0;
        case 0x1671d4u: goto label_1671d4;
        case 0x1671d8u: goto label_1671d8;
        case 0x1671dcu: goto label_1671dc;
        case 0x1671e0u: goto label_1671e0;
        case 0x1671e4u: goto label_1671e4;
        case 0x1671e8u: goto label_1671e8;
        case 0x1671ecu: goto label_1671ec;
        case 0x1671f0u: goto label_1671f0;
        case 0x1671f4u: goto label_1671f4;
        case 0x1671f8u: goto label_1671f8;
        case 0x1671fcu: goto label_1671fc;
        case 0x167200u: goto label_167200;
        case 0x167204u: goto label_167204;
        case 0x167208u: goto label_167208;
        case 0x16720cu: goto label_16720c;
        case 0x167210u: goto label_167210;
        case 0x167214u: goto label_167214;
        case 0x167218u: goto label_167218;
        case 0x16721cu: goto label_16721c;
        case 0x167220u: goto label_167220;
        case 0x167224u: goto label_167224;
        case 0x167228u: goto label_167228;
        case 0x16722cu: goto label_16722c;
        default: break;
    }

    ctx->pc = 0x166ca0u;

label_166ca0:
    // 0x166ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x166ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_166ca4:
    // 0x166ca4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x166ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_166ca8:
    // 0x166ca8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x166ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_166cac:
    // 0x166cac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x166cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_166cb0:
    // 0x166cb0: 0x3e00008  jr          $ra
label_166cb4:
    if (ctx->pc == 0x166CB4u) {
        ctx->pc = 0x166CB8u;
        goto label_166cb8;
    }
    ctx->pc = 0x166CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166CB8u;
label_166cb8:
    // 0x166cb8: 0x0  nop
    ctx->pc = 0x166cb8u;
    // NOP
label_166cbc:
    // 0x166cbc: 0x0  nop
    ctx->pc = 0x166cbcu;
    // NOP
label_166cc0:
    // 0x166cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_166cc4:
    // 0x166cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_166cc8:
    // 0x166cc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x166cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_166ccc:
    // 0x166ccc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x166cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_166cd0:
    // 0x166cd0: 0xc055b3c  jal         func_156CF0
label_166cd4:
    if (ctx->pc == 0x166CD4u) {
        ctx->pc = 0x166CD8u;
        goto label_166cd8;
    }
    ctx->pc = 0x166CD0u;
    SET_GPR_U32(ctx, 31, 0x166CD8u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x166CD0u, 0x166CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CD8u;
label_166cd8:
    // 0x166cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166cdc:
    // 0x166cdc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x166cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_166ce0:
    // 0x166ce0: 0x3e00008  jr          $ra
label_166ce4:
    if (ctx->pc == 0x166CE4u) {
        ctx->pc = 0x166CE8u;
        goto label_166ce8;
    }
    ctx->pc = 0x166CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166CE8u;
label_166ce8:
    // 0x166ce8: 0x0  nop
    ctx->pc = 0x166ce8u;
    // NOP
label_166cec:
    // 0x166cec: 0x0  nop
    ctx->pc = 0x166cecu;
    // NOP
label_166cf0:
    // 0x166cf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x166cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_166cf4:
    // 0x166cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_166cf8:
    // 0x166cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_166cfc:
    // 0x166cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_166d00:
    // 0x166d00: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x166d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_166d04:
    // 0x166d04: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x166d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_166d08:
    // 0x166d08: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x166d08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
label_166d0c:
    // 0x166d0c: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x166d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
label_166d10:
    // 0x166d10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x166d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_166d14:
    // 0x166d14: 0x106000bd  beqz        $v1, . + 4 + (0xBD << 2)
label_166d18:
    if (ctx->pc == 0x166D18u) {
        ctx->pc = 0x166D1Cu;
        goto label_166d1c;
    }
    ctx->pc = 0x166D14u;
    {
        const bool branch_taken_0x166d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d14) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166D1Cu;
label_166d1c:
    // 0x166d1c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x166d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_166d20:
    // 0x166d20: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x166d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_166d24:
    // 0x166d24: 0x46100b9  bgez        $v1, . + 4 + (0xB9 << 2)
label_166d28:
    if (ctx->pc == 0x166D28u) {
        ctx->pc = 0x166D2Cu;
        goto label_166d2c;
    }
    ctx->pc = 0x166D24u;
    {
        const bool branch_taken_0x166d24 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x166d24) {
            ctx->pc = 0x16700Cu;
            goto label_16700c;
        }
    }
    ctx->pc = 0x166D2Cu;
label_166d2c:
    // 0x166d2c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x166d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_166d30:
    // 0x166d30: 0x2463ff97  addiu       $v1, $v1, -0x69
    ctx->pc = 0x166d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967191));
label_166d34:
    // 0x166d34: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x166d34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_166d38:
    // 0x166d38: 0x10200128  beqz        $at, . + 4 + (0x128 << 2)
label_166d3c:
    if (ctx->pc == 0x166D3Cu) {
        ctx->pc = 0x166D40u;
        goto label_166d40;
    }
    ctx->pc = 0x166D38u;
    {
        const bool branch_taken_0x166d38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d38) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x166D40u;
label_166d40:
    // 0x166d40: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x166d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_166d44:
    // 0x166d44: 0x248484c0  addiu       $a0, $a0, -0x7B40
    ctx->pc = 0x166d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935744));
label_166d48:
    // 0x166d48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x166d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_166d4c:
    // 0x166d4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x166d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_166d50:
    // 0x166d50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x166d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166d54:
    // 0x166d54: 0x600008  jr          $v1
label_166d58:
    if (ctx->pc == 0x166D58u) {
        ctx->pc = 0x166D5Cu;
        goto label_166d5c;
    }
    ctx->pc = 0x166D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166D5Cu: goto label_166d5c;
            case 0x166DB8u: goto label_166db8;
            case 0x166E18u: goto label_166e18;
            case 0x166E70u: goto label_166e70;
            case 0x166ECCu: goto label_166ecc;
            case 0x166F70u: goto label_166f70;
            case 0x1671DCu: goto label_1671dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166D54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x166D5Cu;
label_166d5c:
    // 0x166d5c: 0x8f83bab4  lw          $v1, -0x454C($gp)
    ctx->pc = 0x166d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166d60:
    // 0x166d60: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x166d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_166d64:
    // 0x166d64: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x166d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_166d68:
    // 0x166d68: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_166d6c:
    if (ctx->pc == 0x166D6Cu) {
        ctx->pc = 0x166D70u;
        goto label_166d70;
    }
    ctx->pc = 0x166D68u;
    {
        const bool branch_taken_0x166d68 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x166d68) {
            ctx->pc = 0x166D7Cu;
            goto label_166d7c;
        }
    }
    ctx->pc = 0x166D70u;
label_166d70:
    // 0x166d70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_166d74:
    if (ctx->pc == 0x166D74u) {
        ctx->pc = 0x166D78u;
        goto label_166d78;
    }
    ctx->pc = 0x166D70u;
    {
        const bool branch_taken_0x166d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d70) {
            ctx->pc = 0x166D7Cu;
            goto label_166d7c;
        }
    }
    ctx->pc = 0x166D78u;
label_166d78:
    // 0x166d78: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x166d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_166d7c:
    // 0x166d7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_166d80:
    if (ctx->pc == 0x166D80u) {
        ctx->pc = 0x166D84u;
        goto label_166d84;
    }
    ctx->pc = 0x166D7Cu;
    {
        const bool branch_taken_0x166d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d7c) {
            ctx->pc = 0x166D98u;
            goto label_166d98;
        }
    }
    ctx->pc = 0x166D84u;
label_166d84:
    // 0x166d84: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x166d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166d88:
    // 0x166d88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x166d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_166d8c:
    // 0x166d8c: 0xaf82bab4  sw          $v0, -0x454C($gp)
    ctx->pc = 0x166d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 2));
label_166d90:
    // 0x166d90: 0x10000004  b           . + 4 + (0x4 << 2)
label_166d94:
    if (ctx->pc == 0x166D94u) {
        ctx->pc = 0x166D98u;
        goto label_166d98;
    }
    ctx->pc = 0x166D90u;
    {
        const bool branch_taken_0x166d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d90) {
            ctx->pc = 0x166DA4u;
            goto label_166da4;
        }
    }
    ctx->pc = 0x166D98u;
label_166d98:
    // 0x166d98: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x166d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166d9c:
    // 0x166d9c: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x166d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_166da0:
    // 0x166da0: 0xaf82bab4  sw          $v0, -0x454C($gp)
    ctx->pc = 0x166da0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 2));
label_166da4:
    // 0x166da4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x166da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_166da8:
    // 0x166da8: 0xc059c8c  jal         func_167230
label_166dac:
    if (ctx->pc == 0x166DACu) {
        ctx->pc = 0x166DB0u;
        goto label_166db0;
    }
    ctx->pc = 0x166DA8u;
    SET_GPR_U32(ctx, 31, 0x166DB0u);
    ctx->pc = 0x167230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167230u, 0x166DA8u, 0x166DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DB0u;
label_166db0:
    // 0x166db0: 0x1000010a  b           . + 4 + (0x10A << 2)
label_166db4:
    if (ctx->pc == 0x166DB4u) {
        ctx->pc = 0x166DB8u;
        goto label_166db8;
    }
    ctx->pc = 0x166DB0u;
    {
        const bool branch_taken_0x166db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166db0) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x166DB8u;
label_166db8:
    // 0x166db8: 0x8f84bab4  lw          $a0, -0x454C($gp)
    ctx->pc = 0x166db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166dbc:
    // 0x166dbc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x166dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_166dc0:
    // 0x166dc0: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x166dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_166dc4:
    // 0x166dc4: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_166dc8:
    if (ctx->pc == 0x166DC8u) {
        ctx->pc = 0x166DCCu;
        goto label_166dcc;
    }
    ctx->pc = 0x166DC4u;
    {
        const bool branch_taken_0x166dc4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x166dc4) {
            ctx->pc = 0x166DD8u;
            goto label_166dd8;
        }
    }
    ctx->pc = 0x166DCCu;
label_166dcc:
    // 0x166dcc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_166dd0:
    if (ctx->pc == 0x166DD0u) {
        ctx->pc = 0x166DD4u;
        goto label_166dd4;
    }
    ctx->pc = 0x166DCCu;
    {
        const bool branch_taken_0x166dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166dcc) {
            ctx->pc = 0x166DD8u;
            goto label_166dd8;
        }
    }
    ctx->pc = 0x166DD4u;
label_166dd4:
    // 0x166dd4: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x166dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_166dd8:
    // 0x166dd8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x166dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_166ddc:
    // 0x166ddc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_166de0:
    if (ctx->pc == 0x166DE0u) {
        ctx->pc = 0x166DE4u;
        goto label_166de4;
    }
    ctx->pc = 0x166DDCu;
    {
        const bool branch_taken_0x166ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166ddc) {
            ctx->pc = 0x166DF8u;
            goto label_166df8;
        }
    }
    ctx->pc = 0x166DE4u;
label_166de4:
    // 0x166de4: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x166de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166de8:
    // 0x166de8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_166dec:
    // 0x166dec: 0xaf82bab4  sw          $v0, -0x454C($gp)
    ctx->pc = 0x166decu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 2));
label_166df0:
    // 0x166df0: 0x10000004  b           . + 4 + (0x4 << 2)
label_166df4:
    if (ctx->pc == 0x166DF4u) {
        ctx->pc = 0x166DF8u;
        goto label_166df8;
    }
    ctx->pc = 0x166DF0u;
    {
        const bool branch_taken_0x166df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166df0) {
            ctx->pc = 0x166E04u;
            goto label_166e04;
        }
    }
    ctx->pc = 0x166DF8u;
label_166df8:
    // 0x166df8: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x166df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166dfc:
    // 0x166dfc: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x166dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
label_166e00:
    // 0x166e00: 0xaf82bab4  sw          $v0, -0x454C($gp)
    ctx->pc = 0x166e00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 2));
label_166e04:
    // 0x166e04: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x166e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_166e08:
    // 0x166e08: 0xc059c8c  jal         func_167230
label_166e0c:
    if (ctx->pc == 0x166E0Cu) {
        ctx->pc = 0x166E10u;
        goto label_166e10;
    }
    ctx->pc = 0x166E08u;
    SET_GPR_U32(ctx, 31, 0x166E10u);
    ctx->pc = 0x167230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167230u, 0x166E08u, 0x166E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E10u;
label_166e10:
    // 0x166e10: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_166e14:
    if (ctx->pc == 0x166E14u) {
        ctx->pc = 0x166E18u;
        goto label_166e18;
    }
    ctx->pc = 0x166E10u;
    {
        const bool branch_taken_0x166e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e10) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x166E18u;
label_166e18:
    // 0x166e18: 0x8f83bab4  lw          $v1, -0x454C($gp)
    ctx->pc = 0x166e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166e1c:
    // 0x166e1c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x166e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_166e20:
    // 0x166e20: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x166e20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
label_166e24:
    // 0x166e24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_166e28:
    if (ctx->pc == 0x166E28u) {
        ctx->pc = 0x166E2Cu;
        goto label_166e2c;
    }
    ctx->pc = 0x166E24u;
    {
        const bool branch_taken_0x166e24 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x166e24) {
            ctx->pc = 0x166E34u;
            goto label_166e34;
        }
    }
    ctx->pc = 0x166E2Cu;
label_166e2c:
    // 0x166e2c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x166e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_166e30:
    // 0x166e30: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x166e30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_166e34:
    // 0x166e34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_166e38:
    if (ctx->pc == 0x166E38u) {
        ctx->pc = 0x166E3Cu;
        goto label_166e3c;
    }
    ctx->pc = 0x166E34u;
    {
        const bool branch_taken_0x166e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e34) {
            ctx->pc = 0x166E50u;
            goto label_166e50;
        }
    }
    ctx->pc = 0x166E3Cu;
label_166e3c:
    // 0x166e3c: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x166e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166e40:
    // 0x166e40: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x166e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_166e44:
    // 0x166e44: 0xaf82bab4  sw          $v0, -0x454C($gp)
    ctx->pc = 0x166e44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 2));
label_166e48:
    // 0x166e48: 0x10000004  b           . + 4 + (0x4 << 2)
label_166e4c:
    if (ctx->pc == 0x166E4Cu) {
        ctx->pc = 0x166E50u;
        goto label_166e50;
    }
    ctx->pc = 0x166E48u;
    {
        const bool branch_taken_0x166e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e48) {
            ctx->pc = 0x166E5Cu;
            goto label_166e5c;
        }
    }
    ctx->pc = 0x166E50u;
label_166e50:
    // 0x166e50: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x166e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166e54:
    // 0x166e54: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x166e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_166e58:
    // 0x166e58: 0xaf82bab4  sw          $v0, -0x454C($gp)
    ctx->pc = 0x166e58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 2));
label_166e5c:
    // 0x166e5c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x166e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_166e60:
    // 0x166e60: 0xc059c8c  jal         func_167230
label_166e64:
    if (ctx->pc == 0x166E64u) {
        ctx->pc = 0x166E68u;
        goto label_166e68;
    }
    ctx->pc = 0x166E60u;
    SET_GPR_U32(ctx, 31, 0x166E68u);
    ctx->pc = 0x167230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167230u, 0x166E60u, 0x166E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E68u;
label_166e68:
    // 0x166e68: 0x100000dc  b           . + 4 + (0xDC << 2)
label_166e6c:
    if (ctx->pc == 0x166E6Cu) {
        ctx->pc = 0x166E70u;
        goto label_166e70;
    }
    ctx->pc = 0x166E68u;
    {
        const bool branch_taken_0x166e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e68) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x166E70u;
label_166e70:
    // 0x166e70: 0x8f84bab4  lw          $a0, -0x454C($gp)
    ctx->pc = 0x166e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166e74:
    // 0x166e74: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x166e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_166e78:
    // 0x166e78: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x166e78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
label_166e7c:
    // 0x166e7c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_166e80:
    if (ctx->pc == 0x166E80u) {
        ctx->pc = 0x166E84u;
        goto label_166e84;
    }
    ctx->pc = 0x166E7Cu;
    {
        const bool branch_taken_0x166e7c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x166e7c) {
            ctx->pc = 0x166E8Cu;
            goto label_166e8c;
        }
    }
    ctx->pc = 0x166E84u;
label_166e84:
    // 0x166e84: 0x24820007  addiu       $v0, $a0, 0x7
    ctx->pc = 0x166e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_166e88:
    // 0x166e88: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x166e88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_166e8c:
    // 0x166e8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x166e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_166e90:
    // 0x166e90: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_166e94:
    if (ctx->pc == 0x166E94u) {
        ctx->pc = 0x166E98u;
        goto label_166e98;
    }
    ctx->pc = 0x166E90u;
    {
        const bool branch_taken_0x166e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166e90) {
            ctx->pc = 0x166EACu;
            goto label_166eac;
        }
    }
    ctx->pc = 0x166E98u;
label_166e98:
    // 0x166e98: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x166e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166e9c:
    // 0x166e9c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x166e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_166ea0:
    // 0x166ea0: 0xaf82bab4  sw          $v0, -0x454C($gp)
    ctx->pc = 0x166ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 2));
label_166ea4:
    // 0x166ea4: 0x10000004  b           . + 4 + (0x4 << 2)
label_166ea8:
    if (ctx->pc == 0x166EA8u) {
        ctx->pc = 0x166EACu;
        goto label_166eac;
    }
    ctx->pc = 0x166EA4u;
    {
        const bool branch_taken_0x166ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ea4) {
            ctx->pc = 0x166EB8u;
            goto label_166eb8;
        }
    }
    ctx->pc = 0x166EACu;
label_166eac:
    // 0x166eac: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x166eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166eb0:
    // 0x166eb0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x166eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_166eb4:
    // 0x166eb4: 0xaf82bab4  sw          $v0, -0x454C($gp)
    ctx->pc = 0x166eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 2));
label_166eb8:
    // 0x166eb8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x166eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_166ebc:
    // 0x166ebc: 0xc059c8c  jal         func_167230
label_166ec0:
    if (ctx->pc == 0x166EC0u) {
        ctx->pc = 0x166EC4u;
        goto label_166ec4;
    }
    ctx->pc = 0x166EBCu;
    SET_GPR_U32(ctx, 31, 0x166EC4u);
    ctx->pc = 0x167230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167230u, 0x166EBCu, 0x166EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166EC4u;
label_166ec4:
    // 0x166ec4: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_166ec8:
    if (ctx->pc == 0x166EC8u) {
        ctx->pc = 0x166ECCu;
        goto label_166ecc;
    }
    ctx->pc = 0x166EC4u;
    {
        const bool branch_taken_0x166ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ec4) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x166ECCu;
label_166ecc:
    // 0x166ecc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_166ed0:
    // 0x166ed0: 0x8f85bab4  lw          $a1, -0x454C($gp)
    ctx->pc = 0x166ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166ed4:
    // 0x166ed4: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x166ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_166ed8:
    // 0x166ed8: 0xc0599f8  jal         func_1667E0
label_166edc:
    if (ctx->pc == 0x166EDCu) {
        ctx->pc = 0x166EE0u;
        goto label_166ee0;
    }
    ctx->pc = 0x166ED8u;
    SET_GPR_U32(ctx, 31, 0x166EE0u);
    ctx->pc = 0x1667E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667E0u, 0x166ED8u, 0x166EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166EE0u;
label_166ee0:
    // 0x166ee0: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x166ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_166ee4:
    // 0x166ee4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_166ee8:
    if (ctx->pc == 0x166EE8u) {
        ctx->pc = 0x166EECu;
        goto label_166eec;
    }
    ctx->pc = 0x166EE4u;
    {
        const bool branch_taken_0x166ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ee4) {
            ctx->pc = 0x166F44u;
            goto label_166f44;
        }
    }
    ctx->pc = 0x166EECu;
label_166eec:
    // 0x166eec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x166eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_166ef0:
    // 0x166ef0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_166ef4:
    // 0x166ef4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x166ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_166ef8:
    // 0x166ef8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x166ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_166efc:
    // 0x166efc: 0x24a53f58  addiu       $a1, $a1, 0x3F58
    ctx->pc = 0x166efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16216));
label_166f00:
    // 0x166f00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166f04:
    // 0x166f04: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x166f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166f08:
    // 0x166f08: 0xc08f558  jal         func_23D560
label_166f0c:
    if (ctx->pc == 0x166F0Cu) {
        ctx->pc = 0x166F10u;
        goto label_166f10;
    }
    ctx->pc = 0x166F08u;
    SET_GPR_U32(ctx, 31, 0x166F10u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x166F08u, 0x166F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F10u;
label_166f10:
    // 0x166f10: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x166f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166f14:
    // 0x166f14: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_166f18:
    // 0x166f18: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x166f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_166f1c:
    // 0x166f1c: 0x244283f0  addiu       $v0, $v0, -0x7C10
    ctx->pc = 0x166f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935536));
label_166f20:
    // 0x166f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_166f24:
    // 0x166f24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x166f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_166f28:
    // 0x166f28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_166f2c:
    // 0x166f2c: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x166f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_166f30:
    // 0x166f30: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x166f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_166f34:
    // 0x166f34: 0xc059cb4  jal         func_1672D0
label_166f38:
    if (ctx->pc == 0x166F38u) {
        ctx->pc = 0x166F3Cu;
        goto label_166f3c;
    }
    ctx->pc = 0x166F34u;
    SET_GPR_U32(ctx, 31, 0x166F3Cu);
    ctx->pc = 0x1672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672D0u, 0x166F34u, 0x166F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F3Cu;
label_166f3c:
    // 0x166f3c: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_166f40:
    if (ctx->pc == 0x166F40u) {
        ctx->pc = 0x166F44u;
        goto label_166f44;
    }
    ctx->pc = 0x166F3Cu;
    {
        const bool branch_taken_0x166f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166f3c) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x166F44u;
label_166f44:
    // 0x166f44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x166f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_166f48:
    // 0x166f48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_166f4c:
    // 0x166f4c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x166f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_166f50:
    // 0x166f50: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x166f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_166f54:
    // 0x166f54: 0x24a53f68  addiu       $a1, $a1, 0x3F68
    ctx->pc = 0x166f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16232));
label_166f58:
    // 0x166f58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166f5c:
    // 0x166f5c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x166f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166f60:
    // 0x166f60: 0xc08f558  jal         func_23D560
label_166f64:
    if (ctx->pc == 0x166F64u) {
        ctx->pc = 0x166F68u;
        goto label_166f68;
    }
    ctx->pc = 0x166F60u;
    SET_GPR_U32(ctx, 31, 0x166F68u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x166F60u, 0x166F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F68u;
label_166f68:
    // 0x166f68: 0x1000009c  b           . + 4 + (0x9C << 2)
label_166f6c:
    if (ctx->pc == 0x166F6Cu) {
        ctx->pc = 0x166F70u;
        goto label_166f70;
    }
    ctx->pc = 0x166F68u;
    {
        const bool branch_taken_0x166f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166f68) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x166F70u;
label_166f70:
    // 0x166f70: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x166f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_166f74:
    // 0x166f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166f78:
    // 0x166f78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x166f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166f7c:
    // 0x166f7c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x166f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_166f80:
    // 0x166f80: 0x320f809  jalr        $t9
label_166f84:
    if (ctx->pc == 0x166F84u) {
        ctx->pc = 0x166F88u;
        goto label_166f88;
    }
    ctx->pc = 0x166F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166F88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166F80u, 0x166F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166F88u;
label_166f88:
    // 0x166f88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x166f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_166f8c:
    // 0x166f8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_166f90:
    // 0x166f90: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x166f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_166f94:
    // 0x166f94: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x166f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_166f98:
    // 0x166f98: 0x24a53f80  addiu       $a1, $a1, 0x3F80
    ctx->pc = 0x166f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16256));
label_166f9c:
    // 0x166f9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166fa0:
    // 0x166fa0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x166fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166fa4:
    // 0x166fa4: 0xc08f558  jal         func_23D560
label_166fa8:
    if (ctx->pc == 0x166FA8u) {
        ctx->pc = 0x166FACu;
        goto label_166fac;
    }
    ctx->pc = 0x166FA4u;
    SET_GPR_U32(ctx, 31, 0x166FACu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x166FA4u, 0x166FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FACu;
label_166fac:
    // 0x166fac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x166facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_166fb0:
    // 0x166fb0: 0xc088560  jal         func_221580
label_166fb4:
    if (ctx->pc == 0x166FB4u) {
        ctx->pc = 0x166FB8u;
        goto label_166fb8;
    }
    ctx->pc = 0x166FB0u;
    SET_GPR_U32(ctx, 31, 0x166FB8u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x166FB0u, 0x166FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FB8u;
label_166fb8:
    // 0x166fb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x166fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_166fbc:
    // 0x166fbc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x166fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_166fc0:
    // 0x166fc0: 0x24a53f90  addiu       $a1, $a1, 0x3F90
    ctx->pc = 0x166fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16272));
label_166fc4:
    // 0x166fc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x166fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166fc8:
    // 0x166fc8: 0xc041b24  jal         func_106C90
label_166fcc:
    if (ctx->pc == 0x166FCCu) {
        ctx->pc = 0x166FD0u;
        goto label_166fd0;
    }
    ctx->pc = 0x166FC8u;
    SET_GPR_U32(ctx, 31, 0x166FD0u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x166FC8u, 0x166FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FD0u;
label_166fd0:
    // 0x166fd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x166fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_166fd4:
    // 0x166fd4: 0x27858e98  addiu       $a1, $gp, -0x7168
    ctx->pc = 0x166fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938264));
label_166fd8:
    // 0x166fd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x166fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166fdc:
    // 0x166fdc: 0xc047314  jal         func_11CC50
label_166fe0:
    if (ctx->pc == 0x166FE0u) {
        ctx->pc = 0x166FE4u;
        goto label_166fe4;
    }
    ctx->pc = 0x166FDCu;
    SET_GPR_U32(ctx, 31, 0x166FE4u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x166FDCu, 0x166FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FE4u;
label_166fe4:
    // 0x166fe4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x166fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_166fe8:
    // 0x166fe8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x166fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_166fec:
    // 0x166fec: 0xc08ef28  jal         func_23BCA0
label_166ff0:
    if (ctx->pc == 0x166FF0u) {
        ctx->pc = 0x166FF4u;
        goto label_166ff4;
    }
    ctx->pc = 0x166FECu;
    SET_GPR_U32(ctx, 31, 0x166FF4u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x166FECu, 0x166FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FF4u;
label_166ff4:
    // 0x166ff4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x166ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_166ff8:
    // 0x166ff8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x166ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_166ffc:
    // 0x166ffc: 0xc0887b4  jal         func_221ED0
label_167000:
    if (ctx->pc == 0x167000u) {
        ctx->pc = 0x167004u;
        goto label_167004;
    }
    ctx->pc = 0x166FFCu;
    SET_GPR_U32(ctx, 31, 0x167004u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x166FFCu, 0x167004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167004u;
label_167004:
    // 0x167004: 0x10000075  b           . + 4 + (0x75 << 2)
label_167008:
    if (ctx->pc == 0x167008u) {
        ctx->pc = 0x16700Cu;
        goto label_16700c;
    }
    ctx->pc = 0x167004u;
    {
        const bool branch_taken_0x167004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167004) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x16700Cu;
label_16700c:
    // 0x16700c: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x16700cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
label_167010:
    // 0x167010: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x167010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_167014:
    // 0x167014: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_167018:
    if (ctx->pc == 0x167018u) {
        ctx->pc = 0x16701Cu;
        goto label_16701c;
    }
    ctx->pc = 0x167014u;
    {
        const bool branch_taken_0x167014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167014) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x16701Cu;
label_16701c:
    // 0x16701c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x16701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_167020:
    // 0x167020: 0x2463ff95  addiu       $v1, $v1, -0x6B
    ctx->pc = 0x167020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967189));
label_167024:
    // 0x167024: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x167024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_167028:
    // 0x167028: 0x1020006c  beqz        $at, . + 4 + (0x6C << 2)
label_16702c:
    if (ctx->pc == 0x16702Cu) {
        ctx->pc = 0x167030u;
        goto label_167030;
    }
    ctx->pc = 0x167028u;
    {
        const bool branch_taken_0x167028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x167028) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x167030u;
label_167030:
    // 0x167030: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x167030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_167034:
    // 0x167034: 0x24848490  addiu       $a0, $a0, -0x7B70
    ctx->pc = 0x167034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935696));
label_167038:
    // 0x167038: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16703c:
    // 0x16703c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16703cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_167040:
    // 0x167040: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x167040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_167044:
    // 0x167044: 0x600008  jr          $v1
label_167048:
    if (ctx->pc == 0x167048u) {
        ctx->pc = 0x16704Cu;
        goto label_16704c;
    }
    ctx->pc = 0x167044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16704Cu: goto label_16704c;
            case 0x1670F8u: goto label_1670f8;
            case 0x1671A0u: goto label_1671a0;
            case 0x1671DCu: goto label_1671dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167044u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16704Cu;
label_16704c:
    // 0x16704c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_167050:
    // 0x167050: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x167050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_167054:
    // 0x167054: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x167054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_167058:
    // 0x167058: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_16705c:
    if (ctx->pc == 0x16705Cu) {
        ctx->pc = 0x167060u;
        goto label_167060;
    }
    ctx->pc = 0x167058u;
    {
        const bool branch_taken_0x167058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x167058) {
            ctx->pc = 0x167078u;
            goto label_167078;
        }
    }
    ctx->pc = 0x167060u;
label_167060:
    // 0x167060: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x167060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_167064:
    // 0x167064: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x167064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_167068:
    // 0x167068: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x167068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16706c:
    // 0x16706c: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x16706cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_167070:
    // 0x167070: 0x10000004  b           . + 4 + (0x4 << 2)
label_167074:
    if (ctx->pc == 0x167074u) {
        ctx->pc = 0x167078u;
        goto label_167078;
    }
    ctx->pc = 0x167070u;
    {
        const bool branch_taken_0x167070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167070) {
            ctx->pc = 0x167084u;
            goto label_167084;
        }
    }
    ctx->pc = 0x167078u;
label_167078:
    // 0x167078: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x167078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_16707c:
    // 0x16707c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_167080:
    // 0x167080: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x167080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_167084:
    // 0x167084: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x167084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_167088:
    // 0x167088: 0x1000000c  b           . + 4 + (0xC << 2)
label_16708c:
    if (ctx->pc == 0x16708Cu) {
        ctx->pc = 0x167090u;
        goto label_167090;
    }
    ctx->pc = 0x167088u;
    {
        const bool branch_taken_0x167088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167088) {
            ctx->pc = 0x1670BCu;
            goto label_1670bc;
        }
    }
    ctx->pc = 0x167090u;
label_167090:
    // 0x167090: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x167090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_167094:
    // 0x167094: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x167094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_167098:
    // 0x167098: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x167098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_16709c:
    // 0x16709c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1670a0:
    // 0x1670a0: 0x244283f0  addiu       $v0, $v0, -0x7C10
    ctx->pc = 0x1670a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935536));
label_1670a4:
    // 0x1670a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1670a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1670a8:
    // 0x1670a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1670a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1670ac:
    // 0x1670ac: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x1670acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1670b0:
    // 0x1670b0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1670b4:
    if (ctx->pc == 0x1670B4u) {
        ctx->pc = 0x1670B8u;
        goto label_1670b8;
    }
    ctx->pc = 0x1670B0u;
    {
        const bool branch_taken_0x1670b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1670b0) {
            ctx->pc = 0x1670C4u;
            goto label_1670c4;
        }
    }
    ctx->pc = 0x1670B8u;
label_1670b8:
    // 0x1670b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1670b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1670bc:
    // 0x1670bc: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
label_1670c0:
    if (ctx->pc == 0x1670C0u) {
        ctx->pc = 0x1670C4u;
        goto label_1670c4;
    }
    ctx->pc = 0x1670BCu;
    {
        const bool branch_taken_0x1670bc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1670bc) {
            ctx->pc = 0x167090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167090;
        }
    }
    ctx->pc = 0x1670C4u;
label_1670c4:
    // 0x1670c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1670c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1670c8:
    // 0x1670c8: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x1670c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1670cc:
    // 0x1670cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1670ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1670d0:
    // 0x1670d0: 0xc0599f8  jal         func_1667E0
label_1670d4:
    if (ctx->pc == 0x1670D4u) {
        ctx->pc = 0x1670D8u;
        goto label_1670d8;
    }
    ctx->pc = 0x1670D0u;
    SET_GPR_U32(ctx, 31, 0x1670D8u);
    ctx->pc = 0x1667E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667E0u, 0x1670D0u, 0x1670D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670D8u;
label_1670d8:
    // 0x1670d8: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1670d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_1670dc:
    // 0x1670dc: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
label_1670e0:
    if (ctx->pc == 0x1670E0u) {
        ctx->pc = 0x1670E4u;
        goto label_1670e4;
    }
    ctx->pc = 0x1670DCu;
    {
        const bool branch_taken_0x1670dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1670dc) {
            ctx->pc = 0x16704Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16704c;
        }
    }
    ctx->pc = 0x1670E4u;
label_1670e4:
    // 0x1670e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1670e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1670e8:
    // 0x1670e8: 0xc059cb4  jal         func_1672D0
label_1670ec:
    if (ctx->pc == 0x1670ECu) {
        ctx->pc = 0x1670F0u;
        goto label_1670f0;
    }
    ctx->pc = 0x1670E8u;
    SET_GPR_U32(ctx, 31, 0x1670F0u);
    ctx->pc = 0x1672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672D0u, 0x1670E8u, 0x1670F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670F0u;
label_1670f0:
    // 0x1670f0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1670f4:
    if (ctx->pc == 0x1670F4u) {
        ctx->pc = 0x1670F8u;
        goto label_1670f8;
    }
    ctx->pc = 0x1670F0u;
    {
        const bool branch_taken_0x1670f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1670f0) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x1670F8u;
label_1670f8:
    // 0x1670f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1670f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1670fc:
    // 0x1670fc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1670fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_167100:
    // 0x167100: 0x28410051  slti        $at, $v0, 0x51
    ctx->pc = 0x167100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
label_167104:
    // 0x167104: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_167108:
    if (ctx->pc == 0x167108u) {
        ctx->pc = 0x16710Cu;
        goto label_16710c;
    }
    ctx->pc = 0x167104u;
    {
        const bool branch_taken_0x167104 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x167104) {
            ctx->pc = 0x167124u;
            goto label_167124;
        }
    }
    ctx->pc = 0x16710Cu;
label_16710c:
    // 0x16710c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x16710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_167110:
    // 0x167110: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x167110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_167114:
    // 0x167114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_167118:
    // 0x167118: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x167118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_16711c:
    // 0x16711c: 0x10000003  b           . + 4 + (0x3 << 2)
label_167120:
    if (ctx->pc == 0x167120u) {
        ctx->pc = 0x167124u;
        goto label_167124;
    }
    ctx->pc = 0x16711Cu;
    {
        const bool branch_taken_0x16711c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16711c) {
            ctx->pc = 0x16712Cu;
            goto label_16712c;
        }
    }
    ctx->pc = 0x167124u;
label_167124:
    // 0x167124: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x167124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_167128:
    // 0x167128: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x167128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_16712c:
    // 0x16712c: 0x24100025  addiu       $s0, $zero, 0x25
    ctx->pc = 0x16712cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_167130:
    // 0x167130: 0x1000000c  b           . + 4 + (0xC << 2)
label_167134:
    if (ctx->pc == 0x167134u) {
        ctx->pc = 0x167138u;
        goto label_167138;
    }
    ctx->pc = 0x167130u;
    {
        const bool branch_taken_0x167130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167130) {
            ctx->pc = 0x167164u;
            goto label_167164;
        }
    }
    ctx->pc = 0x167138u;
label_167138:
    // 0x167138: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x167138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16713c:
    // 0x16713c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x16713cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_167140:
    // 0x167140: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x167140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_167144:
    // 0x167144: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x167144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_167148:
    // 0x167148: 0x244283f0  addiu       $v0, $v0, -0x7C10
    ctx->pc = 0x167148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935536));
label_16714c:
    // 0x16714c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167150:
    // 0x167150: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167154:
    // 0x167154: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x167154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_167158:
    // 0x167158: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_16715c:
    if (ctx->pc == 0x16715Cu) {
        ctx->pc = 0x167160u;
        goto label_167160;
    }
    ctx->pc = 0x167158u;
    {
        const bool branch_taken_0x167158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x167158) {
            ctx->pc = 0x16716Cu;
            goto label_16716c;
        }
    }
    ctx->pc = 0x167160u;
label_167160:
    // 0x167160: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x167160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_167164:
    // 0x167164: 0x601fff4  bgez        $s0, . + 4 + (-0xC << 2)
label_167168:
    if (ctx->pc == 0x167168u) {
        ctx->pc = 0x16716Cu;
        goto label_16716c;
    }
    ctx->pc = 0x167164u;
    {
        const bool branch_taken_0x167164 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x167164) {
            ctx->pc = 0x167138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167138;
        }
    }
    ctx->pc = 0x16716Cu;
label_16716c:
    // 0x16716c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_167170:
    // 0x167170: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x167170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_167174:
    // 0x167174: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x167174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167178:
    // 0x167178: 0xc0599f8  jal         func_1667E0
label_16717c:
    if (ctx->pc == 0x16717Cu) {
        ctx->pc = 0x167180u;
        goto label_167180;
    }
    ctx->pc = 0x167178u;
    SET_GPR_U32(ctx, 31, 0x167180u);
    ctx->pc = 0x1667E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667E0u, 0x167178u, 0x167180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167180u;
label_167180:
    // 0x167180: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x167180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_167184:
    // 0x167184: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
label_167188:
    if (ctx->pc == 0x167188u) {
        ctx->pc = 0x16718Cu;
        goto label_16718c;
    }
    ctx->pc = 0x167184u;
    {
        const bool branch_taken_0x167184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167184) {
            ctx->pc = 0x1670F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1670f8;
        }
    }
    ctx->pc = 0x16718Cu;
label_16718c:
    // 0x16718c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x16718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_167190:
    // 0x167190: 0xc059cb4  jal         func_1672D0
label_167194:
    if (ctx->pc == 0x167194u) {
        ctx->pc = 0x167198u;
        goto label_167198;
    }
    ctx->pc = 0x167190u;
    SET_GPR_U32(ctx, 31, 0x167198u);
    ctx->pc = 0x1672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672D0u, 0x167190u, 0x167198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167198u;
label_167198:
    // 0x167198: 0x10000010  b           . + 4 + (0x10 << 2)
label_16719c:
    if (ctx->pc == 0x16719Cu) {
        ctx->pc = 0x1671A0u;
        goto label_1671a0;
    }
    ctx->pc = 0x167198u;
    {
        const bool branch_taken_0x167198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167198) {
            ctx->pc = 0x1671DCu;
            goto label_1671dc;
        }
    }
    ctx->pc = 0x1671A0u;
label_1671a0:
    // 0x1671a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1671a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1671a4:
    // 0x1671a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1671a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1671a8:
    // 0x1671a8: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x1671a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_1671ac:
    // 0x1671ac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1671acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1671b0:
    // 0x1671b0: 0xc059cb4  jal         func_1672D0
label_1671b4:
    if (ctx->pc == 0x1671B4u) {
        ctx->pc = 0x1671B8u;
        goto label_1671b8;
    }
    ctx->pc = 0x1671B0u;
    SET_GPR_U32(ctx, 31, 0x1671B8u);
    ctx->pc = 0x1672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672D0u, 0x1671B0u, 0x1671B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671B8u;
label_1671b8:
    // 0x1671b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1671b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1671bc:
    // 0x1671bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1671bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1671c0:
    // 0x1671c0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1671c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1671c4:
    // 0x1671c4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1671c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1671c8:
    // 0x1671c8: 0x24a53f80  addiu       $a1, $a1, 0x3F80
    ctx->pc = 0x1671c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16256));
label_1671cc:
    // 0x1671cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1671ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1671d0:
    // 0x1671d0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1671d4:
    // 0x1671d4: 0xc08f558  jal         func_23D560
label_1671d8:
    if (ctx->pc == 0x1671D8u) {
        ctx->pc = 0x1671DCu;
        goto label_1671dc;
    }
    ctx->pc = 0x1671D4u;
    SET_GPR_U32(ctx, 31, 0x1671DCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1671D4u, 0x1671DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671DCu;
label_1671dc:
    // 0x1671dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1671dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1671e0:
    // 0x1671e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1671e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1671e4:
    // 0x1671e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1671e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1671e8:
    // 0x1671e8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1671e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1671ec:
    // 0x1671ec: 0x3e00008  jr          $ra
label_1671f0:
    if (ctx->pc == 0x1671F0u) {
        ctx->pc = 0x1671F4u;
        goto label_1671f4;
    }
    ctx->pc = 0x1671ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1671ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1671F4u;
label_1671f4:
    // 0x1671f4: 0x0  nop
    ctx->pc = 0x1671f4u;
    // NOP
label_1671f8:
    // 0x1671f8: 0x0  nop
    ctx->pc = 0x1671f8u;
    // NOP
label_1671fc:
    // 0x1671fc: 0x0  nop
    ctx->pc = 0x1671fcu;
    // NOP
label_167200:
    // 0x167200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_167204:
    // 0x167204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_167208:
    // 0x167208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x167208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16720c:
    // 0x16720c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16720cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167210:
    // 0x167210: 0xc055a84  jal         func_156A10
label_167214:
    if (ctx->pc == 0x167214u) {
        ctx->pc = 0x167218u;
        goto label_167218;
    }
    ctx->pc = 0x167210u;
    SET_GPR_U32(ctx, 31, 0x167218u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x167210u, 0x167218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167218u;
label_167218:
    // 0x167218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16721c:
    // 0x16721c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16721cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_167220:
    // 0x167220: 0x3e00008  jr          $ra
label_167224:
    if (ctx->pc == 0x167224u) {
        ctx->pc = 0x167228u;
        goto label_167228;
    }
    ctx->pc = 0x167220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167228u;
label_167228:
    // 0x167228: 0x0  nop
    ctx->pc = 0x167228u;
    // NOP
label_16722c:
    // 0x16722c: 0x0  nop
    ctx->pc = 0x16722cu;
    // NOP
    ctx->pc = 0x167230u;
}
