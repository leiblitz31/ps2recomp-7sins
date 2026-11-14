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

// Function: sub_00343CD8
// Address: 0x343cd8 - 0x344150
void sub_00343CD8_0x343cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343CD8_0x343cd8");
#endif

    switch (ctx->pc) {
        case 0x343cd8u: goto label_343cd8;
        case 0x343cdcu: goto label_343cdc;
        case 0x343ce0u: goto label_343ce0;
        case 0x343ce4u: goto label_343ce4;
        case 0x343ce8u: goto label_343ce8;
        case 0x343cecu: goto label_343cec;
        case 0x343cf0u: goto label_343cf0;
        case 0x343cf4u: goto label_343cf4;
        case 0x343cf8u: goto label_343cf8;
        case 0x343cfcu: goto label_343cfc;
        case 0x343d00u: goto label_343d00;
        case 0x343d04u: goto label_343d04;
        case 0x343d08u: goto label_343d08;
        case 0x343d0cu: goto label_343d0c;
        case 0x343d10u: goto label_343d10;
        case 0x343d14u: goto label_343d14;
        case 0x343d18u: goto label_343d18;
        case 0x343d1cu: goto label_343d1c;
        case 0x343d20u: goto label_343d20;
        case 0x343d24u: goto label_343d24;
        case 0x343d28u: goto label_343d28;
        case 0x343d2cu: goto label_343d2c;
        case 0x343d30u: goto label_343d30;
        case 0x343d34u: goto label_343d34;
        case 0x343d38u: goto label_343d38;
        case 0x343d3cu: goto label_343d3c;
        case 0x343d40u: goto label_343d40;
        case 0x343d44u: goto label_343d44;
        case 0x343d48u: goto label_343d48;
        case 0x343d4cu: goto label_343d4c;
        case 0x343d50u: goto label_343d50;
        case 0x343d54u: goto label_343d54;
        case 0x343d58u: goto label_343d58;
        case 0x343d5cu: goto label_343d5c;
        case 0x343d60u: goto label_343d60;
        case 0x343d64u: goto label_343d64;
        case 0x343d68u: goto label_343d68;
        case 0x343d6cu: goto label_343d6c;
        case 0x343d70u: goto label_343d70;
        case 0x343d74u: goto label_343d74;
        case 0x343d78u: goto label_343d78;
        case 0x343d7cu: goto label_343d7c;
        case 0x343d80u: goto label_343d80;
        case 0x343d84u: goto label_343d84;
        case 0x343d88u: goto label_343d88;
        case 0x343d8cu: goto label_343d8c;
        case 0x343d90u: goto label_343d90;
        case 0x343d94u: goto label_343d94;
        case 0x343d98u: goto label_343d98;
        case 0x343d9cu: goto label_343d9c;
        case 0x343da0u: goto label_343da0;
        case 0x343da4u: goto label_343da4;
        case 0x343da8u: goto label_343da8;
        case 0x343dacu: goto label_343dac;
        case 0x343db0u: goto label_343db0;
        case 0x343db4u: goto label_343db4;
        case 0x343db8u: goto label_343db8;
        case 0x343dbcu: goto label_343dbc;
        case 0x343dc0u: goto label_343dc0;
        case 0x343dc4u: goto label_343dc4;
        case 0x343dc8u: goto label_343dc8;
        case 0x343dccu: goto label_343dcc;
        case 0x343dd0u: goto label_343dd0;
        case 0x343dd4u: goto label_343dd4;
        case 0x343dd8u: goto label_343dd8;
        case 0x343ddcu: goto label_343ddc;
        case 0x343de0u: goto label_343de0;
        case 0x343de4u: goto label_343de4;
        case 0x343de8u: goto label_343de8;
        case 0x343decu: goto label_343dec;
        case 0x343df0u: goto label_343df0;
        case 0x343df4u: goto label_343df4;
        case 0x343df8u: goto label_343df8;
        case 0x343dfcu: goto label_343dfc;
        case 0x343e00u: goto label_343e00;
        case 0x343e04u: goto label_343e04;
        case 0x343e08u: goto label_343e08;
        case 0x343e0cu: goto label_343e0c;
        case 0x343e10u: goto label_343e10;
        case 0x343e14u: goto label_343e14;
        case 0x343e18u: goto label_343e18;
        case 0x343e1cu: goto label_343e1c;
        case 0x343e20u: goto label_343e20;
        case 0x343e24u: goto label_343e24;
        case 0x343e28u: goto label_343e28;
        case 0x343e2cu: goto label_343e2c;
        case 0x343e30u: goto label_343e30;
        case 0x343e34u: goto label_343e34;
        case 0x343e38u: goto label_343e38;
        case 0x343e3cu: goto label_343e3c;
        case 0x343e40u: goto label_343e40;
        case 0x343e44u: goto label_343e44;
        case 0x343e48u: goto label_343e48;
        case 0x343e4cu: goto label_343e4c;
        case 0x343e50u: goto label_343e50;
        case 0x343e54u: goto label_343e54;
        case 0x343e58u: goto label_343e58;
        case 0x343e5cu: goto label_343e5c;
        case 0x343e60u: goto label_343e60;
        case 0x343e64u: goto label_343e64;
        case 0x343e68u: goto label_343e68;
        case 0x343e6cu: goto label_343e6c;
        case 0x343e70u: goto label_343e70;
        case 0x343e74u: goto label_343e74;
        case 0x343e78u: goto label_343e78;
        case 0x343e7cu: goto label_343e7c;
        case 0x343e80u: goto label_343e80;
        case 0x343e84u: goto label_343e84;
        case 0x343e88u: goto label_343e88;
        case 0x343e8cu: goto label_343e8c;
        case 0x343e90u: goto label_343e90;
        case 0x343e94u: goto label_343e94;
        case 0x343e98u: goto label_343e98;
        case 0x343e9cu: goto label_343e9c;
        case 0x343ea0u: goto label_343ea0;
        case 0x343ea4u: goto label_343ea4;
        case 0x343ea8u: goto label_343ea8;
        case 0x343eacu: goto label_343eac;
        case 0x343eb0u: goto label_343eb0;
        case 0x343eb4u: goto label_343eb4;
        case 0x343eb8u: goto label_343eb8;
        case 0x343ebcu: goto label_343ebc;
        case 0x343ec0u: goto label_343ec0;
        case 0x343ec4u: goto label_343ec4;
        case 0x343ec8u: goto label_343ec8;
        case 0x343eccu: goto label_343ecc;
        case 0x343ed0u: goto label_343ed0;
        case 0x343ed4u: goto label_343ed4;
        case 0x343ed8u: goto label_343ed8;
        case 0x343edcu: goto label_343edc;
        case 0x343ee0u: goto label_343ee0;
        case 0x343ee4u: goto label_343ee4;
        case 0x343ee8u: goto label_343ee8;
        case 0x343eecu: goto label_343eec;
        case 0x343ef0u: goto label_343ef0;
        case 0x343ef4u: goto label_343ef4;
        case 0x343ef8u: goto label_343ef8;
        case 0x343efcu: goto label_343efc;
        case 0x343f00u: goto label_343f00;
        case 0x343f04u: goto label_343f04;
        case 0x343f08u: goto label_343f08;
        case 0x343f0cu: goto label_343f0c;
        case 0x343f10u: goto label_343f10;
        case 0x343f14u: goto label_343f14;
        case 0x343f18u: goto label_343f18;
        case 0x343f1cu: goto label_343f1c;
        case 0x343f20u: goto label_343f20;
        case 0x343f24u: goto label_343f24;
        case 0x343f28u: goto label_343f28;
        case 0x343f2cu: goto label_343f2c;
        case 0x343f30u: goto label_343f30;
        case 0x343f34u: goto label_343f34;
        case 0x343f38u: goto label_343f38;
        case 0x343f3cu: goto label_343f3c;
        case 0x343f40u: goto label_343f40;
        case 0x343f44u: goto label_343f44;
        case 0x343f48u: goto label_343f48;
        case 0x343f4cu: goto label_343f4c;
        case 0x343f50u: goto label_343f50;
        case 0x343f54u: goto label_343f54;
        case 0x343f58u: goto label_343f58;
        case 0x343f5cu: goto label_343f5c;
        case 0x343f60u: goto label_343f60;
        case 0x343f64u: goto label_343f64;
        case 0x343f68u: goto label_343f68;
        case 0x343f6cu: goto label_343f6c;
        case 0x343f70u: goto label_343f70;
        case 0x343f74u: goto label_343f74;
        case 0x343f78u: goto label_343f78;
        case 0x343f7cu: goto label_343f7c;
        case 0x343f80u: goto label_343f80;
        case 0x343f84u: goto label_343f84;
        case 0x343f88u: goto label_343f88;
        case 0x343f8cu: goto label_343f8c;
        case 0x343f90u: goto label_343f90;
        case 0x343f94u: goto label_343f94;
        case 0x343f98u: goto label_343f98;
        case 0x343f9cu: goto label_343f9c;
        case 0x343fa0u: goto label_343fa0;
        case 0x343fa4u: goto label_343fa4;
        case 0x343fa8u: goto label_343fa8;
        case 0x343facu: goto label_343fac;
        case 0x343fb0u: goto label_343fb0;
        case 0x343fb4u: goto label_343fb4;
        case 0x343fb8u: goto label_343fb8;
        case 0x343fbcu: goto label_343fbc;
        case 0x343fc0u: goto label_343fc0;
        case 0x343fc4u: goto label_343fc4;
        case 0x343fc8u: goto label_343fc8;
        case 0x343fccu: goto label_343fcc;
        case 0x343fd0u: goto label_343fd0;
        case 0x343fd4u: goto label_343fd4;
        case 0x343fd8u: goto label_343fd8;
        case 0x343fdcu: goto label_343fdc;
        case 0x343fe0u: goto label_343fe0;
        case 0x343fe4u: goto label_343fe4;
        case 0x343fe8u: goto label_343fe8;
        case 0x343fecu: goto label_343fec;
        case 0x343ff0u: goto label_343ff0;
        case 0x343ff4u: goto label_343ff4;
        case 0x343ff8u: goto label_343ff8;
        case 0x343ffcu: goto label_343ffc;
        case 0x344000u: goto label_344000;
        case 0x344004u: goto label_344004;
        case 0x344008u: goto label_344008;
        case 0x34400cu: goto label_34400c;
        case 0x344010u: goto label_344010;
        case 0x344014u: goto label_344014;
        case 0x344018u: goto label_344018;
        case 0x34401cu: goto label_34401c;
        case 0x344020u: goto label_344020;
        case 0x344024u: goto label_344024;
        case 0x344028u: goto label_344028;
        case 0x34402cu: goto label_34402c;
        case 0x344030u: goto label_344030;
        case 0x344034u: goto label_344034;
        case 0x344038u: goto label_344038;
        case 0x34403cu: goto label_34403c;
        case 0x344040u: goto label_344040;
        case 0x344044u: goto label_344044;
        case 0x344048u: goto label_344048;
        case 0x34404cu: goto label_34404c;
        case 0x344050u: goto label_344050;
        case 0x344054u: goto label_344054;
        case 0x344058u: goto label_344058;
        case 0x34405cu: goto label_34405c;
        case 0x344060u: goto label_344060;
        case 0x344064u: goto label_344064;
        case 0x344068u: goto label_344068;
        case 0x34406cu: goto label_34406c;
        case 0x344070u: goto label_344070;
        case 0x344074u: goto label_344074;
        case 0x344078u: goto label_344078;
        case 0x34407cu: goto label_34407c;
        case 0x344080u: goto label_344080;
        case 0x344084u: goto label_344084;
        case 0x344088u: goto label_344088;
        case 0x34408cu: goto label_34408c;
        case 0x344090u: goto label_344090;
        case 0x344094u: goto label_344094;
        case 0x344098u: goto label_344098;
        case 0x34409cu: goto label_34409c;
        case 0x3440a0u: goto label_3440a0;
        case 0x3440a4u: goto label_3440a4;
        case 0x3440a8u: goto label_3440a8;
        case 0x3440acu: goto label_3440ac;
        case 0x3440b0u: goto label_3440b0;
        case 0x3440b4u: goto label_3440b4;
        case 0x3440b8u: goto label_3440b8;
        case 0x3440bcu: goto label_3440bc;
        case 0x3440c0u: goto label_3440c0;
        case 0x3440c4u: goto label_3440c4;
        case 0x3440c8u: goto label_3440c8;
        case 0x3440ccu: goto label_3440cc;
        case 0x3440d0u: goto label_3440d0;
        case 0x3440d4u: goto label_3440d4;
        case 0x3440d8u: goto label_3440d8;
        case 0x3440dcu: goto label_3440dc;
        case 0x3440e0u: goto label_3440e0;
        case 0x3440e4u: goto label_3440e4;
        case 0x3440e8u: goto label_3440e8;
        case 0x3440ecu: goto label_3440ec;
        case 0x3440f0u: goto label_3440f0;
        case 0x3440f4u: goto label_3440f4;
        case 0x3440f8u: goto label_3440f8;
        case 0x3440fcu: goto label_3440fc;
        case 0x344100u: goto label_344100;
        case 0x344104u: goto label_344104;
        case 0x344108u: goto label_344108;
        case 0x34410cu: goto label_34410c;
        case 0x344110u: goto label_344110;
        case 0x344114u: goto label_344114;
        case 0x344118u: goto label_344118;
        case 0x34411cu: goto label_34411c;
        case 0x344120u: goto label_344120;
        case 0x344124u: goto label_344124;
        case 0x344128u: goto label_344128;
        case 0x34412cu: goto label_34412c;
        case 0x344130u: goto label_344130;
        case 0x344134u: goto label_344134;
        case 0x344138u: goto label_344138;
        case 0x34413cu: goto label_34413c;
        case 0x344140u: goto label_344140;
        case 0x344144u: goto label_344144;
        case 0x344148u: goto label_344148;
        case 0x34414cu: goto label_34414c;
        default: break;
    }

    ctx->pc = 0x343cd8u;

