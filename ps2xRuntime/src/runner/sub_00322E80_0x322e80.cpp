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

// Function: sub_00322E80
// Address: 0x322e80 - 0x322ed0
void sub_00322E80_0x322e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322E80_0x322e80");
#endif

    switch (ctx->pc) {
        case 0x322eb0u: goto label_322eb0;
        default: break;
    }

    ctx->pc = 0x322e80u;

    // 0x322e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x322e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x322e84: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x322e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x322e88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x322e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x322e8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x322e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x322e90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x322e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322e98: 0x2451b1a8  addiu       $s1, $v0, -0x4E58
    ctx->pc = 0x322e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947240));
    // 0x322e9c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x322e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61B1B4u));
    // 0x322ea0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x322EA0u;
    {
        const bool branch_taken_0x322ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x322ea0) {
            ctx->pc = 0x322EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322EA0u;
            // 0x322ea4: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322EB4u;
            goto label_322eb4;
        }
    }
    ctx->pc = 0x322EA8u;
    // 0x322ea8: 0xc104284  jal         func_410A10
    ctx->pc = 0x322EA8u;
    SET_GPR_U32(ctx, 31, 0x322EB0u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x322EA8u, 0x322EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322EB0u;
label_322eb0:
    // 0x322eb0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x322eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_322eb4:
    // 0x322eb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x322eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322eb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x322eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322ebc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x322ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x322EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EC4u;
        // 0x322ec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322ECCu;
    // 0x322ecc: 0x0  nop
    ctx->pc = 0x322eccu;
    // NOP
    ctx->pc = 0x322ed0u;
}
