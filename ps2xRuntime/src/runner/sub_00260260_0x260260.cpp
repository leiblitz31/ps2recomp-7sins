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

// Function: sub_00260260
// Address: 0x260260 - 0x2602b0
void sub_00260260_0x260260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260260_0x260260");
#endif

    switch (ctx->pc) {
        case 0x260284u: goto label_260284;
        default: break;
    }

    ctx->pc = 0x260260u;

    // 0x260260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x260260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x260264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260268: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x260268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26026c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26026cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x260270: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x260270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260274: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x260274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260278: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x26027c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x26027Cu;
    SET_GPR_U32(ctx, 31, 0x260284u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x26027Cu, 0x260284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260284u;
label_260284:
    // 0x260284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260288: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x260288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26028c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26028cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x260290: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x260290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x260294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260298: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x260298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26029c: 0x3e00008  jr          $ra
    ctx->pc = 0x26029Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26029Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2602A4u;
    // 0x2602a4: 0x0  nop
    ctx->pc = 0x2602a4u;
    // NOP
    // 0x2602a8: 0x0  nop
    ctx->pc = 0x2602a8u;
    // NOP
    // 0x2602ac: 0x0  nop
    ctx->pc = 0x2602acu;
    // NOP
    ctx->pc = 0x2602b0u;
}
