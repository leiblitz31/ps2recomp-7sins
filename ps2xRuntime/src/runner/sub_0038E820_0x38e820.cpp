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

// Function: sub_0038E820
// Address: 0x38e820 - 0x38e890
void sub_0038E820_0x38e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E820_0x38e820");
#endif

    switch (ctx->pc) {
        case 0x38e84cu: goto label_38e84c;
        case 0x38e884u: goto label_38e884;
        default: break;
    }

    ctx->pc = 0x38e820u;

    // 0x38e820: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x38e820u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e824: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38e824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38e828: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x38e828u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e82c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x38e82cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e830: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38e830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e834: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38e834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38e838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38e83c: 0x2444ae00  addiu       $a0, $v0, -0x5200
    ctx->pc = 0x38e83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946304));
    // 0x38e840: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x38e840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e844: 0xc104a46  jal         func_412918
    ctx->pc = 0x38E844u;
    SET_GPR_U32(ctx, 31, 0x38E84Cu);
    ctx->pc = 0x38E848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E844u;
    // 0x38e848: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412918u, 0x38E844u, 0x38E84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E84Cu;
label_38e84c:
    // 0x38e84c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e850: 0x3e00008  jr          $ra
    ctx->pc = 0x38E850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E850u;
        // 0x38e854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E858u;
    // 0x38e858: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38e858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38e85c: 0x3e00008  jr          $ra
    ctx->pc = 0x38E85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E85Cu;
        // 0x38e860: 0x2442ae00  addiu       $v0, $v0, -0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E864u;
    // 0x38e864: 0x0  nop
    ctx->pc = 0x38e864u;
    // NOP
    // 0x38e868: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38e868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e86c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38e86cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38e870: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38e870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e874: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38e878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38e87c: 0xc104a56  jal         func_412958
    ctx->pc = 0x38E87Cu;
    SET_GPR_U32(ctx, 31, 0x38E884u);
    ctx->pc = 0x38E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E87Cu;
    // 0x38e880: 0x2444ae00  addiu       $a0, $v0, -0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412958u, 0x38E87Cu, 0x38E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E884u;
label_38e884:
    // 0x38e884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e888: 0x3e00008  jr          $ra
    ctx->pc = 0x38E888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E888u;
        // 0x38e88c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E890u;
}
