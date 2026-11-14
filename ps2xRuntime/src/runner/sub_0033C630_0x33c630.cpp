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

// Function: sub_0033C630
// Address: 0x33c630 - 0x33c6c8
void sub_0033C630_0x33c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C630_0x33c630");
#endif

    switch (ctx->pc) {
        case 0x33c660u: goto label_33c660;
        case 0x33c678u: goto label_33c678;
        case 0x33c688u: goto label_33c688;
        case 0x33c698u: goto label_33c698;
        case 0x33c6a8u: goto label_33c6a8;
        default: break;
    }

    ctx->pc = 0x33c630u;

    // 0x33c630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33c634: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33c634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33c638: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33c638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33c63c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33c63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c640: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x33c644: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33c644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c64c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33c650: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x33c650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x33c654: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33c654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33c658: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33C658u;
    SET_GPR_U32(ctx, 31, 0x33C660u);
    ctx->pc = 0x33C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C658u;
    // 0x33c65c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33C658u, 0x33C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C660u;
label_33c660:
    // 0x33c660: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33C660u;
    {
        const bool branch_taken_0x33c660 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C660u;
        // 0x33c664: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c660) {
            ctx->pc = 0x33C6A8u;
            goto label_33c6a8;
        }
    }
    ctx->pc = 0x33C668u;
    // 0x33c668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c66c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33c66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c670: 0xc103454  jal         func_40D150
    ctx->pc = 0x33C670u;
    SET_GPR_U32(ctx, 31, 0x33C678u);
    ctx->pc = 0x33C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C670u;
    // 0x33c674: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33C670u, 0x33C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C678u;
label_33c678:
    // 0x33c678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c67c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x33c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33c680: 0xc103454  jal         func_40D150
    ctx->pc = 0x33C680u;
    SET_GPR_U32(ctx, 31, 0x33C688u);
    ctx->pc = 0x33C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C680u;
    // 0x33c684: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33C680u, 0x33C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C688u;
label_33c688:
    // 0x33c688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c68c: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x33c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x33c690: 0xc103454  jal         func_40D150
    ctx->pc = 0x33C690u;
    SET_GPR_U32(ctx, 31, 0x33C698u);
    ctx->pc = 0x33C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C690u;
    // 0x33c694: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33C690u, 0x33C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C698u;
label_33c698:
    // 0x33c698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c69c: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x33c69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x33c6a0: 0xc103454  jal         func_40D150
    ctx->pc = 0x33C6A0u;
    SET_GPR_U32(ctx, 31, 0x33C6A8u);
    ctx->pc = 0x33C6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C6A0u;
    // 0x33c6a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33C6A0u, 0x33C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C6A8u;
label_33c6a8:
    // 0x33c6a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33c6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c6ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33c6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33c6b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33c6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c6b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33c6b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x33C6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C6BCu;
        // 0x33c6c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C6C4u;
    // 0x33c6c4: 0x0  nop
    ctx->pc = 0x33c6c4u;
    // NOP
    ctx->pc = 0x33c6c8u;
}
