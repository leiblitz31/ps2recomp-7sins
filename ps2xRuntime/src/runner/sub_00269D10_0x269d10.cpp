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

// Function: sub_00269D10
// Address: 0x269d10 - 0x26a0b0
void sub_00269D10_0x269d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269D10_0x269d10");
#endif

    switch (ctx->pc) {
        case 0x269d54u: goto label_269d54;
        case 0x269d7cu: goto label_269d7c;
        case 0x269d90u: goto label_269d90;
        case 0x269d9cu: goto label_269d9c;
        case 0x269dacu: goto label_269dac;
        case 0x269ddcu: goto label_269ddc;
        case 0x269df0u: goto label_269df0;
        case 0x269e00u: goto label_269e00;
        case 0x269e10u: goto label_269e10;
        case 0x269e1cu: goto label_269e1c;
        case 0x269e38u: goto label_269e38;
        case 0x269e4cu: goto label_269e4c;
        case 0x269e70u: goto label_269e70;
        case 0x269e80u: goto label_269e80;
        case 0x269eb0u: goto label_269eb0;
        case 0x269ed0u: goto label_269ed0;
        case 0x269edcu: goto label_269edc;
        case 0x269ee8u: goto label_269ee8;
        case 0x269ef8u: goto label_269ef8;
        case 0x269f10u: goto label_269f10;
        case 0x269f28u: goto label_269f28;
        case 0x269f38u: goto label_269f38;
        case 0x26a020u: goto label_26a020;
        case 0x26a044u: goto label_26a044;
        case 0x26a050u: goto label_26a050;
        case 0x26a068u: goto label_26a068;
        case 0x26a078u: goto label_26a078;
        default: break;
    }

    ctx->pc = 0x269d10u;

    // 0x269d10: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x269d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x269d14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x269d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x269d18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x269d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x269d1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x269d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x269d20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x269d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x269d24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x269d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x269d28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x269d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x269d2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x269d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x269d30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x269d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x269d34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x269d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x269d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269d3c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x269d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x269d40: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x269d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x269d44: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x269d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x269d48: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x269d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x269d4c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x269D4Cu;
    SET_GPR_U32(ctx, 31, 0x269D54u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x269D4Cu, 0x269D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D54u;
label_269d54:
    // 0x269d54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269D54u;
    {
        const bool branch_taken_0x269d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269d54) {
            ctx->pc = 0x269D68u;
            goto label_269d68;
        }
    }
    ctx->pc = 0x269D5Cu;
    // 0x269d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269d60: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x269D60u;
    {
        const bool branch_taken_0x269d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d60) {
            ctx->pc = 0x26A07Cu;
            goto label_26a07c;
        }
    }
    ctx->pc = 0x269D68u;
label_269d68:
    // 0x269d68: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x269d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x269d6c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x269d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x269d70: 0x24a5cdb0  addiu       $a1, $a1, -0x3250
    ctx->pc = 0x269d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
    // 0x269d74: 0xc040304  jal         func_100C10
    ctx->pc = 0x269D74u;
    SET_GPR_U32(ctx, 31, 0x269D7Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x269D74u, 0x269D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D7Cu;
label_269d7c:
    // 0x269d7c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x269d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x269d80: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x269d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x269d84: 0x24450048  addiu       $a1, $v0, 0x48
    ctx->pc = 0x269d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x269d88: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x269D88u;
    SET_GPR_U32(ctx, 31, 0x269D90u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x269D88u, 0x269D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D90u;
label_269d90:
    // 0x269d90: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x269d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x269d94: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x269D94u;
    SET_GPR_U32(ctx, 31, 0x269D9Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x269D94u, 0x269D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D9Cu;
label_269d9c:
    // 0x269d9c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x269d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x269da0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x269da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269da4: 0xc040304  jal         func_100C10
    ctx->pc = 0x269DA4u;
    SET_GPR_U32(ctx, 31, 0x269DACu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x269DA4u, 0x269DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269DACu;
label_269dac:
    // 0x269dac: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x269dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x269db0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x269db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269db4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269DB4u;
    {
        const bool branch_taken_0x269db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269db4) {
            ctx->pc = 0x269DC8u;
            goto label_269dc8;
        }
    }
    ctx->pc = 0x269DBCu;
    // 0x269dbc: 0x2793a0d0  addiu       $s3, $gp, -0x5F30
    ctx->pc = 0x269dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942928));
    // 0x269dc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269DC0u;
    {
        const bool branch_taken_0x269dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269dc0) {
            ctx->pc = 0x269DCCu;
            goto label_269dcc;
        }
    }
    ctx->pc = 0x269DC8u;
