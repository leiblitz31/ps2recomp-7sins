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

// Function: sub_00412DC8
// Address: 0x412dc8 - 0x413128
void sub_00412DC8_0x412dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412DC8_0x412dc8");
#endif

    switch (ctx->pc) {
        case 0x412dc8u: goto label_412dc8;
        case 0x412dccu: goto label_412dcc;
        case 0x412dd0u: goto label_412dd0;
        case 0x412dd4u: goto label_412dd4;
        case 0x412dd8u: goto label_412dd8;
        case 0x412ddcu: goto label_412ddc;
        case 0x412de0u: goto label_412de0;
        case 0x412de4u: goto label_412de4;
        case 0x412de8u: goto label_412de8;
        case 0x412decu: goto label_412dec;
        case 0x412df0u: goto label_412df0;
        case 0x412df4u: goto label_412df4;
        case 0x412df8u: goto label_412df8;
        case 0x412dfcu: goto label_412dfc;
        case 0x412e00u: goto label_412e00;
        case 0x412e04u: goto label_412e04;
        case 0x412e08u: goto label_412e08;
        case 0x412e0cu: goto label_412e0c;
        case 0x412e10u: goto label_412e10;
        case 0x412e14u: goto label_412e14;
        case 0x412e18u: goto label_412e18;
        case 0x412e1cu: goto label_412e1c;
        case 0x412e20u: goto label_412e20;
        case 0x412e24u: goto label_412e24;
        case 0x412e28u: goto label_412e28;
        case 0x412e2cu: goto label_412e2c;
        case 0x412e30u: goto label_412e30;
        case 0x412e34u: goto label_412e34;
        case 0x412e38u: goto label_412e38;
        case 0x412e3cu: goto label_412e3c;
        case 0x412e40u: goto label_412e40;
        case 0x412e44u: goto label_412e44;
        case 0x412e48u: goto label_412e48;
        case 0x412e4cu: goto label_412e4c;
        case 0x412e50u: goto label_412e50;
        case 0x412e54u: goto label_412e54;
        case 0x412e58u: goto label_412e58;
        case 0x412e5cu: goto label_412e5c;
        case 0x412e60u: goto label_412e60;
        case 0x412e64u: goto label_412e64;
        case 0x412e68u: goto label_412e68;
        case 0x412e6cu: goto label_412e6c;
        case 0x412e70u: goto label_412e70;
        case 0x412e74u: goto label_412e74;
        case 0x412e78u: goto label_412e78;
        case 0x412e7cu: goto label_412e7c;
        case 0x412e80u: goto label_412e80;
        case 0x412e84u: goto label_412e84;
        case 0x412e88u: goto label_412e88;
        case 0x412e8cu: goto label_412e8c;
        case 0x412e90u: goto label_412e90;
        case 0x412e94u: goto label_412e94;
        case 0x412e98u: goto label_412e98;
        case 0x412e9cu: goto label_412e9c;
        case 0x412ea0u: goto label_412ea0;
        case 0x412ea4u: goto label_412ea4;
        case 0x412ea8u: goto label_412ea8;
        case 0x412eacu: goto label_412eac;
        case 0x412eb0u: goto label_412eb0;
        case 0x412eb4u: goto label_412eb4;
        case 0x412eb8u: goto label_412eb8;
        case 0x412ebcu: goto label_412ebc;
        case 0x412ec0u: goto label_412ec0;
        case 0x412ec4u: goto label_412ec4;
        case 0x412ec8u: goto label_412ec8;
        case 0x412eccu: goto label_412ecc;
        case 0x412ed0u: goto label_412ed0;
        case 0x412ed4u: goto label_412ed4;
        case 0x412ed8u: goto label_412ed8;
        case 0x412edcu: goto label_412edc;
        case 0x412ee0u: goto label_412ee0;
        case 0x412ee4u: goto label_412ee4;
        case 0x412ee8u: goto label_412ee8;
        case 0x412eecu: goto label_412eec;
        case 0x412ef0u: goto label_412ef0;
        case 0x412ef4u: goto label_412ef4;
        case 0x412ef8u: goto label_412ef8;
        case 0x412efcu: goto label_412efc;
        case 0x412f00u: goto label_412f00;
        case 0x412f04u: goto label_412f04;
        case 0x412f08u: goto label_412f08;
        case 0x412f0cu: goto label_412f0c;
        case 0x412f10u: goto label_412f10;
        case 0x412f14u: goto label_412f14;
        case 0x412f18u: goto label_412f18;
        case 0x412f1cu: goto label_412f1c;
        case 0x412f20u: goto label_412f20;
        case 0x412f24u: goto label_412f24;
        case 0x412f28u: goto label_412f28;
        case 0x412f2cu: goto label_412f2c;
        case 0x412f30u: goto label_412f30;
        case 0x412f34u: goto label_412f34;
        case 0x412f38u: goto label_412f38;
        case 0x412f3cu: goto label_412f3c;
        case 0x412f40u: goto label_412f40;
        case 0x412f44u: goto label_412f44;
        case 0x412f48u: goto label_412f48;
        case 0x412f4cu: goto label_412f4c;
        case 0x412f50u: goto label_412f50;
        case 0x412f54u: goto label_412f54;
        case 0x412f58u: goto label_412f58;
        case 0x412f5cu: goto label_412f5c;
        case 0x412f60u: goto label_412f60;
        case 0x412f64u: goto label_412f64;
        case 0x412f68u: goto label_412f68;
        case 0x412f6cu: goto label_412f6c;
        case 0x412f70u: goto label_412f70;
        case 0x412f74u: goto label_412f74;
        case 0x412f78u: goto label_412f78;
        case 0x412f7cu: goto label_412f7c;
        case 0x412f80u: goto label_412f80;
        case 0x412f84u: goto label_412f84;
        case 0x412f88u: goto label_412f88;
        case 0x412f8cu: goto label_412f8c;
        case 0x412f90u: goto label_412f90;
        case 0x412f94u: goto label_412f94;
        case 0x412f98u: goto label_412f98;
        case 0x412f9cu: goto label_412f9c;
        case 0x412fa0u: goto label_412fa0;
        case 0x412fa4u: goto label_412fa4;
        case 0x412fa8u: goto label_412fa8;
        case 0x412facu: goto label_412fac;
        case 0x412fb0u: goto label_412fb0;
        case 0x412fb4u: goto label_412fb4;
        case 0x412fb8u: goto label_412fb8;
        case 0x412fbcu: goto label_412fbc;
        case 0x412fc0u: goto label_412fc0;
        case 0x412fc4u: goto label_412fc4;
        case 0x412fc8u: goto label_412fc8;
        case 0x412fccu: goto label_412fcc;
        case 0x412fd0u: goto label_412fd0;
        case 0x412fd4u: goto label_412fd4;
        case 0x412fd8u: goto label_412fd8;
        case 0x412fdcu: goto label_412fdc;
        case 0x412fe0u: goto label_412fe0;
        case 0x412fe4u: goto label_412fe4;
        case 0x412fe8u: goto label_412fe8;
        case 0x412fecu: goto label_412fec;
        case 0x412ff0u: goto label_412ff0;
        case 0x412ff4u: goto label_412ff4;
        case 0x412ff8u: goto label_412ff8;
        case 0x412ffcu: goto label_412ffc;
        case 0x413000u: goto label_413000;
        case 0x413004u: goto label_413004;
        case 0x413008u: goto label_413008;
        case 0x41300cu: goto label_41300c;
        case 0x413010u: goto label_413010;
        case 0x413014u: goto label_413014;
        case 0x413018u: goto label_413018;
        case 0x41301cu: goto label_41301c;
        case 0x413020u: goto label_413020;
        case 0x413024u: goto label_413024;
        case 0x413028u: goto label_413028;
        case 0x41302cu: goto label_41302c;
        case 0x413030u: goto label_413030;
        case 0x413034u: goto label_413034;
        case 0x413038u: goto label_413038;
        case 0x41303cu: goto label_41303c;
        case 0x413040u: goto label_413040;
        case 0x413044u: goto label_413044;
        case 0x413048u: goto label_413048;
        case 0x41304cu: goto label_41304c;
        case 0x413050u: goto label_413050;
        case 0x413054u: goto label_413054;
        case 0x413058u: goto label_413058;
        case 0x41305cu: goto label_41305c;
        case 0x413060u: goto label_413060;
        case 0x413064u: goto label_413064;
        case 0x413068u: goto label_413068;
        case 0x41306cu: goto label_41306c;
        case 0x413070u: goto label_413070;
        case 0x413074u: goto label_413074;
        case 0x413078u: goto label_413078;
        case 0x41307cu: goto label_41307c;
        case 0x413080u: goto label_413080;
        case 0x413084u: goto label_413084;
        case 0x413088u: goto label_413088;
        case 0x41308cu: goto label_41308c;
        case 0x413090u: goto label_413090;
        case 0x413094u: goto label_413094;
        case 0x413098u: goto label_413098;
        case 0x41309cu: goto label_41309c;
        case 0x4130a0u: goto label_4130a0;
        case 0x4130a4u: goto label_4130a4;
        case 0x4130a8u: goto label_4130a8;
        case 0x4130acu: goto label_4130ac;
        case 0x4130b0u: goto label_4130b0;
        case 0x4130b4u: goto label_4130b4;
        case 0x4130b8u: goto label_4130b8;
        case 0x4130bcu: goto label_4130bc;
        case 0x4130c0u: goto label_4130c0;
        case 0x4130c4u: goto label_4130c4;
        case 0x4130c8u: goto label_4130c8;
        case 0x4130ccu: goto label_4130cc;
        case 0x4130d0u: goto label_4130d0;
        case 0x4130d4u: goto label_4130d4;
        case 0x4130d8u: goto label_4130d8;
        case 0x4130dcu: goto label_4130dc;
        case 0x4130e0u: goto label_4130e0;
        case 0x4130e4u: goto label_4130e4;
        case 0x4130e8u: goto label_4130e8;
        case 0x4130ecu: goto label_4130ec;
        case 0x4130f0u: goto label_4130f0;
        case 0x4130f4u: goto label_4130f4;
        case 0x4130f8u: goto label_4130f8;
        case 0x4130fcu: goto label_4130fc;
        case 0x413100u: goto label_413100;
        case 0x413104u: goto label_413104;
        case 0x413108u: goto label_413108;
        case 0x41310cu: goto label_41310c;
        case 0x413110u: goto label_413110;
        case 0x413114u: goto label_413114;
        case 0x413118u: goto label_413118;
        case 0x41311cu: goto label_41311c;
        case 0x413120u: goto label_413120;
        case 0x413124u: goto label_413124;
        default: break;
    }

    ctx->pc = 0x412dc8u;

