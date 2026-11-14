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

// Function: sub_00210630
// Address: 0x210630 - 0x2106a0
void sub_00210630_0x210630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210630_0x210630");
#endif

    switch (ctx->pc) {
        case 0x210654u: goto label_210654;
        default: break;
    }

    ctx->pc = 0x210630u;

    // 0x210630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x210634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x210634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x210638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21063c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x21063cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x210640: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x210640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x210644: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x210644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x210648: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x210648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21064c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x21064Cu;
    SET_GPR_U32(ctx, 31, 0x210654u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x21064Cu, 0x210654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210654u;
label_210654:
    // 0x210654: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x210654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x210658: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x210658u;
    {
        const bool branch_taken_0x210658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210658) {
            ctx->pc = 0x210680u;
            goto label_210680;
        }
    }
    ctx->pc = 0x210660u;
    // 0x210660: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x210660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210664: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x210664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x210668: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x210668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21066c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x21066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210670: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x210670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210674: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x210674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x210678: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x210678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21067c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_210680:
    // 0x210680: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x210680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x210684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x210684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21068c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x21068cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x210690: 0x3e00008  jr          $ra
    ctx->pc = 0x210690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210698u;
    // 0x210698: 0x0  nop
    ctx->pc = 0x210698u;
    // NOP
    // 0x21069c: 0x0  nop
    ctx->pc = 0x21069cu;
    // NOP
    ctx->pc = 0x2106a0u;
}