label_269dc8:
    // 0x269dc8: 0x2793a0cc  addiu       $s3, $gp, -0x5F34
    ctx->pc = 0x269dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942924));
label_269dcc:
    // 0x269dcc: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x269dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x269dd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x269dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269dd4: 0xc040304  jal         func_100C10
    ctx->pc = 0x269DD4u;
    SET_GPR_U32(ctx, 31, 0x269DDCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x269DD4u, 0x269DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269DDCu;
label_269ddc:
    // 0x269ddc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x269ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x269de0: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x269de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x269de4: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x269de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x269de8: 0xc119d74  jal         func_4675D0
    ctx->pc = 0x269DE8u;
    SET_GPR_U32(ctx, 31, 0x269DF0u);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x269DE8u, 0x269DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269DF0u;
label_269df0:
    // 0x269df0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x269df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x269df4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x269df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x269df8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x269DF8u;
    SET_GPR_U32(ctx, 31, 0x269E00u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x269DF8u, 0x269E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E00u;
label_269e00:
    // 0x269e00: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x269e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x269e04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x269e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x269e08: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x269E08u;
    SET_GPR_U32(ctx, 31, 0x269E10u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x269E08u, 0x269E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E10u;
label_269e10:
    // 0x269e10: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x269e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x269e14: 0xc119db4  jal         func_4676D0
    ctx->pc = 0x269E14u;
    SET_GPR_U32(ctx, 31, 0x269E1Cu);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x269E14u, 0x269E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E1Cu;
label_269e1c:
    // 0x269e1c: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x269E1Cu;
    {
        const bool branch_taken_0x269e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e1c) {
            ctx->pc = 0x26A050u;
            goto label_26a050;
        }
    }
    ctx->pc = 0x269E24u;
    // 0x269e24: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x269e24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269e28: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x269e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x269e2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x269e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269e30: 0xc08ec98  jal         func_23B260
    ctx->pc = 0x269E30u;
    SET_GPR_U32(ctx, 31, 0x269E38u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x269E30u, 0x269E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E38u;
label_269e38:
    // 0x269e38: 0xafb600ec  sw          $s6, 0xEC($sp)
    ctx->pc = 0x269e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 22));
    // 0x269e3c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x269e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x269e40: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x269e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x269e44: 0xc0422a8  jal         func_108AA0
    ctx->pc = 0x269E44u;
    SET_GPR_U32(ctx, 31, 0x269E4Cu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x269E44u, 0x269E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E4Cu;
label_269e4c:
    // 0x269e4c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x269e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x269e50: 0x56082b  sltu        $at, $v0, $s6
    ctx->pc = 0x269e50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x269e54: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x269E54u;
    {
        const bool branch_taken_0x269e54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e54) {
            ctx->pc = 0x269E8Cu;
            goto label_269e8c;
        }
    }
    ctx->pc = 0x269E5Cu;
    // 0x269e5c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x269e5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269e60: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x269e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x269e64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x269e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x269e68: 0xc119d90  jal         func_467640
    ctx->pc = 0x269E68u;
    SET_GPR_U32(ctx, 31, 0x269E70u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x269E68u, 0x269E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E70u;
label_269e70:
    // 0x269e70: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x269e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x269e74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x269e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x269e78: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x269E78u;
    SET_GPR_U32(ctx, 31, 0x269E80u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x269E78u, 0x269E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E80u;
label_269e80:
    // 0x269e80: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x269e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269e84: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x269E84u;
    {
        const bool branch_taken_0x269e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e84) {
            ctx->pc = 0x26A07Cu;
            goto label_26a07c;
        }
    }
    ctx->pc = 0x269E8Cu;
label_269e8c:
    // 0x269e8c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x269e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x269e90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x269e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269e94: 0x10620067  beq         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x269E94u;
    {
        const bool branch_taken_0x269e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x269e94) {
            ctx->pc = 0x26A034u;
            goto label_26a034;
        }
    }
    ctx->pc = 0x269E9Cu;
    // 0x269e9c: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x269e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x269ea0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x269ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x269ea4: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x269ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x269ea8: 0xc0422a8  jal         func_108AA0
    ctx->pc = 0x269EA8u;
    SET_GPR_U32(ctx, 31, 0x269EB0u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x269EA8u, 0x269EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269EB0u;
label_269eb0:
    // 0x269eb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x269eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269eb4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x269eb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269eb8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x269eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x269ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x269ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ec0: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x269ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x269ec4: 0x24c6cdc8  addiu       $a2, $a2, -0x3238
    ctx->pc = 0x269ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954440));
    // 0x269ec8: 0xc08d48c  jal         func_235230
    ctx->pc = 0x269EC8u;
    SET_GPR_U32(ctx, 31, 0x269ED0u);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x269EC8u, 0x269ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269ED0u;
