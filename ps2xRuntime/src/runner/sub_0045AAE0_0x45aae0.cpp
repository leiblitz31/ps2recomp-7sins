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

// Function: sub_0045AAE0
// Address: 0x45aae0 - 0x45ab50
void sub_0045AAE0_0x45aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045AAE0_0x45aae0");
#endif

    switch (ctx->pc) {
        case 0x45ab04u: goto label_45ab04;
        case 0x45ab34u: goto label_45ab34;
        default: break;
    }

    ctx->pc = 0x45aae0u;

    // 0x45aae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x45aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x45aae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45aae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45aaec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x45aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x45aaf0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x45aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x45aaf4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x45aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45aaf8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x45aaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45aafc: 0xc116b30  jal         func_45ACC0
    ctx->pc = 0x45AAFCu;
    SET_GPR_U32(ctx, 31, 0x45AB04u);
    ctx->pc = 0x45ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45ACC0u, 0x45AAFCu, 0x45AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AB04u;
label_45ab04:
    // 0x45ab04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45ab04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ab08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45ab0c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45AB0Cu;
    {
        const bool branch_taken_0x45ab0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x45ab0c) {
            ctx->pc = 0x45AB20u;
            goto label_45ab20;
        }
    }
    ctx->pc = 0x45AB14u;
    // 0x45ab14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45ab14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ab18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x45AB18u;
    {
        const bool branch_taken_0x45ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ab18) {
            ctx->pc = 0x45AB3Cu;
            goto label_45ab3c;
        }
    }
    ctx->pc = 0x45AB20u;
label_45ab20:
    // 0x45ab20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45ab24: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45ab28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45ab28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ab2c: 0xc116864  jal         func_45A190
    ctx->pc = 0x45AB2Cu;
    SET_GPR_U32(ctx, 31, 0x45AB34u);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45AB2Cu, 0x45AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AB34u;
label_45ab34:
    // 0x45ab34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45ab38: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x45ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_45ab3c:
    // 0x45ab3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45ab3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45ab40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45ab40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45ab44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x45ab44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45ab48: 0x3e00008  jr          $ra
    ctx->pc = 0x45AB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45AB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45AB50u;
}
