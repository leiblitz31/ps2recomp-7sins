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

// Function: sub_003CD498
// Address: 0x3cd498 - 0x3cd4e0
void sub_003CD498_0x3cd498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD498_0x3cd498");
#endif

    switch (ctx->pc) {
        case 0x3cd4b8u: goto label_3cd4b8;
        default: break;
    }

    ctx->pc = 0x3cd498u;

    // 0x3cd498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cd498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3cd49c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3cd49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3cd4a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cd4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cd4a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cd4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd4a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cd4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3cd4ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3cd4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd4b0: 0xc0ddc6c  jal         func_3771B0
    ctx->pc = 0x3CD4B0u;
    SET_GPR_U32(ctx, 31, 0x3CD4B8u);
    ctx->pc = 0x3CD4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD4B0u;
    // 0x3cd4b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3771B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3771B0u, 0x3CD4B0u, 0x3CD4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD4B8u;
label_3cd4b8:
    // 0x3cd4b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CD4B8u;
    {
        const bool branch_taken_0x3cd4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD4B8u;
        // 0x3cd4bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd4b8) {
            ctx->pc = 0x3CD4C4u;
            goto label_3cd4c4;
        }
    }
    ctx->pc = 0x3CD4C0u;
    // 0x3cd4c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3cd4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3cd4c4:
    // 0x3cd4c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3cd4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cd4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd4cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3cd4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cd4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cd4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD4D4u;
        // 0x3cd4d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD4DCu;
    // 0x3cd4dc: 0x0  nop
    ctx->pc = 0x3cd4dcu;
    // NOP
    ctx->pc = 0x3cd4e0u;
}
