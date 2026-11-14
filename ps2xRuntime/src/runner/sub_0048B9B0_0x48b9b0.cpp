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

// Function: sub_0048B9B0
// Address: 0x48b9b0 - 0x48bb40
void sub_0048B9B0_0x48b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B9B0_0x48b9b0");
#endif

    switch (ctx->pc) {
        case 0x48b9b0u: goto label_48b9b0;
        case 0x48b9b4u: goto label_48b9b4;
        case 0x48b9b8u: goto label_48b9b8;
        case 0x48b9bcu: goto label_48b9bc;
        case 0x48b9c0u: goto label_48b9c0;
        case 0x48b9c4u: goto label_48b9c4;
        case 0x48b9c8u: goto label_48b9c8;
        case 0x48b9ccu: goto label_48b9cc;
        case 0x48b9d0u: goto label_48b9d0;
        case 0x48b9d4u: goto label_48b9d4;
        case 0x48b9d8u: goto label_48b9d8;
        case 0x48b9dcu: goto label_48b9dc;
        case 0x48b9e0u: goto label_48b9e0;
        case 0x48b9e4u: goto label_48b9e4;
        case 0x48b9e8u: goto label_48b9e8;
        case 0x48b9ecu: goto label_48b9ec;
        case 0x48b9f0u: goto label_48b9f0;
        case 0x48b9f4u: goto label_48b9f4;
        case 0x48b9f8u: goto label_48b9f8;
        case 0x48b9fcu: goto label_48b9fc;
        case 0x48ba00u: goto label_48ba00;
        case 0x48ba04u: goto label_48ba04;
        case 0x48ba08u: goto label_48ba08;
        case 0x48ba0cu: goto label_48ba0c;
        case 0x48ba10u: goto label_48ba10;
        case 0x48ba14u: goto label_48ba14;
        case 0x48ba18u: goto label_48ba18;
        case 0x48ba1cu: goto label_48ba1c;
        case 0x48ba20u: goto label_48ba20;
        case 0x48ba24u: goto label_48ba24;
        case 0x48ba28u: goto label_48ba28;
        case 0x48ba2cu: goto label_48ba2c;
        case 0x48ba30u: goto label_48ba30;
        case 0x48ba34u: goto label_48ba34;
        case 0x48ba38u: goto label_48ba38;
        case 0x48ba3cu: goto label_48ba3c;
        case 0x48ba40u: goto label_48ba40;
        case 0x48ba44u: goto label_48ba44;
        case 0x48ba48u: goto label_48ba48;
        case 0x48ba4cu: goto label_48ba4c;
        case 0x48ba50u: goto label_48ba50;
        case 0x48ba54u: goto label_48ba54;
        case 0x48ba58u: goto label_48ba58;
        case 0x48ba5cu: goto label_48ba5c;
        case 0x48ba60u: goto label_48ba60;
        case 0x48ba64u: goto label_48ba64;
        case 0x48ba68u: goto label_48ba68;
        case 0x48ba6cu: goto label_48ba6c;
        case 0x48ba70u: goto label_48ba70;
        case 0x48ba74u: goto label_48ba74;
        case 0x48ba78u: goto label_48ba78;
        case 0x48ba7cu: goto label_48ba7c;
        case 0x48ba80u: goto label_48ba80;
        case 0x48ba84u: goto label_48ba84;
        case 0x48ba88u: goto label_48ba88;
        case 0x48ba8cu: goto label_48ba8c;
        case 0x48ba90u: goto label_48ba90;
        case 0x48ba94u: goto label_48ba94;
        case 0x48ba98u: goto label_48ba98;
        case 0x48ba9cu: goto label_48ba9c;
        case 0x48baa0u: goto label_48baa0;
        case 0x48baa4u: goto label_48baa4;
        case 0x48baa8u: goto label_48baa8;
        case 0x48baacu: goto label_48baac;
        case 0x48bab0u: goto label_48bab0;
        case 0x48bab4u: goto label_48bab4;
        case 0x48bab8u: goto label_48bab8;
        case 0x48babcu: goto label_48babc;
        case 0x48bac0u: goto label_48bac0;
        case 0x48bac4u: goto label_48bac4;
        case 0x48bac8u: goto label_48bac8;
        case 0x48baccu: goto label_48bacc;
        case 0x48bad0u: goto label_48bad0;
        case 0x48bad4u: goto label_48bad4;
        case 0x48bad8u: goto label_48bad8;
        case 0x48badcu: goto label_48badc;
        case 0x48bae0u: goto label_48bae0;
        case 0x48bae4u: goto label_48bae4;
        case 0x48bae8u: goto label_48bae8;
        case 0x48baecu: goto label_48baec;
        case 0x48baf0u: goto label_48baf0;
        case 0x48baf4u: goto label_48baf4;
        case 0x48baf8u: goto label_48baf8;
        case 0x48bafcu: goto label_48bafc;
        case 0x48bb00u: goto label_48bb00;
        case 0x48bb04u: goto label_48bb04;
        case 0x48bb08u: goto label_48bb08;
        case 0x48bb0cu: goto label_48bb0c;
        case 0x48bb10u: goto label_48bb10;
        case 0x48bb14u: goto label_48bb14;
        case 0x48bb18u: goto label_48bb18;
        case 0x48bb1cu: goto label_48bb1c;
        case 0x48bb20u: goto label_48bb20;
        case 0x48bb24u: goto label_48bb24;
        case 0x48bb28u: goto label_48bb28;
        case 0x48bb2cu: goto label_48bb2c;
        case 0x48bb30u: goto label_48bb30;
        case 0x48bb34u: goto label_48bb34;
        case 0x48bb38u: goto label_48bb38;
        case 0x48bb3cu: goto label_48bb3c;
        default: break;
    }

    ctx->pc = 0x48b9b0u;