label_412dc8:
    // 0x412dc8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x412dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_412dcc:
    // 0x412dcc: 0x8f82bde0  lw          $v0, -0x4220($gp)
    ctx->pc = 0x412dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950368)));
label_412dd0:
    // 0x412dd0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x412dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_412dd4:
    // 0x412dd4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x412dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_412dd8:
    // 0x412dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x412dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_412ddc:
    // 0x412ddc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x412ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_412de0:
    // 0x412de0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x412de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_412de4:
    // 0x412de4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x412de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_412de8:
    // 0x412de8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x412de8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_412dec:
    // 0x412dec: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x412decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_412df0:
    // 0x412df0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x412df0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_412df4:
    // 0x412df4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x412df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_412df8:
    // 0x412df8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x412df8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_412dfc:
    // 0x412dfc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x412dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_412e00:
    // 0x412e00: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x412e00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_412e04:
    // 0x412e04: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x412e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_412e08:
    // 0x412e08: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x412e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_412e0c:
    // 0x412e0c: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
label_412e10:
    if (ctx->pc == 0x412E10u) {
        ctx->pc = 0x412E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E0Cu;
        // 0x412e10: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E14u;
        goto label_412e14;
    }
    ctx->pc = 0x412E0Cu;
    {
        const bool branch_taken_0x412e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E0Cu;
        // 0x412e10: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412e0c) {
            ctx->pc = 0x4130F4u;
            goto label_4130f4;
        }
    }
    ctx->pc = 0x412E14u;
