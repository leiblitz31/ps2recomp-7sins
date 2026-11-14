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

// Function: sub_00324D38
// Address: 0x324d38 - 0x325208
void sub_00324D38_0x324d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324D38_0x324d38");
#endif

    switch (ctx->pc) {
        case 0x324d38u: goto label_324d38;
        case 0x324d3cu: goto label_324d3c;
        case 0x324d40u: goto label_324d40;
        case 0x324d44u: goto label_324d44;
        case 0x324d48u: goto label_324d48;
        case 0x324d4cu: goto label_324d4c;
        case 0x324d50u: goto label_324d50;
        case 0x324d54u: goto label_324d54;
        case 0x324d58u: goto label_324d58;
        case 0x324d5cu: goto label_324d5c;
        case 0x324d60u: goto label_324d60;
        case 0x324d64u: goto label_324d64;
        case 0x324d68u: goto label_324d68;
        case 0x324d6cu: goto label_324d6c;
        case 0x324d70u: goto label_324d70;
        case 0x324d74u: goto label_324d74;
        case 0x324d78u: goto label_324d78;
        case 0x324d7cu: goto label_324d7c;
        case 0x324d80u: goto label_324d80;
        case 0x324d84u: goto label_324d84;
        case 0x324d88u: goto label_324d88;
        case 0x324d8cu: goto label_324d8c;
        case 0x324d90u: goto label_324d90;
        case 0x324d94u: goto label_324d94;
        case 0x324d98u: goto label_324d98;
        case 0x324d9cu: goto label_324d9c;
        case 0x324da0u: goto label_324da0;
        case 0x324da4u: goto label_324da4;
        case 0x324da8u: goto label_324da8;
        case 0x324dacu: goto label_324dac;
        case 0x324db0u: goto label_324db0;
        case 0x324db4u: goto label_324db4;
        case 0x324db8u: goto label_324db8;
        case 0x324dbcu: goto label_324dbc;
        case 0x324dc0u: goto label_324dc0;
        case 0x324dc4u: goto label_324dc4;
        case 0x324dc8u: goto label_324dc8;
        case 0x324dccu: goto label_324dcc;
        case 0x324dd0u: goto label_324dd0;
        case 0x324dd4u: goto label_324dd4;
        case 0x324dd8u: goto label_324dd8;
        case 0x324ddcu: goto label_324ddc;
        case 0x324de0u: goto label_324de0;
        case 0x324de4u: goto label_324de4;
        case 0x324de8u: goto label_324de8;
        case 0x324decu: goto label_324dec;
        case 0x324df0u: goto label_324df0;
        case 0x324df4u: goto label_324df4;
        case 0x324df8u: goto label_324df8;
        case 0x324dfcu: goto label_324dfc;
        case 0x324e00u: goto label_324e00;
        case 0x324e04u: goto label_324e04;
        case 0x324e08u: goto label_324e08;
        case 0x324e0cu: goto label_324e0c;
        case 0x324e10u: goto label_324e10;
        case 0x324e14u: goto label_324e14;
        case 0x324e18u: goto label_324e18;
        case 0x324e1cu: goto label_324e1c;
        case 0x324e20u: goto label_324e20;
        case 0x324e24u: goto label_324e24;
        case 0x324e28u: goto label_324e28;
        case 0x324e2cu: goto label_324e2c;
        case 0x324e30u: goto label_324e30;
        case 0x324e34u: goto label_324e34;
        case 0x324e38u: goto label_324e38;
        case 0x324e3cu: goto label_324e3c;
        case 0x324e40u: goto label_324e40;
        case 0x324e44u: goto label_324e44;
        case 0x324e48u: goto label_324e48;
        case 0x324e4cu: goto label_324e4c;
        case 0x324e50u: goto label_324e50;
        case 0x324e54u: goto label_324e54;
        case 0x324e58u: goto label_324e58;
        case 0x324e5cu: goto label_324e5c;
        case 0x324e60u: goto label_324e60;
        case 0x324e64u: goto label_324e64;
        case 0x324e68u: goto label_324e68;
        case 0x324e6cu: goto label_324e6c;
        case 0x324e70u: goto label_324e70;
        case 0x324e74u: goto label_324e74;
        case 0x324e78u: goto label_324e78;
        case 0x324e7cu: goto label_324e7c;
        case 0x324e80u: goto label_324e80;
        case 0x324e84u: goto label_324e84;
        case 0x324e88u: goto label_324e88;
        case 0x324e8cu: goto label_324e8c;
        case 0x324e90u: goto label_324e90;
        case 0x324e94u: goto label_324e94;
        case 0x324e98u: goto label_324e98;
        case 0x324e9cu: goto label_324e9c;
        case 0x324ea0u: goto label_324ea0;
        case 0x324ea4u: goto label_324ea4;
        case 0x324ea8u: goto label_324ea8;
        case 0x324eacu: goto label_324eac;
        case 0x324eb0u: goto label_324eb0;
        case 0x324eb4u: goto label_324eb4;
        case 0x324eb8u: goto label_324eb8;
        case 0x324ebcu: goto label_324ebc;
        case 0x324ec0u: goto label_324ec0;
        case 0x324ec4u: goto label_324ec4;
        case 0x324ec8u: goto label_324ec8;
        case 0x324eccu: goto label_324ecc;
        case 0x324ed0u: goto label_324ed0;
        case 0x324ed4u: goto label_324ed4;
        case 0x324ed8u: goto label_324ed8;
        case 0x324edcu: goto label_324edc;
        case 0x324ee0u: goto label_324ee0;
        case 0x324ee4u: goto label_324ee4;
        case 0x324ee8u: goto label_324ee8;
        case 0x324eecu: goto label_324eec;
        case 0x324ef0u: goto label_324ef0;
        case 0x324ef4u: goto label_324ef4;
        case 0x324ef8u: goto label_324ef8;
        case 0x324efcu: goto label_324efc;
        case 0x324f00u: goto label_324f00;
        case 0x324f04u: goto label_324f04;
        case 0x324f08u: goto label_324f08;
        case 0x324f0cu: goto label_324f0c;
        case 0x324f10u: goto label_324f10;
        case 0x324f14u: goto label_324f14;
        case 0x324f18u: goto label_324f18;
        case 0x324f1cu: goto label_324f1c;
        case 0x324f20u: goto label_324f20;
        case 0x324f24u: goto label_324f24;
        case 0x324f28u: goto label_324f28;
        case 0x324f2cu: goto label_324f2c;
        case 0x324f30u: goto label_324f30;
        case 0x324f34u: goto label_324f34;
        case 0x324f38u: goto label_324f38;
        case 0x324f3cu: goto label_324f3c;
        case 0x324f40u: goto label_324f40;
        case 0x324f44u: goto label_324f44;
        case 0x324f48u: goto label_324f48;
        case 0x324f4cu: goto label_324f4c;
        case 0x324f50u: goto label_324f50;
        case 0x324f54u: goto label_324f54;
        case 0x324f58u: goto label_324f58;
        case 0x324f5cu: goto label_324f5c;
        case 0x324f60u: goto label_324f60;
        case 0x324f64u: goto label_324f64;
        case 0x324f68u: goto label_324f68;
        case 0x324f6cu: goto label_324f6c;
        case 0x324f70u: goto label_324f70;
        case 0x324f74u: goto label_324f74;
        case 0x324f78u: goto label_324f78;
        case 0x324f7cu: goto label_324f7c;
        case 0x324f80u: goto label_324f80;
        case 0x324f84u: goto label_324f84;
        case 0x324f88u: goto label_324f88;
        case 0x324f8cu: goto label_324f8c;
        case 0x324f90u: goto label_324f90;
        case 0x324f94u: goto label_324f94;
        case 0x324f98u: goto label_324f98;
        case 0x324f9cu: goto label_324f9c;
        case 0x324fa0u: goto label_324fa0;
        case 0x324fa4u: goto label_324fa4;
        case 0x324fa8u: goto label_324fa8;
        case 0x324facu: goto label_324fac;
        case 0x324fb0u: goto label_324fb0;
        case 0x324fb4u: goto label_324fb4;
        case 0x324fb8u: goto label_324fb8;
        case 0x324fbcu: goto label_324fbc;
        case 0x324fc0u: goto label_324fc0;
        case 0x324fc4u: goto label_324fc4;
        case 0x324fc8u: goto label_324fc8;
        case 0x324fccu: goto label_324fcc;
        case 0x324fd0u: goto label_324fd0;
        case 0x324fd4u: goto label_324fd4;
        case 0x324fd8u: goto label_324fd8;
        case 0x324fdcu: goto label_324fdc;
        case 0x324fe0u: goto label_324fe0;
        case 0x324fe4u: goto label_324fe4;
        case 0x324fe8u: goto label_324fe8;
        case 0x324fecu: goto label_324fec;
        case 0x324ff0u: goto label_324ff0;
        case 0x324ff4u: goto label_324ff4;
        case 0x324ff8u: goto label_324ff8;
        case 0x324ffcu: goto label_324ffc;
        case 0x325000u: goto label_325000;
        case 0x325004u: goto label_325004;
        case 0x325008u: goto label_325008;
        case 0x32500cu: goto label_32500c;
        case 0x325010u: goto label_325010;
        case 0x325014u: goto label_325014;
        case 0x325018u: goto label_325018;
        case 0x32501cu: goto label_32501c;
        case 0x325020u: goto label_325020;
        case 0x325024u: goto label_325024;
        case 0x325028u: goto label_325028;
        case 0x32502cu: goto label_32502c;
        case 0x325030u: goto label_325030;
        case 0x325034u: goto label_325034;
        case 0x325038u: goto label_325038;
        case 0x32503cu: goto label_32503c;
        case 0x325040u: goto label_325040;
        case 0x325044u: goto label_325044;
        case 0x325048u: goto label_325048;
        case 0x32504cu: goto label_32504c;
        case 0x325050u: goto label_325050;
        case 0x325054u: goto label_325054;
        case 0x325058u: goto label_325058;
        case 0x32505cu: goto label_32505c;
        case 0x325060u: goto label_325060;
        case 0x325064u: goto label_325064;
        case 0x325068u: goto label_325068;
        case 0x32506cu: goto label_32506c;
        case 0x325070u: goto label_325070;
        case 0x325074u: goto label_325074;
        case 0x325078u: goto label_325078;
        case 0x32507cu: goto label_32507c;
        case 0x325080u: goto label_325080;
        case 0x325084u: goto label_325084;
        case 0x325088u: goto label_325088;
        case 0x32508cu: goto label_32508c;
        case 0x325090u: goto label_325090;
        case 0x325094u: goto label_325094;
        case 0x325098u: goto label_325098;
        case 0x32509cu: goto label_32509c;
        case 0x3250a0u: goto label_3250a0;
        case 0x3250a4u: goto label_3250a4;
        case 0x3250a8u: goto label_3250a8;
        case 0x3250acu: goto label_3250ac;
        case 0x3250b0u: goto label_3250b0;
        case 0x3250b4u: goto label_3250b4;
        case 0x3250b8u: goto label_3250b8;
        case 0x3250bcu: goto label_3250bc;
        case 0x3250c0u: goto label_3250c0;
        case 0x3250c4u: goto label_3250c4;
        case 0x3250c8u: goto label_3250c8;
        case 0x3250ccu: goto label_3250cc;
        case 0x3250d0u: goto label_3250d0;
        case 0x3250d4u: goto label_3250d4;
        case 0x3250d8u: goto label_3250d8;
        case 0x3250dcu: goto label_3250dc;
        case 0x3250e0u: goto label_3250e0;
        case 0x3250e4u: goto label_3250e4;
        case 0x3250e8u: goto label_3250e8;
        case 0x3250ecu: goto label_3250ec;
        case 0x3250f0u: goto label_3250f0;
        case 0x3250f4u: goto label_3250f4;
        case 0x3250f8u: goto label_3250f8;
        case 0x3250fcu: goto label_3250fc;
        case 0x325100u: goto label_325100;
        case 0x325104u: goto label_325104;
        case 0x325108u: goto label_325108;
        case 0x32510cu: goto label_32510c;
        case 0x325110u: goto label_325110;
        case 0x325114u: goto label_325114;
        case 0x325118u: goto label_325118;
        case 0x32511cu: goto label_32511c;
        case 0x325120u: goto label_325120;
        case 0x325124u: goto label_325124;
        case 0x325128u: goto label_325128;
        case 0x32512cu: goto label_32512c;
        case 0x325130u: goto label_325130;
        case 0x325134u: goto label_325134;
        case 0x325138u: goto label_325138;
        case 0x32513cu: goto label_32513c;
        case 0x325140u: goto label_325140;
        case 0x325144u: goto label_325144;
        case 0x325148u: goto label_325148;
        case 0x32514cu: goto label_32514c;
        case 0x325150u: goto label_325150;
        case 0x325154u: goto label_325154;
        case 0x325158u: goto label_325158;
        case 0x32515cu: goto label_32515c;
        case 0x325160u: goto label_325160;
        case 0x325164u: goto label_325164;
        case 0x325168u: goto label_325168;
        case 0x32516cu: goto label_32516c;
        case 0x325170u: goto label_325170;
        case 0x325174u: goto label_325174;
        case 0x325178u: goto label_325178;
        case 0x32517cu: goto label_32517c;
        case 0x325180u: goto label_325180;
        case 0x325184u: goto label_325184;
        case 0x325188u: goto label_325188;
        case 0x32518cu: goto label_32518c;
        case 0x325190u: goto label_325190;
        case 0x325194u: goto label_325194;
        case 0x325198u: goto label_325198;
        case 0x32519cu: goto label_32519c;
        case 0x3251a0u: goto label_3251a0;
        case 0x3251a4u: goto label_3251a4;
        case 0x3251a8u: goto label_3251a8;
        case 0x3251acu: goto label_3251ac;
        case 0x3251b0u: goto label_3251b0;
        case 0x3251b4u: goto label_3251b4;
        case 0x3251b8u: goto label_3251b8;
        case 0x3251bcu: goto label_3251bc;
        case 0x3251c0u: goto label_3251c0;
        case 0x3251c4u: goto label_3251c4;
        case 0x3251c8u: goto label_3251c8;
        case 0x3251ccu: goto label_3251cc;
        case 0x3251d0u: goto label_3251d0;
        case 0x3251d4u: goto label_3251d4;
        case 0x3251d8u: goto label_3251d8;
        case 0x3251dcu: goto label_3251dc;
        case 0x3251e0u: goto label_3251e0;
        case 0x3251e4u: goto label_3251e4;
        case 0x3251e8u: goto label_3251e8;
        case 0x3251ecu: goto label_3251ec;
        case 0x3251f0u: goto label_3251f0;
        case 0x3251f4u: goto label_3251f4;
        case 0x3251f8u: goto label_3251f8;
        case 0x3251fcu: goto label_3251fc;
        case 0x325200u: goto label_325200;
        case 0x325204u: goto label_325204;
        default: break;
    }

    ctx->pc = 0x324d38u;

