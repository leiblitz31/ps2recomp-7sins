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

// Function: sub_00104BD0
// Address: 0x104bd0 - 0x104c90
void sub_00104BD0_0x104bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104BD0_0x104bd0");
#endif

    switch (ctx->pc) {
        case 0x104c2cu: goto label_104c2c;
        case 0x104c44u: goto label_104c44;
        case 0x104c60u: goto label_104c60;
        case 0x104c70u: goto label_104c70;
        default: break;
    }

    ctx->pc = 0x104bd0u;

    // 0x104bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x104bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x104bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104bd8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x104bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x104bdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x104bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104be0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x104be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x104be4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x104be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104be8: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x104be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x104bec: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104BECu;
    {
        const bool branch_taken_0x104bec = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x104bec) {
            ctx->pc = 0x104C00u;
            goto label_104c00;
        }
    }
    ctx->pc = 0x104BF4u;
    // 0x104bf4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x104BF4u;
    {
        const bool branch_taken_0x104bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x104bf4) {
            ctx->pc = 0x104C00u;
            goto label_104c00;
        }
    }
    ctx->pc = 0x104BFCu;
    // 0x104bfc: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x104bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_104c00:
    // 0x104c00: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x104c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x104c04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x104c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x104c08: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x104c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x104c0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104c10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x104c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104c14: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x104C14u;
    {
        const bool branch_taken_0x104c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104c14) {
            ctx->pc = 0x104C34u;
            goto label_104c34;
        }
    }
    ctx->pc = 0x104C1Cu;
    // 0x104c1c: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x104c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x104c20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x104c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104c24: 0xc08a6f0  jal         func_229BC0
    ctx->pc = 0x104C24u;
    SET_GPR_U32(ctx, 31, 0x104C2Cu);
    ctx->pc = 0x229BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229BC0u, 0x104C24u, 0x104C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C2Cu;
label_104c2c:
    // 0x104c2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x104C2Cu;
    {
        const bool branch_taken_0x104c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104c2c) {
            ctx->pc = 0x104C44u;
            goto label_104c44;
        }
    }
    ctx->pc = 0x104C34u;
label_104c34:
    // 0x104c34: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x104c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x104c38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c3c: 0xc08a6f0  jal         func_229BC0
    ctx->pc = 0x104C3Cu;
    SET_GPR_U32(ctx, 31, 0x104C44u);
    ctx->pc = 0x229BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229BC0u, 0x104C3Cu, 0x104C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C44u;
label_104c44:
    // 0x104c44: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x104c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x104c48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104c4c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x104c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x104c50: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104C50u;
    {
        const bool branch_taken_0x104c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104c50) {
            ctx->pc = 0x104C68u;
            goto label_104c68;
        }
    }
    ctx->pc = 0x104C58u;
    // 0x104c58: 0xc052648  jal         func_149920
    ctx->pc = 0x104C58u;
    SET_GPR_U32(ctx, 31, 0x104C60u);
    ctx->pc = 0x149920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149920u, 0x104C58u, 0x104C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C60u;
label_104c60:
    // 0x104c60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x104C60u;
    {
        const bool branch_taken_0x104c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104c60) {
            ctx->pc = 0x104C70u;
            goto label_104c70;
        }
    }
    ctx->pc = 0x104C68u;
label_104c68:
    // 0x104c68: 0xc05264c  jal         func_149930
    ctx->pc = 0x104C68u;
    SET_GPR_U32(ctx, 31, 0x104C70u);
    ctx->pc = 0x149930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149930u, 0x104C68u, 0x104C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C70u;
label_104c70:
    // 0x104c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104c78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x104c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x104c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x104C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104C84u;
    // 0x104c84: 0x0  nop
    ctx->pc = 0x104c84u;
    // NOP
    // 0x104c88: 0x0  nop
    ctx->pc = 0x104c88u;
    // NOP
    // 0x104c8c: 0x0  nop
    ctx->pc = 0x104c8cu;
    // NOP
    ctx->pc = 0x104c90u;
}
