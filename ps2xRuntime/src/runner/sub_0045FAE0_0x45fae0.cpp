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

// Function: sub_0045FAE0
// Address: 0x45fae0 - 0x45fc40
void sub_0045FAE0_0x45fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045FAE0_0x45fae0");
#endif

    switch (ctx->pc) {
        case 0x45fae0u: goto label_45fae0;
        case 0x45fae4u: goto label_45fae4;
        case 0x45fae8u: goto label_45fae8;
        case 0x45faecu: goto label_45faec;
        case 0x45faf0u: goto label_45faf0;
        case 0x45faf4u: goto label_45faf4;
        case 0x45faf8u: goto label_45faf8;
        case 0x45fafcu: goto label_45fafc;
        case 0x45fb00u: goto label_45fb00;
        case 0x45fb04u: goto label_45fb04;
        case 0x45fb08u: goto label_45fb08;
        case 0x45fb0cu: goto label_45fb0c;
        case 0x45fb10u: goto label_45fb10;
        case 0x45fb14u: goto label_45fb14;
        case 0x45fb18u: goto label_45fb18;
        case 0x45fb1cu: goto label_45fb1c;
        case 0x45fb20u: goto label_45fb20;
        case 0x45fb24u: goto label_45fb24;
        case 0x45fb28u: goto label_45fb28;
        case 0x45fb2cu: goto label_45fb2c;
        case 0x45fb30u: goto label_45fb30;
        case 0x45fb34u: goto label_45fb34;
        case 0x45fb38u: goto label_45fb38;
        case 0x45fb3cu: goto label_45fb3c;
        case 0x45fb40u: goto label_45fb40;
        case 0x45fb44u: goto label_45fb44;
        case 0x45fb48u: goto label_45fb48;
        case 0x45fb4cu: goto label_45fb4c;
        case 0x45fb50u: goto label_45fb50;
        case 0x45fb54u: goto label_45fb54;
        case 0x45fb58u: goto label_45fb58;
        case 0x45fb5cu: goto label_45fb5c;
        case 0x45fb60u: goto label_45fb60;
        case 0x45fb64u: goto label_45fb64;
        case 0x45fb68u: goto label_45fb68;
        case 0x45fb6cu: goto label_45fb6c;
        case 0x45fb70u: goto label_45fb70;
        case 0x45fb74u: goto label_45fb74;
        case 0x45fb78u: goto label_45fb78;
        case 0x45fb7cu: goto label_45fb7c;
        case 0x45fb80u: goto label_45fb80;
        case 0x45fb84u: goto label_45fb84;
        case 0x45fb88u: goto label_45fb88;
        case 0x45fb8cu: goto label_45fb8c;
        case 0x45fb90u: goto label_45fb90;
        case 0x45fb94u: goto label_45fb94;
        case 0x45fb98u: goto label_45fb98;
        case 0x45fb9cu: goto label_45fb9c;
        case 0x45fba0u: goto label_45fba0;
        case 0x45fba4u: goto label_45fba4;
        case 0x45fba8u: goto label_45fba8;
        case 0x45fbacu: goto label_45fbac;
        case 0x45fbb0u: goto label_45fbb0;
        case 0x45fbb4u: goto label_45fbb4;
        case 0x45fbb8u: goto label_45fbb8;
        case 0x45fbbcu: goto label_45fbbc;
        case 0x45fbc0u: goto label_45fbc0;
        case 0x45fbc4u: goto label_45fbc4;
        case 0x45fbc8u: goto label_45fbc8;
        case 0x45fbccu: goto label_45fbcc;
        case 0x45fbd0u: goto label_45fbd0;
        case 0x45fbd4u: goto label_45fbd4;
        case 0x45fbd8u: goto label_45fbd8;
        case 0x45fbdcu: goto label_45fbdc;
        case 0x45fbe0u: goto label_45fbe0;
        case 0x45fbe4u: goto label_45fbe4;
        case 0x45fbe8u: goto label_45fbe8;
        case 0x45fbecu: goto label_45fbec;
        case 0x45fbf0u: goto label_45fbf0;
        case 0x45fbf4u: goto label_45fbf4;
        case 0x45fbf8u: goto label_45fbf8;
        case 0x45fbfcu: goto label_45fbfc;
        case 0x45fc00u: goto label_45fc00;
        case 0x45fc04u: goto label_45fc04;
        case 0x45fc08u: goto label_45fc08;
        case 0x45fc0cu: goto label_45fc0c;
        case 0x45fc10u: goto label_45fc10;
        case 0x45fc14u: goto label_45fc14;
        case 0x45fc18u: goto label_45fc18;
        case 0x45fc1cu: goto label_45fc1c;
        case 0x45fc20u: goto label_45fc20;
        case 0x45fc24u: goto label_45fc24;
        case 0x45fc28u: goto label_45fc28;
        case 0x45fc2cu: goto label_45fc2c;
        case 0x45fc30u: goto label_45fc30;
        case 0x45fc34u: goto label_45fc34;
        case 0x45fc38u: goto label_45fc38;
        case 0x45fc3cu: goto label_45fc3c;
        default: break;
    }

    ctx->pc = 0x45fae0u;

