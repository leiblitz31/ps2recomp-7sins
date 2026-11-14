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

// Function: sub_0046F0E0
// Address: 0x46f0e0 - 0x46f130
void sub_0046F0E0_0x46f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F0E0_0x46f0e0");
#endif

    switch (ctx->pc) {
        case 0x46f118u: goto label_46f118;
        default: break;
    }

    ctx->pc = 0x46f0e0u;

    // 0x46f0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46f0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46f0e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46f0ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f0f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46f0f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x46F0F4u;
    {
        const bool branch_taken_0x46f0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f0f4) {
            ctx->pc = 0x46F118u;
            goto label_46f118;
        }
    }
    ctx->pc = 0x46F0FCu;
    // 0x46f0fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f100: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46f104: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x46f104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x46f108: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46f108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f10c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46f10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f110: 0xc061d64  jal         func_187590
    ctx->pc = 0x46F110u;
    SET_GPR_U32(ctx, 31, 0x46F118u);
    ctx->pc = 0x187590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187590u, 0x46F110u, 0x46F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F118u;
label_46f118:
    // 0x46f118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46f118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f11c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46f11cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46f120: 0x3e00008  jr          $ra
    ctx->pc = 0x46F120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F128u;
    // 0x46f128: 0x0  nop
    ctx->pc = 0x46f128u;
    // NOP
    // 0x46f12c: 0x0  nop
    ctx->pc = 0x46f12cu;
    // NOP
    ctx->pc = 0x46f130u;
}
