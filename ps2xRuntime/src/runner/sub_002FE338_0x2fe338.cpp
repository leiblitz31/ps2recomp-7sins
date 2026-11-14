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

// Function: sub_002FE338
// Address: 0x2fe338 - 0x2fe3b0
void sub_002FE338_0x2fe338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE338_0x2fe338");
#endif

    switch (ctx->pc) {
        case 0x2fe350u: goto label_2fe350;
        case 0x2fe370u: goto label_2fe370;
        case 0x2fe398u: goto label_2fe398;
        default: break;
    }

    ctx->pc = 0x2fe338u;

    // 0x2fe338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe340: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE340u;
    {
        const bool branch_taken_0x2fe340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE340u;
        // 0x2fe344: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe340) {
            ctx->pc = 0x2FE350u;
            goto label_2fe350;
        }
    }
    ctx->pc = 0x2FE348u;
    // 0x2fe348: 0xc0c20b6  jal         func_3082D8
    ctx->pc = 0x2FE348u;
    SET_GPR_U32(ctx, 31, 0x2FE350u);
    ctx->pc = 0x2FE34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE348u;
    // 0x2fe34c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3082D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3082D8u, 0x2FE348u, 0x2FE350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE350u;
label_2fe350:
    // 0x2fe350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe358: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE358u;
        // 0x2fe35c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE360u;
    // 0x2fe360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe368: 0xc0bae34  jal         func_2EB8D0
    ctx->pc = 0x2FE368u;
    SET_GPR_U32(ctx, 31, 0x2FE370u);
    ctx->pc = 0x2EB8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB8D0u, 0x2FE368u, 0x2FE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE370u;
label_2fe370:
    // 0x2fe370: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2fe370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2fe374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe378: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2fe378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2fe37c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fe37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fe380: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE380u;
        // 0x2fe384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE388u;
    // 0x2fe388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe38c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe390: 0xc0bae34  jal         func_2EB8D0
    ctx->pc = 0x2FE390u;
    SET_GPR_U32(ctx, 31, 0x2FE398u);
    ctx->pc = 0x2EB8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB8D0u, 0x2FE390u, 0x2FE398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE398u;
label_2fe398:
    // 0x2fe398: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2fe398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2fe39c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe3a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2fe3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2fe3a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fe3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fe3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE3A8u;
        // 0x2fe3ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE3B0u;
}
