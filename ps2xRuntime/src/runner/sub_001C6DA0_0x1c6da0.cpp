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

// Function: sub_001C6DA0
// Address: 0x1c6da0 - 0x1c6e10
void sub_001C6DA0_0x1c6da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6DA0_0x1c6da0");
#endif

    switch (ctx->pc) {
        case 0x1c6dc4u: goto label_1c6dc4;
        default: break;
    }

    ctx->pc = 0x1c6da0u;

    // 0x1c6da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c6da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c6da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6dac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c6dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c6db0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c6db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c6db4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c6db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c6db8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c6db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6dbc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1C6DBCu;
    SET_GPR_U32(ctx, 31, 0x1C6DC4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1C6DBCu, 0x1C6DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DC4u;
label_1c6dc4:
    // 0x1c6dc4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1c6dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1c6dc8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6DC8u;
    {
        const bool branch_taken_0x1c6dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6dc8) {
            ctx->pc = 0x1C6DF8u;
            goto label_1c6df8;
        }
    }
    ctx->pc = 0x1C6DD0u;
    // 0x1c6dd0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6dd4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1c6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1c6dd8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1c6dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6ddc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1c6ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6de0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1c6de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6de4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1c6de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6de8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1c6de8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c6dec: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1c6decu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c6df0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c6df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c6df4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1c6df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1c6df8:
    // 0x1c6df8: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1c6df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c6dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6e04: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c6e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c6e08: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6E10u;
}