label_343cd8:
    // 0x343cd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x343cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_343cdc:
    // 0x343cdc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x343cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_343ce0:
    // 0x343ce0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x343ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_343ce4:
    // 0x343ce4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x343ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_343ce8:
    // 0x343ce8: 0x2470c2c8  addiu       $s0, $v1, -0x3D38
    ctx->pc = 0x343ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
label_343cec:
    // 0x343cec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x343cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_343cf0:
    // 0x343cf0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x343cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_343cf4:
    // 0x343cf4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x343cf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_343cf8:
    // 0x343cf8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x343cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_343cfc:
    // 0x343cfc: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x343cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_343d00:
    // 0x343d00: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x343d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_343d04:
    // 0x343d04: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x343d04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_343d08:
    // 0x343d08: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x343d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_343d0c:
    // 0x343d0c: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x343d0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_343d10:
    // 0x343d10: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x343d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_343d14:
    // 0x343d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_343d18:
    // 0x343d18: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x343d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_343d1c:
    // 0x343d1c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x343d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_343d20:
    // 0x343d20: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_343d24:
    if (ctx->pc == 0x343D24u) {
        ctx->pc = 0x343D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D20u;
        // 0x343d24: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D28u;
        goto label_343d28;
    }
    ctx->pc = 0x343D20u;
    {
        const bool branch_taken_0x343d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D20u;
        // 0x343d24: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d20) {
            ctx->pc = 0x343D58u;
            goto label_343d58;
        }
    }
    ctx->pc = 0x343D28u;
