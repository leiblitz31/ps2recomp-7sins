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

// Function: sub_00117C30
// Address: 0x117c30 - 0x117d10
void sub_00117C30_0x117c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117C30_0x117c30");
#endif

    switch (ctx->pc) {
        case 0x117c30u: goto label_117c30;
        case 0x117c34u: goto label_117c34;
        case 0x117c38u: goto label_117c38;
        case 0x117c3cu: goto label_117c3c;
        case 0x117c40u: goto label_117c40;
        case 0x117c44u: goto label_117c44;
        case 0x117c48u: goto label_117c48;
        case 0x117c4cu: goto label_117c4c;
        case 0x117c50u: goto label_117c50;
        case 0x117c54u: goto label_117c54;
        case 0x117c58u: goto label_117c58;
        case 0x117c5cu: goto label_117c5c;
        case 0x117c60u: goto label_117c60;
        case 0x117c64u: goto label_117c64;
        case 0x117c68u: goto label_117c68;
        case 0x117c6cu: goto label_117c6c;
        case 0x117c70u: goto label_117c70;
        case 0x117c74u: goto label_117c74;
        case 0x117c78u: goto label_117c78;
        case 0x117c7cu: goto label_117c7c;
        case 0x117c80u: goto label_117c80;
        case 0x117c84u: goto label_117c84;
        case 0x117c88u: goto label_117c88;
        case 0x117c8cu: goto label_117c8c;
        case 0x117c90u: goto label_117c90;
        case 0x117c94u: goto label_117c94;
        case 0x117c98u: goto label_117c98;
        case 0x117c9cu: goto label_117c9c;
        case 0x117ca0u: goto label_117ca0;
        case 0x117ca4u: goto label_117ca4;
        case 0x117ca8u: goto label_117ca8;
        case 0x117cacu: goto label_117cac;
        case 0x117cb0u: goto label_117cb0;
        case 0x117cb4u: goto label_117cb4;
        case 0x117cb8u: goto label_117cb8;
        case 0x117cbcu: goto label_117cbc;
        case 0x117cc0u: goto label_117cc0;
        case 0x117cc4u: goto label_117cc4;
        case 0x117cc8u: goto label_117cc8;
        case 0x117cccu: goto label_117ccc;
        case 0x117cd0u: goto label_117cd0;
        case 0x117cd4u: goto label_117cd4;
        case 0x117cd8u: goto label_117cd8;
        case 0x117cdcu: goto label_117cdc;
        case 0x117ce0u: goto label_117ce0;
        case 0x117ce4u: goto label_117ce4;
        case 0x117ce8u: goto label_117ce8;
        case 0x117cecu: goto label_117cec;
        case 0x117cf0u: goto label_117cf0;
        case 0x117cf4u: goto label_117cf4;
        case 0x117cf8u: goto label_117cf8;
        case 0x117cfcu: goto label_117cfc;
        case 0x117d00u: goto label_117d00;
        case 0x117d04u: goto label_117d04;
        case 0x117d08u: goto label_117d08;
        case 0x117d0cu: goto label_117d0c;
        default: break;
    }

    ctx->pc = 0x117c30u;

label_117c30:
    // 0x117c30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x117c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_117c34:
    // 0x117c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_117c38:
    // 0x117c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_117c3c:
    // 0x117c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_117c40:
    // 0x117c40: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x117c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_117c44:
    // 0x117c44: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x117c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_117c48:
    // 0x117c48: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x117c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_117c4c:
    // 0x117c4c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x117c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_117c50:
    // 0x117c50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x117c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_117c54:
    // 0x117c54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x117c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117c58:
    // 0x117c58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x117c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_117c5c:
    // 0x117c5c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x117c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_117c60:
    // 0x117c60: 0x320f809  jalr        $t9
label_117c64:
    if (ctx->pc == 0x117C64u) {
        ctx->pc = 0x117C68u;
        goto label_117c68;
    }
    ctx->pc = 0x117C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117C68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C60u, 0x117C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117C68u;
label_117c68:
    // 0x117c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x117c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117c6c:
    // 0x117c6c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_117c70:
    if (ctx->pc == 0x117C70u) {
        ctx->pc = 0x117C74u;
        goto label_117c74;
    }
    ctx->pc = 0x117C6Cu;
    {
        const bool branch_taken_0x117c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x117c6c) {
            ctx->pc = 0x117C80u;
            goto label_117c80;
        }
    }
    ctx->pc = 0x117C74u;
