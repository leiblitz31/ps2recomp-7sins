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

// Function: sub_00181D10
// Address: 0x181d10 - 0x181d70
void sub_00181D10_0x181d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181D10_0x181d10");
#endif

    switch (ctx->pc) {
        case 0x181d2cu: goto label_181d2c;
        case 0x181d3cu: goto label_181d3c;
        default: break;
    }

    ctx->pc = 0x181d10u;

    // 0x181d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x181d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181d18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x181d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x181d1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x181d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x181d20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x181d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x181d24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181D24u;
    {
        const bool branch_taken_0x181d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181d24) {
            ctx->pc = 0x181D48u;
            goto label_181d48;
        }
    }
    ctx->pc = 0x181D2Cu;
label_181d2c:
    // 0x181d2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x181d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181d30: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x181d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181d34: 0xc05fcfc  jal         func_17F3F0
    ctx->pc = 0x181D34u;
    SET_GPR_U32(ctx, 31, 0x181D3Cu);
    ctx->pc = 0x17F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3F0u, 0x181D34u, 0x181D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181D3Cu;
label_181d3c:
    // 0x181d3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x181d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181d40: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x181d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x181d44: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x181d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_181d48:
    // 0x181d48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x181d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181d4c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x181d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181d50: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x181D50u;
    {
        const bool branch_taken_0x181d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x181d50) {
            ctx->pc = 0x181D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181d2c;
        }
    }
    ctx->pc = 0x181D58u;
    // 0x181d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181d5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x181d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x181d60: 0x3e00008  jr          $ra
    ctx->pc = 0x181D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181D68u;
    // 0x181d68: 0x0  nop
    ctx->pc = 0x181d68u;
    // NOP
    // 0x181d6c: 0x0  nop
    ctx->pc = 0x181d6cu;
    // NOP
    ctx->pc = 0x181d70u;
}