label_343d28:
    // 0x343d28: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x343d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_343d2c:
    // 0x343d2c: 0x3c060104  lui         $a2, 0x104
    ctx->pc = 0x343d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
label_343d30:
    // 0x343d30: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x343d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_343d34:
    // 0x343d34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x343d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_343d38:
    // 0x343d38: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x343d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_343d3c:
    // 0x343d3c: 0x40f809  jalr        $v0
label_343d40:
    if (ctx->pc == 0x343D40u) {
        ctx->pc = 0x343D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D3Cu;
        // 0x343d40: 0x34c60130  ori         $a2, $a2, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D44u;
        goto label_343d44;
    }
    ctx->pc = 0x343D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343D44u);
        ctx->pc = 0x343D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D3Cu;
        // 0x343d40: 0x34c60130  ori         $a2, $a2, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343D3Cu, 0x343D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343D44u;
label_343d44:
    // 0x343d44: 0x504000f6  beql        $v0, $zero, . + 4 + (0xF6 << 2)
label_343d48:
    if (ctx->pc == 0x343D48u) {
        ctx->pc = 0x343D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D44u;
        // 0x343d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D4Cu;
        goto label_343d4c;
    }
    ctx->pc = 0x343D44u;
    {
        const bool branch_taken_0x343d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343d44) {
            ctx->pc = 0x343D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343D44u;
            // 0x343d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344120u;
            goto label_344120;
        }
    }
    ctx->pc = 0x343D4Cu;
