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

// Function: sub_00261E40
// Address: 0x261e40 - 0x261e90
void sub_00261E40_0x261e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261E40_0x261e40");
#endif

    switch (ctx->pc) {
        case 0x261e78u: goto label_261e78;
        default: break;
    }

    ctx->pc = 0x261e40u;

    // 0x261e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261e48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x261e4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x261e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x261e50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261e54: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x261e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x261e58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261e5c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x261e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x261e60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261e64: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x261e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x261e68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x261e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261e6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x261e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261e70: 0xc0987a4  jal         func_261E90
    ctx->pc = 0x261E70u;
    SET_GPR_U32(ctx, 31, 0x261E78u);
    ctx->pc = 0x261E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261E90u, 0x261E70u, 0x261E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E78u;
label_261e78:
    // 0x261e78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261e80: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x261e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x261e84: 0x3e00008  jr          $ra
    ctx->pc = 0x261E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261E8Cu;
    // 0x261e8c: 0x0  nop
    ctx->pc = 0x261e8cu;
    // NOP
    ctx->pc = 0x261e90u;
}