label_324d38:
    // 0x324d38: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x324d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_324d3c:
    // 0x324d3c: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x324d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_324d40:
    // 0x324d40: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x324d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_324d44:
    // 0x324d44: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x324d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_324d48:
    // 0x324d48: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x324d48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_324d4c:
    // 0x324d4c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x324d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_324d50:
    // 0x324d50: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x324d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_324d54:
    // 0x324d54: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x324d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_324d58:
    // 0x324d58: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x324d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_324d5c:
    // 0x324d5c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x324d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_324d60:
    // 0x324d60: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x324d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_324d64:
    // 0x324d64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x324d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_324d68:
    // 0x324d68: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x324d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_324d6c:
    // 0x324d6c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x324d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_324d70:
    // 0x324d70: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
label_324d74:
    if (ctx->pc == 0x324D74u) {
        ctx->pc = 0x324D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D70u;
        // 0x324d74: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324D78u;
        goto label_324d78;
    }
    ctx->pc = 0x324D70u;
    {
        const bool branch_taken_0x324d70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x324D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D70u;
        // 0x324d74: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d70) {
            ctx->pc = 0x324DC0u;
            goto label_324dc0;
        }
    }
    ctx->pc = 0x324D78u;
label_324d78:
    // 0x324d78: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x324d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_324d7c:
    // 0x324d7c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x324d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_324d80:
    // 0x324d80: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x324d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_324d84:
    // 0x324d84: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x324d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_324d88:
    // 0x324d88: 0x8cc422d0  lw          $a0, 0x22D0($a2)
    ctx->pc = 0x324d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8912)));
label_324d8c:
    // 0x324d8c: 0x40f809  jalr        $v0
label_324d90:
    if (ctx->pc == 0x324D90u) {
        ctx->pc = 0x324D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D8Cu;
        // 0x324d90: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324D94u;
        goto label_324d94;
    }
    ctx->pc = 0x324D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x324D94u);
        ctx->pc = 0x324D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D8Cu;
        // 0x324d90: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324D8Cu, 0x324D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324D94u;
label_324d94:
    // 0x324d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_324d98:
    // 0x324d98: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_324d9c:
    if (ctx->pc == 0x324D9Cu) {
        ctx->pc = 0x324D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D98u;
        // 0x324d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324DA0u;
        goto label_324da0;
    }
    ctx->pc = 0x324D98u;
    {
        const bool branch_taken_0x324d98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x324D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D98u;
        // 0x324d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d98) {
            ctx->pc = 0x324DA8u;
            goto label_324da8;
        }
    }
    ctx->pc = 0x324DA0u;
label_324da0:
    // 0x324da0: 0x10000008  b           . + 4 + (0x8 << 2)
