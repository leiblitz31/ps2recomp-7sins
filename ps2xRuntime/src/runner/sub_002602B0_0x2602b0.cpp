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

// Function: sub_002602B0
// Address: 0x2602b0 - 0x2602f0
void sub_002602B0_0x2602b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002602B0_0x2602b0");
#endif

    switch (ctx->pc) {
        case 0x2602d4u: goto label_2602d4;
        default: break;
    }

    ctx->pc = 0x2602b0u;

    // 0x2602b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2602b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2602b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2602b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2602b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2602b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2602bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2602bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2602c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2602c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2602c4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2602c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2602c8: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2602c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2602cc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2602CCu;
    SET_GPR_U32(ctx, 31, 0x2602D4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2602CCu, 0x2602D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602D4u;
label_2602d4:
    // 0x2602d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2602d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2602d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2602d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2602dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2602dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2602e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2602e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2602e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2602E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2602E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2602ECu;
    // 0x2602ec: 0x0  nop
    ctx->pc = 0x2602ecu;
    // NOP
    ctx->pc = 0x2602f0u;
}
