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

// Function: sub_0022F930
// Address: 0x22f930 - 0x22f9a0
void sub_0022F930_0x22f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F930_0x22f930");
#endif

    switch (ctx->pc) {
        case 0x22f954u: goto label_22f954;
        default: break;
    }

    ctx->pc = 0x22f930u;

    // 0x22f930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22f934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22f938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f93c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22f93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22f940: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22f940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x22f944: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22f944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22f948: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22f948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f94c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22F94Cu;
    SET_GPR_U32(ctx, 31, 0x22F954u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22F94Cu, 0x22F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F954u;
label_22f954:
    // 0x22f954: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x22f954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x22f958: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F958u;
    {
        const bool branch_taken_0x22f958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f958) {
            ctx->pc = 0x22F980u;
            goto label_22f980;
        }
    }
    ctx->pc = 0x22F960u;
    // 0x22f960: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x22f960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f964: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x22f964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x22f968: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x22f968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22f96c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x22f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f970: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x22f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f974: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x22f974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22f978: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x22f978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x22f97c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x22f97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_22f980:
    // 0x22f980: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x22f980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x22f984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22f984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f98c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22f98cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22f990: 0x3e00008  jr          $ra
    ctx->pc = 0x22F990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F998u;
    // 0x22f998: 0x0  nop
    ctx->pc = 0x22f998u;
    // NOP
    // 0x22f99c: 0x0  nop
    ctx->pc = 0x22f99cu;
    // NOP
    ctx->pc = 0x22f9a0u;
}
