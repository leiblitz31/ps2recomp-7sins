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

// Function: sub_002300B0
// Address: 0x2300b0 - 0x230120
void sub_002300B0_0x2300b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002300B0_0x2300b0");
#endif

    switch (ctx->pc) {
        case 0x2300d4u: goto label_2300d4;
        default: break;
    }

    ctx->pc = 0x2300b0u;

    // 0x2300b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2300b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2300b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2300b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2300b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2300b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2300bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2300bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2300c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2300c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2300c4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2300c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2300c8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2300c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2300cc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2300CCu;
    SET_GPR_U32(ctx, 31, 0x2300D4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2300CCu, 0x2300D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2300D4u;
label_2300d4:
    // 0x2300d4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2300d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2300d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2300D8u;
    {
        const bool branch_taken_0x2300d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2300d8) {
            ctx->pc = 0x230100u;
            goto label_230100;
        }
    }
    ctx->pc = 0x2300E0u;
    // 0x2300e0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2300e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2300e4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2300e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2300e8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2300e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2300ec: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2300ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2300f0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2300f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2300f4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2300f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2300f8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2300f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2300fc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2300fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_230100:
    // 0x230100: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x230100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x230104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x230104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23010c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23010cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x230110: 0x3e00008  jr          $ra
    ctx->pc = 0x230110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230118u;
    // 0x230118: 0x0  nop
    ctx->pc = 0x230118u;
    // NOP
    // 0x23011c: 0x0  nop
    ctx->pc = 0x23011cu;
    // NOP
    ctx->pc = 0x230120u;
}
