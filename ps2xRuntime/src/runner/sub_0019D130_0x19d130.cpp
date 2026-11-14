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

// Function: sub_0019D130
// Address: 0x19d130 - 0x19d1b0
void sub_0019D130_0x19d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D130_0x19d130");
#endif

    switch (ctx->pc) {
        case 0x19d154u: goto label_19d154;
        case 0x19d198u: goto label_19d198;
        default: break;
    }

    ctx->pc = 0x19d130u;

    // 0x19d130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d138: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19d138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19d13c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d140: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19d140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d144: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19d144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d148: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x19d148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19d14c: 0xc065460  jal         func_195180
    ctx->pc = 0x19D14Cu;
    SET_GPR_U32(ctx, 31, 0x19D154u);
    ctx->pc = 0x195180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195180u, 0x19D14Cu, 0x19D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D154u;
label_19d154:
    // 0x19d154: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19d154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d158: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x19d158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d15c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d160: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19d160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19d164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19d164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d168: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d16c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d170: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19d170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19d174: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x19d174u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x19d178: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D178u;
    {
        const bool branch_taken_0x19d178 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19d178) {
            ctx->pc = 0x19D188u;
            goto label_19d188;
        }
    }
    ctx->pc = 0x19D180u;
    // 0x19d180: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x19d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x19d184: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x19d184u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_19d188:
    // 0x19d188: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x19d188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19d18c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d190: 0xc067340  jal         func_19CD00
    ctx->pc = 0x19D190u;
    SET_GPR_U32(ctx, 31, 0x19D198u);
    ctx->pc = 0x19CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD00u, 0x19D190u, 0x19D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D198u;
label_19d198:
    // 0x19d198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d19c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19d19cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19d1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D1A8u;
    // 0x19d1a8: 0x0  nop
    ctx->pc = 0x19d1a8u;
    // NOP
    // 0x19d1ac: 0x0  nop
    ctx->pc = 0x19d1acu;
    // NOP
    ctx->pc = 0x19d1b0u;
}