label_117c74:
    // 0x117c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117c78:
    // 0x117c78: 0x1000001d  b           . + 4 + (0x1D << 2)
label_117c7c:
    if (ctx->pc == 0x117C7Cu) {
        ctx->pc = 0x117C80u;
        goto label_117c80;
    }
    ctx->pc = 0x117C78u;
    {
        const bool branch_taken_0x117c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117c78) {
            ctx->pc = 0x117CF0u;
            goto label_117cf0;
        }
    }
    ctx->pc = 0x117C80u;
label_117c80:
    // 0x117c80: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x117c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_117c84:
    // 0x117c84: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x117c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_117c88:
    // 0x117c88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x117c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_117c8c:
    // 0x117c8c: 0xc119354  jal         func_464D50
label_117c90:
    if (ctx->pc == 0x117C90u) {
        ctx->pc = 0x117C94u;
        goto label_117c94;
    }
    ctx->pc = 0x117C8Cu;
    SET_GPR_U32(ctx, 31, 0x117C94u);
    ctx->pc = 0x464D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464D50u, 0x117C8Cu, 0x117C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C94u;
label_117c94:
    // 0x117c94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x117c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_117c98:
    // 0x117c98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x117c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_117c9c:
    // 0x117c9c: 0x8fb1003c  lw          $s1, 0x3C($sp)
    ctx->pc = 0x117c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_117ca0:
    // 0x117ca0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x117ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_117ca4:
    // 0x117ca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117ca8:
    // 0x117ca8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x117ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117cac:
    // 0x117cac: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x117cacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_117cb0:
    // 0x117cb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x117cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_117cb4:
    // 0x117cb4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x117cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_117cb8:
    // 0x117cb8: 0x320f809  jalr        $t9
label_117cbc:
    if (ctx->pc == 0x117CBCu) {
        ctx->pc = 0x117CC0u;
        goto label_117cc0;
    }
    ctx->pc = 0x117CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117CC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117CB8u, 0x117CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117CC0u;
label_117cc0:
    // 0x117cc0: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_117cc4:
    if (ctx->pc == 0x117CC4u) {
        ctx->pc = 0x117CC8u;
        goto label_117cc8;
    }
    ctx->pc = 0x117CC0u;
    {
        const bool branch_taken_0x117cc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x117cc0) {
            ctx->pc = 0x117CD4u;
            goto label_117cd4;
        }
    }
    ctx->pc = 0x117CC8u;
label_117cc8:
    // 0x117cc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117ccc:
    // 0x117ccc: 0x10000008  b           . + 4 + (0x8 << 2)
label_117cd0:
    if (ctx->pc == 0x117CD0u) {
        ctx->pc = 0x117CD4u;
        goto label_117cd4;
    }
    ctx->pc = 0x117CCCu;
    {
        const bool branch_taken_0x117ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117ccc) {
            ctx->pc = 0x117CF0u;
            goto label_117cf0;
        }
    }
    ctx->pc = 0x117CD4u;
label_117cd4:
    // 0x117cd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x117cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_117cd8:
    // 0x117cd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x117cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_117cdc:
    // 0x117cdc: 0xc11919c  jal         func_464670
label_117ce0:
    if (ctx->pc == 0x117CE0u) {
        ctx->pc = 0x117CE4u;
        goto label_117ce4;
    }
    ctx->pc = 0x117CDCu;
    SET_GPR_U32(ctx, 31, 0x117CE4u);
    ctx->pc = 0x464670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464670u, 0x117CDCu, 0x117CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117CE4u;
label_117ce4:
    // 0x117ce4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x117ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_117ce8:
    // 0x117ce8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x117ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_117cec:
    // 0x117cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117cf0:
    // 0x117cf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_117cf4:
    // 0x117cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_117cf8:
    // 0x117cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_117cfc:
    // 0x117cfc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x117cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_117d00:
    // 0x117d00: 0x3e00008  jr          $ra
label_117d04:
    if (ctx->pc == 0x117D04u) {
        ctx->pc = 0x117D08u;
        goto label_117d08;
    }
    ctx->pc = 0x117D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117D08u;
label_117d08:
    // 0x117d08: 0x0  nop
    ctx->pc = 0x117d08u;
    // NOP
label_117d0c:
    // 0x117d0c: 0x0  nop
    ctx->pc = 0x117d0cu;
    // NOP
    ctx->pc = 0x117d10u;
}