label_45fae0:
    // 0x45fae0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x45fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_45fae4:
    // 0x45fae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45fae8:
    // 0x45fae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45fae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45faec:
    // 0x45faec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45faecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45faf0:
    // 0x45faf0: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x45faf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_45faf4:
    // 0x45faf4: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x45faf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_45faf8:
    // 0x45faf8: 0xafa60180  sw          $a2, 0x180($sp)
    ctx->pc = 0x45faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 6));
label_45fafc:
    // 0x45fafc: 0xafa70190  sw          $a3, 0x190($sp)
    ctx->pc = 0x45fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 7));
label_45fb00:
    // 0x45fb00: 0xafa801a0  sw          $t0, 0x1A0($sp)
    ctx->pc = 0x45fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 8));
label_45fb04:
    // 0x45fb04: 0xafa901b0  sw          $t1, 0x1B0($sp)
    ctx->pc = 0x45fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 9));
label_45fb08:
    // 0x45fb08: 0x8fb10160  lw          $s1, 0x160($sp)
    ctx->pc = 0x45fb08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45fb0c:
    // 0x45fb0c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45fb10:
    // 0x45fb10: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x45fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_45fb14:
    // 0x45fb14: 0xafb10170  sw          $s1, 0x170($sp)
    ctx->pc = 0x45fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 17));
label_45fb18:
    // 0x45fb18: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x45fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45fb1c:
    // 0x45fb1c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x45fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45fb20:
    // 0x45fb20: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x45fb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_45fb24:
    // 0x45fb24: 0xc11818c  jal         func_460630
label_45fb28:
    if (ctx->pc == 0x45FB28u) {
        ctx->pc = 0x45FB2Cu;
        goto label_45fb2c;
    }
    ctx->pc = 0x45FB24u;
    SET_GPR_U32(ctx, 31, 0x45FB2Cu);
    ctx->pc = 0x460630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460630u, 0x45FB24u, 0x45FB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FB2Cu;
label_45fb2c:
    // 0x45fb2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45fb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45fb30:
    // 0x45fb30: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x45fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_45fb34:
    // 0x45fb34: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_45fb38:
    if (ctx->pc == 0x45FB38u) {
        ctx->pc = 0x45FB3Cu;
        goto label_45fb3c;
    }
    ctx->pc = 0x45FB34u;
    {
        const bool branch_taken_0x45fb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45fb34) {
            ctx->pc = 0x45FBE0u;
            goto label_45fbe0;
        }
    }
    ctx->pc = 0x45FB3Cu;
label_45fb3c:
    // 0x45fb3c: 0x8f82b1c0  lw          $v0, -0x4E40($gp)
    ctx->pc = 0x45fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947264)));
label_45fb40:
    // 0x45fb40: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_45fb44:
    if (ctx->pc == 0x45FB44u) {
        ctx->pc = 0x45FB48u;
        goto label_45fb48;
    }
    ctx->pc = 0x45FB40u;
    {
        const bool branch_taken_0x45fb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fb40) {
            ctx->pc = 0x45FBE0u;
            goto label_45fbe0;
        }
    }
    ctx->pc = 0x45FB48u;
