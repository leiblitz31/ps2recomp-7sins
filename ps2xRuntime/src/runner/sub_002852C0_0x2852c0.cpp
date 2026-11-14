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

// Function: sub_002852C0
// Address: 0x2852c0 - 0x285310
void sub_002852C0_0x2852c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002852C0_0x2852c0");
#endif

    switch (ctx->pc) {
        case 0x2852e4u: goto label_2852e4;
        default: break;
    }

    ctx->pc = 0x2852c0u;

    // 0x2852c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2852c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2852c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2852c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2852c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2852c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2852cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2852ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2852d0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2852d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2852d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2852d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2852d8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2852d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2852dc: 0xc0a14c4  jal         func_285310
    ctx->pc = 0x2852DCu;
    SET_GPR_U32(ctx, 31, 0x2852E4u);
    ctx->pc = 0x285310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285310u, 0x2852DCu, 0x2852E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2852E4u;
label_2852e4:
    // 0x2852e4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2852e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2852e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2852e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2852ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2852ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2852f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2852f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2852f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2852f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2852f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2852f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2852fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2852FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2852FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285304u;
    // 0x285304: 0x0  nop
    ctx->pc = 0x285304u;
    // NOP
    // 0x285308: 0x0  nop
    ctx->pc = 0x285308u;
    // NOP
    // 0x28530c: 0x0  nop
    ctx->pc = 0x28530cu;
    // NOP
    ctx->pc = 0x285310u;
}
