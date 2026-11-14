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

// Function: sub_00234C20
// Address: 0x234c20 - 0x234cb0
void sub_00234C20_0x234c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234C20_0x234c20");
#endif

    switch (ctx->pc) {
        case 0x234c48u: goto label_234c48;
        case 0x234c60u: goto label_234c60;
        default: break;
    }

    ctx->pc = 0x234c20u;

    // 0x234c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x234c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x234c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x234c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x234c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234c34: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x234c34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x234c38: 0x8f82bba4  lw          $v0, -0x445C($gp)
    ctx->pc = 0x234c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
    // 0x234c3c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x234c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x234c40: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x234C40u;
    SET_GPR_U32(ctx, 31, 0x234C48u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x234C40u, 0x234C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C48u;
label_234c48:
    // 0x234c48: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x234C48u;
    {
        const bool branch_taken_0x234c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234c48) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234C50u;
    // 0x234c50: 0x8f82bba4  lw          $v0, -0x445C($gp)
    ctx->pc = 0x234c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
    // 0x234c54: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x234c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x234c58: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x234C58u;
    SET_GPR_U32(ctx, 31, 0x234C60u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x234C58u, 0x234C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C60u;
label_234c60:
    // 0x234c60: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x234C60u;
    {
        const bool branch_taken_0x234c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234c60) {
            ctx->pc = 0x234C6Cu;
            goto label_234c6c;
        }
    }
    ctx->pc = 0x234C68u;
    // 0x234c68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x234c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234c6c:
    // 0x234c6c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234C6Cu;
    {
        const bool branch_taken_0x234c6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x234c6c) {
            ctx->pc = 0x234C84u;
            goto label_234c84;
        }
    }
    ctx->pc = 0x234C74u;
    // 0x234c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234c78: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x234c78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x234c7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x234C7Cu;
    {
        const bool branch_taken_0x234c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234c7c) {
            ctx->pc = 0x234C88u;
            goto label_234c88;
        }
    }
    ctx->pc = 0x234C84u;
label_234c84:
    // 0x234c84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x234c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234c88:
    // 0x234c88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x234c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234c98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x234c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x234C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234CA4u;
    // 0x234ca4: 0x0  nop
    ctx->pc = 0x234ca4u;
    // NOP
    // 0x234ca8: 0x0  nop
    ctx->pc = 0x234ca8u;
    // NOP
    // 0x234cac: 0x0  nop
    ctx->pc = 0x234cacu;
    // NOP
    ctx->pc = 0x234cb0u;
}