label_48b9b0:
    // 0x48b9b0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x48b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_48b9b4:
    // 0x48b9b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48b9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48b9b8:
    // 0x48b9b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48b9bc:
    // 0x48b9bc: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x48b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_48b9c0:
    // 0x48b9c0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48b9c4:
    // 0x48b9c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x48b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_48b9c8:
    // 0x48b9c8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48b9cc:
    // 0x48b9cc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x48b9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_48b9d0:
    // 0x48b9d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b9d4:
    // 0x48b9d4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48b9d8:
    // 0x48b9d8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x48b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_48b9dc:
    // 0x48b9dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b9e0:
    // 0x48b9e0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48b9e4:
    // 0x48b9e4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x48b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_48b9e8:
    // 0x48b9e8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48b9ec:
    // 0x48b9ec: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x48b9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_48b9f0:
    // 0x48b9f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x48b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48b9f4:
    // 0x48b9f4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48b9f8:
    // 0x48b9f8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x48b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_48b9fc:
    // 0x48b9fc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48ba00:
    // 0x48ba00: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x48ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_48ba04:
    // 0x48ba04: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48ba08:
    // 0x48ba08: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x48ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_48ba0c:
    // 0x48ba0c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48ba10:
    // 0x48ba10: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x48ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_48ba14:
    // 0x48ba14: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48ba18:
    // 0x48ba18: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x48ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_48ba1c:
    // 0x48ba1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ba20:
    // 0x48ba20: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48ba24:
    // 0x48ba24: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x48ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_48ba28:
    // 0x48ba28: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x48ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_48ba2c:
    // 0x48ba2c: 0xc119b68  jal         func_466DA0
