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

// Function: sub_00416638
// Address: 0x416638 - 0x416848
void sub_00416638_0x416638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416638_0x416638");
#endif

    switch (ctx->pc) {
        case 0x416654u: goto label_416654;
        case 0x416660u: goto label_416660;
        case 0x416678u: goto label_416678;
        case 0x4166c4u: goto label_4166c4;
        case 0x4166ecu: goto label_4166ec;
        case 0x416728u: goto label_416728;
        case 0x416740u: goto label_416740;
        case 0x4167a8u: goto label_4167a8;
        case 0x4167c0u: goto label_4167c0;
        case 0x4167d4u: goto label_4167d4;
        case 0x4167f4u: goto label_4167f4;
        default: break;
    }

    ctx->pc = 0x416638u;

    // 0x416638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x416638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41663c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41663cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x416640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x416640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x416644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x416648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x416648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41664c: 0xc105328  jal         func_414CA0
    ctx->pc = 0x41664Cu;
    SET_GPR_U32(ctx, 31, 0x416654u);
    ctx->pc = 0x416650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41664Cu;
    // 0x416650: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CA0u, 0x41664Cu, 0x416654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416654u;
label_416654:
    // 0x416654: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x416654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x416658: 0xc105328  jal         func_414CA0
    ctx->pc = 0x416658u;
    SET_GPR_U32(ctx, 31, 0x416660u);
    ctx->pc = 0x41665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416658u;
    // 0x41665c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CA0u, 0x416658u, 0x416660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416660u;
label_416660:
    // 0x416660: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x416660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x416664: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x416664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x416668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x416668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41666c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x41666cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x416670: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x416670u;
    SET_GPR_U32(ctx, 31, 0x416678u);
    ctx->pc = 0x416674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416670u;
    // 0x416674: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x416670u, 0x416678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416678u;
label_416678:
    // 0x416678: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x416678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x41667c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41667cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x416680: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x416680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x416684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x416684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x416688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x416688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41668c: 0x3e00008  jr          $ra
    ctx->pc = 0x41668Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41668Cu;
        // 0x416690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41668Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416694u;
    // 0x416694: 0x0  nop
    ctx->pc = 0x416694u;
    // NOP
    // 0x416698: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x416698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41669c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41669cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4166a0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4166a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4166a4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4166a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4166a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4166a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4166ac: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4166acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x4166b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4166b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4166b4: 0x2444ca28  addiu       $a0, $v0, -0x35D8
    ctx->pc = 0x4166b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953512));
    // 0x4166b8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4166b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4166bc: 0xc104a46  jal         func_412918
    ctx->pc = 0x4166BCu;
    SET_GPR_U32(ctx, 31, 0x4166C4u);
    ctx->pc = 0x4166C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4166BCu;
    // 0x4166c0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412918u, 0x4166BCu, 0x4166C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4166C4u;
label_4166c4:
    // 0x4166c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4166c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4166c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4166C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4166CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4166C8u;
        // 0x4166cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4166C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4166D0u;
    // 0x4166d0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4166d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4166d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4166d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4166d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4166d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4166dc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4166dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x4166e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4166e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4166e4: 0xc104a56  jal         func_412958
    ctx->pc = 0x4166E4u;
    SET_GPR_U32(ctx, 31, 0x4166ECu);
    ctx->pc = 0x4166E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4166E4u;
    // 0x4166e8: 0x2444ca28  addiu       $a0, $v0, -0x35D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412958u, 0x4166E4u, 0x4166ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4166ECu;
label_4166ec:
    // 0x4166ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4166ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4166f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4166F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4166F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4166F0u;
        // 0x4166f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4166F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4166F8u;
    // 0x4166f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4166f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4166fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4166fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x416700: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x416700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x416704: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x416704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x416708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x416708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41670c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x41670cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x416710: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x416710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x416714: 0x24a56848  addiu       $a1, $a1, 0x6848
    ctx->pc = 0x416714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26696));
    // 0x416718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x416718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41671c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x416720: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x416720u;
    SET_GPR_U32(ctx, 31, 0x416728u);
    ctx->pc = 0x416724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416720u;
    // 0x416724: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x416720u, 0x416728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416728u;
label_416728:
    // 0x416728: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x416728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x41672c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x41672Cu;
    {
        const bool branch_taken_0x41672c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x416730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41672Cu;
        // 0x416730: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41672c) {
            ctx->pc = 0x416758u;
            goto label_416758;
        }
    }
    ctx->pc = 0x416734u;
    // 0x416734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x416734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416738: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x416738u;
    SET_GPR_U32(ctx, 31, 0x416740u);
    ctx->pc = 0x41673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416738u;
    // 0x41673c: 0x2484ca28  addiu       $a0, $a0, -0x35D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x416738u, 0x416740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416740u;
