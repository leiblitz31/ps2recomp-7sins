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

// Function: sub_0014AD60
// Address: 0x14ad60 - 0x14ada0
void sub_0014AD60_0x14ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AD60_0x14ad60");
#endif

    switch (ctx->pc) {
        case 0x14ad88u: goto label_14ad88;
        default: break;
    }

    ctx->pc = 0x14ad60u;

    // 0x14ad60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ad64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ad68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14ad6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14ad70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x14ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x14ad74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ad78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x14ad78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ad7c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x14ad7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ad80: 0xc052b68  jal         func_14ADA0
    ctx->pc = 0x14AD80u;
    SET_GPR_U32(ctx, 31, 0x14AD88u);
    ctx->pc = 0x14ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADA0u, 0x14AD80u, 0x14AD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD88u;
label_14ad88:
    // 0x14ad88: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ad8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ad8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ad90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14ad94: 0x3e00008  jr          $ra
    ctx->pc = 0x14AD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AD9Cu;
    // 0x14ad9c: 0x0  nop
    ctx->pc = 0x14ad9cu;
    // NOP
    ctx->pc = 0x14ada0u;
}
