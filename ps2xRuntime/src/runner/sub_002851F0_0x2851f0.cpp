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

// Function: sub_002851F0
// Address: 0x2851f0 - 0x285230
void sub_002851F0_0x2851f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002851F0_0x2851f0");
#endif

    switch (ctx->pc) {
        case 0x285208u: goto label_285208;
        case 0x285218u: goto label_285218;
        default: break;
    }

    ctx->pc = 0x2851f0u;

    // 0x2851f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2851f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2851f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2851f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2851f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2851f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2851fc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2851fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x285200: 0xc0a14cc  jal         func_285330
    ctx->pc = 0x285200u;
    SET_GPR_U32(ctx, 31, 0x285208u);
    ctx->pc = 0x285330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285330u, 0x285200u, 0x285208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285208u;
label_285208:
    // 0x285208: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28520c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28520cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285210: 0xc0a148c  jal         func_285230
    ctx->pc = 0x285210u;
    SET_GPR_U32(ctx, 31, 0x285218u);
    ctx->pc = 0x285230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285230u, 0x285210u, 0x285218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285218u;
label_285218:
    // 0x285218: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x285218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28521c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28521cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285220: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x285220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285224: 0x3e00008  jr          $ra
    ctx->pc = 0x285224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28522Cu;
    // 0x28522c: 0x0  nop
    ctx->pc = 0x28522cu;
    // NOP
    ctx->pc = 0x285230u;
}
