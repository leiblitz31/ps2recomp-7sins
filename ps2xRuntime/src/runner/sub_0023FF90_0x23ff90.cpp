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

// Function: sub_0023FF90
// Address: 0x23ff90 - 0x240000
void sub_0023FF90_0x23ff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FF90_0x23ff90");
#endif

    switch (ctx->pc) {
        case 0x23ffb4u: goto label_23ffb4;
        default: break;
    }

    ctx->pc = 0x23ff90u;

    // 0x23ff90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23ff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23ff94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ff98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ff9c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x23ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x23ffa0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23ffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23ffa4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x23ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23ffa8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ffac: 0xc0400e0  jal         func_100380
    ctx->pc = 0x23FFACu;
    SET_GPR_U32(ctx, 31, 0x23FFB4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x23FFACu, 0x23FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFB4u;
label_23ffb4:
    // 0x23ffb4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x23ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x23ffb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23FFB8u;
    {
        const bool branch_taken_0x23ffb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ffb8) {
            ctx->pc = 0x23FFE8u;
            goto label_23ffe8;
        }
    }
    ctx->pc = 0x23FFC0u;
    // 0x23ffc0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x23ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ffc4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x23ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x23ffc8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x23ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23ffcc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x23ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23ffd0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x23ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ffd4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x23ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ffd8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x23ffd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x23ffdc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x23ffdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x23ffe0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x23ffe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x23ffe4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23ffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23ffe8:
    // 0x23ffe8: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x23ffe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x23ffec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ffecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fff4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23fff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23fff8: 0x3e00008  jr          $ra
    ctx->pc = 0x23FFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240000u;
}
