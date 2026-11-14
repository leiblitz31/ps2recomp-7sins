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

// Function: sub_00108B80
// Address: 0x108b80 - 0x108c80
void sub_00108B80_0x108b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108B80_0x108b80");
#endif

    switch (ctx->pc) {
        case 0x108bbcu: goto label_108bbc;
        case 0x108becu: goto label_108bec;
        case 0x108bf8u: goto label_108bf8;
        case 0x108c14u: goto label_108c14;
        case 0x108c20u: goto label_108c20;
        case 0x108c48u: goto label_108c48;
        case 0x108c60u: goto label_108c60;
        default: break;
    }

    ctx->pc = 0x108b80u;

    // 0x108b80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x108b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x108b84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x108b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x108b88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x108b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x108b8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x108b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x108b90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x108b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x108b94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x108b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x108b98: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x108b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x108b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108ba0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x108ba0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x108ba4: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x108ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x108ba8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x108ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x108bac: 0x24050545  addiu       $a1, $zero, 0x545
    ctx->pc = 0x108bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1349));
    // 0x108bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bb4: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x108BB4u;
    SET_GPR_U32(ctx, 31, 0x108BBCu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x108BB4u, 0x108BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BBCu;
label_108bbc:
    // 0x108bbc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x108bbcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x108bc0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x108bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x108bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108bc8: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x108BC8u;
    {
        const bool branch_taken_0x108bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x108bc8) {
            ctx->pc = 0x108C60u;
            goto label_108c60;
        }
    }
    ctx->pc = 0x108BD0u;
    // 0x108bd0: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x108bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x108bd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108bd8: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x108BD8u;
    {
        const bool branch_taken_0x108bd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x108bd8) {
            ctx->pc = 0x108C60u;
            goto label_108c60;
        }
    }
    ctx->pc = 0x108BE0u;
    // 0x108be0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x108be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x108be4: 0xc042330  jal         func_108CC0
    ctx->pc = 0x108BE4u;
    SET_GPR_U32(ctx, 31, 0x108BECu);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x108BE4u, 0x108BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BECu;
label_108bec:
    // 0x108bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bf0: 0xc042328  jal         func_108CA0
    ctx->pc = 0x108BF0u;
    SET_GPR_U32(ctx, 31, 0x108BF8u);
    ctx->pc = 0x108CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CA0u, 0x108BF0u, 0x108BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BF8u;
label_108bf8:
    // 0x108bf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x108bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108c00: 0x12030017  beq         $s0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x108C00u;
    {
        const bool branch_taken_0x108c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x108c00) {
            ctx->pc = 0x108C60u;
            goto label_108c60;
        }
    }
    ctx->pc = 0x108C08u;
    // 0x108c08: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x108c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x108c0c: 0xc042330  jal         func_108CC0
    ctx->pc = 0x108C0Cu;
    SET_GPR_U32(ctx, 31, 0x108C14u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x108C0Cu, 0x108C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C14u;
label_108c14:
    // 0x108c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c18: 0xc042320  jal         func_108C80
    ctx->pc = 0x108C18u;
    SET_GPR_U32(ctx, 31, 0x108C20u);
    ctx->pc = 0x108C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108C80u, 0x108C18u, 0x108C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C20u;
label_108c20:
    // 0x108c20: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x108c20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x108c24: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x108C24u;
    {
        const bool branch_taken_0x108c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x108c24) {
            ctx->pc = 0x108C60u;
            goto label_108c60;
        }
    }
    ctx->pc = 0x108C2Cu;
    // 0x108c2c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x108c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x108c30: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x108c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x108c34: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x108c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x108c38: 0x24a51530  addiu       $a1, $a1, 0x1530
    ctx->pc = 0x108c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5424));
    // 0x108c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c40: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x108C40u;
    SET_GPR_U32(ctx, 31, 0x108C48u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x108C40u, 0x108C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C48u;
label_108c48:
    // 0x108c48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x108c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c4c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x108c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108c50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c58: 0xc041bd4  jal         func_106F50
    ctx->pc = 0x108C58u;
    SET_GPR_U32(ctx, 31, 0x108C60u);
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x108C58u, 0x108C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C60u;
label_108c60:
    // 0x108c60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x108c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108c64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x108c64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108c68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x108c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108c6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108c74: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x108c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x108c78: 0x3e00008  jr          $ra
    ctx->pc = 0x108C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108C80u;
}
