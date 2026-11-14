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

// Function: sub_0020FE00
// Address: 0x20fe00 - 0x20ff20
void sub_0020FE00_0x20fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FE00_0x20fe00");
#endif

    switch (ctx->pc) {
        case 0x20fe1cu: goto label_20fe1c;
        case 0x20fe30u: goto label_20fe30;
        case 0x20fe3cu: goto label_20fe3c;
        case 0x20fe50u: goto label_20fe50;
        case 0x20fe5cu: goto label_20fe5c;
        case 0x20fe6cu: goto label_20fe6c;
        case 0x20fe7cu: goto label_20fe7c;
        case 0x20fe88u: goto label_20fe88;
        case 0x20feb0u: goto label_20feb0;
        case 0x20fec4u: goto label_20fec4;
        case 0x20fedcu: goto label_20fedc;
        case 0x20fef4u: goto label_20fef4;
        default: break;
    }

    ctx->pc = 0x20fe00u;

    // 0x20fe00: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x20fe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x20fe04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20fe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20fe08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20fe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20fe0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20fe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20fe10: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x20fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x20fe14: 0xc122430  jal         func_4890C0
    ctx->pc = 0x20FE14u;
    SET_GPR_U32(ctx, 31, 0x20FE1Cu);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x20FE14u, 0x20FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE1Cu;
label_20fe1c:
    // 0x20fe1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20fe1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe20: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x20fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20fe24: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x20fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x20fe28: 0xc07ce3c  jal         func_1F38F0
    ctx->pc = 0x20FE28u;
    SET_GPR_U32(ctx, 31, 0x20FE30u);
    ctx->pc = 0x1F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38F0u, 0x20FE28u, 0x20FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE30u;
label_20fe30:
    // 0x20fe30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20fe30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe34: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x20FE34u;
    {
        const bool branch_taken_0x20fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fe34) {
            ctx->pc = 0x20FEB4u;
            goto label_20feb4;
        }
    }
    ctx->pc = 0x20FE3Cu;
label_20fe3c:
    // 0x20fe3c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20fe40: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x20fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x20fe44: 0x24a59520  addiu       $a1, $a1, -0x6AE0
    ctx->pc = 0x20fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939936));
    // 0x20fe48: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x20FE48u;
    SET_GPR_U32(ctx, 31, 0x20FE50u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x20FE48u, 0x20FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE50u;
label_20fe50:
    // 0x20fe50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20fe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe54: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x20FE54u;
    SET_GPR_U32(ctx, 31, 0x20FE5Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x20FE54u, 0x20FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE5Cu;
label_20fe5c:
    // 0x20fe5c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20fe60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20fe60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe64: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x20FE64u;
    SET_GPR_U32(ctx, 31, 0x20FE6Cu);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x20FE64u, 0x20FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE6Cu;
label_20fe6c:
    // 0x20fe6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20fe70: 0x27859b30  addiu       $a1, $gp, -0x64D0
    ctx->pc = 0x20fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941488));
    // 0x20fe74: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x20FE74u;
    SET_GPR_U32(ctx, 31, 0x20FE7Cu);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x20FE74u, 0x20FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE7Cu;
label_20fe7c:
    // 0x20fe7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20fe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe80: 0xc041874  jal         func_1061D0
    ctx->pc = 0x20FE80u;
    SET_GPR_U32(ctx, 31, 0x20FE88u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x20FE80u, 0x20FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE88u;
label_20fe88:
    // 0x20fe88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe8c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20fe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20fe90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20fe90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe94: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20fe94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20fe98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20fe9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fea0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20fea0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fea4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20fea4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fea8: 0xc120c08  jal         func_483020
    ctx->pc = 0x20FEA8u;
    SET_GPR_U32(ctx, 31, 0x20FEB0u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x20FEA8u, 0x20FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEB0u;
label_20feb0:
    // 0x20feb0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x20feb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_20feb4:
    // 0x20feb4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x20feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20feb8: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x20feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x20febc: 0xc07ceb8  jal         func_1F3AE0
    ctx->pc = 0x20FEBCu;
    SET_GPR_U32(ctx, 31, 0x20FEC4u);
    ctx->pc = 0x1F3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3AE0u, 0x20FEBCu, 0x20FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEC4u;
label_20fec4:
    // 0x20fec4: 0x1602ffdd  bne         $s0, $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x20FEC4u;
    {
        const bool branch_taken_0x20fec4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20fec4) {
            ctx->pc = 0x20FE3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fe3c;
        }
    }
    ctx->pc = 0x20FECCu;
    // 0x20fecc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x20feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20fed0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x20fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x20fed4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x20FED4u;
    SET_GPR_U32(ctx, 31, 0x20FEDCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x20FED4u, 0x20FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEDCu;
label_20fedc:
    // 0x20fedc: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x20fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x20fee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20fee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fee4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20fee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20fee8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20fee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20feec: 0xc08a320  jal         func_228C80
    ctx->pc = 0x20FEECu;
    SET_GPR_U32(ctx, 31, 0x20FEF4u);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x20FEECu, 0x20FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FEF4u;
label_20fef4:
    // 0x20fef4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x20fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20fef8: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x20fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x20fefc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20fefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ff00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ff00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ff04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ff04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ff08: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x20ff08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x20ff0c: 0x3e00008  jr          $ra
    ctx->pc = 0x20FF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FF14u;
    // 0x20ff14: 0x0  nop
    ctx->pc = 0x20ff14u;
    // NOP
    // 0x20ff18: 0x0  nop
    ctx->pc = 0x20ff18u;
    // NOP
    // 0x20ff1c: 0x0  nop
    ctx->pc = 0x20ff1cu;
    // NOP
    ctx->pc = 0x20ff20u;
}
