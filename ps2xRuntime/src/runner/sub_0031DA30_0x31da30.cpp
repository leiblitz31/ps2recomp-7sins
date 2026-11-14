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

// Function: sub_0031DA30
// Address: 0x31da30 - 0x31da88
void sub_0031DA30_0x31da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DA30_0x31da30");
#endif

    switch (ctx->pc) {
        case 0x31da68u: goto label_31da68;
        default: break;
    }

    ctx->pc = 0x31da30u;

    // 0x31da30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31da30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31da34: 0x8f82a5c0  lw          $v0, -0x5A40($gp)
    ctx->pc = 0x31da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
    // 0x31da38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31da3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31da3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31da40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31da40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31da44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31da48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31da4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DA4Cu;
    {
        const bool branch_taken_0x31da4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA4Cu;
        // 0x31da50: 0x8f83a5c0  lw          $v1, -0x5A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da4c) {
            ctx->pc = 0x31DA6Cu;
            goto label_31da6c;
        }
    }
    ctx->pc = 0x31DA54u;
    // 0x31da54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31da58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DA58u;
    {
        const bool branch_taken_0x31da58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA58u;
        // 0x31da5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da58) {
            ctx->pc = 0x31DA70u;
            goto label_31da70;
        }
    }
    ctx->pc = 0x31DA60u;
    // 0x31da60: 0xc0c75ca  jal         func_31D728
    ctx->pc = 0x31DA60u;
    SET_GPR_U32(ctx, 31, 0x31DA68u);
    ctx->pc = 0x31D728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D728u, 0x31DA60u, 0x31DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DA68u;
label_31da68:
    // 0x31da68: 0x8f83a5c0  lw          $v1, -0x5A40($gp)
    ctx->pc = 0x31da68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31da6c:
    // 0x31da6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31da6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31da70:
    // 0x31da70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31da70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31da74: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x31da74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x31da78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31da78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31da7c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x31da80: 0x3e00008  jr          $ra
    ctx->pc = 0x31DA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA80u;
        // 0x31da84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DA88u;
}
