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

// Function: sub_0024F750
// Address: 0x24f750 - 0x24f7e0
void sub_0024F750_0x24f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F750_0x24f750");
#endif

    switch (ctx->pc) {
        case 0x24f768u: goto label_24f768;
        case 0x24f798u: goto label_24f798;
        default: break;
    }

    ctx->pc = 0x24f750u;

    // 0x24f750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24f754: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x24f754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x24f758: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x24f758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x24f75c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x24f75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24f760: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x24f760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24f764: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24f764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24f768:
    // 0x24f768: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x24f768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24f76c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24f770: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x24f770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x24f774: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x24f774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24f778: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x24f778u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x24f77c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x24f780: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x24f780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x24f784: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24F784u;
    {
        const bool branch_taken_0x24f784 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x24f784) {
            ctx->pc = 0x24F768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f768;
        }
    }
    ctx->pc = 0x24F78Cu;
    // 0x24f78c: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x24f78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24f790: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x24f790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x24f794: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24f794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24f798:
    // 0x24f798: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x24f798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24f79c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24f7a0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x24f7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x24f7a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x24f7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24f7a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x24f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x24f7ac: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x24f7b0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x24f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x24f7b4: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24F7B4u;
    {
        const bool branch_taken_0x24f7b4 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x24f7b4) {
            ctx->pc = 0x24F798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f798;
        }
    }
    ctx->pc = 0x24F7BCu;
    // 0x24f7bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f7c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f7c4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x24f7c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24f7c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x24f7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24f7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x24F7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F7D4u;
    // 0x24f7d4: 0x0  nop
    ctx->pc = 0x24f7d4u;
    // NOP
    // 0x24f7d8: 0x0  nop
    ctx->pc = 0x24f7d8u;
    // NOP
    // 0x24f7dc: 0x0  nop
    ctx->pc = 0x24f7dcu;
    // NOP
    ctx->pc = 0x24f7e0u;
}
