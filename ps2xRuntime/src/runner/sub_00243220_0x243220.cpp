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

// Function: sub_00243220
// Address: 0x243220 - 0x243290
void sub_00243220_0x243220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243220_0x243220");
#endif

    switch (ctx->pc) {
        case 0x243244u: goto label_243244;
        default: break;
    }

    ctx->pc = 0x243220u;

    // 0x243220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x243220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x243224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x243224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x243228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x243228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24322c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x24322cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x243230: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x243230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x243234: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x243234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x243238: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x243238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24323c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x24323Cu;
    SET_GPR_U32(ctx, 31, 0x243244u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x24323Cu, 0x243244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243244u;
label_243244:
    // 0x243244: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x243244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x243248: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x243248u;
    {
        const bool branch_taken_0x243248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243248) {
            ctx->pc = 0x243278u;
            goto label_243278;
        }
    }
    ctx->pc = 0x243250u;
    // 0x243250: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x243250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243254: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x243254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x243258: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x243258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24325c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x24325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243260: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x243260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243264: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x243264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243268: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x243268u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x24326c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x24326cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x243270: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x243270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x243274: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x243274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_243278:
    // 0x243278: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x243278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x24327c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24327cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243284: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x243284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x243288: 0x3e00008  jr          $ra
    ctx->pc = 0x243288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243290u;
}
