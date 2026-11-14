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

// Function: sub_00245B10
// Address: 0x245b10 - 0x245bd0
void sub_00245B10_0x245b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245B10_0x245b10");
#endif

    switch (ctx->pc) {
        case 0x245b44u: goto label_245b44;
        case 0x245b58u: goto label_245b58;
        case 0x245b6cu: goto label_245b6c;
        case 0x245b80u: goto label_245b80;
        case 0x245b9cu: goto label_245b9c;
        default: break;
    }

    ctx->pc = 0x245b10u;

    // 0x245b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x245b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x245b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x245b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x245b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x245b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x245b20: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x245b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x245b24: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x245b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x245b28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x245b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245b2c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x245B2Cu;
    {
        const bool branch_taken_0x245b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b2c) {
            ctx->pc = 0x245BA8u;
            goto label_245ba8;
        }
    }
    ctx->pc = 0x245B34u;
    // 0x245b34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x245b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245b38: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x245b3c: 0xc0915f4  jal         func_2457D0
    ctx->pc = 0x245B3Cu;
    SET_GPR_U32(ctx, 31, 0x245B44u);
    ctx->pc = 0x2457D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457D0u, 0x245B3Cu, 0x245B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B44u;
label_245b44:
    // 0x245b44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x245b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x245b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245b4c: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x245b50: 0xc0915ec  jal         func_2457B0
    ctx->pc = 0x245B50u;
    SET_GPR_U32(ctx, 31, 0x245B58u);
    ctx->pc = 0x2457B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457B0u, 0x245B50u, 0x245B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B58u;
label_245b58:
    // 0x245b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b60: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x245b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x245b64: 0xc09187c  jal         func_2461F0
    ctx->pc = 0x245B64u;
    SET_GPR_U32(ctx, 31, 0x245B6Cu);
    ctx->pc = 0x2461F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2461F0u, 0x245B64u, 0x245B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B6Cu;
label_245b6c:
    // 0x245b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x245b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245b74: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x245b78: 0xc0915ec  jal         func_2457B0
    ctx->pc = 0x245B78u;
    SET_GPR_U32(ctx, 31, 0x245B80u);
    ctx->pc = 0x2457B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457B0u, 0x245B78u, 0x245B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B80u;
label_245b80:
    // 0x245b80: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x245B80u;
    {
        const bool branch_taken_0x245b80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x245b80) {
            ctx->pc = 0x245BA8u;
            goto label_245ba8;
        }
    }
    ctx->pc = 0x245B88u;
    // 0x245b88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x245b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245b8c: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x245b90: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x245b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x245b94: 0xc0916f4  jal         func_245BD0
    ctx->pc = 0x245B94u;
    SET_GPR_U32(ctx, 31, 0x245B9Cu);
    ctx->pc = 0x245BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245BD0u, 0x245B94u, 0x245B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B9Cu;
label_245b9c:
    // 0x245b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245ba0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245BA0u;
    {
        const bool branch_taken_0x245ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ba0) {
            ctx->pc = 0x245BACu;
            goto label_245bac;
        }
    }
    ctx->pc = 0x245BA8u;
label_245ba8:
    // 0x245ba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x245ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245bac:
    // 0x245bac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x245bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245bb8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x245bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x245bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x245BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245BC4u;
    // 0x245bc4: 0x0  nop
    ctx->pc = 0x245bc4u;
    // NOP
    // 0x245bc8: 0x0  nop
    ctx->pc = 0x245bc8u;
    // NOP
    // 0x245bcc: 0x0  nop
    ctx->pc = 0x245bccu;
    // NOP
    ctx->pc = 0x245bd0u;
}
