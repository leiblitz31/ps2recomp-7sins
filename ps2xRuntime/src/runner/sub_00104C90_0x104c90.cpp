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

// Function: sub_00104C90
// Address: 0x104c90 - 0x104d50
void sub_00104C90_0x104c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104C90_0x104c90");
#endif

    switch (ctx->pc) {
        case 0x104cf4u: goto label_104cf4;
        case 0x104d0cu: goto label_104d0c;
        case 0x104d28u: goto label_104d28;
        case 0x104d38u: goto label_104d38;
        default: break;
    }

    ctx->pc = 0x104c90u;

    // 0x104c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x104c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x104c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104c98: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x104c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x104c9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x104c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104ca0: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x104CA0u;
    {
        const bool branch_taken_0x104ca0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x104ca0) {
            ctx->pc = 0x104CC4u;
            goto label_104cc4;
        }
    }
    ctx->pc = 0x104CA8u;
    // 0x104ca8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x104ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x104cac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x104cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104cb0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x104cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x104cb4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x104cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x104cb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x104cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x104cbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x104CBCu;
    {
        const bool branch_taken_0x104cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104cbc) {
            ctx->pc = 0x104CD0u;
            goto label_104cd0;
        }
    }
    ctx->pc = 0x104CC4u;
label_104cc4:
    // 0x104cc4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x104cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x104cc8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x104cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x104ccc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x104cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_104cd0:
    // 0x104cd0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x104cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x104cd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104cd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x104cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104cdc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x104CDCu;
    {
        const bool branch_taken_0x104cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104cdc) {
            ctx->pc = 0x104CFCu;
            goto label_104cfc;
        }
    }
    ctx->pc = 0x104CE4u;
    // 0x104ce4: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x104ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x104ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x104ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104cec: 0xc08a6f0  jal         func_229BC0
    ctx->pc = 0x104CECu;
    SET_GPR_U32(ctx, 31, 0x104CF4u);
    ctx->pc = 0x229BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229BC0u, 0x104CECu, 0x104CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CF4u;
label_104cf4:
    // 0x104cf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x104CF4u;
    {
        const bool branch_taken_0x104cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104cf4) {
            ctx->pc = 0x104D0Cu;
            goto label_104d0c;
        }
    }
    ctx->pc = 0x104CFCu;
label_104cfc:
    // 0x104cfc: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x104cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x104d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d04: 0xc08a6f0  jal         func_229BC0
    ctx->pc = 0x104D04u;
    SET_GPR_U32(ctx, 31, 0x104D0Cu);
    ctx->pc = 0x229BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229BC0u, 0x104D04u, 0x104D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D0Cu;
label_104d0c:
    // 0x104d0c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x104d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x104d10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104d14: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x104d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x104d18: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104D18u;
    {
        const bool branch_taken_0x104d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104d18) {
            ctx->pc = 0x104D30u;
            goto label_104d30;
        }
    }
    ctx->pc = 0x104D20u;
    // 0x104d20: 0xc052648  jal         func_149920
    ctx->pc = 0x104D20u;
    SET_GPR_U32(ctx, 31, 0x104D28u);
    ctx->pc = 0x149920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149920u, 0x104D20u, 0x104D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D28u;
label_104d28:
    // 0x104d28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x104D28u;
    {
        const bool branch_taken_0x104d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104d28) {
            ctx->pc = 0x104D38u;
            goto label_104d38;
        }
    }
    ctx->pc = 0x104D30u;
label_104d30:
    // 0x104d30: 0xc05264c  jal         func_149930
    ctx->pc = 0x104D30u;
    SET_GPR_U32(ctx, 31, 0x104D38u);
    ctx->pc = 0x149930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149930u, 0x104D30u, 0x104D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D38u;
label_104d38:
    // 0x104d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104d40: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x104d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x104d44: 0x3e00008  jr          $ra
    ctx->pc = 0x104D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104D4Cu;
    // 0x104d4c: 0x0  nop
    ctx->pc = 0x104d4cu;
    // NOP
    ctx->pc = 0x104d50u;
}
