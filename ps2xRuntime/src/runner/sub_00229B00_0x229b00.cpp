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

// Function: sub_00229B00
// Address: 0x229b00 - 0x229bc0
void sub_00229B00_0x229b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229B00_0x229b00");
#endif

    switch (ctx->pc) {
        case 0x229b24u: goto label_229b24;
        case 0x229b30u: goto label_229b30;
        case 0x229b50u: goto label_229b50;
        case 0x229b6cu: goto label_229b6c;
        case 0x229b80u: goto label_229b80;
        case 0x229ba0u: goto label_229ba0;
        default: break;
    }

    ctx->pc = 0x229b00u;

    // 0x229b00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x229b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x229b04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x229b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x229b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x229b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x229b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229b10: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x229b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x229b14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229b18: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229b1c: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x229B1Cu;
    SET_GPR_U32(ctx, 31, 0x229B24u);
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x229B1Cu, 0x229B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B24u;
label_229b24:
    // 0x229b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b28: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x229B28u;
    {
        const bool branch_taken_0x229b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229b28) {
            ctx->pc = 0x229B90u;
            goto label_229b90;
        }
    }
    ctx->pc = 0x229B30u;
label_229b30:
    // 0x229b30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x229b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b34: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x229b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b38: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x229b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x229b3c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x229b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x229b40: 0x24a575a0  addiu       $a1, $a1, 0x75A0
    ctx->pc = 0x229b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30112));
    // 0x229b44: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x229b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x229b48: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x229B48u;
    SET_GPR_U32(ctx, 31, 0x229B50u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x229B48u, 0x229B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B50u;
label_229b50:
    // 0x229b50: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x229b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x229b54: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x229b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x229b58: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x229B58u;
    {
        const bool branch_taken_0x229b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229b58) {
            ctx->pc = 0x229B8Cu;
            goto label_229b8c;
        }
    }
    ctx->pc = 0x229B60u;
    // 0x229b60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x229b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x229b64: 0xc0e20da  jal         func_388368
    ctx->pc = 0x229B64u;
    SET_GPR_U32(ctx, 31, 0x229B6Cu);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x229B64u, 0x229B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B6Cu;
label_229b6c:
    // 0x229b6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229b70: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229b74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b78: 0xc08a120  jal         func_228480
    ctx->pc = 0x229B78u;
    SET_GPR_U32(ctx, 31, 0x229B80u);
    ctx->pc = 0x228480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228480u, 0x229B78u, 0x229B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B80u;
label_229b80:
    // 0x229b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229B84u;
    {
        const bool branch_taken_0x229b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229b84) {
            ctx->pc = 0x229B90u;
            goto label_229b90;
        }
    }
    ctx->pc = 0x229B8Cu;
label_229b8c:
    // 0x229b8c: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x229b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_229b90:
    // 0x229b90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229b94: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229b98: 0xc08a118  jal         func_228460
    ctx->pc = 0x229B98u;
    SET_GPR_U32(ctx, 31, 0x229BA0u);
    ctx->pc = 0x228460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228460u, 0x229B98u, 0x229BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BA0u;
label_229ba0:
    // 0x229ba0: 0x1602ffe3  bne         $s0, $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x229BA0u;
    {
        const bool branch_taken_0x229ba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x229ba0) {
            ctx->pc = 0x229B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229b30;
        }
    }
    ctx->pc = 0x229BA8u;
    // 0x229ba8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x229ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x229bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229bb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x229bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229bb4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x229bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x229bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x229BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229BC0u;
}
