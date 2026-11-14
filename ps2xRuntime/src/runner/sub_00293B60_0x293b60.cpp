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

// Function: sub_00293B60
// Address: 0x293b60 - 0x293cc0
void sub_00293B60_0x293b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293B60_0x293b60");
#endif

    switch (ctx->pc) {
        case 0x293b94u: goto label_293b94;
        case 0x293ba8u: goto label_293ba8;
        case 0x293bccu: goto label_293bcc;
        case 0x293bf4u: goto label_293bf4;
        case 0x293c18u: goto label_293c18;
        case 0x293c40u: goto label_293c40;
        case 0x293c70u: goto label_293c70;
        case 0x293c80u: goto label_293c80;
        case 0x293c9cu: goto label_293c9c;
        default: break;
    }

    ctx->pc = 0x293b60u;

    // 0x293b60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x293b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x293b64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x293b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x293b68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x293b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x293b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x293b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x293b70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x293b74: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x293b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x293b78: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x293b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x293b7c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x293b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x293b80: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x293b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x293b84: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x293b84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x293b88: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x293b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293b8c: 0xc0a4838  jal         func_2920E0
    ctx->pc = 0x293B8Cu;
    SET_GPR_U32(ctx, 31, 0x293B94u);
    ctx->pc = 0x2920E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920E0u, 0x293B8Cu, 0x293B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B94u;
label_293b94:
    // 0x293b94: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x293b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x293b98: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x293b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x293b9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x293b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x293ba0: 0xc041954  jal         func_106550
    ctx->pc = 0x293BA0u;
    SET_GPR_U32(ctx, 31, 0x293BA8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x293BA0u, 0x293BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BA8u;
label_293ba8:
    // 0x293ba8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x293ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x293bac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x293bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x293bb0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x293bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293bb4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x293bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293bb8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x293bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x293bbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293bc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293bc4: 0xc0a501c  jal         func_294070
    ctx->pc = 0x293BC4u;
    SET_GPR_U32(ctx, 31, 0x293BCCu);
    ctx->pc = 0x294070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294070u, 0x293BC4u, 0x293BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BCCu;
label_293bcc:
    // 0x293bcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x293bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293bd0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x293bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293bd4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x293bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293bd8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x293bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x293bdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x293bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x293be0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x293be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293be4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x293be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293be8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x293be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x293bec: 0xc0a4ffc  jal         func_293FF0
    ctx->pc = 0x293BECu;
    SET_GPR_U32(ctx, 31, 0x293BF4u);
    ctx->pc = 0x293FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293FF0u, 0x293BECu, 0x293BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BF4u;
label_293bf4:
    // 0x293bf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293bf8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x293bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293c00: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x293C00u;
    {
        const bool branch_taken_0x293c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x293c00) {
            ctx->pc = 0x293C24u;
            goto label_293c24;
        }
    }
    ctx->pc = 0x293C08u;
    // 0x293c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x293c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c0c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x293c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293c10: 0xc0a4f84  jal         func_293E10
    ctx->pc = 0x293C10u;
    SET_GPR_U32(ctx, 31, 0x293C18u);
    ctx->pc = 0x293E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293E10u, 0x293C10u, 0x293C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C18u;
label_293c18:
    // 0x293c18: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x293c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x293c1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x293C1Cu;
    {
        const bool branch_taken_0x293c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293c1c) {
            ctx->pc = 0x293C44u;
            goto label_293c44;
        }
    }
    ctx->pc = 0x293C24u;
label_293c24:
    // 0x293c24: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x293c24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x293c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x293c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c2c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x293c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293c30: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x293c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293c34: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x293c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x293c38: 0xc0a4f64  jal         func_293D90
    ctx->pc = 0x293C38u;
    SET_GPR_U32(ctx, 31, 0x293C40u);
    ctx->pc = 0x293D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293D90u, 0x293C38u, 0x293C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C40u;
label_293c40:
    // 0x293c40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293c44:
    // 0x293c44: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x293c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x293c48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x293C48u;
    {
        const bool branch_taken_0x293c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293c48) {
            ctx->pc = 0x293C74u;
            goto label_293c74;
        }
    }
    ctx->pc = 0x293C50u;
    // 0x293c50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x293c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293c54: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x293c54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x293c58: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x293c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293c5c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x293c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x293c60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x293c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c64: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x293c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x293c68: 0xc0a4ffc  jal         func_293FF0
    ctx->pc = 0x293C68u;
    SET_GPR_U32(ctx, 31, 0x293C70u);
    ctx->pc = 0x293FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293FF0u, 0x293C68u, 0x293C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C70u;
label_293c70:
    // 0x293c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293c74:
    // 0x293c74: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x293c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293c78: 0xc0a4f44  jal         func_293D10
    ctx->pc = 0x293C78u;
    SET_GPR_U32(ctx, 31, 0x293C80u);
    ctx->pc = 0x293D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293D10u, 0x293C78u, 0x293C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C80u;
label_293c80:
    // 0x293c80: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x293c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x293c84: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x293c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x293c88: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x293c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293c8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x293c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x293c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c94: 0xc0a4f30  jal         func_293CC0
    ctx->pc = 0x293C94u;
    SET_GPR_U32(ctx, 31, 0x293C9Cu);
    ctx->pc = 0x293CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293CC0u, 0x293C94u, 0x293C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C9Cu;
label_293c9c:
    // 0x293c9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x293c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293ca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x293ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x293ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293cac: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x293cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x293cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x293CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293CB8u;
    // 0x293cb8: 0x0  nop
    ctx->pc = 0x293cb8u;
    // NOP
    // 0x293cbc: 0x0  nop
    ctx->pc = 0x293cbcu;
    // NOP
    ctx->pc = 0x293cc0u;
}
