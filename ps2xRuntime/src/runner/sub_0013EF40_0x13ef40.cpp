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

// Function: sub_0013EF40
// Address: 0x13ef40 - 0x13efe0
void sub_0013EF40_0x13ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EF40_0x13ef40");
#endif

    ctx->pc = 0x13ef40u;

    // 0x13ef40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ef44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13ef48: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x13ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13ef4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ef50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13ef54: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13EF54u;
    {
        const bool branch_taken_0x13ef54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ef54) {
            ctx->pc = 0x13EFB8u;
            goto label_13efb8;
        }
    }
    ctx->pc = 0x13EF5Cu;
    // 0x13ef5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ef60: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13EF60u;
    {
        const bool branch_taken_0x13ef60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ef60) {
            ctx->pc = 0x13EFA8u;
            goto label_13efa8;
        }
    }
    ctx->pc = 0x13EF68u;
    // 0x13ef68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ef6c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13EF6Cu;
    {
        const bool branch_taken_0x13ef6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ef6c) {
            ctx->pc = 0x13EF98u;
            goto label_13ef98;
        }
    }
    ctx->pc = 0x13EF74u;
    // 0x13ef74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ef78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EF78u;
    {
        const bool branch_taken_0x13ef78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ef78) {
            ctx->pc = 0x13EF88u;
            goto label_13ef88;
        }
    }
    ctx->pc = 0x13EF80u;
    // 0x13ef80: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13EF80u;
    {
        const bool branch_taken_0x13ef80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ef80) {
            ctx->pc = 0x13EFC8u;
            goto label_13efc8;
        }
    }
    ctx->pc = 0x13EF88u;
label_13ef88:
    // 0x13ef88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ef8c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x13ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x13ef90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13EF90u;
    {
        const bool branch_taken_0x13ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ef90) {
            ctx->pc = 0x13EFCCu;
            goto label_13efcc;
        }
    }
    ctx->pc = 0x13EF98u;
label_13ef98:
    // 0x13ef98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ef9c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x13ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x13efa0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13EFA0u;
    {
        const bool branch_taken_0x13efa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13efa0) {
            ctx->pc = 0x13EFCCu;
            goto label_13efcc;
        }
    }
    ctx->pc = 0x13EFA8u;
label_13efa8:
    // 0x13efa8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13efac: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x13efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x13efb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13EFB0u;
    {
        const bool branch_taken_0x13efb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13efb0) {
            ctx->pc = 0x13EFCCu;
            goto label_13efcc;
        }
    }
    ctx->pc = 0x13EFB8u;
label_13efb8:
    // 0x13efb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13efbc: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x13efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13efc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13EFC0u;
    {
        const bool branch_taken_0x13efc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13efc0) {
            ctx->pc = 0x13EFCCu;
            goto label_13efcc;
        }
    }
    ctx->pc = 0x13EFC8u;
label_13efc8:
    // 0x13efc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13efc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13efcc:
    // 0x13efcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13efccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13efd0: 0x3e00008  jr          $ra
    ctx->pc = 0x13EFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EFD8u;
    // 0x13efd8: 0x0  nop
    ctx->pc = 0x13efd8u;
    // NOP
    // 0x13efdc: 0x0  nop
    ctx->pc = 0x13efdcu;
    // NOP
    ctx->pc = 0x13efe0u;
}
