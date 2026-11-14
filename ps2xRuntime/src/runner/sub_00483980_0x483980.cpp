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

// Function: sub_00483980
// Address: 0x483980 - 0x4839d0
void sub_00483980_0x483980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483980_0x483980");
#endif

    switch (ctx->pc) {
        case 0x4839a4u: goto label_4839a4;
        case 0x4839b8u: goto label_4839b8;
        default: break;
    }

    ctx->pc = 0x483980u;

    // 0x483980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x483980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x483984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x483988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x483988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48398c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48398cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x483990: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x483990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x483994: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x483994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483998: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x483998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48399c: 0xc120e74  jal         func_4839D0
    ctx->pc = 0x48399Cu;
    SET_GPR_U32(ctx, 31, 0x4839A4u);
    ctx->pc = 0x4839D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4839D0u, 0x48399Cu, 0x4839A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4839A4u;
label_4839a4:
    // 0x4839a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4839a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4839a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4839a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4839ac: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x4839acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4839b0: 0xc0a02a4  jal         func_280A90
    ctx->pc = 0x4839B0u;
    SET_GPR_U32(ctx, 31, 0x4839B8u);
    ctx->pc = 0x280A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280A90u, 0x4839B0u, 0x4839B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4839B8u;
label_4839b8:
    // 0x4839b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4839b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4839bc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4839bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4839c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4839C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4839C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4839C8u;
    // 0x4839c8: 0x0  nop
    ctx->pc = 0x4839c8u;
    // NOP
    // 0x4839cc: 0x0  nop
    ctx->pc = 0x4839ccu;
    // NOP
    ctx->pc = 0x4839d0u;
}