label_412e14:
    // 0x412e14: 0xc1064d6  jal         func_419358
label_412e18:
    if (ctx->pc == 0x412E18u) {
        ctx->pc = 0x412E1Cu;
        goto label_412e1c;
    }
    ctx->pc = 0x412E14u;
    SET_GPR_U32(ctx, 31, 0x412E1Cu);
    ctx->pc = 0x419358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419358u, 0x412E14u, 0x412E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412E1Cu;
label_412e1c:
    // 0x412e1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_412e20:
    if (ctx->pc == 0x412E20u) {
        ctx->pc = 0x412E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E1Cu;
        // 0x412e20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E24u;
        goto label_412e24;
    }
    ctx->pc = 0x412E1Cu;
    {
        const bool branch_taken_0x412e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E1Cu;
        // 0x412e20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412e1c) {
            ctx->pc = 0x412E48u;
            goto label_412e48;
        }
    }
    ctx->pc = 0x412E24u;
label_412e24:
    // 0x412e24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x412e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_412e28:
    // 0x412e28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x412e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_412e2c:
    // 0x412e2c: 0xc1035f6  jal         func_40D7D8
label_412e30:
    if (ctx->pc == 0x412E30u) {
        ctx->pc = 0x412E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E2Cu;
        // 0x412e30: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E34u;
        goto label_412e34;
    }
    ctx->pc = 0x412E2Cu;
    SET_GPR_U32(ctx, 31, 0x412E34u);
    ctx->pc = 0x412E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412E2Cu;
    // 0x412e30: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x412E2Cu, 0x412E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412E34u;
label_412e34:
    // 0x412e34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x412e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_412e38:
    // 0x412e38: 0xc103628  jal         func_40D8A0
label_412e3c:
    if (ctx->pc == 0x412E3Cu) {
        ctx->pc = 0x412E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E38u;
        // 0x412e3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E40u;
        goto label_412e40;
    }
    ctx->pc = 0x412E38u;
    SET_GPR_U32(ctx, 31, 0x412E40u);
    ctx->pc = 0x412E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412E38u;
    // 0x412e3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x412E38u, 0x412E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412E40u;
label_412e40:
    // 0x412e40: 0x100000ad  b           . + 4 + (0xAD << 2)
label_412e44:
    if (ctx->pc == 0x412E44u) {
        ctx->pc = 0x412E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E40u;
        // 0x412e44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E48u;
        goto label_412e48;
    }
    ctx->pc = 0x412E40u;
    {
        const bool branch_taken_0x412e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E40u;
        // 0x412e44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412e40) {
            ctx->pc = 0x4130F8u;
            goto label_4130f8;
        }
    }
    ctx->pc = 0x412E48u;
label_412e48:
    // 0x412e48: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x412e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_412e4c:
    // 0x412e4c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x412e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_412e50:
    // 0x412e50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x412e50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412e54:
    // 0x412e54: 0x246305a0  addiu       $v1, $v1, 0x5A0
    ctx->pc = 0x412e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
