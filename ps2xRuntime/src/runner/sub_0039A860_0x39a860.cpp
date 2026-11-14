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

// Function: sub_0039A860
// Address: 0x39a860 - 0x39a8a8
void sub_0039A860_0x39a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A860_0x39a860");
#endif

    switch (ctx->pc) {
        case 0x39a898u: goto label_39a898;
        default: break;
    }

    ctx->pc = 0x39a860u;

    // 0x39a860: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39a860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a864: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a868: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x39a868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a86c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x39a86cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a870: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x39a870u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a874: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x39a874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a878: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x39a878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x39a87c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a880: 0x2484ae58  addiu       $a0, $a0, -0x51A8
    ctx->pc = 0x39a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946392));
    // 0x39a884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39a884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a888: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x39a888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a88c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x39a88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a890: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x39A890u;
    SET_GPR_U32(ctx, 31, 0x39A898u);
    ctx->pc = 0x39A894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A890u;
    // 0x39a894: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x39A890u, 0x39A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A898u;
label_39a898:
    // 0x39a898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a89c: 0x3e00008  jr          $ra
    ctx->pc = 0x39A89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A89Cu;
        // 0x39a8a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A8A4u;
    // 0x39a8a4: 0x0  nop
    ctx->pc = 0x39a8a4u;
    // NOP
    ctx->pc = 0x39a8a8u;
}
