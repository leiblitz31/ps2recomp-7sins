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

// Function: sub_004AC430
// Address: 0x4ac430 - 0x4ac4f8
void sub_004AC430_0x4ac430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC430_0x4ac430");
#endif

    switch (ctx->pc) {
        case 0x4ac45cu: goto label_4ac45c;
        case 0x4ac494u: goto label_4ac494;
        case 0x4ac4d0u: goto label_4ac4d0;
        case 0x4ac4e4u: goto label_4ac4e4;
        default: break;
    }

    ctx->pc = 0x4ac430u;

    // 0x4ac430: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4ac430u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac434: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac438: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x4ac438u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac43c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x4ac43cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac440: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ac440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac444: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ac444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4ac448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac44c: 0x24448a38  addiu       $a0, $v0, -0x75C8
    ctx->pc = 0x4ac44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937144));
    // 0x4ac450: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4ac450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac454: 0xc126b7e  jal         func_49ADF8
    ctx->pc = 0x4AC454u;
    SET_GPR_U32(ctx, 31, 0x4AC45Cu);
    ctx->pc = 0x4AC458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC454u;
    // 0x4ac458: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49ADF8u, 0x4AC454u, 0x4AC45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC45Cu;
label_4ac45c:
    // 0x4ac45c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac460: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC460u;
        // 0x4ac464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC468u;
    // 0x4ac468: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4ac468u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac46c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac470: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4ac470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac474: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4ac474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac478: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ac478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac47c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ac47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4ac480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac484: 0x24448a38  addiu       $a0, $v0, -0x75C8
    ctx->pc = 0x4ac484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937144));
    // 0x4ac488: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4ac488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac48c: 0xc12609a  jal         func_498268
    ctx->pc = 0x4AC48Cu;
    SET_GPR_U32(ctx, 31, 0x4AC494u);
    ctx->pc = 0x4AC490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC48Cu;
    // 0x4ac490: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498268u, 0x4AC48Cu, 0x4AC494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC494u;
label_4ac494:
    // 0x4ac494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac498: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC498u;
        // 0x4ac49c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC4A0u;
    // 0x4ac4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ac4a4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4ac4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x4ac4a8: 0x8f84c190  lw          $a0, -0x3E70($gp)
    ctx->pc = 0x4ac4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
    // 0x4ac4ac: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x4ac4acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x4ac4b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ac4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ac4b4: 0x24c68a38  addiu       $a2, $a2, -0x75C8
    ctx->pc = 0x4ac4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937144));
    // 0x4ac4b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac4bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ac4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac4c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ac4c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac4c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ac4c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac4c8: 0xc12679e  jal         func_499E78
    ctx->pc = 0x4AC4C8u;
    SET_GPR_U32(ctx, 31, 0x4AC4D0u);
    ctx->pc = 0x4AC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC4C8u;
    // 0x4ac4cc: 0x35290810  ori         $t1, $t1, 0x810 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2064);
    ctx->in_delay_slot = false;
    ctx->pc = 0x499E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499E78u, 0x4AC4C8u, 0x4AC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC4D0u;
label_4ac4d0:
    // 0x4ac4d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ac4d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac4d4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC4D4u;
    {
        const bool branch_taken_0x4ac4d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC4D4u;
        // 0x4ac4d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac4d4) {
            ctx->pc = 0x4AC4E8u;
            goto label_4ac4e8;
        }
    }
    ctx->pc = 0x4AC4DCu;
    // 0x4ac4dc: 0xc12b0b0  jal         func_4AC2C0
    ctx->pc = 0x4AC4DCu;
    SET_GPR_U32(ctx, 31, 0x4AC4E4u);
    ctx->pc = 0x4AC4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC4DCu;
    // 0x4ac4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC2C0u, 0x4AC4DCu, 0x4AC4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC4E4u;
label_4ac4e4:
    // 0x4ac4e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ac4e8:
    // 0x4ac4e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ac4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac4ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC4F0u;
        // 0x4ac4f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC4F8u;
}