label_324da4:
    if (ctx->pc == 0x324DA4u) {
        ctx->pc = 0x324DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DA0u;
        // 0x324da4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324DA8u;
        goto label_324da8;
    }
    ctx->pc = 0x324DA0u;
    {
        const bool branch_taken_0x324da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DA0u;
        // 0x324da4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324da0) {
            ctx->pc = 0x324DC4u;
            goto label_324dc4;
        }
    }
    ctx->pc = 0x324DA8u;
label_324da8:
    // 0x324da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x324da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324dac:
    // 0x324dac: 0xc0bb7e6  jal         func_2EDF98
label_324db0:
    if (ctx->pc == 0x324DB0u) {
        ctx->pc = 0x324DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DACu;
        // 0x324db0: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324DB4u;
        goto label_324db4;
    }
    ctx->pc = 0x324DACu;
    SET_GPR_U32(ctx, 31, 0x324DB4u);
    ctx->pc = 0x324DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DACu;
    // 0x324db0: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x324DACu, 0x324DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DB4u;
label_324db4:
    // 0x324db4: 0x8f83a634  lw          $v1, -0x59CC($gp)
    ctx->pc = 0x324db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_324db8:
    // 0x324db8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x324db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_324dbc:
    // 0x324dbc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x324dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_324dc0:
    // 0x324dc0: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x324dc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_324dc4:
    // 0x324dc4: 0x12c00070  beqz        $s6, . + 4 + (0x70 << 2)
label_324dc8:
    if (ctx->pc == 0x324DC8u) {
        ctx->pc = 0x324DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DC4u;
        // 0x324dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324DCCu;
        goto label_324dcc;
    }
    ctx->pc = 0x324DC4u;
    {
        const bool branch_taken_0x324dc4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x324DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DC4u;
        // 0x324dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324dc4) {
            ctx->pc = 0x324F88u;
            goto label_324f88;
        }
    }
    ctx->pc = 0x324DCCu;
label_324dcc:
    // 0x324dcc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x324dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_324dd0:
    // 0x324dd0: 0xc103468  jal         func_40D1A0
label_324dd4:
    if (ctx->pc == 0x324DD4u) {
        ctx->pc = 0x324DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DD0u;
        // 0x324dd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324DD8u;
        goto label_324dd8;
    }
    ctx->pc = 0x324DD0u;
    SET_GPR_U32(ctx, 31, 0x324DD8u);
    ctx->pc = 0x324DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DD0u;
    // 0x324dd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x324DD0u, 0x324DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DD8u;
label_324dd8:
    // 0x324dd8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_324ddc:
    if (ctx->pc == 0x324DDCu) {
        ctx->pc = 0x324DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DD8u;
        // 0x324ddc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324DE0u;
        goto label_324de0;
    }
    ctx->pc = 0x324DD8u;
    {
        const bool branch_taken_0x324dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DD8u;
        // 0x324ddc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324dd8) {
            ctx->pc = 0x324F88u;
            goto label_324f88;
        }
    }
    ctx->pc = 0x324DE0u;
label_324de0:
    // 0x324de0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x324de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_324de4:
    // 0x324de4: 0xc0c962e  jal         func_3258B8
label_324de8:
    if (ctx->pc == 0x324DE8u) {
        ctx->pc = 0x324DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DE4u;
        // 0x324de8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324DECu;
        goto label_324dec;
    }
    ctx->pc = 0x324DE4u;
    SET_GPR_U32(ctx, 31, 0x324DECu);
    ctx->pc = 0x324DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DE4u;
    // 0x324de8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3258B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258B8u, 0x324DE4u, 0x324DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DECu;
label_324dec:
    // 0x324dec: 0x27b70054  addiu       $s7, $sp, 0x54
    ctx->pc = 0x324decu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_324df0:
    // 0x324df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324df4:
    // 0x324df4: 0x0  nop
    ctx->pc = 0x324df4u;
    // NOP
label_324df8:
    // 0x324df8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x324df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_324dfc:
    // 0x324dfc: 0xc103468  jal         func_40D1A0
label_324e00:
    if (ctx->pc == 0x324E00u) {
        ctx->pc = 0x324E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DFCu;
        // 0x324e00: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E04u;
        goto label_324e04;
    }
    ctx->pc = 0x324DFCu;
    SET_GPR_U32(ctx, 31, 0x324E04u);
    ctx->pc = 0x324E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DFCu;
    // 0x324e00: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x324DFCu, 0x324E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E04u;
label_324e04:
    // 0x324e04: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_324e08:
    if (ctx->pc == 0x324E08u) {
        ctx->pc = 0x324E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E04u;
        // 0x324e08: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E0Cu;
        goto label_324e0c;
    }
    ctx->pc = 0x324E04u;
    {
        const bool branch_taken_0x324e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E04u;
        // 0x324e08: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e04) {
            ctx->pc = 0x324F88u;
            goto label_324f88;
        }
    }
    ctx->pc = 0x324E0Cu;
label_324e0c:
    // 0x324e0c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x324e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_324e10:
    // 0x324e10: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
label_324e14:
    if (ctx->pc == 0x324E14u) {
        ctx->pc = 0x324E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E10u;
        // 0x324e14: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E18u;
        goto label_324e18;
    }
    ctx->pc = 0x324E10u;
    {
        const bool branch_taken_0x324e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E10u;
        // 0x324e14: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e10) {
            ctx->pc = 0x3251C0u;
            goto label_3251c0;
        }
    }
    ctx->pc = 0x324E18u;
label_324e18:
    // 0x324e18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x324e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_324e1c:
    // 0x324e1c: 0x2442b750  addiu       $v0, $v0, -0x48B0
    ctx->pc = 0x324e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948688));
label_324e20:
    // 0x324e20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x324e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_324e24:
    // 0x324e24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x324e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_324e28:
    // 0x324e28: 0x800008  jr          $a0
label_324e2c:
    if (ctx->pc == 0x324E2Cu) {
        ctx->pc = 0x324E30u;
        goto label_324e30;
    }
    ctx->pc = 0x324E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x324E30u: goto label_324e30;
            case 0x324FFCu: goto label_324ffc;
            case 0x3250F0u: goto label_3250f0;
            case 0x3251C0u: goto label_3251c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324E28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x324E30u;
label_324e30:
    // 0x324e30: 0x151180  sll         $v0, $s5, 6
    ctx->pc = 0x324e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_324e34:
    // 0x324e34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x324e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324e38:
    // 0x324e38: 0x2c29021  addu        $s2, $s6, $v0
    ctx->pc = 0x324e38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_324e3c:
    // 0x324e3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x324e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324e40:
    // 0x324e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324e44:
    // 0x324e44: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x324e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_324e48:
    // 0x324e48: 0xc103454  jal         func_40D150
label_324e4c:
    if (ctx->pc == 0x324E4Cu) {
        ctx->pc = 0x324E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E48u;
        // 0x324e4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E50u;
        goto label_324e50;
    }
    ctx->pc = 0x324E48u;
    SET_GPR_U32(ctx, 31, 0x324E50u);
    ctx->pc = 0x324E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E48u;
    // 0x324e4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x324E48u, 0x324E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E50u;
label_324e50:
    // 0x324e50: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_324e54:
    if (ctx->pc == 0x324E54u) {
        ctx->pc = 0x324E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E50u;
        // 0x324e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E58u;
        goto label_324e58;
    }
    ctx->pc = 0x324E50u;
    {
        const bool branch_taken_0x324e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E50u;
        // 0x324e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e50) {
            ctx->pc = 0x324F88u;
            goto label_324f88;
        }
    }
    ctx->pc = 0x324E58u;
label_324e58:
    // 0x324e58: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x324e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_324e5c:
    // 0x324e5c: 0xc103468  jal         func_40D1A0
label_324e60:
    if (ctx->pc == 0x324E60u) {
        ctx->pc = 0x324E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E5Cu;
        // 0x324e60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E64u;
        goto label_324e64;
    }
    ctx->pc = 0x324E5Cu;
    SET_GPR_U32(ctx, 31, 0x324E64u);
    ctx->pc = 0x324E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E5Cu;
    // 0x324e60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x324E5Cu, 0x324E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E64u;
label_324e64:
    // 0x324e64: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_324e68:
    if (ctx->pc == 0x324E68u) {
        ctx->pc = 0x324E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E64u;
        // 0x324e68: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E6Cu;
        goto label_324e6c;
    }
    ctx->pc = 0x324E64u;
    {
        const bool branch_taken_0x324e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E64u;
        // 0x324e68: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e64) {
            ctx->pc = 0x324ED0u;
            goto label_324ed0;
        }
    }
    ctx->pc = 0x324E6Cu;
label_324e6c:
    // 0x324e6c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_324e70:
    if (ctx->pc == 0x324E70u) {
        ctx->pc = 0x324E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E6Cu;
        // 0x324e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E74u;
        goto label_324e74;
    }
    ctx->pc = 0x324E6Cu;
    {
        const bool branch_taken_0x324e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E6Cu;
        // 0x324e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e6c) {
            ctx->pc = 0x324ED8u;
            goto label_324ed8;
        }
    }
    ctx->pc = 0x324E74u;
