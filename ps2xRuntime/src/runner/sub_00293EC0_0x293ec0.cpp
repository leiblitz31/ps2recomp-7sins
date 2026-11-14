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

// Function: sub_00293EC0
// Address: 0x293ec0 - 0x293f20
void sub_00293EC0_0x293ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293EC0_0x293ec0");
#endif

    switch (ctx->pc) {
        case 0x293edcu: goto label_293edc;
        case 0x293eecu: goto label_293eec;
        default: break;
    }

    ctx->pc = 0x293ec0u;

    // 0x293ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x293ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x293ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293ec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x293ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x293ecc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x293eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x293ed0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x293ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x293ed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x293ED4u;
    {
        const bool branch_taken_0x293ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293ed4) {
            ctx->pc = 0x293EF8u;
            goto label_293ef8;
        }
    }
    ctx->pc = 0x293EDCu;
label_293edc:
    // 0x293edc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x293edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293ee0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x293ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293ee4: 0xc0a4b64  jal         func_292D90
    ctx->pc = 0x293EE4u;
    SET_GPR_U32(ctx, 31, 0x293EECu);
    ctx->pc = 0x292D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D90u, 0x293EE4u, 0x293EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EECu;
label_293eec:
    // 0x293eec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x293eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293ef0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x293ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x293ef4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x293ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_293ef8:
    // 0x293ef8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x293ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293efc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x293efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293f00: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x293F00u;
    {
        const bool branch_taken_0x293f00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x293f00) {
            ctx->pc = 0x293EDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293edc;
        }
    }
    ctx->pc = 0x293F08u;
    // 0x293f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293f0c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x293f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x293f10: 0x3e00008  jr          $ra
    ctx->pc = 0x293F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293F18u;
    // 0x293f18: 0x0  nop
    ctx->pc = 0x293f18u;
    // NOP
    // 0x293f1c: 0x0  nop
    ctx->pc = 0x293f1cu;
    // NOP
    ctx->pc = 0x293f20u;
}