label_412e58:
    // 0x412e58: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x412e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_412e5c:
    // 0x412e5c: 0x8c440118  lw          $a0, 0x118($v0)
    ctx->pc = 0x412e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
label_412e60:
    // 0x412e60: 0x10830058  beq         $a0, $v1, . + 4 + (0x58 << 2)
label_412e64:
    if (ctx->pc == 0x412E64u) {
        ctx->pc = 0x412E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E60u;
        // 0x412e64: 0x8f82ad58  lw          $v0, -0x52A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E68u;
        goto label_412e68;
    }
    ctx->pc = 0x412E60u;
    {
        const bool branch_taken_0x412e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x412E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E60u;
        // 0x412e64: 0x8f82ad58  lw          $v0, -0x52A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412e60) {
            ctx->pc = 0x412FC4u;
            goto label_412fc4;
        }
    }
    ctx->pc = 0x412E68u;
label_412e68:
    // 0x412e68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x412e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412e6c:
    // 0x412e6c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_412e70:
    if (ctx->pc == 0x412E70u) {
        ctx->pc = 0x412E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E6Cu;
        // 0x412e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E74u;
        goto label_412e74;
    }
    ctx->pc = 0x412E6Cu;
    {
        const bool branch_taken_0x412e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E6Cu;
        // 0x412e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412e6c) {
            ctx->pc = 0x412EA8u;
            goto label_412ea8;
        }
    }
    ctx->pc = 0x412E74u;
label_412e74:
    // 0x412e74: 0x8f83ad54  lw          $v1, -0x52AC($gp)
    ctx->pc = 0x412e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946132)));
label_412e78:
    // 0x412e78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x412e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_412e7c:
    // 0x412e7c: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_412e80:
    if (ctx->pc == 0x412E80u) {
        ctx->pc = 0x412E84u;
        goto label_412e84;
    }
    ctx->pc = 0x412E7Cu;
    {
        const bool branch_taken_0x412e7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x412e7c) {
            ctx->pc = 0x412EA8u;
            goto label_412ea8;
        }
    }
    ctx->pc = 0x412E84u;
label_412e84:
    // 0x412e84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x412e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_412e88:
    // 0x412e88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x412e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_412e8c:
    // 0x412e8c: 0x0  nop
    ctx->pc = 0x412e8cu;
    // NOP
label_412e90:
    // 0x412e90: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x412e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_412e94:
    // 0x412e94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_412e98:
    if (ctx->pc == 0x412E98u) {
        ctx->pc = 0x412E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E94u;
        // 0x412e98: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E9Cu;
        goto label_412e9c;
    }
    ctx->pc = 0x412E94u;
    {
        const bool branch_taken_0x412e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E94u;
        // 0x412e98: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412e94) {
            ctx->pc = 0x412EA8u;
            goto label_412ea8;
        }
    }
    ctx->pc = 0x412E9Cu;
label_412e9c:
    // 0x412e9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x412e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_412ea0:
    // 0x412ea0: 0x5622fffb  bnel        $s1, $v0, . + 4 + (-0x5 << 2)
label_412ea4:
    if (ctx->pc == 0x412EA4u) {
        ctx->pc = 0x412EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EA0u;
        // 0x412ea4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412EA8u;
        goto label_412ea8;
    }
    ctx->pc = 0x412EA0u;
    {
        const bool branch_taken_0x412ea0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x412ea0) {
            ctx->pc = 0x412EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412EA0u;
            // 0x412ea4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412e90;
        }
    }
    ctx->pc = 0x412EA8u;
label_412ea8:
    // 0x412ea8: 0x54850047  bnel        $a0, $a1, . + 4 + (0x47 << 2)
label_412eac:
    if (ctx->pc == 0x412EACu) {
        ctx->pc = 0x412EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EA8u;
        // 0x412eac: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412EB0u;
        goto label_412eb0;
    }
    ctx->pc = 0x412EA8u;
    {
        const bool branch_taken_0x412ea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x412ea8) {
            ctx->pc = 0x412EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412EA8u;
            // 0x412eac: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412FC8u;
            goto label_412fc8;
        }
    }
    ctx->pc = 0x412EB0u;
label_412eb0:
    // 0x412eb0: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x412eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_412eb4:
    // 0x412eb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x412eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_412eb8:
    // 0x412eb8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x412eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_412ebc:
    // 0x412ebc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x412ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_412ec0:
    // 0x412ec0: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x412ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_412ec4:
    // 0x412ec4: 0x40f809  jalr        $v0
label_412ec8:
    if (ctx->pc == 0x412EC8u) {
        ctx->pc = 0x412EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EC4u;
        // 0x412ec8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412ECCu;
        goto label_412ecc;
    }
    ctx->pc = 0x412EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412ECCu);
        ctx->pc = 0x412EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EC4u;
        // 0x412ec8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412EC4u, 0x412ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412ECCu;
label_412ecc:
    // 0x412ecc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x412eccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412ed0:
    // 0x412ed0: 0x8f82ad54  lw          $v0, -0x52AC($gp)
    ctx->pc = 0x412ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946132)));
