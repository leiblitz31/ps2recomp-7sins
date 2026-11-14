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

// Function: sub_002186E0
// Address: 0x2186e0 - 0x218720
void sub_002186E0_0x2186e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002186E0_0x2186e0");
#endif

    switch (ctx->pc) {
        case 0x218700u: goto label_218700;
        default: break;
    }

    ctx->pc = 0x2186e0u;

    // 0x2186e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2186e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2186e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2186e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2186e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2186e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2186ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2186ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2186f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2186f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2186f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2186f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2186f8: 0xc0861c8  jal         func_218720
    ctx->pc = 0x2186F8u;
    SET_GPR_U32(ctx, 31, 0x218700u);
    ctx->pc = 0x218720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218720u, 0x2186F8u, 0x218700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218700u;
label_218700:
    // 0x218700: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x218700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218708: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x218708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21870c: 0x3e00008  jr          $ra
    ctx->pc = 0x21870Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21870Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218714u;
    // 0x218714: 0x0  nop
    ctx->pc = 0x218714u;
    // NOP
    // 0x218718: 0x0  nop
    ctx->pc = 0x218718u;
    // NOP
    // 0x21871c: 0x0  nop
    ctx->pc = 0x21871cu;
    // NOP
    ctx->pc = 0x218720u;
}
