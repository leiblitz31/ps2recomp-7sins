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

// Function: sub_0015E940
// Address: 0x15e940 - 0x15e9b0
void sub_0015E940_0x15e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E940_0x15e940");
#endif

    switch (ctx->pc) {
        case 0x15e964u: goto label_15e964;
        default: break;
    }

    ctx->pc = 0x15e940u;

    // 0x15e940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15e944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15e944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15e948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e94c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x15e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x15e950: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x15e950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x15e954: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x15e954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15e958: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15e958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e95c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x15E95Cu;
    SET_GPR_U32(ctx, 31, 0x15E964u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x15E95Cu, 0x15E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E964u;
label_15e964:
    // 0x15e964: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x15e964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x15e968: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E968u;
    {
        const bool branch_taken_0x15e968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e968) {
            ctx->pc = 0x15E990u;
            goto label_15e990;
        }
    }
    ctx->pc = 0x15E970u;
    // 0x15e970: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15e970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e974: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x15e974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x15e978: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x15e978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e97c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x15e97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e980: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x15e980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e984: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x15e984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15e988: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x15e988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x15e98c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x15e98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_15e990:
    // 0x15e990: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x15e990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x15e994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15e994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e99c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15e99cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15e9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x15E9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E9A8u;
    // 0x15e9a8: 0x0  nop
    ctx->pc = 0x15e9a8u;
    // NOP
    // 0x15e9ac: 0x0  nop
    ctx->pc = 0x15e9acu;
    // NOP
    ctx->pc = 0x15e9b0u;
}
