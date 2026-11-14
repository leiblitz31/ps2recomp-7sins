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

// Function: sub_003A6C88
// Address: 0x3a6c88 - 0x3a6d08
void sub_003A6C88_0x3a6c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6C88_0x3a6c88");
#endif

    switch (ctx->pc) {
        case 0x3a6c98u: goto label_3a6c98;
        case 0x3a6cbcu: goto label_3a6cbc;
        case 0x3a6cd8u: goto label_3a6cd8;
        case 0x3a6ce4u: goto label_3a6ce4;
        case 0x3a6cf4u: goto label_3a6cf4;
        default: break;
    }

    ctx->pc = 0x3a6c88u;

    // 0x3a6c88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6c8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a6c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a6c90: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x3A6C90u;
    SET_GPR_U32(ctx, 31, 0x3A6C98u);
    ctx->pc = 0x3A6C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C90u;
    // 0x3a6c94: 0x24041003  addiu       $a0, $zero, 0x1003 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x3A6C90u, 0x3A6C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C98u;
label_3a6c98:
    // 0x3a6c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a6c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6c9c: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x3a6c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
    // 0x3a6ca0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3a6ca4: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3a6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x3a6ca8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a6ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a6cac: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A6CACu;
    {
        const bool branch_taken_0x3a6cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CACu;
        // 0x3a6cb0: 0xac640058  sw          $a0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6cac) {
            ctx->pc = 0x3A6CECu;
            goto label_3a6cec;
        }
    }
    ctx->pc = 0x3A6CB4u;
    // 0x3a6cb4: 0xc0e7856  jal         func_39E158
    ctx->pc = 0x3A6CB4u;
    SET_GPR_U32(ctx, 31, 0x3A6CBCu);
    ctx->pc = 0x3A6CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6CB4u;
    // 0x3a6cb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E158u, 0x3A6CB4u, 0x3A6CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CBCu;
label_3a6cbc:
    // 0x3a6cbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6cc0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3a6cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3a6cc4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3a6cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3a6cc8: 0x24a5bfa8  addiu       $a1, $a1, -0x4058
    ctx->pc = 0x3a6cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950824));
    // 0x3a6ccc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a6cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a6cd0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3A6CD0u;
    SET_GPR_U32(ctx, 31, 0x3A6CD8u);
    ctx->pc = 0x3A6CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6CD0u;
    // 0x3a6cd4: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3A6CD0u, 0x3A6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CD8u;
label_3a6cd8:
    // 0x3a6cd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a6cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6cdc: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3A6CDCu;
    SET_GPR_U32(ctx, 31, 0x3A6CE4u);
    ctx->pc = 0x3A6CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6CDCu;
    // 0x3a6ce0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3A6CDCu, 0x3A6CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CE4u;
label_3a6ce4:
    // 0x3a6ce4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6CE4u;
    {
        const bool branch_taken_0x3a6ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CE4u;
        // 0x3a6ce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6ce4) {
            ctx->pc = 0x3A6CF8u;
            goto label_3a6cf8;
        }
    }
    ctx->pc = 0x3A6CECu;
label_3a6cec:
    // 0x3a6cec: 0xc0e7856  jal         func_39E158
    ctx->pc = 0x3A6CECu;
    SET_GPR_U32(ctx, 31, 0x3A6CF4u);
    ctx->pc = 0x39E158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E158u, 0x3A6CECu, 0x3A6CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CF4u;
label_3a6cf4:
    // 0x3a6cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a6cf8:
    // 0x3a6cf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a6cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CFCu;
        // 0x3a6d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6D04u;
    // 0x3a6d04: 0x0  nop
    ctx->pc = 0x3a6d04u;
    // NOP
    ctx->pc = 0x3a6d08u;
}
