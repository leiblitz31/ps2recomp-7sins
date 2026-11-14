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

// Function: sub_001E0640
// Address: 0x1e0640 - 0x1e0690
void sub_001E0640_0x1e0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0640_0x1e0640");
#endif

    switch (ctx->pc) {
        case 0x1e0664u: goto label_1e0664;
        default: break;
    }

    ctx->pc = 0x1e0640u;

    // 0x1e0640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e0640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e0644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e0648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e064c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e064cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e0650: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e0650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e0654: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e0654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0658: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e0658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e065c: 0xc0781a4  jal         func_1E0690
    ctx->pc = 0x1E065Cu;
    SET_GPR_U32(ctx, 31, 0x1E0664u);
    ctx->pc = 0x1E0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0690u, 0x1E065Cu, 0x1E0664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0664u;
label_1e0664:
    // 0x1e0664: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e0664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0668: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e066c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e066cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e0670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0678: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e0678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e067c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E067Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E067Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0684u;
    // 0x1e0684: 0x0  nop
    ctx->pc = 0x1e0684u;
    // NOP
    // 0x1e0688: 0x0  nop
    ctx->pc = 0x1e0688u;
    // NOP
    // 0x1e068c: 0x0  nop
    ctx->pc = 0x1e068cu;
    // NOP
    ctx->pc = 0x1e0690u;
}
