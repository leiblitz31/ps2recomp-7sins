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

// Function: sub_002173A0
// Address: 0x2173a0 - 0x217400
void sub_002173A0_0x2173a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002173A0_0x2173a0");
#endif

    switch (ctx->pc) {
        case 0x2173c4u: goto label_2173c4;
        default: break;
    }

    ctx->pc = 0x2173a0u;

    // 0x2173a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2173a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2173a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2173a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2173a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2173a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2173ac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2173acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2173b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2173b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2173b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2173b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2173b8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2173b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2173bc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2173BCu;
    SET_GPR_U32(ctx, 31, 0x2173C4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2173BCu, 0x2173C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173C4u;
label_2173c4:
    // 0x2173c4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2173c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2173c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2173C8u;
    {
        const bool branch_taken_0x2173c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2173c8) {
            ctx->pc = 0x2173E8u;
            goto label_2173e8;
        }
    }
    ctx->pc = 0x2173D0u;
    // 0x2173d0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2173d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2173d4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2173d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2173d8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2173d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2173dc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2173dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2173e0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2173e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2173e4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2173e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2173e8:
    // 0x2173e8: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2173e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2173ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2173ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2173f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2173f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2173f4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2173f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2173f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2173F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2173F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217400u;
}
