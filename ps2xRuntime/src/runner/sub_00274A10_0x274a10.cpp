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

// Function: sub_00274A10
// Address: 0x274a10 - 0x274ae0
void sub_00274A10_0x274a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274A10_0x274a10");
#endif

    switch (ctx->pc) {
        case 0x274a28u: goto label_274a28;
        case 0x274a68u: goto label_274a68;
        case 0x274aa0u: goto label_274aa0;
        case 0x274ab0u: goto label_274ab0;
        case 0x274ac8u: goto label_274ac8;
        default: break;
    }

    ctx->pc = 0x274a10u;

    // 0x274a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x274a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x274a1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x274a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274a20: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x274A20u;
    SET_GPR_U32(ctx, 31, 0x274A28u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x274A20u, 0x274A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A28u;
label_274a28:
    // 0x274a28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x274a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x274a2c: 0x24635b50  addiu       $v1, $v1, 0x5B50
    ctx->pc = 0x274a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23376));
    // 0x274a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274a34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x274a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x274a38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274a40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x274a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x274a44: 0x3e00008  jr          $ra
    ctx->pc = 0x274A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274A4Cu;
    // 0x274a4c: 0x0  nop
    ctx->pc = 0x274a4cu;
    // NOP
    // 0x274a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274a58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x274a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x274a5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x274a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274a60: 0xc09d248  jal         func_274920
    ctx->pc = 0x274A60u;
    SET_GPR_U32(ctx, 31, 0x274A68u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x274A60u, 0x274A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A68u;
label_274a68:
    // 0x274a68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x274a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274a6c: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x274A6Cu;
    {
        const bool branch_taken_0x274a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x274a6c) {
            ctx->pc = 0x274AB8u;
            goto label_274ab8;
        }
    }
    ctx->pc = 0x274A74u;
    // 0x274a74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x274a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274a78: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x274A78u;
    {
        const bool branch_taken_0x274a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x274a78) {
            ctx->pc = 0x274AC8u;
            goto label_274ac8;
        }
    }
    ctx->pc = 0x274A80u;
    // 0x274a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x274a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274a84: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x274A84u;
    {
        const bool branch_taken_0x274a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x274a84) {
            ctx->pc = 0x274A94u;
            goto label_274a94;
        }
    }
    ctx->pc = 0x274A8Cu;
    // 0x274a8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x274A8Cu;
    {
        const bool branch_taken_0x274a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a8c) {
            ctx->pc = 0x274AC8u;
            goto label_274ac8;
        }
    }
    ctx->pc = 0x274A94u;
label_274a94:
    // 0x274a94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x274a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274a98: 0xc09d2b8  jal         func_274AE0
    ctx->pc = 0x274A98u;
    SET_GPR_U32(ctx, 31, 0x274AA0u);
    ctx->pc = 0x274AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274AE0u, 0x274A98u, 0x274AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274AA0u;
label_274aa0:
    // 0x274aa0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x274aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274aa4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x274aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274aa8: 0xc09d250  jal         func_274940
    ctx->pc = 0x274AA8u;
    SET_GPR_U32(ctx, 31, 0x274AB0u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x274AA8u, 0x274AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274AB0u;
label_274ab0:
    // 0x274ab0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x274AB0u;
    {
        const bool branch_taken_0x274ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274ab0) {
            ctx->pc = 0x274AC8u;
            goto label_274ac8;
        }
    }
    ctx->pc = 0x274AB8u;
label_274ab8:
    // 0x274ab8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x274ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274abc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x274abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x274ac0: 0xc09d250  jal         func_274940
    ctx->pc = 0x274AC0u;
    SET_GPR_U32(ctx, 31, 0x274AC8u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x274AC0u, 0x274AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274AC8u;
label_274ac8:
    // 0x274ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274acc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x274accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x274ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x274AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274AD8u;
    // 0x274ad8: 0x0  nop
    ctx->pc = 0x274ad8u;
    // NOP
    // 0x274adc: 0x0  nop
    ctx->pc = 0x274adcu;
    // NOP
    ctx->pc = 0x274ae0u;
}