label_324e74:
    // 0x324e74: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x324e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_324e78:
    // 0x324e78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x324e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324e7c:
    // 0x324e7c: 0xc103322  jal         func_40CC88
label_324e80:
    if (ctx->pc == 0x324E80u) {
        ctx->pc = 0x324E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E7Cu;
        // 0x324e80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E84u;
        goto label_324e84;
    }
    ctx->pc = 0x324E7Cu;
    SET_GPR_U32(ctx, 31, 0x324E84u);
    ctx->pc = 0x324E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E7Cu;
    // 0x324e80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x324E7Cu, 0x324E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E84u;
label_324e84:
    // 0x324e84: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_324e88:
    if (ctx->pc == 0x324E88u) {
        ctx->pc = 0x324E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E84u;
        // 0x324e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E8Cu;
        goto label_324e8c;
    }
    ctx->pc = 0x324E84u;
    {
        const bool branch_taken_0x324e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E84u;
        // 0x324e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e84) {
            ctx->pc = 0x324EE0u;
            goto label_324ee0;
        }
    }
    ctx->pc = 0x324E8Cu;
label_324e8c:
    // 0x324e8c: 0xc103618  jal         func_40D860
label_324e90:
    if (ctx->pc == 0x324E90u) {
        ctx->pc = 0x324E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E8Cu;
        // 0x324e90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E94u;
        goto label_324e94;
    }
    ctx->pc = 0x324E8Cu;
    SET_GPR_U32(ctx, 31, 0x324E94u);
    ctx->pc = 0x324E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E8Cu;
    // 0x324e90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D860u, 0x324E8Cu, 0x324E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E94u;
label_324e94:
    // 0x324e94: 0xc1057ca  jal         func_415F28
label_324e98:
    if (ctx->pc == 0x324E98u) {
        ctx->pc = 0x324E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E94u;
        // 0x324e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324E9Cu;
        goto label_324e9c;
    }
    ctx->pc = 0x324E94u;
    SET_GPR_U32(ctx, 31, 0x324E9Cu);
    ctx->pc = 0x324E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E94u;
    // 0x324e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415F28u, 0x324E94u, 0x324E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E9Cu;
label_324e9c:
    // 0x324e9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_324ea0:
    // 0x324ea0: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_324ea4:
    if (ctx->pc == 0x324EA4u) {
        ctx->pc = 0x324EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EA0u;
        // 0x324ea4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324EA8u;
        goto label_324ea8;
    }
    ctx->pc = 0x324EA0u;
    {
        const bool branch_taken_0x324ea0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x324EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EA0u;
        // 0x324ea4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ea0) {
            ctx->pc = 0x324EE0u;
            goto label_324ee0;
        }
    }
    ctx->pc = 0x324EA8u;
label_324ea8:
    // 0x324ea8: 0xc103618  jal         func_40D860
label_324eac:
    if (ctx->pc == 0x324EACu) {
        ctx->pc = 0x324EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EA8u;
        // 0x324eac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324EB0u;
        goto label_324eb0;
    }
    ctx->pc = 0x324EA8u;
    SET_GPR_U32(ctx, 31, 0x324EB0u);
    ctx->pc = 0x324EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324EA8u;
    // 0x324eac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D860u, 0x324EA8u, 0x324EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324EB0u;
label_324eb0:
    // 0x324eb0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x324eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_324eb4:
    // 0x324eb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x324eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_324eb8:
    // 0x324eb8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_324ebc:
    if (ctx->pc == 0x324EBCu) {
        ctx->pc = 0x324EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EB8u;
        // 0x324ebc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324EC0u;
        goto label_324ec0;
    }
    ctx->pc = 0x324EB8u;
    {
        const bool branch_taken_0x324eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x324EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EB8u;
        // 0x324ebc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324eb8) {
            ctx->pc = 0x324EDCu;
            goto label_324edc;
        }
    }
    ctx->pc = 0x324EC0u;
label_324ec0:
    // 0x324ec0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_324ec4:
    if (ctx->pc == 0x324EC4u) {
        ctx->pc = 0x324EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EC0u;
        // 0x324ec4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324EC8u;
        goto label_324ec8;
    }
    ctx->pc = 0x324EC0u;
    {
        const bool branch_taken_0x324ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x324EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EC0u;
        // 0x324ec4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ec0) {
            ctx->pc = 0x324EE0u;
            goto label_324ee0;
        }
    }
    ctx->pc = 0x324EC8u;
label_324ec8:
    // 0x324ec8: 0xc103628  jal         func_40D8A0
label_324ecc:
    if (ctx->pc == 0x324ECCu) {
        ctx->pc = 0x324ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EC8u;
        // 0x324ecc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324ED0u;
        goto label_324ed0;
    }
    ctx->pc = 0x324EC8u;
    SET_GPR_U32(ctx, 31, 0x324ED0u);
    ctx->pc = 0x324ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324EC8u;
    // 0x324ecc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x324EC8u, 0x324ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324ED0u;
label_324ed0:
    // 0x324ed0: 0x10000003  b           . + 4 + (0x3 << 2)
label_324ed4:
    if (ctx->pc == 0x324ED4u) {
        ctx->pc = 0x324ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324ED0u;
        // 0x324ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324ED8u;
        goto label_324ed8;
    }
    ctx->pc = 0x324ED0u;
    {
        const bool branch_taken_0x324ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324ED0u;
        // 0x324ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ed0) {
            ctx->pc = 0x324EE0u;
            goto label_324ee0;
        }
    }
    ctx->pc = 0x324ED8u;
label_324ed8:
    // 0x324ed8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x324ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324edc:
    // 0x324edc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x324edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324ee0:
    // 0x324ee0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_324ee4:
    if (ctx->pc == 0x324EE4u) {
        ctx->pc = 0x324EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EE0u;
        // 0x324ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324EE8u;
        goto label_324ee8;
    }
    ctx->pc = 0x324EE0u;
    {
        const bool branch_taken_0x324ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EE0u;
        // 0x324ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ee0) {
            ctx->pc = 0x324F88u;
            goto label_324f88;
        }
    }
    ctx->pc = 0x324EE8u;
label_324ee8:
    // 0x324ee8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x324ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_324eec:
    // 0x324eec: 0xc103468  jal         func_40D1A0
label_324ef0:
    if (ctx->pc == 0x324EF0u) {
        ctx->pc = 0x324EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EECu;
        // 0x324ef0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324EF4u;
        goto label_324ef4;
    }
    ctx->pc = 0x324EECu;
    SET_GPR_U32(ctx, 31, 0x324EF4u);
    ctx->pc = 0x324EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324EECu;
    // 0x324ef0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x324EECu, 0x324EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324EF4u;
label_324ef4:
    // 0x324ef4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_324ef8:
    if (ctx->pc == 0x324EF8u) {
        ctx->pc = 0x324EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EF4u;
        // 0x324ef8: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324EFCu;
        goto label_324efc;
    }
    ctx->pc = 0x324EF4u;
    {
        const bool branch_taken_0x324ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EF4u;
        // 0x324ef8: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ef4) {
            ctx->pc = 0x324F60u;
            goto label_324f60;
        }
    }
    ctx->pc = 0x324EFCu;
label_324efc:
    // 0x324efc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_324f00:
    if (ctx->pc == 0x324F00u) {
        ctx->pc = 0x324F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EFCu;
        // 0x324f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F04u;
        goto label_324f04;
    }
    ctx->pc = 0x324EFCu;
    {
        const bool branch_taken_0x324efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EFCu;
        // 0x324f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324efc) {
            ctx->pc = 0x324F68u;
            goto label_324f68;
        }
    }
    ctx->pc = 0x324F04u;
label_324f04:
    // 0x324f04: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x324f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_324f08:
    // 0x324f08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x324f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324f0c:
    // 0x324f0c: 0xc103322  jal         func_40CC88
label_324f10:
    if (ctx->pc == 0x324F10u) {
        ctx->pc = 0x324F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F0Cu;
        // 0x324f10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F14u;
        goto label_324f14;
    }
    ctx->pc = 0x324F0Cu;
    SET_GPR_U32(ctx, 31, 0x324F14u);
    ctx->pc = 0x324F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F0Cu;
    // 0x324f10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x324F0Cu, 0x324F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F14u;
label_324f14:
    // 0x324f14: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_324f18:
    if (ctx->pc == 0x324F18u) {
        ctx->pc = 0x324F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F14u;
        // 0x324f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F1Cu;
        goto label_324f1c;
    }
    ctx->pc = 0x324F14u;
    {
        const bool branch_taken_0x324f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F14u;
        // 0x324f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f14) {
            ctx->pc = 0x324F70u;
            goto label_324f70;
        }
    }
    ctx->pc = 0x324F1Cu;
label_324f1c:
    // 0x324f1c: 0xc103618  jal         func_40D860