label_343d4c:
    // 0x343d4c: 0xae120084  sw          $s2, 0x84($s0)
    ctx->pc = 0x343d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 18));
label_343d50:
    // 0x343d50: 0x10000002  b           . + 4 + (0x2 << 2)
label_343d54:
    if (ctx->pc == 0x343D54u) {
        ctx->pc = 0x343D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D50u;
        // 0x343d54: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D58u;
        goto label_343d58;
    }
    ctx->pc = 0x343D50u;
    {
        const bool branch_taken_0x343d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D50u;
        // 0x343d54: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d50) {
            ctx->pc = 0x343D5Cu;
            goto label_343d5c;
        }
    }
    ctx->pc = 0x343D58u;
label_343d58:
    // 0x343d58: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x343d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_343d5c:
    // 0x343d5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x343d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343d60:
    // 0x343d60: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_343d64:
    if (ctx->pc == 0x343D64u) {
        ctx->pc = 0x343D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D60u;
        // 0x343d64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D68u;
        goto label_343d68;
    }
    ctx->pc = 0x343D60u;
    {
        const bool branch_taken_0x343d60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x343D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D60u;
        // 0x343d64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d60) {
            ctx->pc = 0x343D70u;
            goto label_343d70;
        }
    }
    ctx->pc = 0x343D68u;
label_343d68:
    // 0x343d68: 0x100000ed  b           . + 4 + (0xED << 2)
label_343d6c:
    if (ctx->pc == 0x343D6Cu) {
        ctx->pc = 0x343D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D68u;
        // 0x343d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D70u;
        goto label_343d70;
    }
    ctx->pc = 0x343D68u;
    {
        const bool branch_taken_0x343d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D68u;
        // 0x343d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d68) {
            ctx->pc = 0x344120u;
            goto label_344120;
        }
    }
    ctx->pc = 0x343D70u;
label_343d70:
    // 0x343d70: 0x1a80004c  blez        $s4, . + 4 + (0x4C << 2)
label_343d74:
    if (ctx->pc == 0x343D74u) {
        ctx->pc = 0x343D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D70u;
        // 0x343d74: 0x26850001  addiu       $a1, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D78u;
        goto label_343d78;
    }
    ctx->pc = 0x343D70u;
    {
        const bool branch_taken_0x343d70 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x343D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D70u;
        // 0x343d74: 0x26850001  addiu       $a1, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d70) {
            ctx->pc = 0x343EA4u;
            goto label_343ea4;
        }
    }
    ctx->pc = 0x343D78u;
label_343d78:
    // 0x343d78: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x343d78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_343d7c:
    // 0x343d7c: 0x141023  negu        $v0, $s4
    ctx->pc = 0x343d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_343d80:
    // 0x343d80: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x343d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_343d84:
    // 0x343d84: 0x3529fff0  ori         $t1, $t1, 0xFFF0
    ctx->pc = 0x343d84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65520);
label_343d88:
    // 0x343d88: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x343d88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343d8c:
    // 0x343d8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x343d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_343d90:
    // 0x343d90: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x343d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343d94:
    // 0x343d94: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_343d98:
    if (ctx->pc == 0x343D98u) {
        ctx->pc = 0x343D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D94u;
        // 0x343d98: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D9Cu;
        goto label_343d9c;
    }
    ctx->pc = 0x343D94u;
    {
        const bool branch_taken_0x343d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x343D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D94u;
        // 0x343d98: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d94) {
            ctx->pc = 0x343E28u;
            goto label_343e28;
        }
    }
    ctx->pc = 0x343D9Cu;
label_343d9c:
    // 0x343d9c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x343d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_343da0:
    // 0x343da0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_343da4:
    if (ctx->pc == 0x343DA4u) {
        ctx->pc = 0x343DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DA0u;
        // 0x343da4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x343DA8u;
        goto label_343da8;
    }
    ctx->pc = 0x343DA0u;
    {
        const bool branch_taken_0x343da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DA0u;
        // 0x343da4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x343da0) {
            ctx->pc = 0x343DFCu;
            goto label_343dfc;
        }
    }
    ctx->pc = 0x343DA8u;