label_412ed4:
    // 0x412ed4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_412ed8:
    if (ctx->pc == 0x412ED8u) {
        ctx->pc = 0x412ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412ED4u;
        // 0x412ed8: 0x8f88ad58  lw          $t0, -0x52A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412EDCu;
        goto label_412edc;
    }
    ctx->pc = 0x412ED4u;
    {
        const bool branch_taken_0x412ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412ED4u;
        // 0x412ed8: 0x8f88ad58  lw          $t0, -0x52A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412ed4) {
            ctx->pc = 0x412FA8u;
            goto label_412fa8;
        }
    }
    ctx->pc = 0x412EDCu;
label_412edc:
    // 0x412edc: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
label_412ee0:
    if (ctx->pc == 0x412EE0u) {
        ctx->pc = 0x412EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EDCu;
        // 0x412ee0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412EE4u;
        goto label_412ee4;
    }
    ctx->pc = 0x412EDCu;
    {
        const bool branch_taken_0x412edc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x412EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EDCu;
        // 0x412ee0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412edc) {
            ctx->pc = 0x412F94u;
            goto label_412f94;
        }
    }
    ctx->pc = 0x412EE4u;
label_412ee4:
    // 0x412ee4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x412ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412ee8:
    // 0x412ee8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x412ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_412eec:
    // 0x412eec: 0x19000012  blez        $t0, . + 4 + (0x12 << 2)
label_412ef0:
    if (ctx->pc == 0x412EF0u) {
        ctx->pc = 0x412EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EECu;
        // 0x412ef0: 0x31040003  andi        $a0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x412EF4u;
        goto label_412ef4;
    }
    ctx->pc = 0x412EECu;
    {
        const bool branch_taken_0x412eec = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x412EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EECu;
        // 0x412ef0: 0x31040003  andi        $a0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x412eec) {
            ctx->pc = 0x412F38u;
            goto label_412f38;
        }
    }
    ctx->pc = 0x412EF4u;
label_412ef4:
    // 0x412ef4: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_412ef8:
    if (ctx->pc == 0x412EF8u) {
        ctx->pc = 0x412EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EF4u;
        // 0x412ef8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x412EFCu;
        goto label_412efc;
    }
    ctx->pc = 0x412EF4u;
    {
        const bool branch_taken_0x412ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x412EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EF4u;
        // 0x412ef8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x412ef4) {
            ctx->pc = 0x412F54u;
            goto label_412f54;
        }
    }
    ctx->pc = 0x412EFCu;
label_412efc:
    // 0x412efc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_412f00:
    if (ctx->pc == 0x412F00u) {
        ctx->pc = 0x412F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EFCu;
        // 0x412f00: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F04u;
        goto label_412f04;
    }
    ctx->pc = 0x412EFCu;
    {
        const bool branch_taken_0x412efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x412efc) {
            ctx->pc = 0x412F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412EFCu;
            // 0x412f00: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412F3Cu;
            goto label_412f3c;
        }
    }
    ctx->pc = 0x412F04u;
label_412f04:
    // 0x412f04: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x412f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_412f08:
    // 0x412f08: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_412f0c:
    if (ctx->pc == 0x412F0Cu) {
        ctx->pc = 0x412F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F08u;
        // 0x412f0c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F10u;
        goto label_412f10;
    }
    ctx->pc = 0x412F08u;
    {
        const bool branch_taken_0x412f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x412f08) {
            ctx->pc = 0x412F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412F08u;
            // 0x412f0c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412F28u;
            goto label_412f28;
        }
    }
    ctx->pc = 0x412F10u;
label_412f10:
    // 0x412f10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x412f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_412f14:
    // 0x412f14: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x412f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_412f18:
    // 0x412f18: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x412f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_412f1c:
    // 0x412f1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x412f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412f20:
    // 0x412f20: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x412f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_412f24:
    // 0x412f24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x412f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_412f28:
    // 0x412f28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x412f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_412f2c:
    // 0x412f2c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x412f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_412f30:
    // 0x412f30: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x412f30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_412f34:
    // 0x412f34: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x412f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_412f38:
    // 0x412f38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x412f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_412f3c:
    // 0x412f3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x412f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_412f40:
    // 0x412f40: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x412f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_412f44:
    // 0x412f44: 0x208382b  sltu        $a3, $s0, $t0
    ctx->pc = 0x412f44u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_412f48:
    // 0x412f48: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x412f48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_412f4c:
    // 0x412f4c: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
label_412f50:
    if (ctx->pc == 0x412F50u) {
        ctx->pc = 0x412F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F4Cu;
        // 0x412f50: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F54u;
        goto label_412f54;
    }
    ctx->pc = 0x412F4Cu;
    {
        const bool branch_taken_0x412f4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x412F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F4Cu;
        // 0x412f50: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412f4c) {
            ctx->pc = 0x412F94u;
            goto label_412f94;
        }
    }
    ctx->pc = 0x412F54u;
