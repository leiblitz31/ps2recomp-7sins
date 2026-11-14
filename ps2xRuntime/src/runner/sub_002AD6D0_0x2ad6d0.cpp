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

// Function: sub_002AD6D0
// Address: 0x2ad6d0 - 0x2ad710
void sub_002AD6D0_0x2ad6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD6D0_0x2ad6d0");
#endif

    switch (ctx->pc) {
        case 0x2ad6f4u: goto label_2ad6f4;
        default: break;
    }

    ctx->pc = 0x2ad6d0u;

    // 0x2ad6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ad6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ad6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad6d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ad6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ad6dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2ad6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2ad6e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ad6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad6e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2ad6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad6e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad6ec: 0xc0ab5c4  jal         func_2AD710
    ctx->pc = 0x2AD6ECu;
    SET_GPR_U32(ctx, 31, 0x2AD6F4u);
    ctx->pc = 0x2AD710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD710u, 0x2AD6ECu, 0x2AD6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD6F4u;
label_2ad6f4:
    // 0x2ad6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad6f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ad6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ad6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD704u;
    // 0x2ad704: 0x0  nop
    ctx->pc = 0x2ad704u;
    // NOP
    // 0x2ad708: 0x0  nop
    ctx->pc = 0x2ad708u;
    // NOP
    // 0x2ad70c: 0x0  nop
    ctx->pc = 0x2ad70cu;
    // NOP
    ctx->pc = 0x2ad710u;
}
