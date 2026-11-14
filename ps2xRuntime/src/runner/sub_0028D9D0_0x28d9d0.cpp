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

// Function: sub_0028D9D0
// Address: 0x28d9d0 - 0x28db50
void sub_0028D9D0_0x28d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D9D0_0x28d9d0");
#endif

    switch (ctx->pc) {
        case 0x28d9d0u: goto label_28d9d0;
        case 0x28d9d4u: goto label_28d9d4;
        case 0x28d9d8u: goto label_28d9d8;
        case 0x28d9dcu: goto label_28d9dc;
        case 0x28d9e0u: goto label_28d9e0;
        case 0x28d9e4u: goto label_28d9e4;
        case 0x28d9e8u: goto label_28d9e8;
        case 0x28d9ecu: goto label_28d9ec;
        case 0x28d9f0u: goto label_28d9f0;
        case 0x28d9f4u: goto label_28d9f4;
        case 0x28d9f8u: goto label_28d9f8;
        case 0x28d9fcu: goto label_28d9fc;
        case 0x28da00u: goto label_28da00;
        case 0x28da04u: goto label_28da04;
        case 0x28da08u: goto label_28da08;
        case 0x28da0cu: goto label_28da0c;
        case 0x28da10u: goto label_28da10;
        case 0x28da14u: goto label_28da14;
        case 0x28da18u: goto label_28da18;
        case 0x28da1cu: goto label_28da1c;
        case 0x28da20u: goto label_28da20;
        case 0x28da24u: goto label_28da24;
        case 0x28da28u: goto label_28da28;
        case 0x28da2cu: goto label_28da2c;
        case 0x28da30u: goto label_28da30;
        case 0x28da34u: goto label_28da34;
        case 0x28da38u: goto label_28da38;
        case 0x28da3cu: goto label_28da3c;
        case 0x28da40u: goto label_28da40;
        case 0x28da44u: goto label_28da44;
        case 0x28da48u: goto label_28da48;
        case 0x28da4cu: goto label_28da4c;
        case 0x28da50u: goto label_28da50;
        case 0x28da54u: goto label_28da54;
        case 0x28da58u: goto label_28da58;
        case 0x28da5cu: goto label_28da5c;
        case 0x28da60u: goto label_28da60;
        case 0x28da64u: goto label_28da64;
        case 0x28da68u: goto label_28da68;
        case 0x28da6cu: goto label_28da6c;
        case 0x28da70u: goto label_28da70;
        case 0x28da74u: goto label_28da74;
        case 0x28da78u: goto label_28da78;
        case 0x28da7cu: goto label_28da7c;
        case 0x28da80u: goto label_28da80;
        case 0x28da84u: goto label_28da84;
        case 0x28da88u: goto label_28da88;
        case 0x28da8cu: goto label_28da8c;
        case 0x28da90u: goto label_28da90;
        case 0x28da94u: goto label_28da94;
        case 0x28da98u: goto label_28da98;
        case 0x28da9cu: goto label_28da9c;
        case 0x28daa0u: goto label_28daa0;
        case 0x28daa4u: goto label_28daa4;
        case 0x28daa8u: goto label_28daa8;
        case 0x28daacu: goto label_28daac;
        case 0x28dab0u: goto label_28dab0;
        case 0x28dab4u: goto label_28dab4;
        case 0x28dab8u: goto label_28dab8;
        case 0x28dabcu: goto label_28dabc;
        case 0x28dac0u: goto label_28dac0;
        case 0x28dac4u: goto label_28dac4;
        case 0x28dac8u: goto label_28dac8;
        case 0x28daccu: goto label_28dacc;
        case 0x28dad0u: goto label_28dad0;
        case 0x28dad4u: goto label_28dad4;
        case 0x28dad8u: goto label_28dad8;
        case 0x28dadcu: goto label_28dadc;
        case 0x28dae0u: goto label_28dae0;
        case 0x28dae4u: goto label_28dae4;
        case 0x28dae8u: goto label_28dae8;
        case 0x28daecu: goto label_28daec;
        case 0x28daf0u: goto label_28daf0;
        case 0x28daf4u: goto label_28daf4;
        case 0x28daf8u: goto label_28daf8;
        case 0x28dafcu: goto label_28dafc;
        case 0x28db00u: goto label_28db00;
        case 0x28db04u: goto label_28db04;
        case 0x28db08u: goto label_28db08;
        case 0x28db0cu: goto label_28db0c;
        case 0x28db10u: goto label_28db10;
        case 0x28db14u: goto label_28db14;
        case 0x28db18u: goto label_28db18;
        case 0x28db1cu: goto label_28db1c;
        case 0x28db20u: goto label_28db20;
        case 0x28db24u: goto label_28db24;
        case 0x28db28u: goto label_28db28;
        case 0x28db2cu: goto label_28db2c;
        case 0x28db30u: goto label_28db30;
        case 0x28db34u: goto label_28db34;
        case 0x28db38u: goto label_28db38;
        case 0x28db3cu: goto label_28db3c;
        case 0x28db40u: goto label_28db40;
        case 0x28db44u: goto label_28db44;
        case 0x28db48u: goto label_28db48;
        case 0x28db4cu: goto label_28db4c;
        default: break;
    }

    ctx->pc = 0x28d9d0u;

