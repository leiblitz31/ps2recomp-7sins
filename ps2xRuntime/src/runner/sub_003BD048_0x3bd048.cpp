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

// Function: sub_003BD048
// Address: 0x3bd048 - 0x3bd090
void sub_003BD048_0x3bd048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD048_0x3bd048");
#endif

    switch (ctx->pc) {
        case 0x3bd070u: goto label_3bd070;
        case 0x3bd080u: goto label_3bd080;
        default: break;
    }

    ctx->pc = 0x3bd048u;

    // 0x3bd048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bd048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3bd04c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3bd04cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bd050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bd050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bd054: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3bd054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd058: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x3bd058u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3bd05c: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x3bd05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bd060: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BD060u;
    {
        const bool branch_taken_0x3bd060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bd060) {
            ctx->pc = 0x3BD078u;
            goto label_3bd078;
        }
    }
    ctx->pc = 0x3BD068u;
    // 0x3bd068: 0xc0eef00  jal         func_3BBC00
    ctx->pc = 0x3BD068u;
    SET_GPR_U32(ctx, 31, 0x3BD070u);
    ctx->pc = 0x3BD06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD068u;
    // 0x3bd06c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x3BD068u, 0x3BD070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD070u;
label_3bd070:
    // 0x3bd070: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD070u;
    {
        const bool branch_taken_0x3bd070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD070u;
        // 0x3bd074: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd070) {
            ctx->pc = 0x3BD084u;
            goto label_3bd084;
        }
    }
    ctx->pc = 0x3BD078u;
label_3bd078:
    // 0x3bd078: 0xc0eef7c  jal         func_3BBDF0
    ctx->pc = 0x3BD078u;
    SET_GPR_U32(ctx, 31, 0x3BD080u);
    ctx->pc = 0x3BBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBDF0u, 0x3BD078u, 0x3BD080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD080u;
label_3bd080:
    // 0x3bd080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bd080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bd084:
    // 0x3bd084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bd084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bd088: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD088u;
        // 0x3bd08c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD090u;
}