label_324f20:
    if (ctx->pc == 0x324F20u) {
        ctx->pc = 0x324F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F1Cu;
        // 0x324f20: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F24u;
        goto label_324f24;
    }
    ctx->pc = 0x324F1Cu;
    SET_GPR_U32(ctx, 31, 0x324F24u);
    ctx->pc = 0x324F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F1Cu;
    // 0x324f20: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D860u, 0x324F1Cu, 0x324F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F24u;
label_324f24:
    // 0x324f24: 0xc1057ca  jal         func_415F28
label_324f28:
    if (ctx->pc == 0x324F28u) {
        ctx->pc = 0x324F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F24u;
        // 0x324f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F2Cu;
        goto label_324f2c;
    }
    ctx->pc = 0x324F24u;
    SET_GPR_U32(ctx, 31, 0x324F2Cu);
    ctx->pc = 0x324F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F24u;
    // 0x324f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415F28u, 0x324F24u, 0x324F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F2Cu;
label_324f2c:
    // 0x324f2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x324f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_324f30:
    // 0x324f30: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
label_324f34:
    if (ctx->pc == 0x324F34u) {
        ctx->pc = 0x324F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F30u;
        // 0x324f34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F38u;
        goto label_324f38;
    }
    ctx->pc = 0x324F30u;
    {
        const bool branch_taken_0x324f30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x324F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F30u;
        // 0x324f34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f30) {
            ctx->pc = 0x324F70u;
            goto label_324f70;
        }
    }
    ctx->pc = 0x324F38u;
label_324f38:
    // 0x324f38: 0xc103618  jal         func_40D860
label_324f3c:
    if (ctx->pc == 0x324F3Cu) {
        ctx->pc = 0x324F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F38u;
        // 0x324f3c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F40u;
        goto label_324f40;
    }
    ctx->pc = 0x324F38u;
    SET_GPR_U32(ctx, 31, 0x324F40u);
    ctx->pc = 0x324F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F38u;
    // 0x324f3c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D860u, 0x324F38u, 0x324F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F40u;
label_324f40:
    // 0x324f40: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x324f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_324f44:
    // 0x324f44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x324f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_324f48:
    // 0x324f48: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_324f4c:
    if (ctx->pc == 0x324F4Cu) {
        ctx->pc = 0x324F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F48u;
        // 0x324f4c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F50u;
        goto label_324f50;
    }
    ctx->pc = 0x324F48u;
    {
        const bool branch_taken_0x324f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x324F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F48u;
        // 0x324f4c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f48) {
            ctx->pc = 0x324F6Cu;
            goto label_324f6c;
        }
    }
    ctx->pc = 0x324F50u;
label_324f50:
    // 0x324f50: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_324f54:
    if (ctx->pc == 0x324F54u) {
        ctx->pc = 0x324F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F50u;
        // 0x324f54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F58u;
        goto label_324f58;
    }
    ctx->pc = 0x324F50u;
    {
        const bool branch_taken_0x324f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x324F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F50u;
        // 0x324f54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f50) {
            ctx->pc = 0x324F70u;
            goto label_324f70;
        }
    }
    ctx->pc = 0x324F58u;
label_324f58:
    // 0x324f58: 0xc103628  jal         func_40D8A0
label_324f5c:
    if (ctx->pc == 0x324F5Cu) {
        ctx->pc = 0x324F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F58u;
        // 0x324f5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F60u;
        goto label_324f60;
    }
    ctx->pc = 0x324F58u;
    SET_GPR_U32(ctx, 31, 0x324F60u);
    ctx->pc = 0x324F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F58u;
    // 0x324f5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x324F58u, 0x324F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F60u;
label_324f60:
    // 0x324f60: 0x10000003  b           . + 4 + (0x3 << 2)
label_324f64:
    if (ctx->pc == 0x324F64u) {
        ctx->pc = 0x324F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F60u;
        // 0x324f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F68u;
        goto label_324f68;
    }
    ctx->pc = 0x324F60u;
    {
        const bool branch_taken_0x324f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F60u;
        // 0x324f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f60) {
            ctx->pc = 0x324F70u;
            goto label_324f70;
        }
    }
    ctx->pc = 0x324F68u;
label_324f68:
    // 0x324f68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x324f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324f6c:
    // 0x324f6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x324f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324f70:
    // 0x324f70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_324f74:
    if (ctx->pc == 0x324F74u) {
        ctx->pc = 0x324F78u;
        goto label_324f78;
    }
    ctx->pc = 0x324F70u;
    {
        const bool branch_taken_0x324f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324f70) {
            ctx->pc = 0x324F90u;
            goto label_324f90;
        }
    }
    ctx->pc = 0x324F78u;
label_324f78:
    // 0x324f78: 0x12000097  beqz        $s0, . + 4 + (0x97 << 2)
label_324f7c:
    if (ctx->pc == 0x324F7Cu) {
        ctx->pc = 0x324F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F78u;
        // 0x324f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F80u;
        goto label_324f80;
    }
    ctx->pc = 0x324F78u;
    {
        const bool branch_taken_0x324f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F78u;
        // 0x324f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f78) {
            ctx->pc = 0x3251D8u;
            goto label_3251d8;
        }
    }
    ctx->pc = 0x324F80u;
label_324f80:
    // 0x324f80: 0xc10822c  jal         func_4208B0
label_324f84:
    if (ctx->pc == 0x324F84u) {
        ctx->pc = 0x324F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F80u;
        // 0x324f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F88u;
        goto label_324f88;
    }
    ctx->pc = 0x324F80u;
    SET_GPR_U32(ctx, 31, 0x324F88u);
    ctx->pc = 0x324F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F80u;
    // 0x324f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x324F80u, 0x324F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F88u;
label_324f88:
    // 0x324f88: 0x10000093  b           . + 4 + (0x93 << 2)
label_324f8c:
    if (ctx->pc == 0x324F8Cu) {
        ctx->pc = 0x324F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F88u;
        // 0x324f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324F90u;
        goto label_324f90;
    }
    ctx->pc = 0x324F88u;
    {
        const bool branch_taken_0x324f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F88u;
        // 0x324f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f88) {
            ctx->pc = 0x3251D8u;
            goto label_3251d8;
        }
    }
    ctx->pc = 0x324F90u;
label_324f90:
    // 0x324f90: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_324f94:
    if (ctx->pc == 0x324F94u) {
        ctx->pc = 0x324F98u;
        goto label_324f98;
    }
    ctx->pc = 0x324F90u;
    {
        const bool branch_taken_0x324f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x324f90) {
            ctx->pc = 0x324FC0u;
            goto label_324fc0;
        }
    }
    ctx->pc = 0x324F98u;
label_324f98:
    // 0x324f98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x324f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324f9c:
    // 0x324f9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x324f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_324fa0:
    // 0x324fa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x324fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_324fa4:
    // 0x324fa4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x324fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_324fa8:
    // 0x324fa8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x324fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_324fac:
    // 0x324fac: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x324facu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
label_324fb0:
    // 0x324fb0: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x324fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_324fb4:
    // 0x324fb4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x324fb4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_324fb8:
    // 0x324fb8: 0x1000000b  b           . + 4 + (0xB << 2)
label_324fbc:
    if (ctx->pc == 0x324FBCu) {
        ctx->pc = 0x324FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FB8u;
        // 0x324fbc: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x324FC0u;
        goto label_324fc0;
    }
    ctx->pc = 0x324FB8u;
    {
        const bool branch_taken_0x324fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FB8u;
        // 0x324fbc: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x324fb8) {
            ctx->pc = 0x324FE8u;
            goto label_324fe8;
        }
    }
    ctx->pc = 0x324FC0u;
label_324fc0:
    // 0x324fc0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_324fc4:
    if (ctx->pc == 0x324FC4u) {
        ctx->pc = 0x324FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FC0u;
        // 0x324fc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324FC8u;
        goto label_324fc8;
    }
    ctx->pc = 0x324FC0u;
    {
        const bool branch_taken_0x324fc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x324FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FC0u;
        // 0x324fc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324fc0) {
            ctx->pc = 0x324FE0u;
            goto label_324fe0;
        }
    }
    ctx->pc = 0x324FC8u;
label_324fc8:
    // 0x324fc8: 0xc0c9688  jal         func_325A20
label_324fcc:
    if (ctx->pc == 0x324FCCu) {
        ctx->pc = 0x324FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FC8u;
        // 0x324fcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324FD0u;
        goto label_324fd0;
    }
    ctx->pc = 0x324FC8u;
    SET_GPR_U32(ctx, 31, 0x324FD0u);
    ctx->pc = 0x324FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FC8u;
    // 0x324fcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A20u, 0x324FC8u, 0x324FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FD0u;
label_324fd0:
    // 0x324fd0: 0xc10822c  jal         func_4208B0
label_324fd4:
    if (ctx->pc == 0x324FD4u) {
        ctx->pc = 0x324FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FD0u;
        // 0x324fd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324FD8u;
        goto label_324fd8;
    }
    ctx->pc = 0x324FD0u;
    SET_GPR_U32(ctx, 31, 0x324FD8u);
    ctx->pc = 0x324FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FD0u;
    // 0x324fd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x324FD0u, 0x324FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FD8u;