label_45fb48:
    // 0x45fb48: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45fb4c:
    // 0x45fb4c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45fb50:
    // 0x45fb50: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x45fb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_45fb54:
    // 0x45fb54: 0xc115ee8  jal         func_457BA0
label_45fb58:
    if (ctx->pc == 0x45FB58u) {
        ctx->pc = 0x45FB5Cu;
        goto label_45fb5c;
    }
    ctx->pc = 0x45FB54u;
    SET_GPR_U32(ctx, 31, 0x45FB5Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45FB54u, 0x45FB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FB5Cu;
label_45fb5c:
    // 0x45fb5c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_45fb60:
    if (ctx->pc == 0x45FB60u) {
        ctx->pc = 0x45FB64u;
        goto label_45fb64;
    }
    ctx->pc = 0x45FB5Cu;
    {
        const bool branch_taken_0x45fb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fb5c) {
            ctx->pc = 0x45FBE0u;
            goto label_45fbe0;
        }
    }
    ctx->pc = 0x45FB64u;
label_45fb64:
    // 0x45fb64: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x45fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_45fb68:
    // 0x45fb68: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_45fb6c:
    if (ctx->pc == 0x45FB6Cu) {
        ctx->pc = 0x45FB70u;
        goto label_45fb70;
    }
    ctx->pc = 0x45FB68u;
    {
        const bool branch_taken_0x45fb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fb68) {
            ctx->pc = 0x45FBE0u;
            goto label_45fbe0;
        }
    }
    ctx->pc = 0x45FB70u;
label_45fb70:
    // 0x45fb70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45fb74:
    // 0x45fb74: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45fb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45fb78:
    // 0x45fb78: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x45fb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_45fb7c:
    // 0x45fb7c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45fb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45fb80:
    // 0x45fb80: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x45fb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_45fb84:
    // 0x45fb84: 0x24080404  addiu       $t0, $zero, 0x404
    ctx->pc = 0x45fb84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_45fb88:
    // 0x45fb88: 0x2789b1b8  addiu       $t1, $gp, -0x4E48
    ctx->pc = 0x45fb88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947256));
label_45fb8c:
    // 0x45fb8c: 0xc113940  jal         func_44E500
label_45fb90:
    if (ctx->pc == 0x45FB90u) {
        ctx->pc = 0x45FB94u;
        goto label_45fb94;
    }
    ctx->pc = 0x45FB8Cu;
    SET_GPR_U32(ctx, 31, 0x45FB94u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45FB8Cu, 0x45FB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FB94u;
label_45fb94:
    // 0x45fb94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45fb98:
    // 0x45fb98: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45fb9c:
    // 0x45fb9c: 0x24a5ee40  addiu       $a1, $a1, -0x11C0
    ctx->pc = 0x45fb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
label_45fba0:
    // 0x45fba0: 0xc115c24  jal         func_457090
label_45fba4:
    if (ctx->pc == 0x45FBA4u) {
        ctx->pc = 0x45FBA8u;
        goto label_45fba8;
    }
    ctx->pc = 0x45FBA0u;
    SET_GPR_U32(ctx, 31, 0x45FBA8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45FBA0u, 0x45FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FBA8u;
label_45fba8:
    // 0x45fba8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45fbac:
    // 0x45fbac: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x45fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_45fbb0:
    // 0x45fbb0: 0x40f809  jalr        $v0
label_45fbb4:
    if (ctx->pc == 0x45FBB4u) {
        ctx->pc = 0x45FBB8u;
        goto label_45fbb8;
    }
    ctx->pc = 0x45FBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45FBB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45FBB0u, 0x45FBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45FBB8u;
label_45fbb8:
    // 0x45fbb8: 0xaf82b1c0  sw          $v0, -0x4E40($gp)
    ctx->pc = 0x45fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947264), GPR_U32(ctx, 2));
