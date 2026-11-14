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

// Function: sub_00269C50
// Address: 0x269c50 - 0x269cf0
void sub_00269C50_0x269c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269C50_0x269c50");
#endif

    switch (ctx->pc) {
        case 0x269c74u: goto label_269c74;
        case 0x269c80u: goto label_269c80;
        case 0x269c94u: goto label_269c94;
        case 0x269cc8u: goto label_269cc8;
        default: break;
    }

    ctx->pc = 0x269c50u;

    // 0x269c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x269c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x269c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269c5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x269c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x269c60: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x269c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x269c64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x269c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269c68: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x269c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x269c6c: 0xc09a690  jal         func_269A40
    ctx->pc = 0x269C6Cu;
    SET_GPR_U32(ctx, 31, 0x269C74u);
    ctx->pc = 0x269A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269A40u, 0x269C6Cu, 0x269C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C74u;
label_269c74:
    // 0x269c74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269c78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x269C78u;
    {
        const bool branch_taken_0x269c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c78) {
            ctx->pc = 0x269CB8u;
            goto label_269cb8;
        }
    }
    ctx->pc = 0x269C80u;
label_269c80:
    // 0x269c80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x269c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x269c84: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x269c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x269c88: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x269c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269c8c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x269C8Cu;
    SET_GPR_U32(ctx, 31, 0x269C94u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x269C8Cu, 0x269C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C94u;
label_269c94:
    // 0x269c94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269C94u;
    {
        const bool branch_taken_0x269c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269c94) {
            ctx->pc = 0x269CB4u;
            goto label_269cb4;
        }
    }
    ctx->pc = 0x269C9Cu;
    // 0x269c9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x269c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x269ca0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x269ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x269ca4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x269ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x269ca8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x269ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x269cac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x269CACu;
    {
        const bool branch_taken_0x269cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269cac) {
            ctx->pc = 0x269CD4u;
            goto label_269cd4;
        }
    }
    ctx->pc = 0x269CB4u;
label_269cb4:
    // 0x269cb4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x269cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_269cb8:
    // 0x269cb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x269cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269cbc: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x269cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x269cc0: 0xc09a610  jal         func_269840
    ctx->pc = 0x269CC0u;
    SET_GPR_U32(ctx, 31, 0x269CC8u);
    ctx->pc = 0x269840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269840u, 0x269CC0u, 0x269CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269CC8u;
label_269cc8:
    // 0x269cc8: 0x1602ffed  bne         $s0, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x269CC8u;
    {
        const bool branch_taken_0x269cc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x269cc8) {
            ctx->pc = 0x269C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269c80;
        }
    }
    ctx->pc = 0x269CD0u;
    // 0x269cd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269cd4:
    // 0x269cd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x269cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269cdc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x269cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x269ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x269CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269CE8u;
    // 0x269ce8: 0x0  nop
    ctx->pc = 0x269ce8u;
    // NOP
    // 0x269cec: 0x0  nop
    ctx->pc = 0x269cecu;
    // NOP
    ctx->pc = 0x269cf0u;
}
