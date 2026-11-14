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

// Function: sub_00181530
// Address: 0x181530 - 0x1815a0
void sub_00181530_0x181530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181530_0x181530");
#endif

    switch (ctx->pc) {
        case 0x181554u: goto label_181554;
        default: break;
    }

    ctx->pc = 0x181530u;

    // 0x181530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x181530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x181534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18153c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18153cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x181540: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x181540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x181544: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x181544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x181548: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x181548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18154c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x18154Cu;
    SET_GPR_U32(ctx, 31, 0x181554u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x18154Cu, 0x181554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181554u;
label_181554:
    // 0x181554: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x181554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x181558: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x181558u;
    {
        const bool branch_taken_0x181558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181558) {
            ctx->pc = 0x181588u;
            goto label_181588;
        }
    }
    ctx->pc = 0x181560u;
    // 0x181560: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x181560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181564: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x181564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x181568: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x181568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18156c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x18156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x181570: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x181570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181574: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x181574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181578: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x181578u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18157c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x18157cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x181580: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x181580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x181584: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x181584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_181588:
    // 0x181588: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x181588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x18158c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18158cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181594: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x181594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x181598: 0x3e00008  jr          $ra
    ctx->pc = 0x181598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1815A0u;
}
