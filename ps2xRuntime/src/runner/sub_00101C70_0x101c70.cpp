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

// Function: sub_00101C70
// Address: 0x101c70 - 0x101d10
void sub_00101C70_0x101c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101C70_0x101c70");
#endif

    switch (ctx->pc) {
        case 0x101ca8u: goto label_101ca8;
        case 0x101cbcu: goto label_101cbc;
        case 0x101ce4u: goto label_101ce4;
        default: break;
    }

    ctx->pc = 0x101c70u;

    // 0x101c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x101c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x101c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x101c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x101c7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x101c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x101c80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x101c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x101c84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x101c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101c88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101C88u;
    {
        const bool branch_taken_0x101c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101c88) {
            ctx->pc = 0x101C9Cu;
            goto label_101c9c;
        }
    }
    ctx->pc = 0x101C90u;
    // 0x101c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101c94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x101C94u;
    {
        const bool branch_taken_0x101c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101c94) {
            ctx->pc = 0x101CF0u;
            goto label_101cf0;
        }
    }
    ctx->pc = 0x101C9Cu;
label_101c9c:
    // 0x101c9c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x101c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101ca0: 0xc1191a8  jal         func_4646A0
    ctx->pc = 0x101CA0u;
    SET_GPR_U32(ctx, 31, 0x101CA8u);
    ctx->pc = 0x4646A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4646A0u, 0x101CA0u, 0x101CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CA8u;
label_101ca8:
    // 0x101ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cac: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x101cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x101cb0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x101cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101cb4: 0xc11939c  jal         func_464E70
    ctx->pc = 0x101CB4u;
    SET_GPR_U32(ctx, 31, 0x101CBCu);
    ctx->pc = 0x464E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464E70u, 0x101CB4u, 0x101CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CBCu;
label_101cbc:
    // 0x101cbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101CBCu;
    {
        const bool branch_taken_0x101cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101cbc) {
            ctx->pc = 0x101CD0u;
            goto label_101cd0;
        }
    }
    ctx->pc = 0x101CC4u;
    // 0x101cc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x101CC8u;
    {
        const bool branch_taken_0x101cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101cc8) {
            ctx->pc = 0x101CF0u;
            goto label_101cf0;
        }
    }
    ctx->pc = 0x101CD0u;
label_101cd0:
    // 0x101cd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x101cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101cd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101cd8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x101cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101cdc: 0xc1191d0  jal         func_464740
    ctx->pc = 0x101CDCu;
    SET_GPR_U32(ctx, 31, 0x101CE4u);
    ctx->pc = 0x464740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464740u, 0x101CDCu, 0x101CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CE4u;
label_101ce4:
    // 0x101ce4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x101ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101ce8: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x101ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x101cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101cf0:
    // 0x101cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x101cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101cf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x101cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x101cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x101CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101D04u;
    // 0x101d04: 0x0  nop
    ctx->pc = 0x101d04u;
    // NOP
    // 0x101d08: 0x0  nop
    ctx->pc = 0x101d08u;
    // NOP
    // 0x101d0c: 0x0  nop
    ctx->pc = 0x101d0cu;
    // NOP
    ctx->pc = 0x101d10u;
}
