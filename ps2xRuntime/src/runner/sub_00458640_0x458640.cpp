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

// Function: sub_00458640
// Address: 0x458640 - 0x4586a0
void sub_00458640_0x458640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458640_0x458640");
#endif

    switch (ctx->pc) {
        case 0x45866cu: goto label_45866c;
        case 0x458684u: goto label_458684;
        default: break;
    }

    ctx->pc = 0x458640u;

    // 0x458640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x458640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x458644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x458644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x458648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x458648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45864c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x45864cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x458650: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x458650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x458654: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x458654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x458658: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x458658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x45865c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45865cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x458660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x458660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458664: 0xc116260  jal         func_458980
    ctx->pc = 0x458664u;
    SET_GPR_U32(ctx, 31, 0x45866Cu);
    ctx->pc = 0x458980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458980u, 0x458664u, 0x45866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45866Cu;
label_45866c:
    // 0x45866c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45866cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458670: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x458670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x458674: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x458674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x458678: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x458678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45867c: 0xc1161a8  jal         func_4586A0
    ctx->pc = 0x45867Cu;
    SET_GPR_U32(ctx, 31, 0x458684u);
    ctx->pc = 0x4586A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4586A0u, 0x45867Cu, 0x458684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458684u;
label_458684:
    // 0x458684: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x458684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x458688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45868c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45868cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458690: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x458690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x458694: 0x3e00008  jr          $ra
    ctx->pc = 0x458694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45869Cu;
    // 0x45869c: 0x0  nop
    ctx->pc = 0x45869cu;
    // NOP
    ctx->pc = 0x4586a0u;
}