label_324fd8:
    // 0x324fd8: 0x10000004  b           . + 4 + (0x4 << 2)
label_324fdc:
    if (ctx->pc == 0x324FDCu) {
        ctx->pc = 0x324FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FD8u;
        // 0x324fdc: 0xc7ac0058  lwc1        $f12, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x324FE0u;
        goto label_324fe0;
    }
    ctx->pc = 0x324FD8u;
    {
        const bool branch_taken_0x324fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FD8u;
        // 0x324fdc: 0xc7ac0058  lwc1        $f12, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x324fd8) {
            ctx->pc = 0x324FECu;
            goto label_324fec;
        }
    }
    ctx->pc = 0x324FE0u;
label_324fe0:
    // 0x324fe0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x324fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_324fe4:
    // 0x324fe4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x324fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_324fe8:
    // 0x324fe8: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x324fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_324fec:
    // 0x324fec: 0xc0c97cc  jal         func_325F30
label_324ff0:
    if (ctx->pc == 0x324FF0u) {
        ctx->pc = 0x324FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FECu;
        // 0x324ff0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324FF4u;
        goto label_324ff4;
    }
    ctx->pc = 0x324FECu;
    SET_GPR_U32(ctx, 31, 0x324FF4u);
    ctx->pc = 0x324FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FECu;
    // 0x324ff0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325F30u, 0x324FECu, 0x324FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FF4u;
label_324ff4:
    // 0x324ff4: 0x10000073  b           . + 4 + (0x73 << 2)
label_324ff8:
    if (ctx->pc == 0x324FF8u) {
        ctx->pc = 0x324FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FF4u;
        // 0x324ff8: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324FFCu;
        goto label_324ffc;
    }
    ctx->pc = 0x324FF4u;
    {
        const bool branch_taken_0x324ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FF4u;
        // 0x324ff8: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ff4) {
            ctx->pc = 0x3251C4u;
            goto label_3251c4;
        }
    }
    ctx->pc = 0x324FFCu;
label_324ffc:
    // 0x324ffc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x324ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325000:
    // 0x325000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_325004:
    // 0x325004: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x325004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_325008:
    // 0x325008: 0xc103454  jal         func_40D150
label_32500c:
    if (ctx->pc == 0x32500Cu) {
        ctx->pc = 0x32500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325008u;
        // 0x32500c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325010u;
        goto label_325010;
    }
    ctx->pc = 0x325008u;
    SET_GPR_U32(ctx, 31, 0x325010u);
    ctx->pc = 0x32500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325008u;
    // 0x32500c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x325008u, 0x325010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325010u;
label_325010:
    // 0x325010: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
label_325014:
    if (ctx->pc == 0x325014u) {
        ctx->pc = 0x325014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325010u;
        // 0x325014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325018u;
        goto label_325018;
    }
    ctx->pc = 0x325010u;
    {
        const bool branch_taken_0x325010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325010u;
        // 0x325014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325010) {
            ctx->pc = 0x324F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324f88;
        }
    }
    ctx->pc = 0x325018u;
label_325018:
    // 0x325018: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x325018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_32501c:
    // 0x32501c: 0xc103468  jal         func_40D1A0
label_325020:
    if (ctx->pc == 0x325020u) {
        ctx->pc = 0x325020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32501Cu;
        // 0x325020: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325024u;
        goto label_325024;
    }
    ctx->pc = 0x32501Cu;
    SET_GPR_U32(ctx, 31, 0x325024u);
    ctx->pc = 0x325020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32501Cu;
    // 0x325020: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x32501Cu, 0x325024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325024u;
label_325024:
    // 0x325024: 0x1040ffd8  beqz        $v0, . + 4 + (-0x28 << 2)
label_325028:
    if (ctx->pc == 0x325028u) {
        ctx->pc = 0x325028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325024u;
        // 0x325028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32502Cu;
        goto label_32502c;
    }
    ctx->pc = 0x325024u;
    {
        const bool branch_taken_0x325024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325024u;
        // 0x325028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325024) {
            ctx->pc = 0x324F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324f88;
        }
    }
    ctx->pc = 0x32502Cu;
label_32502c:
    // 0x32502c: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x32502cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_325030:
    // 0x325030: 0xc103468  jal         func_40D1A0
label_325034:
    if (ctx->pc == 0x325034u) {
        ctx->pc = 0x325034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325030u;
        // 0x325034: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325038u;
        goto label_325038;
    }
    ctx->pc = 0x325030u;
    SET_GPR_U32(ctx, 31, 0x325038u);
    ctx->pc = 0x325034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325030u;
    // 0x325034: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x325030u, 0x325038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325038u;
label_325038:
    // 0x325038: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_32503c:
    if (ctx->pc == 0x32503Cu) {
        ctx->pc = 0x32503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325038u;
        // 0x32503c: 0x8fa2006c  lw          $v0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325040u;
        goto label_325040;
    }
    ctx->pc = 0x325038u;
    {
        const bool branch_taken_0x325038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325038u;
        // 0x32503c: 0x8fa2006c  lw          $v0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325038) {
            ctx->pc = 0x3250A4u;
            goto label_3250a4;
        }
    }
    ctx->pc = 0x325040u;
label_325040:
    // 0x325040: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_325044:
    if (ctx->pc == 0x325044u) {
        ctx->pc = 0x325044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325040u;
        // 0x325044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325048u;
        goto label_325048;
    }
    ctx->pc = 0x325040u;
    {
        const bool branch_taken_0x325040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325040u;
        // 0x325044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325040) {
            ctx->pc = 0x3250ACu;
            goto label_3250ac;
        }
    }
    ctx->pc = 0x325048u;
label_325048:
    // 0x325048: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x325048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32504c:
    // 0x32504c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32504cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325050:
    // 0x325050: 0xc103322  jal         func_40CC88
label_325054:
    if (ctx->pc == 0x325054u) {
        ctx->pc = 0x325054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325050u;
        // 0x325054: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325058u;
        goto label_325058;
    }
    ctx->pc = 0x325050u;
    SET_GPR_U32(ctx, 31, 0x325058u);
    ctx->pc = 0x325054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325050u;
    // 0x325054: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x325050u, 0x325058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325058u;
label_325058:
    // 0x325058: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_32505c:
    if (ctx->pc == 0x32505Cu) {
        ctx->pc = 0x32505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325058u;
        // 0x32505c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325060u;
        goto label_325060;
    }
    ctx->pc = 0x325058u;
    {
        const bool branch_taken_0x325058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325058u;
        // 0x32505c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325058) {
            ctx->pc = 0x3250B0u;
            goto label_3250b0;
        }
    }
    ctx->pc = 0x325060u;
label_325060:
    // 0x325060: 0xc103618  jal         func_40D860
label_325064:
    if (ctx->pc == 0x325064u) {
        ctx->pc = 0x325064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325060u;
        // 0x325064: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325068u;
        goto label_325068;
    }
    ctx->pc = 0x325060u;
    SET_GPR_U32(ctx, 31, 0x325068u);
    ctx->pc = 0x325064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325060u;
    // 0x325064: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D860u, 0x325060u, 0x325068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325068u;
label_325068:
    // 0x325068: 0xc1057ca  jal         func_415F28
label_32506c:
    if (ctx->pc == 0x32506Cu) {
        ctx->pc = 0x32506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325068u;
        // 0x32506c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325070u;
        goto label_325070;
    }
    ctx->pc = 0x325068u;
    SET_GPR_U32(ctx, 31, 0x325070u);
    ctx->pc = 0x32506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325068u;
    // 0x32506c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415F28u, 0x325068u, 0x325070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325070u;
label_325070:
    // 0x325070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x325070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_325074:
    // 0x325074: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_325078:
    if (ctx->pc == 0x325078u) {
        ctx->pc = 0x325078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325074u;
        // 0x325078: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32507Cu;
        goto label_32507c;
    }
    ctx->pc = 0x325074u;
    {
        const bool branch_taken_0x325074 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x325078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325074u;
        // 0x325078: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325074) {
            ctx->pc = 0x3250B0u;
            goto label_3250b0;
        }
    }
    ctx->pc = 0x32507Cu;
label_32507c:
    // 0x32507c: 0xc103618  jal         func_40D860
label_325080:
    if (ctx->pc == 0x325080u) {
        ctx->pc = 0x325080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32507Cu;
        // 0x325080: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325084u;
        goto label_325084;
    }
    ctx->pc = 0x32507Cu;
    SET_GPR_U32(ctx, 31, 0x325084u);
    ctx->pc = 0x325080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32507Cu;
    // 0x325080: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D860u, 0x32507Cu, 0x325084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325084u;
label_325084:
    // 0x325084: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x325084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_325088:
    // 0x325088: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x325088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_32508c:
    // 0x32508c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_325090:
    if (ctx->pc == 0x325090u) {
        ctx->pc = 0x325090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32508Cu;
        // 0x325090: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325094u;
        goto label_325094;
    }
    ctx->pc = 0x32508Cu;
    {
        const bool branch_taken_0x32508c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x325090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32508Cu;
        // 0x325090: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32508c) {
            ctx->pc = 0x3250ACu;
            goto label_3250ac;
        }
    }
    ctx->pc = 0x325094u;