label_48ba30:
    if (ctx->pc == 0x48BA30u) {
        ctx->pc = 0x48BA34u;
        goto label_48ba34;
    }
    ctx->pc = 0x48BA2Cu;
    SET_GPR_U32(ctx, 31, 0x48BA34u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x48BA2Cu, 0x48BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BA34u;
label_48ba34:
    // 0x48ba34: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x48ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_48ba38:
    // 0x48ba38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48ba38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48ba3c:
    // 0x48ba3c: 0xc0400e0  jal         func_100380
label_48ba40:
    if (ctx->pc == 0x48BA40u) {
        ctx->pc = 0x48BA44u;
        goto label_48ba44;
    }
    ctx->pc = 0x48BA3Cu;
    SET_GPR_U32(ctx, 31, 0x48BA44u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x48BA3Cu, 0x48BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BA44u;
label_48ba44:
    // 0x48ba44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48ba44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48ba48:
    // 0x48ba48: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_48ba4c:
    if (ctx->pc == 0x48BA4Cu) {
        ctx->pc = 0x48BA50u;
        goto label_48ba50;
    }
    ctx->pc = 0x48BA48u;
    {
        const bool branch_taken_0x48ba48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ba48) {
            ctx->pc = 0x48BA60u;
            goto label_48ba60;
        }
    }
    ctx->pc = 0x48BA50u;
label_48ba50:
    // 0x48ba50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48ba50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48ba54:
    // 0x48ba54: 0xc122ed0  jal         func_48BB40
label_48ba58:
    if (ctx->pc == 0x48BA58u) {
        ctx->pc = 0x48BA5Cu;
        goto label_48ba5c;
    }
    ctx->pc = 0x48BA54u;
    SET_GPR_U32(ctx, 31, 0x48BA5Cu);
    ctx->pc = 0x48BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BB40u, 0x48BA54u, 0x48BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BA5Cu;
label_48ba5c:
    // 0x48ba5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48ba5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48ba60:
    // 0x48ba60: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48ba64:
    // 0x48ba64: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x48ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_48ba68:
    // 0x48ba68: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48ba6c:
    // 0x48ba6c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48ba70:
    // 0x48ba70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48ba70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48ba74:
    // 0x48ba74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48ba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48ba78:
    // 0x48ba78: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48ba7c:
    if (ctx->pc == 0x48BA7Cu) {
        ctx->pc = 0x48BA80u;
        goto label_48ba80;
    }
    ctx->pc = 0x48BA78u;
    {
        const bool branch_taken_0x48ba78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ba78) {
            ctx->pc = 0x48BB28u;
            goto label_48bb28;
        }
    }
    ctx->pc = 0x48BA80u;
label_48ba80:
    // 0x48ba80: 0x8f82b644  lw          $v0, -0x49BC($gp)
    ctx->pc = 0x48ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948420)));
label_48ba84:
    // 0x48ba84: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48ba88:
    if (ctx->pc == 0x48BA88u) {
        ctx->pc = 0x48BA8Cu;
        goto label_48ba8c;
    }
    ctx->pc = 0x48BA84u;
    {
        const bool branch_taken_0x48ba84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ba84) {
            ctx->pc = 0x48BB28u;
            goto label_48bb28;
        }
    }
    ctx->pc = 0x48BA8Cu;
label_48ba8c:
    // 0x48ba8c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48ba90:
    // 0x48ba90: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48ba94:
    // 0x48ba94: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x48ba94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_48ba98:
    // 0x48ba98: 0xc115ee8  jal         func_457BA0
label_48ba9c:
    if (ctx->pc == 0x48BA9Cu) {
        ctx->pc = 0x48BAA0u;
        goto label_48baa0;
    }
    ctx->pc = 0x48BA98u;
    SET_GPR_U32(ctx, 31, 0x48BAA0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48BA98u, 0x48BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BAA0u;
label_48baa0:
    // 0x48baa0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48baa4:
    if (ctx->pc == 0x48BAA4u) {
        ctx->pc = 0x48BAA8u;
        goto label_48baa8;
    }
    ctx->pc = 0x48BAA0u;
    {
        const bool branch_taken_0x48baa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48baa0) {
            ctx->pc = 0x48BB28u;
            goto label_48bb28;
        }
    }
    ctx->pc = 0x48BAA8u;
label_48baa8:
    // 0x48baa8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x48baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_48baac:
    // 0x48baac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48bab0:
    if (ctx->pc == 0x48BAB0u) {
        ctx->pc = 0x48BAB4u;
        goto label_48bab4;
    }
    ctx->pc = 0x48BAACu;
    {
        const bool branch_taken_0x48baac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48baac) {
            ctx->pc = 0x48BB28u;
            goto label_48bb28;
        }
    }
    ctx->pc = 0x48BAB4u;
