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

// Function: sub_004852F0
// Address: 0x4852f0 - 0x485350
void sub_004852F0_0x4852f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004852F0_0x4852f0");
#endif

    switch (ctx->pc) {
        case 0x48531cu: goto label_48531c;
        case 0x485334u: goto label_485334;
        default: break;
    }

    ctx->pc = 0x4852f0u;

    // 0x4852f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4852f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4852f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4852f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4852f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4852f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4852fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4852fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x485300: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x485300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x485304: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x485304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485308: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x485308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48530c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48530cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x485310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x485310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485314: 0xc121504  jal         func_485410
    ctx->pc = 0x485314u;
    SET_GPR_U32(ctx, 31, 0x48531Cu);
    ctx->pc = 0x485410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485410u, 0x485314u, 0x48531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48531Cu;
label_48531c:
    // 0x48531c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48531cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485320: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x485320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x485324: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x485324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x485328: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x485328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48532c: 0xc1214d4  jal         func_485350
    ctx->pc = 0x48532Cu;
    SET_GPR_U32(ctx, 31, 0x485334u);
    ctx->pc = 0x485350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485350u, 0x48532Cu, 0x485334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485334u;
label_485334:
    // 0x485334: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48533c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48533cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485340: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x485340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x485344: 0x3e00008  jr          $ra
    ctx->pc = 0x485344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48534Cu;
    // 0x48534c: 0x0  nop
    ctx->pc = 0x48534cu;
    // NOP
    ctx->pc = 0x485350u;
}