label_269ed0:
    // 0x269ed0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x269ed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ed4: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x269ED4u;
    {
        const bool branch_taken_0x269ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269ed4) {
            ctx->pc = 0x26A024u;
            goto label_26a024;
        }
    }
    ctx->pc = 0x269EDCu;
label_269edc:
    // 0x269edc: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x269edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x269ee0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x269EE0u;
    SET_GPR_U32(ctx, 31, 0x269EE8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x269EE0u, 0x269EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269EE8u;
label_269ee8:
    // 0x269ee8: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x269ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x269eec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x269eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ef0: 0xc0400e0  jal         func_100380
    ctx->pc = 0x269EF0u;
    SET_GPR_U32(ctx, 31, 0x269EF8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x269EF0u, 0x269EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269EF8u;
label_269ef8:
    // 0x269ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269efc: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x269EFCu;
    {
        const bool branch_taken_0x269efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x269efc) {
            ctx->pc = 0x269F14u;
            goto label_269f14;
        }
    }
    ctx->pc = 0x269F04u;
    // 0x269f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f08: 0xc0995d0  jal         func_265740
    ctx->pc = 0x269F08u;
    SET_GPR_U32(ctx, 31, 0x269F10u);
    ctx->pc = 0x265740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265740u, 0x269F08u, 0x269F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269F10u;
label_269f10:
    // 0x269f10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269f14:
    // 0x269f14: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x269f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x269f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f1c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x269f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x269f20: 0xc099a28  jal         func_2668A0
    ctx->pc = 0x269F20u;
    SET_GPR_U32(ctx, 31, 0x269F28u);
    ctx->pc = 0x2668A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2668A0u, 0x269F20u, 0x269F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269F28u;
label_269f28:
    // 0x269f28: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x269f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x269f2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x269f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f30: 0xc09a468  jal         func_2691A0
    ctx->pc = 0x269F30u;
    SET_GPR_U32(ctx, 31, 0x269F38u);
    ctx->pc = 0x2691A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2691A0u, 0x269F30u, 0x269F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269F38u;
label_269f38:
    // 0x269f38: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x269f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x269f3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269f40: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x269F40u;
    {
        const bool branch_taken_0x269f40 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x269f40) {
            ctx->pc = 0x269F5Cu;
            goto label_269f5c;
        }
    }
    ctx->pc = 0x269F48u;
    // 0x269f48: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x269f48u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269f4c: 0x0  nop
    ctx->pc = 0x269f4cu;
    // NOP
    // 0x269f50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x269f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x269f54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269F54u;
    {
        const bool branch_taken_0x269f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269f54) {
            ctx->pc = 0x269F78u;
            goto label_269f78;
        }
    }
    ctx->pc = 0x269F5Cu;
label_269f5c:
    // 0x269f5c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x269f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x269f60: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x269f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x269f64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x269f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x269f68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x269f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269f6c: 0x0  nop
    ctx->pc = 0x269f6cu;
    // NOP
    // 0x269f70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x269f70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x269f74: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x269f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_269f78:
    // 0x269f78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x269f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x269f7c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x269f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x269f80: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x269F80u;
    {
        const bool branch_taken_0x269f80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x269f80) {
            ctx->pc = 0x269F9Cu;
            goto label_269f9c;
        }
    }
    ctx->pc = 0x269F88u;
    // 0x269f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269f8c: 0x0  nop
    ctx->pc = 0x269f8cu;
    // NOP
    // 0x269f90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x269f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x269f94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269F94u;
    {
        const bool branch_taken_0x269f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269f94) {
            ctx->pc = 0x269FB8u;
            goto label_269fb8;
        }
    }
    ctx->pc = 0x269F9Cu;
