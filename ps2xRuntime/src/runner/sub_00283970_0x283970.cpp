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

// Function: sub_00283970
// Address: 0x283970 - 0x2839e0
void sub_00283970_0x283970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283970_0x283970");
#endif

    switch (ctx->pc) {
        case 0x283994u: goto label_283994;
        default: break;
    }

    ctx->pc = 0x283970u;

    // 0x283970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x283970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x283974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28397c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x28397cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x283980: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x283980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x283984: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x283984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x283988: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x283988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28398c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x28398Cu;
    SET_GPR_U32(ctx, 31, 0x283994u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x28398Cu, 0x283994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283994u;
label_283994:
    // 0x283994: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x283994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x283998: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283998u;
    {
        const bool branch_taken_0x283998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283998) {
            ctx->pc = 0x2839C0u;
            goto label_2839c0;
        }
    }
    ctx->pc = 0x2839A0u;
    // 0x2839a0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2839a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2839a4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2839a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2839a8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2839a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2839ac: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2839acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2839b0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2839b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2839b4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2839b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2839b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2839b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2839bc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2839bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2839c0:
    // 0x2839c0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x2839c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2839c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2839c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2839c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2839c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2839cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2839ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2839d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2839D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2839D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2839D8u;
    // 0x2839d8: 0x0  nop
    ctx->pc = 0x2839d8u;
    // NOP
    // 0x2839dc: 0x0  nop
    ctx->pc = 0x2839dcu;
    // NOP
    ctx->pc = 0x2839e0u;
}