label_325094:
    // 0x325094: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_325098:
    if (ctx->pc == 0x325098u) {
        ctx->pc = 0x325098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325094u;
        // 0x325098: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32509Cu;
        goto label_32509c;
    }
    ctx->pc = 0x325094u;
    {
        const bool branch_taken_0x325094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x325098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325094u;
        // 0x325098: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325094) {
            ctx->pc = 0x3250B0u;
            goto label_3250b0;
        }
    }
    ctx->pc = 0x32509Cu;
label_32509c:
    // 0x32509c: 0xc103628  jal         func_40D8A0
label_3250a0:
    if (ctx->pc == 0x3250A0u) {
        ctx->pc = 0x3250A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32509Cu;
        // 0x3250a0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3250A4u;
        goto label_3250a4;
    }
    ctx->pc = 0x32509Cu;
    SET_GPR_U32(ctx, 31, 0x3250A4u);
    ctx->pc = 0x3250A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32509Cu;
    // 0x3250a0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x32509Cu, 0x3250A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250A4u;
label_3250a4:
    // 0x3250a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3250a8:
    if (ctx->pc == 0x3250A8u) {
        ctx->pc = 0x3250A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250A4u;
        // 0x3250a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3250ACu;
        goto label_3250ac;
    }
    ctx->pc = 0x3250A4u;
    {
        const bool branch_taken_0x3250a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3250A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250A4u;
        // 0x3250a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250a4) {
            ctx->pc = 0x3250B0u;
            goto label_3250b0;
        }
    }
    ctx->pc = 0x3250ACu;
label_3250ac:
    // 0x3250ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3250acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3250b0:
    // 0x3250b0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_3250b4:
    if (ctx->pc == 0x3250B4u) {
        ctx->pc = 0x3250B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250B0u;
        // 0x3250b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3250B8u;
        goto label_3250b8;
    }
    ctx->pc = 0x3250B0u;
    {
        const bool branch_taken_0x3250b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3250B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250B0u;
        // 0x3250b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250b0) {
            ctx->pc = 0x3251D8u;
            goto label_3251d8;
        }
    }
    ctx->pc = 0x3250B8u;
label_3250b8:
    // 0x3250b8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_3250bc:
    if (ctx->pc == 0x3250BCu) {
        ctx->pc = 0x3250BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250B8u;
        // 0x3250bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3250C0u;
        goto label_3250c0;
    }
    ctx->pc = 0x3250B8u;
    {
        const bool branch_taken_0x3250b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3250BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250B8u;
        // 0x3250bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250b8) {
            ctx->pc = 0x3250D0u;
            goto label_3250d0;
        }
    }
    ctx->pc = 0x3250C0u;
label_3250c0:
    // 0x3250c0: 0xc0c982c  jal         func_3260B0
label_3250c4:
    if (ctx->pc == 0x3250C4u) {
        ctx->pc = 0x3250C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250C0u;
        // 0x3250c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3250C8u;
        goto label_3250c8;
    }
    ctx->pc = 0x3250C0u;
    SET_GPR_U32(ctx, 31, 0x3250C8u);
    ctx->pc = 0x3250C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3250C0u;
    // 0x3250c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260B0u, 0x3250C0u, 0x3250C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250C8u;
label_3250c8:
    // 0x3250c8: 0xc10822c  jal         func_4208B0
label_3250cc:
    if (ctx->pc == 0x3250CCu) {
        ctx->pc = 0x3250CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250C8u;
        // 0x3250cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3250D0u;
        goto label_3250d0;
    }
    ctx->pc = 0x3250C8u;
    SET_GPR_U32(ctx, 31, 0x3250D0u);
    ctx->pc = 0x3250CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3250C8u;
    // 0x3250cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3250C8u, 0x3250D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250D0u;
label_3250d0:
    // 0x3250d0: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x3250d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3250d4:
    // 0x3250d4: 0xc0c9886  jal         func_326218
label_3250d8:
    if (ctx->pc == 0x3250D8u) {
        ctx->pc = 0x3250D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250D4u;
        // 0x3250d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3250DCu;
        goto label_3250dc;
    }
    ctx->pc = 0x3250D4u;
    SET_GPR_U32(ctx, 31, 0x3250DCu);
    ctx->pc = 0x3250D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3250D4u;
    // 0x3250d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326218u, 0x3250D4u, 0x3250DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250DCu;
label_3250dc:
    // 0x3250dc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3250dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3250e0:
    // 0x3250e0: 0xc0c986a  jal         func_3261A8
label_3250e4:
    if (ctx->pc == 0x3250E4u) {
        ctx->pc = 0x3250E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250E0u;
        // 0x3250e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3250E8u;
        goto label_3250e8;
    }
    ctx->pc = 0x3250E0u;
    SET_GPR_U32(ctx, 31, 0x3250E8u);
    ctx->pc = 0x3250E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3250E0u;
    // 0x3250e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3261A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3261A8u, 0x3250E0u, 0x3250E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250E8u;
label_3250e8:
    // 0x3250e8: 0x10000036  b           . + 4 + (0x36 << 2)
label_3250ec:
    if (ctx->pc == 0x3250ECu) {
        ctx->pc = 0x3250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250E8u;
        // 0x3250ec: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3250F0u;
        goto label_3250f0;
    }
    ctx->pc = 0x3250E8u;
    {
        const bool branch_taken_0x3250e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250E8u;
        // 0x3250ec: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250e8) {
            ctx->pc = 0x3251C4u;
            goto label_3251c4;
        }
    }
    ctx->pc = 0x3250F0u;
label_3250f0:
    // 0x3250f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3250f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3250f4:
    // 0x3250f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3250f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3250f8:
    // 0x3250f8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3250f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3250fc:
    // 0x3250fc: 0xc103468  jal         func_40D1A0
label_325100:
    if (ctx->pc == 0x325100u) {
        ctx->pc = 0x325100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250FCu;
        // 0x325100: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325104u;
        goto label_325104;
    }
    ctx->pc = 0x3250FCu;
    SET_GPR_U32(ctx, 31, 0x325104u);
    ctx->pc = 0x325100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3250FCu;
    // 0x325100: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3250FCu, 0x325104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325104u;
label_325104:
    // 0x325104: 0x1040ffa0  beqz        $v0, . + 4 + (-0x60 << 2)
label_325108:
    if (ctx->pc == 0x325108u) {
        ctx->pc = 0x325108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325104u;
        // 0x325108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32510Cu;
        goto label_32510c;
    }
    ctx->pc = 0x325104u;
    {
        const bool branch_taken_0x325104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325104u;
        // 0x325108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325104) {
            ctx->pc = 0x324F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324f88;
        }
    }
    ctx->pc = 0x32510Cu;
label_32510c:
    // 0x32510c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x32510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_325110:
    // 0x325110: 0xc103468  jal         func_40D1A0
label_325114:
    if (ctx->pc == 0x325114u) {
        ctx->pc = 0x325114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325110u;
        // 0x325114: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325118u;
        goto label_325118;
    }
    ctx->pc = 0x325110u;
    SET_GPR_U32(ctx, 31, 0x325118u);
    ctx->pc = 0x325114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325110u;
    // 0x325114: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x325110u, 0x325118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325118u;
label_325118:
    // 0x325118: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_32511c:
    if (ctx->pc == 0x32511Cu) {
        ctx->pc = 0x32511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325118u;
        // 0x32511c: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325120u;
        goto label_325120;
    }
    ctx->pc = 0x325118u;
    {
        const bool branch_taken_0x325118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325118u;
        // 0x32511c: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325118) {
            ctx->pc = 0x325184u;
            goto label_325184;
        }
    }
    ctx->pc = 0x325120u;
label_325120:
    // 0x325120: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_325124:
    if (ctx->pc == 0x325124u) {
        ctx->pc = 0x325124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325120u;
        // 0x325124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325128u;
        goto label_325128;
    }
    ctx->pc = 0x325120u;
    {
        const bool branch_taken_0x325120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325120u;
        // 0x325124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325120) {
            ctx->pc = 0x32518Cu;
            goto label_32518c;
        }
    }
    ctx->pc = 0x325128u;
label_325128:
    // 0x325128: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x325128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32512c:
    // 0x32512c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32512cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325130:
    // 0x325130: 0xc103322  jal         func_40CC88
label_325134:
    if (ctx->pc == 0x325134u) {
        ctx->pc = 0x325134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325130u;
        // 0x325134: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325138u;
        goto label_325138;
    }
    ctx->pc = 0x325130u;
    SET_GPR_U32(ctx, 31, 0x325138u);
    ctx->pc = 0x325134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325130u;
    // 0x325134: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x325130u, 0x325138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325138u;
