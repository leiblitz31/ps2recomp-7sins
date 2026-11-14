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

// Function: sub_0045AB50
// Address: 0x45ab50 - 0x45abc0
void sub_0045AB50_0x45ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045AB50_0x45ab50");
#endif

    switch (ctx->pc) {
        case 0x45ab74u: goto label_45ab74;
        case 0x45aba4u: goto label_45aba4;
        default: break;
    }

    ctx->pc = 0x45ab50u;

    // 0x45ab50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x45ab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x45ab54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45ab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45ab58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45ab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45ab5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x45ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x45ab60: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x45ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x45ab64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x45ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45ab68: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x45ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45ab6c: 0xc116b30  jal         func_45ACC0
    ctx->pc = 0x45AB6Cu;
    SET_GPR_U32(ctx, 31, 0x45AB74u);
    ctx->pc = 0x45ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45ACC0u, 0x45AB6Cu, 0x45AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AB74u;
label_45ab74:
    // 0x45ab74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45ab74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ab78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45ab7c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45AB7Cu;
    {
        const bool branch_taken_0x45ab7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x45ab7c) {
            ctx->pc = 0x45AB90u;
            goto label_45ab90;
        }
    }
    ctx->pc = 0x45AB84u;
    // 0x45ab84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45ab84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ab88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x45AB88u;
    {
        const bool branch_taken_0x45ab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ab88) {
            ctx->pc = 0x45ABACu;
            goto label_45abac;
        }
    }
    ctx->pc = 0x45AB90u;
label_45ab90:
    // 0x45ab90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45ab94: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45ab98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45ab98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ab9c: 0xc116864  jal         func_45A190
    ctx->pc = 0x45AB9Cu;
    SET_GPR_U32(ctx, 31, 0x45ABA4u);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45AB9Cu, 0x45ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ABA4u;
label_45aba4:
    // 0x45aba4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45aba8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x45aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_45abac:
    // 0x45abac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45abacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45abb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45abb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45abb4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x45abb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45abb8: 0x3e00008  jr          $ra
    ctx->pc = 0x45ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45ABB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45ABC0u;
}