label_48bab4:
    // 0x48bab4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x48bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48bab8:
    // 0x48bab8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48bab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48babc:
    // 0x48babc: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x48babcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_48bac0:
    // 0x48bac0: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48bac0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48bac4:
    // 0x48bac4: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48bac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48bac8:
    // 0x48bac8: 0x24080055  addiu       $t0, $zero, 0x55
    ctx->pc = 0x48bac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_48bacc:
    // 0x48bacc: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48baccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48bad0:
    // 0x48bad0: 0x252948d0  addiu       $t1, $t1, 0x48D0
    ctx->pc = 0x48bad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18640));
label_48bad4:
    // 0x48bad4: 0xc113940  jal         func_44E500
label_48bad8:
    if (ctx->pc == 0x48BAD8u) {
        ctx->pc = 0x48BADCu;
        goto label_48badc;
    }
    ctx->pc = 0x48BAD4u;
    SET_GPR_U32(ctx, 31, 0x48BADCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48BAD4u, 0x48BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BADCu;
label_48badc:
    // 0x48badc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x48badcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48bae0:
    // 0x48bae0: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48bae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48bae4:
    // 0x48bae4: 0x24a548e8  addiu       $a1, $a1, 0x48E8
    ctx->pc = 0x48bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18664));
label_48bae8:
    // 0x48bae8: 0xc115c24  jal         func_457090
label_48baec:
    if (ctx->pc == 0x48BAECu) {
        ctx->pc = 0x48BAF0u;
        goto label_48baf0;
    }
    ctx->pc = 0x48BAE8u;
    SET_GPR_U32(ctx, 31, 0x48BAF0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48BAE8u, 0x48BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BAF0u;
label_48baf0:
    // 0x48baf0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x48baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48baf4:
    // 0x48baf4: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x48baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_48baf8:
    // 0x48baf8: 0x40f809  jalr        $v0
label_48bafc:
    if (ctx->pc == 0x48BAFCu) {
        ctx->pc = 0x48BB00u;
        goto label_48bb00;
    }
    ctx->pc = 0x48BAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48BB00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BAF8u, 0x48BB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48BB00u;
label_48bb00:
    // 0x48bb00: 0xaf82b644  sw          $v0, -0x49BC($gp)
    ctx->pc = 0x48bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948420), GPR_U32(ctx, 2));
label_48bb04:
    // 0x48bb04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_48bb08:
    // 0x48bb08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48bb0c:
    if (ctx->pc == 0x48BB0Cu) {
        ctx->pc = 0x48BB10u;
        goto label_48bb10;
    }
    ctx->pc = 0x48BB08u;
    {
        const bool branch_taken_0x48bb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bb08) {
            ctx->pc = 0x48BB18u;
            goto label_48bb18;
        }
    }
    ctx->pc = 0x48BB10u;
label_48bb10:
    // 0x48bb10: 0xd  break       0
    ctx->pc = 0x48bb10u;
    runtime->handleBreak(rdram, ctx);
label_48bb14:
    // 0x48bb14: 0x0  nop
    ctx->pc = 0x48bb14u;
    // NOP
label_48bb18:
    // 0x48bb18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x48bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48bb1c:
    // 0x48bb1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48bb20:
    // 0x48bb20: 0xc11392c  jal         func_44E4B0
label_48bb24:
    if (ctx->pc == 0x48BB24u) {
        ctx->pc = 0x48BB28u;
        goto label_48bb28;
    }
    ctx->pc = 0x48BB20u;
    SET_GPR_U32(ctx, 31, 0x48BB28u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48BB20u, 0x48BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BB28u;
label_48bb28:
    // 0x48bb28: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48bb2c:
    // 0x48bb2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48bb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48bb30:
    // 0x48bb30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48bb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48bb34:
    // 0x48bb34: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x48bb34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_48bb38:
    // 0x48bb38: 0x3e00008  jr          $ra
label_48bb3c:
    if (ctx->pc == 0x48BB3Cu) {
        ctx->pc = 0x48BB40u;
        goto label_fallthrough_0x48bb38;
    }
    ctx->pc = 0x48BB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48bb38:
    ctx->pc = 0x48BB40u;
}
