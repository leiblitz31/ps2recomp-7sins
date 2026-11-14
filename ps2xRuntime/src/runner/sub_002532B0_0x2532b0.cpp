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

// Function: sub_002532B0
// Address: 0x2532b0 - 0x253320
void sub_002532B0_0x2532b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002532B0_0x2532b0");
#endif

    switch (ctx->pc) {
        case 0x2532ccu: goto label_2532cc;
        default: break;
    }

    ctx->pc = 0x2532b0u;

    // 0x2532b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2532b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2532b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2532b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2532b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2532b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2532bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2532bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2532c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2532c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2532c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2532C4u;
    {
        const bool branch_taken_0x2532c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2532c4) {
            ctx->pc = 0x2532F4u;
            goto label_2532f4;
        }
    }
    ctx->pc = 0x2532CCu;
label_2532cc:
    // 0x2532cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2532ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2532d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2532d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2532d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2532d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2532d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2532d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2532dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2532dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2532e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2532e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2532e4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2532e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2532e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2532e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2532ec: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2532ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2532f0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2532f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2532f4:
    // 0x2532f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2532f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2532f8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2532F8u;
    {
        const bool branch_taken_0x2532f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2532f8) {
            ctx->pc = 0x2532CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2532cc;
        }
    }
    ctx->pc = 0x253300u;
    // 0x253300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x253300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253308: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x253308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25330c: 0x3e00008  jr          $ra
    ctx->pc = 0x25330Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25330Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253314u;
    // 0x253314: 0x0  nop
    ctx->pc = 0x253314u;
    // NOP
    // 0x253318: 0x0  nop
    ctx->pc = 0x253318u;
    // NOP
    // 0x25331c: 0x0  nop
    ctx->pc = 0x25331cu;
    // NOP
    ctx->pc = 0x253320u;
}
