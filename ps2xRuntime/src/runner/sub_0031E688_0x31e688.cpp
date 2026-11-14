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

// Function: sub_0031E688
// Address: 0x31e688 - 0x31e6e0
void sub_0031E688_0x31e688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E688_0x31e688");
#endif

    switch (ctx->pc) {
        case 0x31e6b4u: goto label_31e6b4;
        default: break;
    }

    ctx->pc = 0x31e688u;

    // 0x31e688: 0x8f82a5cc  lw          $v0, -0x5A34($gp)
    ctx->pc = 0x31e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
    // 0x31e68c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e68cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31e690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e694: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x31e694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31e698: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31e698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31e69c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E69Cu;
    {
        const bool branch_taken_0x31e69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e69c) {
            ctx->pc = 0x31E6ACu;
            goto label_31e6ac;
        }
    }
    ctx->pc = 0x31E6A4u;
    // 0x31e6a4: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x31e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x31e6a8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x31e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_31e6ac:
    // 0x31e6ac: 0xc0c7b1c  jal         func_31EC70
    ctx->pc = 0x31E6ACu;
    SET_GPR_U32(ctx, 31, 0x31E6B4u);
    ctx->pc = 0x31EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC70u, 0x31E6ACu, 0x31E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E6B4u;
label_31e6b4:
    // 0x31e6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x31E6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6B8u;
        // 0x31e6bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E6C0u;
    // 0x31e6c0: 0x8c84006c  lw          $a0, 0x6C($a0)
    ctx->pc = 0x31e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x31e6c4: 0x24030122  addiu       $v1, $zero, 0x122
    ctx->pc = 0x31e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x31e6c8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x31e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x31e6cc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E6CCu;
    {
        const bool branch_taken_0x31e6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6CCu;
        // 0x31e6d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6cc) {
            ctx->pc = 0x31E6D8u;
            goto label_31e6d8;
        }
    }
    ctx->pc = 0x31E6D4u;
    // 0x31e6d4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x31e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_31e6d8:
    // 0x31e6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x31E6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6D8u;
        // 0x31e6dc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E6E0u;
}
