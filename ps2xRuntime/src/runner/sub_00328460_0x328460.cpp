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

// Function: sub_00328460
// Address: 0x328460 - 0x3284b8
void sub_00328460_0x328460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328460_0x328460");
#endif

    switch (ctx->pc) {
        case 0x328494u: goto label_328494;
        default: break;
    }

    ctx->pc = 0x328460u;

    // 0x328460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x328464: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x328464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x328468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32846c: 0x8c62231c  lw          $v0, 0x231C($v1)
    ctx->pc = 0x32846cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F231Cu));
    // 0x328470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x328470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328474: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x328474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x328478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32847c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x32847cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x328480: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x328480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328484: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x328484u;
    {
        const bool branch_taken_0x328484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328484) {
            ctx->pc = 0x328488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328484u;
            // 0x328488: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328498u;
            goto label_328498;
        }
    }
    ctx->pc = 0x32848Cu;
    // 0x32848c: 0xc0ca09c  jal         func_328270
    ctx->pc = 0x32848Cu;
    SET_GPR_U32(ctx, 31, 0x328494u);
    ctx->pc = 0x328270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328270u, 0x32848Cu, 0x328494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328494u;
label_328494:
    // 0x328494: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x328494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_328498:
    // 0x328498: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x328498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32849c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x32849cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3284a0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3284a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3284a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3284a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3284a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3284a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3284ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3284acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3284b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3284B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3284B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284B0u;
        // 0x3284b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3284B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3284B8u;
}