label_269f9c:
    // 0x269f9c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x269f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x269fa0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x269fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x269fa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x269fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x269fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x269fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269fac: 0x0  nop
    ctx->pc = 0x269facu;
    // NOP
    // 0x269fb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x269fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x269fb4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x269fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_269fb8:
    // 0x269fb8: 0x0  nop
    ctx->pc = 0x269fb8u;
    // NOP
    // 0x269fbc: 0x0  nop
    ctx->pc = 0x269fbcu;
    // NOP
    // 0x269fc0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x269fc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x269fc4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x269fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x269fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269fcc: 0x0  nop
    ctx->pc = 0x269fccu;
    // NOP
    // 0x269fd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x269fd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269fd4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x269FD4u;
    {
        const bool branch_taken_0x269fd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269fd4) {
            ctx->pc = 0x269FECu;
            goto label_269fec;
        }
    }
    ctx->pc = 0x269FDCu;
    // 0x269fdc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x269fdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x269fe0: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x269fe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x269fe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x269FE4u;
    {
        const bool branch_taken_0x269fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269fe4) {
            ctx->pc = 0x26A000u;
            goto label_26a000;
        }
    }
    ctx->pc = 0x269FECu;
label_269fec:
    // 0x269fec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x269fecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x269ff0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x269ff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x269ff4: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x269ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x269ff8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x269ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x269ffc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x269ffcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_26a000:
    // 0x26a000: 0x12350007  beq         $s1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A000u;
    {
        const bool branch_taken_0x26a000 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x26a000) {
            ctx->pc = 0x26A020u;
            goto label_26a020;
        }
    }
    ctx->pc = 0x26A008u;
    // 0x26a008: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x26a008u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a00c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26a00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26a010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26a010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a018: 0xc08d48c  jal         func_235230
    ctx->pc = 0x26A018u;
    SET_GPR_U32(ctx, 31, 0x26A020u);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x26A018u, 0x26A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A020u;
label_26a020:
    // 0x26a020: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26a020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_26a024:
    // 0x26a024: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x26a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x26a028: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x26a028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26a02c: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x26A02Cu;
    {
        const bool branch_taken_0x26a02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a02c) {
            ctx->pc = 0x269EDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269edc;
        }
    }
    ctx->pc = 0x26A034u;
label_26a034:
    // 0x26a034: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26a038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26a038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a03c: 0xc08ec98  jal         func_23B260
    ctx->pc = 0x26A03Cu;
    SET_GPR_U32(ctx, 31, 0x26A044u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x26A03Cu, 0x26A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A044u;
label_26a044:
    // 0x26a044: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26a048: 0xc119e7c  jal         func_4679F0
    ctx->pc = 0x26A048u;
    SET_GPR_U32(ctx, 31, 0x26A050u);
    ctx->pc = 0x4679F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679F0u, 0x26A048u, 0x26A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A050u;
label_26a050:
    // 0x26a050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a054: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x26a054u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26a058: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26a058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26a05c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a060: 0xc119d90  jal         func_467640
    ctx->pc = 0x26A060u;
    SET_GPR_U32(ctx, 31, 0x26A068u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x26A060u, 0x26A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A068u;
label_26a068:
    // 0x26a068: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x26a068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x26a06c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26a06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a070: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26A070u;
    SET_GPR_U32(ctx, 31, 0x26A078u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26A070u, 0x26A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A078u;
label_26a078:
    // 0x26a078: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x26a078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26a07c:
    // 0x26a07c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26a07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26a080: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26a080u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26a084: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26a084u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26a088: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26a088u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a08c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26a08cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a090: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26a090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a094: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26a094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a098: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26a098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a09c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a0a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a0a4: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x26a0a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x26a0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x26A0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A0B0u;
}