label_343da8:
    // 0x343da8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_343dac:
    if (ctx->pc == 0x343DACu) {
        ctx->pc = 0x343DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DA8u;
        // 0x343dac: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343DB0u;
        goto label_343db0;
    }
    ctx->pc = 0x343DA8u;
    {
        const bool branch_taken_0x343da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343da8) {
            ctx->pc = 0x343DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343DA8u;
            // 0x343dac: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343DD8u;
            goto label_343dd8;
        }
    }
    ctx->pc = 0x343DB0u;
label_343db0:
    // 0x343db0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x343db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_343db4:
    // 0x343db4: 0x26c80004  addiu       $t0, $s6, 0x4
    ctx->pc = 0x343db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_343db8:
    // 0x343db8: 0x26660004  addiu       $a2, $s3, 0x4
    ctx->pc = 0x343db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_343dbc:
    // 0x343dbc: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x343dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_343dc0:
    // 0x343dc0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x343dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_343dc4:
    // 0x343dc4: 0x268affff  addiu       $t2, $s4, -0x1
    ctx->pc = 0x343dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_343dc8:
    // 0x343dc8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x343dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_343dcc:
    // 0x343dcc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x343dccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_343dd0:
    // 0x343dd0: 0x8ed10000  lw          $s1, 0x0($s6)
    ctx->pc = 0x343dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_343dd4:
    // 0x343dd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x343dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_343dd8:
    // 0x343dd8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x343dd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_343ddc:
    // 0x343ddc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x343ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_343de0:
    // 0x343de0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x343de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_343de4:
    // 0x343de4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x343de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_343de8:
    // 0x343de8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x343de8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_343dec:
    // 0x343dec: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x343decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_343df0:
    // 0x343df0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x343df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_343df4:
    // 0x343df4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x343df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_343df8:
    // 0x343df8: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x343df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_343dfc:
    // 0x343dfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x343dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_343e00:
    // 0x343e00: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x343e00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_343e04:
    // 0x343e04: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x343e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_343e08:
    // 0x343e08: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x343e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_343e0c:
    // 0x343e0c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x343e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_343e10:
    // 0x343e10: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x343e10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_343e14:
    // 0x343e14: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x343e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_343e18:
    // 0x343e18: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x343e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_343e1c:
    // 0x343e1c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x343e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_343e20:
    // 0x343e20: 0x11400020  beqz        $t2, . + 4 + (0x20 << 2)
label_343e24:
    if (ctx->pc == 0x343E24u) {
        ctx->pc = 0x343E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E20u;
        // 0x343e24: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343E28u;
        goto label_343e28;
    }
    ctx->pc = 0x343E20u;
    {
        const bool branch_taken_0x343e20 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x343E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E20u;
        // 0x343e24: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e20) {
            ctx->pc = 0x343EA4u;
            goto label_343ea4;
        }
    }
    ctx->pc = 0x343E28u;
label_343e28:
    // 0x343e28: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x343e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_343e2c:
    // 0x343e2c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x343e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_343e30:
    // 0x343e30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x343e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_343e34:
    // 0x343e34: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x343e34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
label_343e38:
    // 0x343e38: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x343e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_343e3c:
    // 0x343e3c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x343e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_343e40:
    // 0x343e40: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x343e40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_343e44:
    // 0x343e44: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x343e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_343e48:
    // 0x343e48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x343e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_343e4c:
    // 0x343e4c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x343e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_343e50:
    // 0x343e50: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x343e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_343e54:
    // 0x343e54: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x343e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_343e58:
    // 0x343e58: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x343e58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_343e5c:
    // 0x343e5c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x343e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_343e60:
    // 0x343e60: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x343e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_343e64:
    // 0x343e64: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x343e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_343e68:
    // 0x343e68: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x343e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_343e6c:
    // 0x343e6c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x343e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_343e70:
    // 0x343e70: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x343e70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_343e74:
    // 0x343e74: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x343e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_343e78:
    // 0x343e78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x343e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_343e7c:
    // 0x343e7c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x343e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_343e80:
    // 0x343e80: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x343e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_343e84:
    // 0x343e84: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x343e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_343e88:
    // 0x343e88: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x343e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_343e8c:
    // 0x343e8c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x343e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_343e90:
    // 0x343e90: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x343e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_343e94:
    // 0x343e94: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x343e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_343e98:
    // 0x343e98: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x343e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_343e9c:
    // 0x343e9c: 0x1540ffe4  bnez        $t2, . + 4 + (-0x1C << 2)
label_343ea0:
    if (ctx->pc == 0x343EA0u) {
        ctx->pc = 0x343EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E9Cu;
        // 0x343ea0: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343EA4u;
        goto label_343ea4;
    }
    ctx->pc = 0x343E9Cu;
    {
        const bool branch_taken_0x343e9c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x343EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E9Cu;
        // 0x343ea0: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e9c) {
            ctx->pc = 0x343E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343e30;
        }
    }
    ctx->pc = 0x343EA4u;
label_343ea4:
    // 0x343ea4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x343ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_343ea8:
    // 0x343ea8: 0x111280  sll         $v0, $s1, 10
    ctx->pc = 0x343ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 10));
label_343eac:
    // 0x343eac: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x343eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_343eb0:
    // 0x343eb0: 0x112283  sra         $a0, $s1, 10
    ctx->pc = 0x343eb0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 10));
