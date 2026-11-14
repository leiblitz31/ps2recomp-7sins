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

// Function: sub_0043B930
// Address: 0x43b930 - 0x43b9a0
void sub_0043B930_0x43b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B930_0x43b930");
#endif

    switch (ctx->pc) {
        case 0x43b950u: goto label_43b950;
        case 0x43b96cu: goto label_43b96c;
        case 0x43b988u: goto label_43b988;
        default: break;
    }

    ctx->pc = 0x43b930u;

    // 0x43b930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x43b930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43b934: 0xaf80bef0  sw          $zero, -0x4110($gp)
    ctx->pc = 0x43b934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950640), GPR_U32(ctx, 0));
    // 0x43b938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43b938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43b93c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43b93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43b940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43b944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b948: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x43B948u;
    SET_GPR_U32(ctx, 31, 0x43B950u);
    ctx->pc = 0x43B94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B948u;
    // 0x43b94c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x43B948u, 0x43B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B950u;
label_43b950:
    // 0x43b950: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x43B950u;
    {
        const bool branch_taken_0x43b950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B950u;
        // 0x43b954: 0xaf82bef8  sw          $v0, -0x4108($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b950) {
            ctx->pc = 0x43B98Cu;
            goto label_43b98c;
        }
    }
    ctx->pc = 0x43B958u;
    // 0x43b958: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43b958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b95c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43b95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43b960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b964: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x43B964u;
    SET_GPR_U32(ctx, 31, 0x43B96Cu);
    ctx->pc = 0x43B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B964u;
    // 0x43b968: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x43B964u, 0x43B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B96Cu;
label_43b96c:
    // 0x43b96c: 0xaf82befc  sw          $v0, -0x4104($gp)
    ctx->pc = 0x43b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950652), GPR_U32(ctx, 2));
    // 0x43b970: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43B970u;
    {
        const bool branch_taken_0x43b970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B970u;
        // 0x43b974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b970) {
            ctx->pc = 0x43B980u;
            goto label_43b980;
        }
    }
    ctx->pc = 0x43B978u;
    // 0x43b978: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x43B978u;
    {
        const bool branch_taken_0x43b978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B978u;
        // 0x43b97c: 0xaf80bf00  sw          $zero, -0x4100($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b978) {
            ctx->pc = 0x43B990u;
            goto label_43b990;
        }
    }
    ctx->pc = 0x43B980u;
label_43b980:
    // 0x43b980: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x43B980u;
    SET_GPR_U32(ctx, 31, 0x43B988u);
    ctx->pc = 0x43B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B980u;
    // 0x43b984: 0x8f84bef8  lw          $a0, -0x4108($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x43B980u, 0x43B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B988u;
label_43b988:
    // 0x43b988: 0xaf80bef8  sw          $zero, -0x4108($gp)
    ctx->pc = 0x43b988u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950648), GPR_U32(ctx, 0));
label_43b98c:
    // 0x43b98c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43b98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b990:
    // 0x43b990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43b990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43b994: 0x3e00008  jr          $ra
    ctx->pc = 0x43B994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B994u;
        // 0x43b998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B99Cu;
    // 0x43b99c: 0x0  nop
    ctx->pc = 0x43b99cu;
    // NOP
    ctx->pc = 0x43b9a0u;
}
