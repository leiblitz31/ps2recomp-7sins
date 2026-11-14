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

// Function: sub_004AEDA8
// Address: 0x4aeda8 - 0x4aee38
void sub_004AEDA8_0x4aeda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEDA8_0x4aeda8");
#endif

    switch (ctx->pc) {
        case 0x4aedc0u: goto label_4aedc0;
        case 0x4aedd4u: goto label_4aedd4;
        case 0x4aedecu: goto label_4aedec;
        case 0x4aee00u: goto label_4aee00;
        case 0x4aee1cu: goto label_4aee1c;
        default: break;
    }

    ctx->pc = 0x4aeda8u;

    // 0x4aeda8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aeda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aedac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4aedacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4aedb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4aedb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4aedb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aedb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aedb8: 0xc0c0270  jal         func_3009C0
    ctx->pc = 0x4AEDB8u;
    SET_GPR_U32(ctx, 31, 0x4AEDC0u);
    ctx->pc = 0x4AEDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEDB8u;
    // 0x4aedbc: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3009C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3009C0u, 0x4AEDB8u, 0x4AEDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEDC0u;
label_4aedc0:
    // 0x4aedc0: 0x8f82b8a4  lw          $v0, -0x475C($gp)
    ctx->pc = 0x4aedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
    // 0x4aedc4: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AEDC4u;
    {
        const bool branch_taken_0x4aedc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4aedc4) {
            ctx->pc = 0x4AEDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AEDC4u;
            // 0x4aedc8: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AEDE0u;
            goto label_4aede0;
        }
    }
    ctx->pc = 0x4AEDCCu;
    // 0x4aedcc: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x4AEDCCu;
    SET_GPR_U32(ctx, 31, 0x4AEDD4u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4AEDCCu, 0x4AEDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEDD4u;
label_4aedd4:
    // 0x4aedd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aedd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aedd8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4aedd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4aeddc: 0x0  nop
    ctx->pc = 0x4aeddcu;
    // NOP
label_4aede0:
    // 0x4aede0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x4aede0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4aede4: 0xc0c031e  jal         func_300C78
    ctx->pc = 0x4AEDE4u;
    SET_GPR_U32(ctx, 31, 0x4AEDECu);
    ctx->pc = 0x4AEDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEDE4u;
    // 0x4aede8: 0x24848b80  addiu       $a0, $a0, -0x7480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300C78u, 0x4AEDE4u, 0x4AEDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEDECu;
label_4aedec:
    // 0x4aedec: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4aedecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x4aedf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4aedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aedf4: 0x24a5eec8  addiu       $a1, $a1, -0x1138
    ctx->pc = 0x4aedf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962888));
    // 0x4aedf8: 0xc0c032a  jal         func_300CA8
    ctx->pc = 0x4AEDF8u;
    SET_GPR_U32(ctx, 31, 0x4AEE00u);
    ctx->pc = 0x4AEDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEDF8u;
    // 0x4aedfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300CA8u, 0x4AEDF8u, 0x4AEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEE00u;
label_4aee00:
    // 0x4aee00: 0x8f82b8a4  lw          $v0, -0x475C($gp)
    ctx->pc = 0x4aee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
    // 0x4aee04: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AEE04u;
    {
        const bool branch_taken_0x4aee04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4AEE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEE04u;
        // 0x4aee08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aee04) {
            ctx->pc = 0x4AEE20u;
            goto label_4aee20;
        }
    }
    ctx->pc = 0x4AEE0Cu;
    // 0x4aee0c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AEE0Cu;
    {
        const bool branch_taken_0x4aee0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEE0Cu;
        // 0x4aee10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aee0c) {
            ctx->pc = 0x4AEE24u;
            goto label_4aee24;
        }
    }
    ctx->pc = 0x4AEE14u;
    // 0x4aee14: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x4AEE14u;
    SET_GPR_U32(ctx, 31, 0x4AEE1Cu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4AEE14u, 0x4AEE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEE1Cu;
label_4aee1c:
    // 0x4aee1c: 0x0  nop
    ctx->pc = 0x4aee1cu;
    // NOP
label_4aee20:
    // 0x4aee20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4aee20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4aee24:
    // 0x4aee24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aee24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aee28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aee28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEE2Cu;
        // 0x4aee30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEE34u;
    // 0x4aee34: 0x0  nop
    ctx->pc = 0x4aee34u;
    // NOP
    ctx->pc = 0x4aee38u;
}