label_343eb4:
    // 0x343eb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x343eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_343eb8:
    // 0x343eb8: 0x24b20037  addiu       $s2, $a1, 0x37
    ctx->pc = 0x343eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 55));
label_343ebc:
    // 0x343ebc: 0x448825  or          $s1, $v0, $a0
    ctx->pc = 0x343ebcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_343ec0:
    // 0x343ec0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x343ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_343ec4:
    // 0x343ec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343ec8:
    // 0x343ec8: 0xc0d124c  jal         func_344930
label_343ecc:
    if (ctx->pc == 0x343ECCu) {
        ctx->pc = 0x343ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EC8u;
        // 0x343ecc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343ED0u;
        goto label_343ed0;
    }
    ctx->pc = 0x343EC8u;
    SET_GPR_U32(ctx, 31, 0x343ED0u);
    ctx->pc = 0x343ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343EC8u;
    // 0x343ecc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344930u, 0x343EC8u, 0x343ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343ED0u;
label_343ed0:
    // 0x343ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x343ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343ed4:
    // 0x343ed4: 0x5600008f  bnel        $s0, $zero, . + 4 + (0x8F << 2)
label_343ed8:
    if (ctx->pc == 0x343ED8u) {
        ctx->pc = 0x343ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343ED4u;
        // 0x343ed8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343EDCu;
        goto label_343edc;
    }
    ctx->pc = 0x343ED4u;
    {
        const bool branch_taken_0x343ed4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x343ed4) {
            ctx->pc = 0x343ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343ED4u;
            // 0x343ed8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344114u;
            goto label_344114;
        }
    }
    ctx->pc = 0x343EDCu;
label_343edc:
    // 0x343edc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x343edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_343ee0:
    // 0x343ee0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x343ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_343ee4:
    // 0x343ee4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x343ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_343ee8:
    // 0x343ee8: 0x34a50130  ori         $a1, $a1, 0x130
    ctx->pc = 0x343ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
label_343eec:
    // 0x343eec: 0x40f809  jalr        $v0
label_343ef0:
    if (ctx->pc == 0x343EF0u) {
        ctx->pc = 0x343EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EECu;
        // 0x343ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343EF4u;
        goto label_343ef4;
    }
    ctx->pc = 0x343EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343EF4u);
        ctx->pc = 0x343EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EECu;
        // 0x343ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343EECu, 0x343EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343EF4u;
label_343ef4:
    // 0x343ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x343ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343ef8:
    // 0x343ef8: 0x10a00088  beqz        $a1, . + 4 + (0x88 << 2)
label_343efc:
    if (ctx->pc == 0x343EFCu) {
        ctx->pc = 0x343EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EF8u;
        // 0x343efc: 0x24a4000f  addiu       $a0, $a1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343F00u;
        goto label_343f00;
    }
    ctx->pc = 0x343EF8u;
    {
        const bool branch_taken_0x343ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x343EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EF8u;
        // 0x343efc: 0x24a4000f  addiu       $a0, $a1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ef8) {
            ctx->pc = 0x34411Cu;
            goto label_34411c;
        }
    }
    ctx->pc = 0x343F00u;
label_343f00:
    // 0x343f00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x343f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_343f04:
    // 0x343f04: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x343f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_343f08:
    // 0x343f08: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x343f08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_343f0c:
    // 0x343f0c: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x343f0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_343f10:
    // 0x343f10: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x343f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_343f14:
    // 0x343f14: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x343f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_343f18:
    // 0x343f18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343f1c:
    // 0x343f1c: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x343f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_343f20:
    // 0x343f20: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x343f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_343f24:
    // 0x343f24: 0x1033821  addu        $a3, $t0, $v1
    ctx->pc = 0x343f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_343f28:
    // 0x343f28: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x343f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_343f2c:
    // 0x343f2c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x343f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_343f30:
    // 0x343f30: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x343f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_343f34:
    // 0x343f34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x343f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343f38:
    // 0x343f38: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x343f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_343f3c:
    // 0x343f3c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x343f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_343f40:
    // 0x343f40: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x343f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
label_343f44:
    // 0x343f44: 0xc0bb778  jal         func_2EDDE0
label_343f48:
    if (ctx->pc == 0x343F48u) {
        ctx->pc = 0x343F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F44u;
        // 0x343f48: 0xae070020  sw          $a3, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343F4Cu;
        goto label_343f4c;
    }
    ctx->pc = 0x343F44u;
    SET_GPR_U32(ctx, 31, 0x343F4Cu);
    ctx->pc = 0x343F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F44u;
    // 0x343f48: 0xae070020  sw          $a3, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x343F44u, 0x343F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F4Cu;
label_343f4c:
    // 0x343f4c: 0x8e0d0020  lw          $t5, 0x20($s0)
    ctx->pc = 0x343f4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_343f50:
    // 0x343f50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343f54:
    // 0x343f54: 0x8e090024  lw          $t1, 0x24($s0)
    ctx->pc = 0x343f54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_343f58:
    // 0x343f58: 0x1a800061  blez        $s4, . + 4 + (0x61 << 2)
label_343f5c:
    if (ctx->pc == 0x343F5Cu) {
        ctx->pc = 0x343F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F58u;
        // 0x343f5c: 0x8e0c001c  lw          $t4, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343F60u;
        goto label_343f60;
    }
    ctx->pc = 0x343F58u;
    {
        const bool branch_taken_0x343f58 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x343F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F58u;
        // 0x343f5c: 0x8e0c001c  lw          $t4, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f58) {
            ctx->pc = 0x3440E0u;
            goto label_3440e0;
        }
    }
    ctx->pc = 0x343F60u;
