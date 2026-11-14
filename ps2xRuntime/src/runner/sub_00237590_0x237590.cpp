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

// Function: sub_00237590
// Address: 0x237590 - 0x2375e0
void sub_00237590_0x237590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237590_0x237590");
#endif

    switch (ctx->pc) {
        case 0x2375a8u: goto label_2375a8;
        default: break;
    }

    ctx->pc = 0x237590u;

    // 0x237590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x237598: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x237598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23759c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23759cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2375a0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x2375A0u;
    SET_GPR_U32(ctx, 31, 0x2375A8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x2375A0u, 0x2375A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375A8u;
label_2375a8:
    // 0x2375a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2375a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2375ac: 0x246355a0  addiu       $v1, $v1, 0x55A0
    ctx->pc = 0x2375acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21920));
    // 0x2375b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2375b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2375b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2375b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2375b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2375b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2375bc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2375bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2375c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2375c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2375c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2375c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2375c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2375c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2375cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2375CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2375CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2375D4u;
    // 0x2375d4: 0x0  nop
    ctx->pc = 0x2375d4u;
    // NOP
    // 0x2375d8: 0x0  nop
    ctx->pc = 0x2375d8u;
    // NOP
    // 0x2375dc: 0x0  nop
    ctx->pc = 0x2375dcu;
    // NOP
    ctx->pc = 0x2375e0u;
}