label_325138:
    // 0x325138: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_32513c:
    if (ctx->pc == 0x32513Cu) {
        ctx->pc = 0x32513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325138u;
        // 0x32513c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325140u;
        goto label_325140;
    }
    ctx->pc = 0x325138u;
    {
        const bool branch_taken_0x325138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325138u;
        // 0x32513c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325138) {
            ctx->pc = 0x325190u;
            goto label_325190;
        }
    }
    ctx->pc = 0x325140u;
label_325140:
    // 0x325140: 0xc103618  jal         func_40D860
label_325144:
    if (ctx->pc == 0x325144u) {
        ctx->pc = 0x325144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325140u;
        // 0x325144: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325148u;
        goto label_325148;
    }
    ctx->pc = 0x325140u;
    SET_GPR_U32(ctx, 31, 0x325148u);
    ctx->pc = 0x325144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325140u;
    // 0x325144: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D860u, 0x325140u, 0x325148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325148u;
label_325148:
    // 0x325148: 0xc1057ca  jal         func_415F28
label_32514c:
    if (ctx->pc == 0x32514Cu) {
        ctx->pc = 0x32514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325148u;
        // 0x32514c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325150u;
        goto label_325150;
    }
    ctx->pc = 0x325148u;
    SET_GPR_U32(ctx, 31, 0x325150u);
    ctx->pc = 0x32514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325148u;
    // 0x32514c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415F28u, 0x325148u, 0x325150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325150u;
label_325150:
    // 0x325150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x325150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_325154:
    // 0x325154: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_325158:
    if (ctx->pc == 0x325158u) {
        ctx->pc = 0x325158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325154u;
        // 0x325158: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32515Cu;
        goto label_32515c;
    }
    ctx->pc = 0x325154u;
    {
        const bool branch_taken_0x325154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x325158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325154u;
        // 0x325158: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325154) {
            ctx->pc = 0x325190u;
            goto label_325190;
        }
    }
    ctx->pc = 0x32515Cu;
label_32515c:
    // 0x32515c: 0xc103618  jal         func_40D860
label_325160:
    if (ctx->pc == 0x325160u) {
        ctx->pc = 0x325160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32515Cu;
        // 0x325160: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325164u;
        goto label_325164;
    }
    ctx->pc = 0x32515Cu;
    SET_GPR_U32(ctx, 31, 0x325164u);
    ctx->pc = 0x325160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32515Cu;
    // 0x325160: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D860u, 0x32515Cu, 0x325164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325164u;
label_325164:
    // 0x325164: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x325164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_325168:
    // 0x325168: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x325168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_32516c:
    // 0x32516c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_325170:
    if (ctx->pc == 0x325170u) {
        ctx->pc = 0x325170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32516Cu;
        // 0x325170: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325174u;
        goto label_325174;
    }
    ctx->pc = 0x32516Cu;
    {
        const bool branch_taken_0x32516c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x325170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32516Cu;
        // 0x325170: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32516c) {
            ctx->pc = 0x32518Cu;
            goto label_32518c;
        }
    }
    ctx->pc = 0x325174u;
label_325174:
    // 0x325174: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_325178:
    if (ctx->pc == 0x325178u) {
        ctx->pc = 0x325178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325174u;
        // 0x325178: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32517Cu;
        goto label_32517c;
    }
    ctx->pc = 0x325174u;
    {
        const bool branch_taken_0x325174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x325178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325174u;
        // 0x325178: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325174) {
            ctx->pc = 0x325190u;
            goto label_325190;
        }
    }
    ctx->pc = 0x32517Cu;
label_32517c:
    // 0x32517c: 0xc103628  jal         func_40D8A0
label_325180:
    if (ctx->pc == 0x325180u) {
        ctx->pc = 0x325180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32517Cu;
        // 0x325180: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325184u;
        goto label_325184;
    }
    ctx->pc = 0x32517Cu;
    SET_GPR_U32(ctx, 31, 0x325184u);
    ctx->pc = 0x325180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32517Cu;
    // 0x325180: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x32517Cu, 0x325184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325184u;
label_325184:
    // 0x325184: 0x10000002  b           . + 4 + (0x2 << 2)
label_325188:
    if (ctx->pc == 0x325188u) {
        ctx->pc = 0x325188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325184u;
        // 0x325188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32518Cu;
        goto label_32518c;
    }
    ctx->pc = 0x325184u;
    {
        const bool branch_taken_0x325184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325184u;
        // 0x325188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325184) {
            ctx->pc = 0x325190u;
            goto label_325190;
        }
    }
    ctx->pc = 0x32518Cu;
label_32518c:
    // 0x32518c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32518cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_325190:
    // 0x325190: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_325194:
    if (ctx->pc == 0x325194u) {
        ctx->pc = 0x325194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325190u;
        // 0x325194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325198u;
        goto label_325198;
    }
    ctx->pc = 0x325190u;
    {
        const bool branch_taken_0x325190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325190u;
        // 0x325194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325190) {
            ctx->pc = 0x3251D8u;
            goto label_3251d8;
        }
    }
    ctx->pc = 0x325198u;
label_325198:
    // 0x325198: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_32519c:
    if (ctx->pc == 0x32519Cu) {
        ctx->pc = 0x32519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325198u;
        // 0x32519c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3251A0u;
        goto label_3251a0;
    }
    ctx->pc = 0x325198u;
    {
        const bool branch_taken_0x325198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325198u;
        // 0x32519c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325198) {
            ctx->pc = 0x3251B0u;
            goto label_3251b0;
        }
    }
    ctx->pc = 0x3251A0u;
label_3251a0:
    // 0x3251a0: 0xc0c98e2  jal         func_326388
label_3251a4:
    if (ctx->pc == 0x3251A4u) {
        ctx->pc = 0x3251A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251A0u;
        // 0x3251a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3251A8u;
        goto label_3251a8;
    }
    ctx->pc = 0x3251A0u;
    SET_GPR_U32(ctx, 31, 0x3251A8u);
    ctx->pc = 0x3251A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251A0u;
    // 0x3251a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326388u, 0x3251A0u, 0x3251A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251A8u;
label_3251a8:
    // 0x3251a8: 0xc10822c  jal         func_4208B0
label_3251ac:
    if (ctx->pc == 0x3251ACu) {
        ctx->pc = 0x3251ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251A8u;
        // 0x3251ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3251B0u;
        goto label_3251b0;
    }
    ctx->pc = 0x3251A8u;
    SET_GPR_U32(ctx, 31, 0x3251B0u);
    ctx->pc = 0x3251ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251A8u;
    // 0x3251ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3251A8u, 0x3251B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251B0u;
label_3251b0:
    // 0x3251b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3251b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3251b4:
    // 0x3251b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3251b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3251b8:
    // 0x3251b8: 0xc0c9912  jal         func_326448
label_3251bc:
    if (ctx->pc == 0x3251BCu) {
        ctx->pc = 0x3251BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251B8u;
        // 0x3251bc: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3251C0u;
        goto label_3251c0;
    }
    ctx->pc = 0x3251B8u;
    SET_GPR_U32(ctx, 31, 0x3251C0u);
    ctx->pc = 0x3251BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251B8u;
    // 0x3251bc: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326448u, 0x3251B8u, 0x3251C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251C0u;
label_3251c0:
    // 0x3251c0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x3251c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3251c4:
    // 0x3251c4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x3251c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3251c8:
    // 0x3251c8: 0x2ea30002  sltiu       $v1, $s5, 0x2
    ctx->pc = 0x3251c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3251cc:
    // 0x3251cc: 0x1460ff0a  bnez        $v1, . + 4 + (-0xF6 << 2)
label_3251d0:
    if (ctx->pc == 0x3251D0u) {
        ctx->pc = 0x3251D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251CCu;
        // 0x3251d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3251D4u;
        goto label_3251d4;
    }
    ctx->pc = 0x3251CCu;
    {
        const bool branch_taken_0x3251cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3251D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251CCu;
        // 0x3251d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251cc) {
            ctx->pc = 0x324DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324df8;
        }
    }
    ctx->pc = 0x3251D4u;
label_3251d4:
    // 0x3251d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3251d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3251d8:
    // 0x3251d8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3251d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3251dc:
    // 0x3251dc: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3251dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3251e0:
    // 0x3251e0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3251e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3251e4:
    // 0x3251e4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3251e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3251e8:
    // 0x3251e8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3251e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3251ec:
    // 0x3251ec: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x3251ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3251f0:
    // 0x3251f0: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x3251f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3251f4:
    // 0x3251f4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3251f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3251f8:
    // 0x3251f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3251f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3251fc:
    // 0x3251fc: 0x3e00008  jr          $ra
label_325200:
    if (ctx->pc == 0x325200u) {
        ctx->pc = 0x325200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251FCu;
        // 0x325200: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325204u;
        goto label_325204;
    }
    ctx->pc = 0x3251FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251FCu;
        // 0x325200: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3251FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325204u;
label_325204:
    // 0x325204: 0x0  nop
    ctx->pc = 0x325204u;
    // NOP
    ctx->pc = 0x325208u;
}