label_343f60:
    // 0x343f60: 0x141023  negu        $v0, $s4
    ctx->pc = 0x343f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_343f64:
    // 0x343f64: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x343f64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343f68:
    // 0x343f68: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x343f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_343f6c:
    // 0x343f6c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x343f6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_343f70:
    // 0x343f70: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x343f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_343f74:
    // 0x343f74: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x343f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_343f78:
    // 0x343f78: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x343f78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_343f7c:
    // 0x343f7c: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_343f80:
    if (ctx->pc == 0x343F80u) {
        ctx->pc = 0x343F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F7Cu;
        // 0x343f80: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343F84u;
        goto label_343f84;
    }
    ctx->pc = 0x343F7Cu;
    {
        const bool branch_taken_0x343f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x343F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F7Cu;
        // 0x343f80: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f7c) {
            ctx->pc = 0x344040u;
            goto label_344040;
        }
    }
    ctx->pc = 0x343F84u;
label_343f84:
    // 0x343f84: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x343f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_343f88:
    // 0x343f88: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_343f8c:
    if (ctx->pc == 0x343F8Cu) {
        ctx->pc = 0x343F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F88u;
        // 0x343f8c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x343F90u;
        goto label_343f90;
    }
    ctx->pc = 0x343F88u;
    {
        const bool branch_taken_0x343f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F88u;
        // 0x343f8c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f88) {
            ctx->pc = 0x344004u;
            goto label_344004;
        }
    }
    ctx->pc = 0x343F90u;
label_343f90:
    // 0x343f90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_343f94:
    if (ctx->pc == 0x343F94u) {
        ctx->pc = 0x343F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F90u;
        // 0x343f94: 0x25820004  addiu       $v0, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343F98u;
        goto label_343f98;
    }
    ctx->pc = 0x343F90u;
    {
        const bool branch_taken_0x343f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F90u;
        // 0x343f94: 0x25820004  addiu       $v0, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f90) {
            ctx->pc = 0x343FCCu;
            goto label_343fcc;
        }
    }
    ctx->pc = 0x343F98u;
label_343f98:
    // 0x343f98: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x343f98u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
label_343f9c:
    // 0x343f9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x343f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343fa0:
    // 0x343fa0: 0x25ab0004  addiu       $t3, $t5, 0x4
    ctx->pc = 0x343fa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_343fa4:
    // 0x343fa4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x343fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_343fa8:
    // 0x343fa8: 0x25280004  addiu       $t0, $t1, 0x4
    ctx->pc = 0x343fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_343fac:
    // 0x343fac: 0x26a70004  addiu       $a3, $s5, 0x4
    ctx->pc = 0x343facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_343fb0:
    // 0x343fb0: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x343fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_343fb4:
    // 0x343fb4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x343fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_343fb8:
    // 0x343fb8: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x343fb8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_343fbc:
    // 0x343fbc: 0x268affff  addiu       $t2, $s4, -0x1
    ctx->pc = 0x343fbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_343fc0:
    // 0x343fc0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x343fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_343fc4:
    // 0x343fc4: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x343fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_343fc8:
    // 0x343fc8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x343fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_343fcc:
    // 0x343fcc: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x343fccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_343fd0:
    // 0x343fd0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x343fd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_343fd4:
    // 0x343fd4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x343fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_343fd8:
    // 0x343fd8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x343fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_343fdc:
    // 0x343fdc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x343fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_343fe0:
    // 0x343fe0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x343fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_343fe4:
    // 0x343fe4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x343fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_343fe8:
    // 0x343fe8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x343fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_343fec:
    // 0x343fec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x343fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_343ff0:
    // 0x343ff0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x343ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_343ff4:
    // 0x343ff4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x343ff4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_343ff8:
    // 0x343ff8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x343ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_343ffc:
    // 0x343ffc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x343ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_344000:
    // 0x344000: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x344000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_344004:
    // 0x344004: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x344004u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_344008:
    // 0x344008: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x344008u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_34400c:
    // 0x34400c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x34400cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_344010:
    // 0x344010: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x344010u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_344014:
    // 0x344014: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x344014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_344018:
    // 0x344018: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x344018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_34401c:
    // 0x34401c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x34401cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_344020:
    // 0x344020: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x344020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_344024:
    // 0x344024: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x344024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_344028:
    // 0x344028: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x344028u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_34402c:
    // 0x34402c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x34402cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_344030:
    // 0x344030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x344030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_344034:
    // 0x344034: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x344034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_344038:
    // 0x344038: 0x11400029  beqz        $t2, . + 4 + (0x29 << 2)
label_34403c:
    if (ctx->pc == 0x34403Cu) {
        ctx->pc = 0x34403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344038u;
        // 0x34403c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344040u;
        goto label_344040;
    }
    ctx->pc = 0x344038u;
    {
        const bool branch_taken_0x344038 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x34403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344038u;
        // 0x34403c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344038) {
            ctx->pc = 0x3440E0u;
            goto label_3440e0;
        }
    }
    ctx->pc = 0x344040u;
