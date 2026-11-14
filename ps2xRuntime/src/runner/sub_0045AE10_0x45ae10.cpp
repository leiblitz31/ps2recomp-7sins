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

// Function: sub_0045AE10
// Address: 0x45ae10 - 0x45af70
void sub_0045AE10_0x45ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045AE10_0x45ae10");
#endif

    switch (ctx->pc) {
        case 0x45ae40u: goto label_45ae40;
        case 0x45ae58u: goto label_45ae58;
        case 0x45ae6cu: goto label_45ae6c;
        case 0x45aef8u: goto label_45aef8;
        default: break;
    }

    ctx->pc = 0x45ae10u;

    // 0x45ae10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x45ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x45ae14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x45ae18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x45ae1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45ae20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45ae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45ae24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45ae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45ae28: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x45ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x45ae2c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x45ae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x45ae30: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x45ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x45ae34: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x45ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45ae38: 0xc116738  jal         func_459CE0
    ctx->pc = 0x45AE38u;
    SET_GPR_U32(ctx, 31, 0x45AE40u);
    ctx->pc = 0x459CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459CE0u, 0x45AE38u, 0x45AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AE40u;
label_45ae40:
    // 0x45ae40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x45ae40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ae44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45ae44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ae48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45ae48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ae4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x45ae4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ae50: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x45AE50u;
    {
        const bool branch_taken_0x45ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ae50) {
            ctx->pc = 0x45AF1Cu;
            goto label_45af1c;
        }
    }
    ctx->pc = 0x45AE58u;
label_45ae58:
    // 0x45ae58: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45ae5c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45ae60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45ae60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ae64: 0xc116864  jal         func_45A190
    ctx->pc = 0x45AE64u;
    SET_GPR_U32(ctx, 31, 0x45AE6Cu);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45AE64u, 0x45AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AE6Cu;
label_45ae6c:
    // 0x45ae6c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x45ae6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45ae70: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x45ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45ae74: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x45ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x45ae78: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x45AE78u;
    {
        const bool branch_taken_0x45ae78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45ae78) {
            ctx->pc = 0x45AF18u;
            goto label_45af18;
        }
    }
    ctx->pc = 0x45AE80u;
    // 0x45ae80: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x45ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45ae84: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x45ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x45ae88: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x45AE88u;
    {
        const bool branch_taken_0x45ae88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45ae88) {
            ctx->pc = 0x45AECCu;
            goto label_45aecc;
        }
    }
    ctx->pc = 0x45AE90u;
    // 0x45ae90: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x45ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45ae94: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x45ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x45ae98: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x45AE98u;
    {
        const bool branch_taken_0x45ae98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45ae98) {
            ctx->pc = 0x45AECCu;
            goto label_45aecc;
        }
    }
    ctx->pc = 0x45AEA0u;
    // 0x45aea0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x45aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45aea4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x45aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x45aea8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x45AEA8u;
    {
        const bool branch_taken_0x45aea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45aea8) {
            ctx->pc = 0x45AECCu;
            goto label_45aecc;
        }
    }
    ctx->pc = 0x45AEB0u;
    // 0x45aeb0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x45aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45aeb4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x45aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x45aeb8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45AEB8u;
    {
        const bool branch_taken_0x45aeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45aeb8) {
            ctx->pc = 0x45AECCu;
            goto label_45aecc;
        }
    }
    ctx->pc = 0x45AEC0u;
    // 0x45aec0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x45aec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45aec4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x45AEC4u;
    {
        const bool branch_taken_0x45aec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45aec4) {
            ctx->pc = 0x45AF1Cu;
            goto label_45af1c;
        }
    }
    ctx->pc = 0x45AECCu;
label_45aecc:
    // 0x45aecc: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x45aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x45aed0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45aed4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45AED4u;
    {
        const bool branch_taken_0x45aed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45aed4) {
            ctx->pc = 0x45AEE8u;
            goto label_45aee8;
        }
    }
    ctx->pc = 0x45AEDCu;
    // 0x45aedc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x45aedcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45aee0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x45AEE0u;
    {
        const bool branch_taken_0x45aee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45aee0) {
            ctx->pc = 0x45AF1Cu;
            goto label_45af1c;
        }
    }
    ctx->pc = 0x45AEE8u;
label_45aee8:
    // 0x45aee8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x45aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45aeec: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x45aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x45aef0: 0xc116dd8  jal         func_45B760
    ctx->pc = 0x45AEF0u;
    SET_GPR_U32(ctx, 31, 0x45AEF8u);
    ctx->pc = 0x45B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B760u, 0x45AEF0u, 0x45AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AEF8u;
label_45aef8:
    // 0x45aef8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45AEF8u;
    {
        const bool branch_taken_0x45aef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45aef8) {
            ctx->pc = 0x45AF0Cu;
            goto label_45af0c;
        }
    }
    ctx->pc = 0x45AF00u;
    // 0x45af00: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x45af00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45af04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x45AF04u;
    {
        const bool branch_taken_0x45af04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45af04) {
            ctx->pc = 0x45AF1Cu;
            goto label_45af1c;
        }
    }
    ctx->pc = 0x45AF0Cu;
label_45af0c:
    // 0x45af0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45af0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x45af10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45AF10u;
    {
        const bool branch_taken_0x45af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45af10) {
            ctx->pc = 0x45AF1Cu;
            goto label_45af1c;
        }
    }
    ctx->pc = 0x45AF18u;
label_45af18:
    // 0x45af18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45af18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45af1c:
    // 0x45af1c: 0x213082b  sltu        $at, $s0, $s3
    ctx->pc = 0x45af1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x45af20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x45AF20u;
    {
        const bool branch_taken_0x45af20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45af20) {
            ctx->pc = 0x45AF30u;
            goto label_45af30;
        }
    }
    ctx->pc = 0x45AF28u;
    // 0x45af28: 0x1240ffcb  beqz        $s2, . + 4 + (-0x35 << 2)
    ctx->pc = 0x45AF28u;
    {
        const bool branch_taken_0x45af28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x45af28) {
            ctx->pc = 0x45AE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ae58;
        }
    }
    ctx->pc = 0x45AF30u;
label_45af30:
    // 0x45af30: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x45AF30u;
    {
        const bool branch_taken_0x45af30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x45af30) {
            ctx->pc = 0x45AF44u;
            goto label_45af44;
        }
    }
    ctx->pc = 0x45AF38u;
    // 0x45af38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45af38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45af3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45AF3Cu;
    {
        const bool branch_taken_0x45af3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45af3c) {
            ctx->pc = 0x45AF48u;
            goto label_45af48;
        }
    }
    ctx->pc = 0x45AF44u;
label_45af44:
    // 0x45af44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45af44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45af48:
    // 0x45af48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45af48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45af4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45af4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45af50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45af50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45af54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45af54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45af58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45af58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45af5c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x45af5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x45af60: 0x3e00008  jr          $ra
    ctx->pc = 0x45AF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45AF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45AF68u;
    // 0x45af68: 0x0  nop
    ctx->pc = 0x45af68u;
    // NOP
    // 0x45af6c: 0x0  nop
    ctx->pc = 0x45af6cu;
    // NOP
    ctx->pc = 0x45af70u;
}
