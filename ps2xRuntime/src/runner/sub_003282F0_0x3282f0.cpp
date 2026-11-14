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

// Function: sub_003282F0
// Address: 0x3282f0 - 0x328330
void sub_003282F0_0x3282f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003282F0_0x3282f0");
#endif

    switch (ctx->pc) {
        case 0x328314u: goto label_328314;
        default: break;
    }

    ctx->pc = 0x3282f0u;

    // 0x3282f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3282f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3282f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3282f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3282f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3282f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3282fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3282fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328300: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x328300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x328304: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x328304u;
    {
        const bool branch_taken_0x328304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328304) {
            ctx->pc = 0x328308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328304u;
            // 0x328308: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328320u;
            goto label_328320;
        }
    }
    ctx->pc = 0x32830Cu;
    // 0x32830c: 0xc0ca4b4  jal         func_3292D0
    ctx->pc = 0x32830Cu;
    SET_GPR_U32(ctx, 31, 0x328314u);
    ctx->pc = 0x3292D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3292D0u, 0x32830Cu, 0x328314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328314u;
label_328314:
    // 0x328314: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x328314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x328318: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x328318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x32831c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32831cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_328320:
    // 0x328320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328324: 0x3e00008  jr          $ra
    ctx->pc = 0x328324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328324u;
        // 0x328328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32832Cu;
    // 0x32832c: 0x0  nop
    ctx->pc = 0x32832cu;
    // NOP
    ctx->pc = 0x328330u;
}