label_28d9d0:
    // 0x28d9d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28d9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_28d9d4:
    // 0x28d9d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_28d9d8:
    // 0x28d9d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28d9dc:
    // 0x28d9dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28d9e0:
    // 0x28d9e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28d9e4:
    // 0x28d9e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28d9e8:
    // 0x28d9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28d9ec:
    // 0x28d9ec: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x28d9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_28d9f0:
    // 0x28d9f0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x28d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_28d9f4:
    // 0x28d9f4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x28d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_28d9f8:
    // 0x28d9f8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x28d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_28d9fc:
    // 0x28d9fc: 0xc0a366c  jal         func_28D9B0
label_28da00:
    if (ctx->pc == 0x28DA00u) {
        ctx->pc = 0x28DA04u;
        goto label_28da04;
    }
    ctx->pc = 0x28D9FCu;
    SET_GPR_U32(ctx, 31, 0x28DA04u);
    ctx->pc = 0x28D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9B0u, 0x28D9FCu, 0x28DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA04u;
label_28da04:
    // 0x28da04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28da04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28da08:
    // 0x28da08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28da08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28da0c:
    // 0x28da0c: 0xc09fd3c  jal         func_27F4F0
label_28da10:
    if (ctx->pc == 0x28DA10u) {
        ctx->pc = 0x28DA14u;
        goto label_28da14;
    }
    ctx->pc = 0x28DA0Cu;
    SET_GPR_U32(ctx, 31, 0x28DA14u);
    ctx->pc = 0x27F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4F0u, 0x28DA0Cu, 0x28DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA14u;
label_28da14:
    // 0x28da14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28da14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28da18:
    // 0x28da18: 0x1000000c  b           . + 4 + (0xC << 2)
label_28da1c:
    if (ctx->pc == 0x28DA1Cu) {
        ctx->pc = 0x28DA20u;
        goto label_28da20;
    }
    ctx->pc = 0x28DA18u;
    {
        const bool branch_taken_0x28da18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28da18) {
            ctx->pc = 0x28DA4Cu;
            goto label_28da4c;
        }
    }
    ctx->pc = 0x28DA20u;
label_28da20:
    // 0x28da20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28da24:
    // 0x28da24: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
label_28da28:
    if (ctx->pc == 0x28DA28u) {
        ctx->pc = 0x28DA2Cu;
        goto label_28da2c;
    }
    ctx->pc = 0x28DA24u;
    {
        const bool branch_taken_0x28da24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28da24) {
            ctx->pc = 0x28DA48u;
            goto label_28da48;
        }
    }
    ctx->pc = 0x28DA2Cu;
label_28da2c:
    // 0x28da2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28da30:
    // 0x28da30: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28da30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_28da34:
    // 0x28da34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_28da38:
    // 0x28da38: 0x40f809  jalr        $v0
label_28da3c:
    if (ctx->pc == 0x28DA3Cu) {
        ctx->pc = 0x28DA40u;
        goto label_28da40;
    }
    ctx->pc = 0x28DA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28DA40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DA38u, 0x28DA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28DA40u;
label_28da40:
    // 0x28da40: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_28da44:
    if (ctx->pc == 0x28DA44u) {
        ctx->pc = 0x28DA48u;
        goto label_28da48;
    }
    ctx->pc = 0x28DA40u;
    {
        const bool branch_taken_0x28da40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28da40) {
            ctx->pc = 0x28DB2Cu;
            goto label_28db2c;
        }
    }
    ctx->pc = 0x28DA48u;
