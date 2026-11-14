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

// Function: sub_004578D0
// Address: 0x4578d0 - 0x457910
void sub_004578D0_0x4578d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004578D0_0x4578d0");
#endif

    switch (ctx->pc) {
        case 0x4578f8u: goto label_4578f8;
        default: break;
    }

    ctx->pc = 0x4578d0u;

    // 0x4578d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4578d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4578d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4578d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4578d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4578d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4578dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4578dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4578e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x4578e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x4578e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4578e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4578e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4578e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4578ec: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4578ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4578f0: 0xc115e44  jal         func_457910
    ctx->pc = 0x4578F0u;
    SET_GPR_U32(ctx, 31, 0x4578F8u);
    ctx->pc = 0x457910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457910u, 0x4578F0u, 0x4578F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4578F8u;
label_4578f8:
    // 0x4578f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4578f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4578fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4578fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457900: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x457900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x457904: 0x3e00008  jr          $ra
    ctx->pc = 0x457904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45790Cu;
    // 0x45790c: 0x0  nop
    ctx->pc = 0x45790cu;
    // NOP
    ctx->pc = 0x457910u;
}