label_412f54:
    // 0x412f54: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x412f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_412f58:
    // 0x412f58: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x412f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_412f5c:
    // 0x412f5c: 0x0  nop
    ctx->pc = 0x412f5cu;
    // NOP
label_412f60:
    // 0x412f60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x412f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_412f64:
    // 0x412f64: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x412f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_412f68:
    // 0x412f68: 0x208382b  sltu        $a3, $s0, $t0
    ctx->pc = 0x412f68u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_412f6c:
    // 0x412f6c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x412f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_412f70:
    // 0x412f70: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x412f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_412f74:
    // 0x412f74: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x412f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_412f78:
    // 0x412f78: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x412f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_412f7c:
    // 0x412f7c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x412f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_412f80:
    // 0x412f80: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x412f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_412f84:
    // 0x412f84: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x412f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_412f88:
    // 0x412f88: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x412f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_412f8c:
    // 0x412f8c: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
label_412f90:
    if (ctx->pc == 0x412F90u) {
        ctx->pc = 0x412F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F8Cu;
        // 0x412f90: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F94u;
        goto label_412f94;
    }
    ctx->pc = 0x412F8Cu;
    {
        const bool branch_taken_0x412f8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x412F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F8Cu;
        // 0x412f90: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412f8c) {
            ctx->pc = 0x412F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412f60;
        }
    }
    ctx->pc = 0x412F94u;
label_412f94:
    // 0x412f94: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x412f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_412f98:
    // 0x412f98: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x412f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_412f9c:
    // 0x412f9c: 0x40f809  jalr        $v0
label_412fa0:
    if (ctx->pc == 0x412FA0u) {
        ctx->pc = 0x412FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F9Cu;
        // 0x412fa0: 0x8f84ad54  lw          $a0, -0x52AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412FA4u;
        goto label_412fa4;
    }
    ctx->pc = 0x412F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412FA4u);
        ctx->pc = 0x412FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F9Cu;
        // 0x412fa0: 0x8f84ad54  lw          $a0, -0x52AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412F9Cu, 0x412FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412FA4u;
label_412fa4:
    // 0x412fa4: 0xaf80ad54  sw          $zero, -0x52AC($gp)
    ctx->pc = 0x412fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946132), GPR_U32(ctx, 0));
label_412fa8:
    // 0x412fa8: 0x8f83ad58  lw          $v1, -0x52A8($gp)
    ctx->pc = 0x412fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946136)));
label_412fac:
    // 0x412fac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x412facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_412fb0:
    // 0x412fb0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x412fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_412fb4:
    // 0x412fb4: 0xaf92ad54  sw          $s2, -0x52AC($gp)
    ctx->pc = 0x412fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946132), GPR_U32(ctx, 18));
label_412fb8:
    // 0x412fb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x412fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_412fbc:
    // 0x412fbc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x412fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_412fc0:
    // 0x412fc0: 0xaf83ad58  sw          $v1, -0x52A8($gp)
    ctx->pc = 0x412fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946136), GPR_U32(ctx, 3));
label_412fc4:
    // 0x412fc4: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x412fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_412fc8:
    // 0x412fc8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_412fcc:
    if (ctx->pc == 0x412FCCu) {
        ctx->pc = 0x412FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412FC8u;
        // 0x412fcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412FD0u;
        goto label_412fd0;
    }
    ctx->pc = 0x412FC8u;
    {
        const bool branch_taken_0x412fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x412FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412FC8u;
        // 0x412fcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412fc8) {
            ctx->pc = 0x413010u;
            goto label_413010;
        }
    }
    ctx->pc = 0x412FD0u;
label_412fd0:
    // 0x412fd0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x412fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_412fd4:
    // 0x412fd4: 0x0  nop
    ctx->pc = 0x412fd4u;
    // NOP
label_412fd8:
    // 0x412fd8: 0x5453000b  bnel        $v0, $s3, . + 4 + (0xB << 2)
label_412fdc:
    if (ctx->pc == 0x412FDCu) {
        ctx->pc = 0x412FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412FD8u;
        // 0x412fdc: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412FE0u;
        goto label_412fe0;
    }
    ctx->pc = 0x412FD8u;
    {
        const bool branch_taken_0x412fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x412fd8) {
            ctx->pc = 0x412FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412FD8u;
            // 0x412fdc: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413008u;
            goto label_413008;
        }
    }
    ctx->pc = 0x412FE0u;
label_412fe0:
    // 0x412fe0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x412fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_412fe4:
    // 0x412fe4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x412fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_412fe8:
    // 0x412fe8: 0xc1035f6  jal         func_40D7D8
label_412fec:
    if (ctx->pc == 0x412FECu) {
        ctx->pc = 0x412FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412FE8u;
        // 0x412fec: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        ctx->pc = 0x412FF0u;
        goto label_412ff0;
    }
    ctx->pc = 0x412FE8u;
    SET_GPR_U32(ctx, 31, 0x412FF0u);
    ctx->pc = 0x412FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412FE8u;
    // 0x412fec: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x412FE8u, 0x412FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412FF0u;
label_412ff0:
    // 0x412ff0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x412ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_412ff4:
    // 0x412ff4: 0xc103628  jal         func_40D8A0