label_28da48:
    // 0x28da48: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x28da48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_28da4c:
    // 0x28da4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28da4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28da50:
    // 0x28da50: 0xc09fd24  jal         func_27F490
label_28da54:
    if (ctx->pc == 0x28DA54u) {
        ctx->pc = 0x28DA58u;
        goto label_28da58;
    }
    ctx->pc = 0x28DA50u;
    SET_GPR_U32(ctx, 31, 0x28DA58u);
    ctx->pc = 0x27F490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F490u, 0x28DA50u, 0x28DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA58u;
label_28da58:
    // 0x28da58: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
label_28da5c:
    if (ctx->pc == 0x28DA5Cu) {
        ctx->pc = 0x28DA60u;
        goto label_28da60;
    }
    ctx->pc = 0x28DA58u;
    {
        const bool branch_taken_0x28da58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x28da58) {
            ctx->pc = 0x28DA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28da20;
        }
    }
    ctx->pc = 0x28DA60u;
label_28da60:
    // 0x28da60: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x28da60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_28da64:
    // 0x28da64: 0xc0a361c  jal         func_28D870
label_28da68:
    if (ctx->pc == 0x28DA68u) {
        ctx->pc = 0x28DA6Cu;
        goto label_28da6c;
    }
    ctx->pc = 0x28DA64u;
    SET_GPR_U32(ctx, 31, 0x28DA6Cu);
    ctx->pc = 0x28D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D870u, 0x28DA64u, 0x28DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA6Cu;
label_28da6c:
    // 0x28da6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28da6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28da70:
    // 0x28da70: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x28da70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_28da74:
    // 0x28da74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28da74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28da78:
    // 0x28da78: 0xc0542d8  jal         func_150B60
label_28da7c:
    if (ctx->pc == 0x28DA7Cu) {
        ctx->pc = 0x28DA80u;
        goto label_28da80;
    }
    ctx->pc = 0x28DA78u;
    SET_GPR_U32(ctx, 31, 0x28DA80u);
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x28DA78u, 0x28DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA80u;
label_28da80:
    // 0x28da80: 0x10000020  b           . + 4 + (0x20 << 2)
label_28da84:
    if (ctx->pc == 0x28DA84u) {
        ctx->pc = 0x28DA88u;
        goto label_28da88;
    }
    ctx->pc = 0x28DA80u;
    {
        const bool branch_taken_0x28da80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28da80) {
            ctx->pc = 0x28DB04u;
            goto label_28db04;
        }
    }
    ctx->pc = 0x28DA88u;
label_28da88:
    // 0x28da88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28da88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28da8c:
    // 0x28da8c: 0x10000017  b           . + 4 + (0x17 << 2)
label_28da90:
    if (ctx->pc == 0x28DA90u) {
        ctx->pc = 0x28DA94u;
        goto label_28da94;
    }
    ctx->pc = 0x28DA8Cu;
    {
        const bool branch_taken_0x28da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28da8c) {
            ctx->pc = 0x28DAECu;
            goto label_28daec;
        }
    }
    ctx->pc = 0x28DA94u;
label_28da94:
    // 0x28da94: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x28da94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_28da98:
    // 0x28da98: 0xc0542c0  jal         func_150B00
label_28da9c:
    if (ctx->pc == 0x28DA9Cu) {
        ctx->pc = 0x28DAA0u;
        goto label_28daa0;
    }
    ctx->pc = 0x28DA98u;
    SET_GPR_U32(ctx, 31, 0x28DAA0u);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x28DA98u, 0x28DAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAA0u;
label_28daa0:
    // 0x28daa0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28daa4:
    // 0x28daa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28daa8:
    // 0x28daa8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x28daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28daac:
    // 0x28daac: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_28dab0:
    if (ctx->pc == 0x28DAB0u) {
        ctx->pc = 0x28DAB4u;
        goto label_28dab4;
    }
    ctx->pc = 0x28DAACu;
    {
        const bool branch_taken_0x28daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28daac) {
            ctx->pc = 0x28DAE8u;
            goto label_28dae8;
        }
    }
    ctx->pc = 0x28DAB4u;
label_28dab4:
    // 0x28dab4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x28dab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_28dab8:
    // 0x28dab8: 0xc0542c0  jal         func_150B00