label_45fbbc:
    // 0x45fbbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_45fbc0:
    // 0x45fbc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45fbc4:
    if (ctx->pc == 0x45FBC4u) {
        ctx->pc = 0x45FBC8u;
        goto label_45fbc8;
    }
    ctx->pc = 0x45FBC0u;
    {
        const bool branch_taken_0x45fbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fbc0) {
            ctx->pc = 0x45FBD0u;
            goto label_45fbd0;
        }
    }
    ctx->pc = 0x45FBC8u;
label_45fbc8:
    // 0x45fbc8: 0xd  break       0
    ctx->pc = 0x45fbc8u;
    runtime->handleBreak(rdram, ctx);
label_45fbcc:
    // 0x45fbcc: 0x0  nop
    ctx->pc = 0x45fbccu;
    // NOP
label_45fbd0:
    // 0x45fbd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45fbd4:
    // 0x45fbd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fbd8:
    // 0x45fbd8: 0xc11392c  jal         func_44E4B0
label_45fbdc:
    if (ctx->pc == 0x45FBDCu) {
        ctx->pc = 0x45FBE0u;
        goto label_45fbe0;
    }
    ctx->pc = 0x45FBD8u;
    SET_GPR_U32(ctx, 31, 0x45FBE0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45FBD8u, 0x45FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FBE0u;
label_45fbe0:
    // 0x45fbe0: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x45fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_45fbe4:
    // 0x45fbe4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45fbe8:
    // 0x45fbe8: 0xac434e24  sw          $v1, 0x4E24($v0)
    ctx->pc = 0x45fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20004), GPR_U32(ctx, 3));
label_45fbec:
    // 0x45fbec: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x45fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_45fbf0:
    // 0x45fbf0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45fbf4:
    // 0x45fbf4: 0xac434e38  sw          $v1, 0x4E38($v0)
    ctx->pc = 0x45fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20024), GPR_U32(ctx, 3));
label_45fbf8:
    // 0x45fbf8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_45fbfc:
    // 0x45fbfc: 0x24844e3c  addiu       $a0, $a0, 0x4E3C
    ctx->pc = 0x45fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20028));
label_45fc00:
    // 0x45fc00: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x45fc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45fc04:
    // 0x45fc04: 0xc0bc5c6  jal         func_2F1718
label_45fc08:
    if (ctx->pc == 0x45FC08u) {
        ctx->pc = 0x45FC0Cu;
        goto label_45fc0c;
    }
    ctx->pc = 0x45FC04u;
    SET_GPR_U32(ctx, 31, 0x45FC0Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45FC04u, 0x45FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FC0Cu;
label_45fc0c:
    // 0x45fc0c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_45fc10:
    // 0x45fc10: 0x24844e5c  addiu       $a0, $a0, 0x4E5C
    ctx->pc = 0x45fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20060));
label_45fc14:
    // 0x45fc14: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x45fc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_45fc18:
    // 0x45fc18: 0xc0bc5c6  jal         func_2F1718
label_45fc1c:
    if (ctx->pc == 0x45FC1Cu) {
        ctx->pc = 0x45FC20u;
        goto label_45fc20;
    }
    ctx->pc = 0x45FC18u;
    SET_GPR_U32(ctx, 31, 0x45FC20u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45FC18u, 0x45FC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FC20u;
label_45fc20:
    // 0x45fc20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45fc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45fc24:
    // 0x45fc24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45fc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45fc28:
    // 0x45fc28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45fc28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45fc2c:
    // 0x45fc2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45fc2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45fc30:
    // 0x45fc30: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x45fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_45fc34:
    // 0x45fc34: 0x3e00008  jr          $ra
label_45fc38:
    if (ctx->pc == 0x45FC38u) {
        ctx->pc = 0x45FC3Cu;
        goto label_45fc3c;
    }
    ctx->pc = 0x45FC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45FC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45FC3Cu;
label_45fc3c:
    // 0x45fc3c: 0x0  nop
    ctx->pc = 0x45fc3cu;
    // NOP
    ctx->pc = 0x45fc40u;
}