label_412ff8:
    if (ctx->pc == 0x412FF8u) {
        ctx->pc = 0x412FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412FF4u;
        // 0x412ff8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412FFCu;
        goto label_412ffc;
    }
    ctx->pc = 0x412FF4u;
    SET_GPR_U32(ctx, 31, 0x412FFCu);
    ctx->pc = 0x412FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412FF4u;
    // 0x412ff8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x412FF4u, 0x412FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412FFCu;
label_412ffc:
    // 0x412ffc: 0x0  nop
    ctx->pc = 0x412ffcu;
    // NOP
label_413000:
    // 0x413000: 0x1000003d  b           . + 4 + (0x3D << 2)
label_413004:
    if (ctx->pc == 0x413004u) {
        ctx->pc = 0x413004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413000u;
        // 0x413004: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413008u;
        goto label_413008;
    }
    ctx->pc = 0x413000u;
    {
        const bool branch_taken_0x413000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413000u;
        // 0x413004: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413000) {
            ctx->pc = 0x4130F8u;
            goto label_4130f8;
        }
    }
    ctx->pc = 0x413008u;
label_413008:
    // 0x413008: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
label_41300c:
    if (ctx->pc == 0x41300Cu) {
        ctx->pc = 0x41300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413008u;
        // 0x41300c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413010u;
        goto label_413010;
    }
    ctx->pc = 0x413008u;
    {
        const bool branch_taken_0x413008 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x413008) {
            ctx->pc = 0x41300Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413008u;
            // 0x41300c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412fd8;
        }
    }
    ctx->pc = 0x413010u;
label_413010:
    // 0x413010: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x413010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_413014:
    // 0x413014: 0x26a20003  addiu       $v0, $s5, 0x3
    ctx->pc = 0x413014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
label_413018:
    // 0x413018: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x413018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_41301c:
    // 0x41301c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x41301cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_413020:
    // 0x413020: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x413020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_413024:
    // 0x413024: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_413028:
    if (ctx->pc == 0x413028u) {
        ctx->pc = 0x413028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413024u;
        // 0x413028: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41302Cu;
        goto label_41302c;
    }
    ctx->pc = 0x413024u;
    {
        const bool branch_taken_0x413024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x413028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413024u;
        // 0x413028: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413024) {
            ctx->pc = 0x413038u;
            goto label_413038;
        }
    }
    ctx->pc = 0x41302Cu;
label_41302c:
    // 0x41302c: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x41302cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_413030:
    // 0x413030: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_413034:
    if (ctx->pc == 0x413034u) {
        ctx->pc = 0x413034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413030u;
        // 0x413034: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413038u;
        goto label_413038;
    }
    ctx->pc = 0x413030u;
    {
        const bool branch_taken_0x413030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x413034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413030u;
        // 0x413034: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413030) {
            ctx->pc = 0x4130F8u;
            goto label_4130f8;
        }
    }
    ctx->pc = 0x413038u;
label_413038:
    // 0x413038: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x413038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_41303c:
    // 0x41303c: 0x8f84bde0  lw          $a0, -0x4220($gp)
    ctx->pc = 0x41303cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950368)));
label_413040:
    // 0x413040: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x413040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_413044:
    // 0x413044: 0x40f809  jalr        $v0
label_413048:
    if (ctx->pc == 0x413048u) {
        ctx->pc = 0x413048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413044u;
        // 0x413048: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41304Cu;
        goto label_41304c;
    }
    ctx->pc = 0x413044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41304Cu);
        ctx->pc = 0x413048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413044u;
        // 0x413048: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413044u, 0x41304Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41304Cu;
label_41304c:
    // 0x41304c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41304cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_413050:
    // 0x413050: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
label_413054:
    if (ctx->pc == 0x413054u) {
        ctx->pc = 0x413054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413050u;
        // 0x413054: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413058u;
        goto label_413058;
    }
    ctx->pc = 0x413050u;
    {
        const bool branch_taken_0x413050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x413054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413050u;
        // 0x413054: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413050) {
            ctx->pc = 0x4130F4u;
            goto label_4130f4;
        }
    }
    ctx->pc = 0x413058u;
label_413058:
    // 0x413058: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x413058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41305c:
    // 0x41305c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x41305cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_413060:
    // 0x413060: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x413060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_413064:
    // 0x413064: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x413064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_413068:
    // 0x413068: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x413068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
label_41306c:
    // 0x41306c: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x41306cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_413070:
    // 0x413070: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x413070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_413074:
    // 0x413074: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x413074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_413078:
    // 0x413078: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x413078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_41307c:
    // 0x41307c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_413080:
    if (ctx->pc == 0x413080u) {
        ctx->pc = 0x413080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41307Cu;
        // 0x413080: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413084u;
        goto label_413084;
    }
    ctx->pc = 0x41307Cu;
    {
        const bool branch_taken_0x41307c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x413080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41307Cu;
        // 0x413080: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41307c) {
            ctx->pc = 0x41308Cu;
            goto label_41308c;
        }
    }
    ctx->pc = 0x413084u;
