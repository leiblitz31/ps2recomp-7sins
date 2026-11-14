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

// Function: sub_001589D0
// Address: 0x1589d0 - 0x158a20
void sub_001589D0_0x1589d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001589D0_0x1589d0");
#endif

    switch (ctx->pc) {
        case 0x158a08u: goto label_158a08;
        default: break;
    }

    ctx->pc = 0x1589d0u;

    // 0x1589d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1589d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1589d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1589d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1589d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1589d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1589dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1589dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1589e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1589e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1589e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1589e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1589e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1589e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1589ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1589ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1589f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1589f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1589f4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1589f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1589f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1589f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1589fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1589fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a00: 0xc056288  jal         func_158A20
    ctx->pc = 0x158A00u;
    SET_GPR_U32(ctx, 31, 0x158A08u);
    ctx->pc = 0x158A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A20u, 0x158A00u, 0x158A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A08u;
label_158a08:
    // 0x158a08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x158a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158a10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x158a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158a14: 0x3e00008  jr          $ra
    ctx->pc = 0x158A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158A1Cu;
    // 0x158a1c: 0x0  nop
    ctx->pc = 0x158a1cu;
    // NOP
    ctx->pc = 0x158a20u;
}
