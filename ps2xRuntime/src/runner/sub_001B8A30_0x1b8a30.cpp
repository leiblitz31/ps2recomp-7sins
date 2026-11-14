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

// Function: sub_001B8A30
// Address: 0x1b8a30 - 0x1b8aa0
void sub_001B8A30_0x1b8a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8A30_0x1b8a30");
#endif

    switch (ctx->pc) {
        case 0x1b8a54u: goto label_1b8a54;
        default: break;
    }

    ctx->pc = 0x1b8a30u;

    // 0x1b8a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b8a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8a3c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b8a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b8a40: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1b8a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1b8a44: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b8a48: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1b8a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8a4c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1B8A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B8A54u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1B8A4Cu, 0x1B8A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A54u;
label_1b8a54:
    // 0x1b8a54: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1b8a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1b8a58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8A58u;
    {
        const bool branch_taken_0x1b8a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a58) {
            ctx->pc = 0x1B8A80u;
            goto label_1b8a80;
        }
    }
    ctx->pc = 0x1B8A60u;
    // 0x1b8a60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1b8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8a64: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b8a68: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1b8a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8a6c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1b8a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8a70: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1b8a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8a74: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1b8a74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b8a78: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1b8a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b8a7c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1b8a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1b8a80:
    // 0x1b8a80: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1b8a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1b8a84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8a8c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b8a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8A98u;
    // 0x1b8a98: 0x0  nop
    ctx->pc = 0x1b8a98u;
    // NOP
    // 0x1b8a9c: 0x0  nop
    ctx->pc = 0x1b8a9cu;
    // NOP
    ctx->pc = 0x1b8aa0u;
}