label_344040:
    // 0x344040: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x344040u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_344044:
    // 0x344044: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x344044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_344048:
    // 0x344048: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x344048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_34404c:
    // 0x34404c: 0x0  nop
    ctx->pc = 0x34404cu;
    // NOP
label_344050:
    // 0x344050: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x344050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_344054:
    // 0x344054: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x344054u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
label_344058:
    // 0x344058: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x344058u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
label_34405c:
    // 0x34405c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x34405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_344060:
    // 0x344060: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x344060u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_344064:
    // 0x344064: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x344064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_344068:
    // 0x344068: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x344068u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_34406c:
    // 0x34406c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x34406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_344070:
    // 0x344070: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x344070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_344074:
    // 0x344074: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x344074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_344078:
    // 0x344078: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x344078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_34407c:
    // 0x34407c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x34407cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_344080:
    // 0x344080: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x344080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_344084:
    // 0x344084: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x344084u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_344088:
    // 0x344088: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x344088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_34408c:
    // 0x34408c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x34408cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_344090:
    // 0x344090: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x344090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_344094:
    // 0x344094: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x344094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_344098:
    // 0x344098: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x344098u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_34409c:
    // 0x34409c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3440a0:
    // 0x3440a0: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x3440a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_3440a4:
    // 0x3440a4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3440a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3440a8:
    // 0x3440a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3440a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3440ac:
    // 0x3440ac: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x3440acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
label_3440b0:
    // 0x3440b0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3440b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3440b4:
    // 0x3440b4: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x3440b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_3440b8:
    // 0x3440b8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x3440b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_3440bc:
    // 0x3440bc: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x3440bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_3440c0:
    // 0x3440c0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3440c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_3440c4:
    // 0x3440c4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3440c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3440c8:
    // 0x3440c8: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x3440c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_3440cc:
    // 0x3440cc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3440ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_3440d0:
    // 0x3440d0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3440d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3440d4:
    // 0x3440d4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3440d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3440d8:
    // 0x3440d8: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
label_3440dc:
    if (ctx->pc == 0x3440DCu) {
        ctx->pc = 0x3440DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3440D8u;
        // 0x3440dc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3440E0u;
        goto label_3440e0;
    }
    ctx->pc = 0x3440D8u;
    {
        const bool branch_taken_0x3440d8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3440DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3440D8u;
        // 0x3440dc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3440d8) {
            ctx->pc = 0x344050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344050;
        }
    }
    ctx->pc = 0x3440E0u;
label_3440e0:
    // 0x3440e0: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x3440e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
label_3440e4:
    // 0x3440e4: 0x26e2c2c8  addiu       $v0, $s7, -0x3D38
    ctx->pc = 0x3440e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951624));
label_3440e8:
    // 0x3440e8: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x3440e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
label_3440ec:
    // 0x3440ec: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x3440ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_3440f0:
    // 0x3440f0: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x3440f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
label_3440f4:
    // 0x3440f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3440f8:
    if (ctx->pc == 0x3440F8u) {
        ctx->pc = 0x3440F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3440F4u;
        // 0x3440f8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3440FCu;
        goto label_3440fc;
    }
    ctx->pc = 0x3440F4u;
    {
        const bool branch_taken_0x3440f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3440F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3440F4u;
        // 0x3440f8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3440f4) {
            ctx->pc = 0x34410Cu;
            goto label_34410c;
        }
    }
    ctx->pc = 0x3440FCu;
label_3440fc:
    // 0x3440fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3440fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_344100:
    // 0x344100: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x344100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_344104:
    // 0x344104: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x344104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_344108:
    // 0x344108: 0x26e2c2c8  addiu       $v0, $s7, -0x3D38
    ctx->pc = 0x344108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951624));
label_34410c:
    // 0x34410c: 0x10000003  b           . + 4 + (0x3 << 2)
label_344110:
    if (ctx->pc == 0x344110u) {
        ctx->pc = 0x344110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34410Cu;
        // 0x344110: 0xac500068  sw          $s0, 0x68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344114u;
        goto label_344114;
    }
    ctx->pc = 0x34410Cu;
    {
        const bool branch_taken_0x34410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34410Cu;
        // 0x344110: 0xac500068  sw          $s0, 0x68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34410c) {
            ctx->pc = 0x34411Cu;
            goto label_34411c;
        }
    }
    ctx->pc = 0x344114u;
label_344114:
    // 0x344114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x344114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_344118:
    // 0x344118: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x344118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_34411c:
    // 0x34411c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34411cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_344120:
    // 0x344120: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x344120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_344124:
    // 0x344124: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x344124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_344128:
    // 0x344128: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x344128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_34412c:
    // 0x34412c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x34412cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_344130:
    // 0x344130: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x344130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_344134:
    // 0x344134: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x344134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_344138:
    // 0x344138: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x344138u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34413c:
    // 0x34413c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x34413cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_344140:
    // 0x344140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344144:
    // 0x344144: 0x3e00008  jr          $ra
label_344148:
    if (ctx->pc == 0x344148u) {
        ctx->pc = 0x344148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344144u;
        // 0x344148: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34414Cu;
        goto label_34414c;
    }
    ctx->pc = 0x344144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344144u;
        // 0x344148: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34414Cu;
label_34414c:
    // 0x34414c: 0x0  nop
    ctx->pc = 0x34414cu;
    // NOP
    ctx->pc = 0x344150u;
}