label_413084:
    // 0x413084: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x413084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_413088:
    // 0x413088: 0x244733b0  addiu       $a3, $v0, 0x33B0
    ctx->pc = 0x413088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13232));
label_41308c:
    // 0x41308c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x41308cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_413090:
    // 0x413090: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_413094:
    if (ctx->pc == 0x413094u) {
        ctx->pc = 0x413094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413090u;
        // 0x413094: 0xae070020  sw          $a3, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413098u;
        goto label_413098;
    }
    ctx->pc = 0x413090u;
    {
        const bool branch_taken_0x413090 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x413094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413090u;
        // 0x413094: 0xae070020  sw          $a3, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413090) {
            ctx->pc = 0x4130A0u;
            goto label_4130a0;
        }
    }
    ctx->pc = 0x413098u;
label_413098:
    // 0x413098: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x413098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_41309c:
    // 0x41309c: 0x244833b8  addiu       $t0, $v0, 0x33B8
    ctx->pc = 0x41309cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 13240));
label_4130a0:
    // 0x4130a0: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x4130a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4130a4:
    // 0x4130a4: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_4130a8:
    if (ctx->pc == 0x4130A8u) {
        ctx->pc = 0x4130A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130A4u;
        // 0x4130a8: 0xae080024  sw          $t0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4130ACu;
        goto label_4130ac;
    }
    ctx->pc = 0x4130A4u;
    {
        const bool branch_taken_0x4130a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4130A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130A4u;
        // 0x4130a8: 0xae080024  sw          $t0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4130a4) {
            ctx->pc = 0x4130B4u;
            goto label_4130b4;
        }
    }
    ctx->pc = 0x4130ACu;
label_4130ac:
    // 0x4130ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x4130acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_4130b0:
    // 0x4130b0: 0x244933c0  addiu       $t1, $v0, 0x33C0
    ctx->pc = 0x4130b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 13248));
label_4130b4:
    // 0x4130b4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x4130b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_4130b8:
    // 0x4130b8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x4130b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_4130bc:
    // 0x4130bc: 0xae090028  sw          $t1, 0x28($s0)
    ctx->pc = 0x4130bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 9));
label_4130c0:
    // 0x4130c0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4130c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4130c4:
    // 0x4130c4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x4130c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_4130c8:
    // 0x4130c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4130cc:
    if (ctx->pc == 0x4130CCu) {
        ctx->pc = 0x4130CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130C8u;
        // 0x4130cc: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4130D0u;
        goto label_4130d0;
    }
    ctx->pc = 0x4130C8u;
    {
        const bool branch_taken_0x4130c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4130CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130C8u;
        // 0x4130cc: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4130c8) {
            ctx->pc = 0x4130DCu;
            goto label_4130dc;
        }
    }
    ctx->pc = 0x4130D0u;
label_4130d0:
    // 0x4130d0: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x4130d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_4130d4:
    // 0x4130d4: 0x1000ffca  b           . + 4 + (-0x36 << 2)
label_4130d8:
    if (ctx->pc == 0x4130D8u) {
        ctx->pc = 0x4130D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130D4u;
        // 0x4130d8: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4130DCu;
        goto label_4130dc;
    }
    ctx->pc = 0x4130D4u;
    {
        const bool branch_taken_0x4130d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4130D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130D4u;
        // 0x4130d8: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4130d4) {
            ctx->pc = 0x413000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413000;
        }
    }
    ctx->pc = 0x4130DCu;
label_4130dc:
    // 0x4130dc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4130dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4130e0:
    // 0x4130e0: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x4130e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_4130e4:
    // 0x4130e4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x4130e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4130e8:
    // 0x4130e8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x4130e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_4130ec:
    // 0x4130ec: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_4130f0:
    if (ctx->pc == 0x4130F0u) {
        ctx->pc = 0x4130F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130ECu;
        // 0x4130f0: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4130F4u;
        goto label_4130f4;
    }
    ctx->pc = 0x4130ECu;
    {
        const bool branch_taken_0x4130ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4130F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130ECu;
        // 0x4130f0: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4130ec) {
            ctx->pc = 0x413000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413000;
        }
    }
    ctx->pc = 0x4130F4u;
label_4130f4:
    // 0x4130f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4130f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4130f8:
    // 0x4130f8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4130f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4130fc:
    // 0x4130fc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4130fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_413100:
    // 0x413100: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x413100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_413104:
    // 0x413104: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x413104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_413108:
    // 0x413108: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x413108u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41310c:
    // 0x41310c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x41310cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_413110:
    // 0x413110: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x413110u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_413114:
    // 0x413114: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x413114u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_413118:
    // 0x413118: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x413118u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41311c:
    // 0x41311c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41311cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_413120:
    // 0x413120: 0x3e00008  jr          $ra
label_413124:
    if (ctx->pc == 0x413124u) {
        ctx->pc = 0x413124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413120u;
        // 0x413124: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413128u;
        goto label_fallthrough_0x413120;
    }
    ctx->pc = 0x413120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413120u;
        // 0x413124: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x413120:
    ctx->pc = 0x413128u;
}
