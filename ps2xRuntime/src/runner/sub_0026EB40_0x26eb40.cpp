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

// Function: sub_0026EB40
// Address: 0x26eb40 - 0x26ebe0
void sub_0026EB40_0x26eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EB40_0x26eb40");
#endif

    switch (ctx->pc) {
        case 0x26eb5cu: goto label_26eb5c;
        case 0x26eb68u: goto label_26eb68;
        default: break;
    }

    ctx->pc = 0x26eb40u;

    // 0x26eb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26eb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26eb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26eb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26eb4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26eb50: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x26eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x26eb54: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x26EB54u;
    SET_GPR_U32(ctx, 31, 0x26EB5Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x26EB54u, 0x26EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB5Cu;
label_26eb5c:
    // 0x26eb5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26eb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb60: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x26EB60u;
    SET_GPR_U32(ctx, 31, 0x26EB68u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x26EB60u, 0x26EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB68u;
label_26eb68:
    // 0x26eb68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26eb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26eb70: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x26eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26eb74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26eb78: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26EB78u;
    {
        const bool branch_taken_0x26eb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26eb78) {
            ctx->pc = 0x26EBC0u;
            goto label_26ebc0;
        }
    }
    ctx->pc = 0x26EB80u;
    // 0x26eb80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26eb84: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x26eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x26eb88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26eb8c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26EB8Cu;
    {
        const bool branch_taken_0x26eb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26eb8c) {
            ctx->pc = 0x26EBC0u;
            goto label_26ebc0;
        }
    }
    ctx->pc = 0x26EB94u;
    // 0x26eb94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26eb98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eb9c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x26eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x26eba0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x26eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x26eba4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x26eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x26eba8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26eba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ebac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EBACu;
    {
        const bool branch_taken_0x26ebac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ebac) {
            ctx->pc = 0x26EBC0u;
            goto label_26ebc0;
        }
    }
    ctx->pc = 0x26EBB4u;
    // 0x26ebb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ebb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26EBB8u;
    {
        const bool branch_taken_0x26ebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ebb8) {
            ctx->pc = 0x26EBC4u;
            goto label_26ebc4;
        }
    }
    ctx->pc = 0x26EBC0u;
label_26ebc0:
    // 0x26ebc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ebc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ebc4:
    // 0x26ebc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ebc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ebc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ebc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ebcc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26ebccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26ebd0: 0x3e00008  jr          $ra
    ctx->pc = 0x26EBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EBD8u;
    // 0x26ebd8: 0x0  nop
    ctx->pc = 0x26ebd8u;
    // NOP
    // 0x26ebdc: 0x0  nop
    ctx->pc = 0x26ebdcu;
    // NOP
    ctx->pc = 0x26ebe0u;
}