label_416740:
    // 0x416740: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x416740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x416744: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x416744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x416748: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x416748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41674c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x41674cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x416750u;
    {
        const bool branch_taken_0x416750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416750u;
        // 0x416754: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416750) {
            ctx->pc = 0x41675Cu;
            goto label_41675c;
        }
    }
    ctx->pc = 0x416758u;
label_416758:
    // 0x416758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x416758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41675c:
    // 0x41675c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41675cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x416760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x416760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x416764: 0x3e00008  jr          $ra
    ctx->pc = 0x416764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416764u;
        // 0x416768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41676Cu;
    // 0x41676c: 0x0  nop
    ctx->pc = 0x41676cu;
    // NOP
    // 0x416770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x416770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x416774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x416774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416778: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x416778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x41677c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41677cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x416780: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x416780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416784: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x416784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x416788: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x416788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41678c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x41678cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416790: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x416790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x416794: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x416794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x416798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x416798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41679c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41679cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4167a0: 0xc103322  jal         func_40CC88
    ctx->pc = 0x4167A0u;
    SET_GPR_U32(ctx, 31, 0x4167A8u);
    ctx->pc = 0x4167A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4167A0u;
    // 0x4167a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x4167A0u, 0x4167A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4167A8u;
label_4167a8:
    // 0x4167a8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4167A8u;
    {
        const bool branch_taken_0x4167a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4167ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4167A8u;
        // 0x4167ac: 0x27b00004  addiu       $s0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4167a8) {
            ctx->pc = 0x416820u;
            goto label_416820;
        }
    }
    ctx->pc = 0x4167B0u;
    // 0x4167b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4167b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4167b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4167b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4167b8: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4167B8u;
    SET_GPR_U32(ctx, 31, 0x4167C0u);
    ctx->pc = 0x4167BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4167B8u;
    // 0x4167bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4167B8u, 0x4167C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4167C0u;
label_4167c0:
    // 0x4167c0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x4167c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4167c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4167c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4167c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4167c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4167cc: 0xc10480a  jal         func_412028
    ctx->pc = 0x4167CCu;
    SET_GPR_U32(ctx, 31, 0x4167D4u);
    ctx->pc = 0x4167D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4167CCu;
    // 0x4167d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x4167CCu, 0x4167D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4167D4u;
label_4167d4:
    // 0x4167d4: 0x14510013  bne         $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4167D4u;
    {
        const bool branch_taken_0x4167d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4167D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4167D4u;
        // 0x4167d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4167d4) {
            ctx->pc = 0x416824u;
            goto label_416824;
        }
    }
    ctx->pc = 0x4167DCu;
    // 0x4167dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4167dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4167e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4167e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4167e4: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x4167e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x4167e8: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x4167e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x4167ec: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x4167ECu;
    SET_GPR_U32(ctx, 31, 0x4167F4u);
    ctx->pc = 0x4167F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4167ECu;
    // 0x4167f0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x4167ECu, 0x4167F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4167F4u;
label_4167f4:
    // 0x4167f4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4167f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4167f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4167f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4167fc: 0x3085f000  andi        $a1, $a0, 0xF000
    ctx->pc = 0x4167fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x416800: 0x30830f00  andi        $v1, $a0, 0xF00
    ctx->pc = 0x416800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x416804: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x416804u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x416808: 0x52b02  srl         $a1, $a1, 12
    ctx->pc = 0x416808u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x41680c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x41680cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x416810: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x416810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x416814: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x416814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x416818: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x416818u;
    {
        const bool branch_taken_0x416818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416818u;
        // 0x41681c: 0xae650008  sw          $a1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416818) {
            ctx->pc = 0x416824u;
            goto label_416824;
        }
    }
    ctx->pc = 0x416820u;
label_416820:
    // 0x416820: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x416820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416824:
    // 0x416824: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x416824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x416828: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x416828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41682c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x41682cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x416830: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x416830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x416834: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x416834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x416838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x416838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41683c: 0x3e00008  jr          $ra
    ctx->pc = 0x41683Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41683Cu;
        // 0x416840: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41683Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416844u;
    // 0x416844: 0x0  nop
    ctx->pc = 0x416844u;
    // NOP
    ctx->pc = 0x416848u;
}
