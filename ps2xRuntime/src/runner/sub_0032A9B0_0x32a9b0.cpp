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

// Function: sub_0032A9B0
// Address: 0x32a9b0 - 0x32aa00
void sub_0032A9B0_0x32a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A9B0_0x32a9b0");
#endif

    switch (ctx->pc) {
        case 0x32a9dcu: goto label_32a9dc;
        default: break;
    }

    ctx->pc = 0x32a9b0u;

    // 0x32a9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a9b4: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x32a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x32a9b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32a9bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a9c0: 0x24702368  addiu       $s0, $v1, 0x2368
    ctx->pc = 0x32a9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 9064));
    // 0x32a9c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a9c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F2370u));
    // 0x32a9cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A9CCu;
    {
        const bool branch_taken_0x32a9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9CCu;
        // 0x32a9d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9cc) {
            ctx->pc = 0x32A9DCu;
            goto label_32a9dc;
        }
    }
    ctx->pc = 0x32A9D4u;
    // 0x32a9d4: 0xc0cab38  jal         func_32ACE0
    ctx->pc = 0x32A9D4u;
    SET_GPR_U32(ctx, 31, 0x32A9DCu);
    ctx->pc = 0x32A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A9D4u;
    // 0x32a9d8: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ACE0u, 0x32A9D4u, 0x32A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A9DCu;
label_32a9dc:
    // 0x32a9dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32a9e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32a9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a9e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a9e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32a9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a9f0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x32a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x32a9f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32a9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x32A9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9F8u;
        // 0x32a9fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AA00u;
}
