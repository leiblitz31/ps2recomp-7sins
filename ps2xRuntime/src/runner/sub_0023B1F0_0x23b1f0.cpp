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

// Function: sub_0023B1F0
// Address: 0x23b1f0 - 0x23b240
void sub_0023B1F0_0x23b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B1F0_0x23b1f0");
#endif

    switch (ctx->pc) {
        case 0x23b214u: goto label_23b214;
        default: break;
    }

    ctx->pc = 0x23b1f0u;

    // 0x23b1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23b1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b1f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23b1fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b200: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23b200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23b204: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b208: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x23b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x23b20c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x23B20Cu;
    SET_GPR_U32(ctx, 31, 0x23B214u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x23B20Cu, 0x23B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B214u;
label_23b214:
    // 0x23b214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b218: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b21c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x23b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x23b220: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b228: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23b228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23b22c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B234u;
    // 0x23b234: 0x0  nop
    ctx->pc = 0x23b234u;
    // NOP
    // 0x23b238: 0x0  nop
    ctx->pc = 0x23b238u;
    // NOP
    // 0x23b23c: 0x0  nop
    ctx->pc = 0x23b23cu;
    // NOP
    ctx->pc = 0x23b240u;
}
