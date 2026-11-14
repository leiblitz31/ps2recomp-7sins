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

// Function: sub_0044B898
// Address: 0x44b898 - 0x44b8e8
void sub_0044B898_0x44b898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044B898_0x44b898");
#endif

    switch (ctx->pc) {
        case 0x44b8b8u: goto label_44b8b8;
        default: break;
    }

    ctx->pc = 0x44b898u;

    // 0x44b898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44b898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44b89c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44b8a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x44b8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x44b8a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44b8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b8a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x44b8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b8ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44b8b0: 0xc112430  jal         func_4490C0
    ctx->pc = 0x44B8B0u;
    SET_GPR_U32(ctx, 31, 0x44B8B8u);
    ctx->pc = 0x44B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B8B0u;
    // 0x44b8b4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4490C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4490C0u, 0x44B8B0u, 0x44B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B8B8u;
label_44b8b8:
    // 0x44b8b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x44b8b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b8bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x44b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x44b8c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x44B8C0u;
    {
        const bool branch_taken_0x44b8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b8c0) {
            ctx->pc = 0x44B8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B8C0u;
            // 0x44b8c4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B8C8u;
            goto label_44b8c8;
        }
    }
    ctx->pc = 0x44B8C8u;
label_44b8c8:
    // 0x44b8c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x44b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x44b8cc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x44b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x44b8d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x44b8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44b8d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44b8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44b8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44b8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44b8dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x44b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x44b8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x44B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B8E0u;
        // 0x44b8e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B8E8u;
}
