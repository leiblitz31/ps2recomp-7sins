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

// Function: sub_00111AF0
// Address: 0x111af0 - 0x111be0
void sub_00111AF0_0x111af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111AF0_0x111af0");
#endif

    switch (ctx->pc) {
        case 0x111b20u: goto label_111b20;
        case 0x111b38u: goto label_111b38;
        case 0x111b48u: goto label_111b48;
        case 0x111b60u: goto label_111b60;
        case 0x111b90u: goto label_111b90;
        case 0x111ba4u: goto label_111ba4;
        case 0x111bb8u: goto label_111bb8;
        default: break;
    }

    ctx->pc = 0x111af0u;

    // 0x111af0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x111af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x111af4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x111af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x111afc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x111afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x111b00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x111b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x111b04: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x111b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x111b08: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x111b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x111b0c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x111b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x111b10: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x111b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111b14: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x111b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111b18: 0xc0445c0  jal         func_111700
    ctx->pc = 0x111B18u;
    SET_GPR_U32(ctx, 31, 0x111B20u);
    ctx->pc = 0x111700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111700u, 0x111B18u, 0x111B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B20u;
label_111b20:
    // 0x111b20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b24: 0x14120026  bne         $zero, $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x111B24u;
    {
        const bool branch_taken_0x111b24 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 18));
        if (branch_taken_0x111b24) {
            ctx->pc = 0x111BC0u;
            goto label_111bc0;
        }
    }
    ctx->pc = 0x111B2Cu;
    // 0x111b2c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x111b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x111b30: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x111B30u;
    SET_GPR_U32(ctx, 31, 0x111B38u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x111B30u, 0x111B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B38u;
label_111b38:
    // 0x111b38: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x111b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x111b3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b40: 0xc0400e0  jal         func_100380
    ctx->pc = 0x111B40u;
    SET_GPR_U32(ctx, 31, 0x111B48u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x111B40u, 0x111B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B48u;
label_111b48:
    // 0x111b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b4c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111B4Cu;
    {
        const bool branch_taken_0x111b4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x111b4c) {
            ctx->pc = 0x111B64u;
            goto label_111b64;
        }
    }
    ctx->pc = 0x111B54u;
    // 0x111b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b58: 0xc0447e0  jal         func_111F80
    ctx->pc = 0x111B58u;
    SET_GPR_U32(ctx, 31, 0x111B60u);
    ctx->pc = 0x111F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F80u, 0x111B58u, 0x111B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B60u;
label_111b60:
    // 0x111b60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111b64:
    // 0x111b64: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x111b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x111b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111b6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x111b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x111b70: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x111b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111b74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111B74u;
    {
        const bool branch_taken_0x111b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111b74) {
            ctx->pc = 0x111B90u;
            goto label_111b90;
        }
    }
    ctx->pc = 0x111B7Cu;
    // 0x111b7c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x111b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x111b80: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x111b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111b84: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x111b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x111b88: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x111B88u;
    SET_GPR_U32(ctx, 31, 0x111B90u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x111B88u, 0x111B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B90u;
label_111b90:
    // 0x111b90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x111b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111b94: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x111b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x111b98: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x111b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x111b9c: 0xc0446f8  jal         func_111BE0
    ctx->pc = 0x111B9Cu;
    SET_GPR_U32(ctx, 31, 0x111BA4u);
    ctx->pc = 0x111BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111BE0u, 0x111B9Cu, 0x111BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BA4u;
label_111ba4:
    // 0x111ba4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x111ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x111ba8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x111ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111bac: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x111bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111bb0: 0xc0445c0  jal         func_111700
    ctx->pc = 0x111BB0u;
    SET_GPR_U32(ctx, 31, 0x111BB8u);
    ctx->pc = 0x111700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111700u, 0x111BB0u, 0x111BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BB8u;
label_111bb8:
    // 0x111bb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111BB8u;
    {
        const bool branch_taken_0x111bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111bb8) {
            ctx->pc = 0x111BC4u;
            goto label_111bc4;
        }
    }
    ctx->pc = 0x111BC0u;
label_111bc0:
    // 0x111bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111bc4:
    // 0x111bc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111bc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x111bc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111bcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111bd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111bd4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x111bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x111bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x111BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111BE0u;
}
