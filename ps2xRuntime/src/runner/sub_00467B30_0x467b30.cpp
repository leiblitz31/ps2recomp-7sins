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

// Function: sub_00467B30
// Address: 0x467b30 - 0x467c10
void sub_00467B30_0x467b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467B30_0x467b30");
#endif

    switch (ctx->pc) {
        case 0x467b60u: goto label_467b60;
        case 0x467b68u: goto label_467b68;
        case 0x467b80u: goto label_467b80;
        case 0x467b98u: goto label_467b98;
        case 0x467becu: goto label_467bec;
        default: break;
    }

    ctx->pc = 0x467b30u;

    // 0x467b30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x467b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x467b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x467b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x467b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x467b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x467b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x467b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x467b40: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x467b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x467b44: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x467b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x467b48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x467b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467b4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x467b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467b50: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x467b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x467b54: 0x2785b2cc  addiu       $a1, $gp, -0x4D34
    ctx->pc = 0x467b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947532));
    // 0x467b58: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x467B58u;
    SET_GPR_U32(ctx, 31, 0x467B60u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x467B58u, 0x467B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467B60u;
label_467b60:
    // 0x467b60: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x467B60u;
    {
        const bool branch_taken_0x467b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467b60) {
            ctx->pc = 0x467BECu;
            goto label_467bec;
        }
    }
    ctx->pc = 0x467B68u;
label_467b68:
    // 0x467b68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x467b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x467b6c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x467b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x467b70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x467b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x467b74: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x467b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x467b78: 0xc0f0a5a  jal         func_3C2968
    ctx->pc = 0x467B78u;
    SET_GPR_U32(ctx, 31, 0x467B80u);
    ctx->pc = 0x3C2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2968u, 0x467B78u, 0x467B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467B80u;
label_467b80:
    // 0x467b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x467b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467b84: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x467B84u;
    {
        const bool branch_taken_0x467b84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x467b84) {
            ctx->pc = 0x467BB8u;
            goto label_467bb8;
        }
    }
    ctx->pc = 0x467B8Cu;
    // 0x467b8c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x467b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x467b90: 0xc042514  jal         func_109450
    ctx->pc = 0x467B90u;
    SET_GPR_U32(ctx, 31, 0x467B98u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x467B90u, 0x467B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467B98u;
label_467b98:
    // 0x467b98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x467B98u;
    {
        const bool branch_taken_0x467b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467b98) {
            ctx->pc = 0x467BACu;
            goto label_467bac;
        }
    }
    ctx->pc = 0x467BA0u;
    // 0x467ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x467ba4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x467BA4u;
    {
        const bool branch_taken_0x467ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467ba4) {
            ctx->pc = 0x467BF8u;
            goto label_467bf8;
        }
    }
    ctx->pc = 0x467BACu;
label_467bac:
    // 0x467bac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x467bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467bb0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x467BB0u;
    {
        const bool branch_taken_0x467bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467bb0) {
            ctx->pc = 0x467BF8u;
            goto label_467bf8;
        }
    }
    ctx->pc = 0x467BB8u;
label_467bb8:
    // 0x467bb8: 0x83a2003c  lb          $v0, 0x3C($sp)
    ctx->pc = 0x467bb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x467bbc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x467bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x467bc0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x467bc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x467bc4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x467bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x467bc8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x467BC8u;
    {
        const bool branch_taken_0x467bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x467bc8) {
            ctx->pc = 0x467BDCu;
            goto label_467bdc;
        }
    }
    ctx->pc = 0x467BD0u;
    // 0x467bd0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x467bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x467bd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x467BD4u;
    {
        const bool branch_taken_0x467bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467bd4) {
            ctx->pc = 0x467BECu;
            goto label_467bec;
        }
    }
    ctx->pc = 0x467BDCu;
label_467bdc:
    // 0x467bdc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x467bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x467be0: 0x83a5003c  lb          $a1, 0x3C($sp)
    ctx->pc = 0x467be0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x467be4: 0xc05e784  jal         func_179E10
    ctx->pc = 0x467BE4u;
    SET_GPR_U32(ctx, 31, 0x467BECu);
    ctx->pc = 0x179E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179E10u, 0x467BE4u, 0x467BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467BECu;
label_467bec:
    // 0x467bec: 0x1220ffde  beqz        $s1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x467BECu;
    {
        const bool branch_taken_0x467bec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x467bec) {
            ctx->pc = 0x467B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_467b68;
        }
    }
    ctx->pc = 0x467BF4u;
    // 0x467bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467bf8:
    // 0x467bf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x467bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x467bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467c04: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x467c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x467c08: 0x3e00008  jr          $ra
    ctx->pc = 0x467C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467C10u;
}
