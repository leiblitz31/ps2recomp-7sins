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

// Function: sub_004863A0
// Address: 0x4863a0 - 0x4863f0
void sub_004863A0_0x4863a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004863A0_0x4863a0");
#endif

    ctx->pc = 0x4863a0u;

    // 0x4863a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4863a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4863a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4863a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4863a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4863a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4863ac: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4863acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4863b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4863b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4863b4: 0x0  nop
    ctx->pc = 0x4863b4u;
    // NOP
    // 0x4863b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4863b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4863bc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x4863BCu;
    {
        const bool branch_taken_0x4863bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4863bc) {
            ctx->pc = 0x4863D8u;
            goto label_4863d8;
        }
    }
    ctx->pc = 0x4863C4u;
    // 0x4863c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4863c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4863c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4863c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4863cc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4863ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x4863d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4863D0u;
    {
        const bool branch_taken_0x4863d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4863d0) {
            ctx->pc = 0x4863E0u;
            goto label_4863e0;
        }
    }
    ctx->pc = 0x4863D8u;
label_4863d8:
    // 0x4863d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4863d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4863dc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x4863dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_4863e0:
    // 0x4863e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4863e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4863e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4863E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4863E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4863ECu;
    // 0x4863ec: 0x0  nop
    ctx->pc = 0x4863ecu;
    // NOP
    ctx->pc = 0x4863f0u;
}