label_28dabc:
    if (ctx->pc == 0x28DABCu) {
        ctx->pc = 0x28DAC0u;
        goto label_28dac0;
    }
    ctx->pc = 0x28DAB8u;
    SET_GPR_U32(ctx, 31, 0x28DAC0u);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x28DAB8u, 0x28DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAC0u;
label_28dac0:
    // 0x28dac0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28dac4:
    // 0x28dac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28dac8:
    // 0x28dac8: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x28dac8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28dacc:
    // 0x28dacc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28daccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28dad0:
    // 0x28dad0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_28dad4:
    // 0x28dad4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_28dad8:
    // 0x28dad8: 0x40f809  jalr        $v0
label_28dadc:
    if (ctx->pc == 0x28DADCu) {
        ctx->pc = 0x28DAE0u;
        goto label_28dae0;
    }
    ctx->pc = 0x28DAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28DAE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DAD8u, 0x28DAE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28DAE0u;
label_28dae0:
    // 0x28dae0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_28dae4:
    if (ctx->pc == 0x28DAE4u) {
        ctx->pc = 0x28DAE8u;
        goto label_28dae8;
    }
    ctx->pc = 0x28DAE0u;
    {
        const bool branch_taken_0x28dae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dae0) {
            ctx->pc = 0x28DB2Cu;
            goto label_28db2c;
        }
    }
    ctx->pc = 0x28DAE8u;
label_28dae8:
    // 0x28dae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28dae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28daec:
    // 0x28daec: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x28daecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_28daf0:
    // 0x28daf0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_28daf4:
    if (ctx->pc == 0x28DAF4u) {
        ctx->pc = 0x28DAF8u;
        goto label_28daf8;
    }
    ctx->pc = 0x28DAF0u;
    {
        const bool branch_taken_0x28daf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28daf0) {
            ctx->pc = 0x28DA94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28da94;
        }
    }
    ctx->pc = 0x28DAF8u;
label_28daf8:
    // 0x28daf8: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x28daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_28dafc:
    // 0x28dafc: 0xc054278  jal         func_1509E0
label_28db00:
    if (ctx->pc == 0x28DB00u) {
        ctx->pc = 0x28DB04u;
        goto label_28db04;
    }
    ctx->pc = 0x28DAFCu;
    SET_GPR_U32(ctx, 31, 0x28DB04u);
    ctx->pc = 0x1509E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509E0u, 0x28DAFCu, 0x28DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB04u;
label_28db04:
    // 0x28db04: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x28db04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_28db08:
    // 0x28db08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28db08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28db0c:
    // 0x28db0c: 0xc054288  jal         func_150A20
label_28db10:
    if (ctx->pc == 0x28DB10u) {
        ctx->pc = 0x28DB14u;
        goto label_28db14;
    }
    ctx->pc = 0x28DB0Cu;
    SET_GPR_U32(ctx, 31, 0x28DB14u);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x28DB0Cu, 0x28DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB14u;
label_28db14:
    // 0x28db14: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x28db14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_28db18:
    // 0x28db18: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x28db18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_28db1c:
    // 0x28db1c: 0xc041998  jal         func_106660
label_28db20:
    if (ctx->pc == 0x28DB20u) {
        ctx->pc = 0x28DB24u;
        goto label_28db24;
    }
    ctx->pc = 0x28DB1Cu;
    SET_GPR_U32(ctx, 31, 0x28DB24u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x28DB1Cu, 0x28DB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB24u;
label_28db24:
    // 0x28db24: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_28db28:
    if (ctx->pc == 0x28DB28u) {
        ctx->pc = 0x28DB2Cu;
        goto label_28db2c;
    }
    ctx->pc = 0x28DB24u;
    {
        const bool branch_taken_0x28db24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28db24) {
            ctx->pc = 0x28DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28da88;
        }
    }
    ctx->pc = 0x28DB2Cu;
label_28db2c:
    // 0x28db2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28db2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28db30:
    // 0x28db30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28db30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28db34:
    // 0x28db34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28db34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28db38:
    // 0x28db38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28db38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28db3c:
    // 0x28db3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28db3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28db40:
    // 0x28db40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28db40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28db44:
    // 0x28db44: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x28db44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_28db48:
    // 0x28db48: 0x3e00008  jr          $ra
label_28db4c:
    if (ctx->pc == 0x28DB4Cu) {
        ctx->pc = 0x28DB50u;
        goto label_fallthrough_0x28db48;
    }
    ctx->pc = 0x28DB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28db48:
    ctx->pc = 0x28DB50u;
}
