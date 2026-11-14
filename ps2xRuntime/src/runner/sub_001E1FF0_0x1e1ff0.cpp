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

// Function: sub_001E1FF0
// Address: 0x1e1ff0 - 0x1e2040
void sub_001E1FF0_0x1e1ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1FF0_0x1e1ff0");
#endif

    switch (ctx->pc) {
        case 0x1e2014u: goto label_1e2014;
        default: break;
    }

    ctx->pc = 0x1e1ff0u;

    // 0x1e1ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e1ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e1ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e1ffc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e2000: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e2000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e2004: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e2004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2008: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e2008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e200c: 0xc078810  jal         func_1E2040
    ctx->pc = 0x1E200Cu;
    SET_GPR_U32(ctx, 31, 0x1E2014u);
    ctx->pc = 0x1E2040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2040u, 0x1E200Cu, 0x1E2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2014u;
label_1e2014:
    // 0x1e2014: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e2014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2018: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e2018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e201c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e201cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e2020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e2020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2028: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e2028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e202c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E202Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E202Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2034u;
    // 0x1e2034: 0x0  nop
    ctx->pc = 0x1e2034u;
    // NOP
    // 0x1e2038: 0x0  nop
    ctx->pc = 0x1e2038u;
    // NOP
    // 0x1e203c: 0x0  nop
    ctx->pc = 0x1e203cu;
    // NOP
    ctx->pc = 0x1e2040u;
}
