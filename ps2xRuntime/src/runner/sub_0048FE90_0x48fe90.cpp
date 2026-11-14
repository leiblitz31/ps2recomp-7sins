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

// Function: sub_0048FE90
// Address: 0x48fe90 - 0x48ff50
void sub_0048FE90_0x48fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FE90_0x48fe90");
#endif

    switch (ctx->pc) {
        case 0x48feb4u: goto label_48feb4;
        case 0x48fec8u: goto label_48fec8;
        case 0x48fed4u: goto label_48fed4;
        case 0x48fee8u: goto label_48fee8;
        case 0x48ff08u: goto label_48ff08;
        case 0x48ff20u: goto label_48ff20;
        default: break;
    }

    ctx->pc = 0x48fe90u;

    // 0x48fe90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x48fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x48fe94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48fe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48fe98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48fe9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48fe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48fea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48fea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48fea4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x48fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x48fea8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48fea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48feac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x48FEACu;
    {
        const bool branch_taken_0x48feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48feac) {
            ctx->pc = 0x48FF10u;
            goto label_48ff10;
        }
    }
    ctx->pc = 0x48FEB4u;
label_48feb4:
    // 0x48feb4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48feb8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48febc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48febcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fec0: 0xc04e51c  jal         func_139470
    ctx->pc = 0x48FEC0u;
    SET_GPR_U32(ctx, 31, 0x48FEC8u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x48FEC0u, 0x48FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FEC8u;
label_48fec8:
    // 0x48fec8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x48fec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48fecc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48FECCu;
    {
        const bool branch_taken_0x48fecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fecc) {
            ctx->pc = 0x48FEECu;
            goto label_48feec;
        }
    }
    ctx->pc = 0x48FED4u;
label_48fed4:
    // 0x48fed4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x48fed4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48fed8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x48fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48fedc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48fedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fee0: 0xc123fd4  jal         func_48FF50
    ctx->pc = 0x48FEE0u;
    SET_GPR_U32(ctx, 31, 0x48FEE8u);
    ctx->pc = 0x48FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FF50u, 0x48FEE0u, 0x48FEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FEE8u;
label_48fee8:
    // 0x48fee8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x48fee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_48feec:
    // 0x48feec: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x48FEECu;
    {
        const bool branch_taken_0x48feec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x48feec) {
            ctx->pc = 0x48FED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48fed4;
        }
    }
    ctx->pc = 0x48FEF4u;
    // 0x48fef4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48fef8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48fefc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48fefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ff00: 0xc04e51c  jal         func_139470
    ctx->pc = 0x48FF00u;
    SET_GPR_U32(ctx, 31, 0x48FF08u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x48FF00u, 0x48FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FF08u;
label_48ff08:
    // 0x48ff08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x48ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x48ff0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x48ff0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_48ff10:
    // 0x48ff10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48ff14: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48ff18: 0xc04e50c  jal         func_139430
    ctx->pc = 0x48FF18u;
    SET_GPR_U32(ctx, 31, 0x48FF20u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x48FF18u, 0x48FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FF20u;
label_48ff20:
    // 0x48ff20: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x48ff20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48ff24: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x48FF24u;
    {
        const bool branch_taken_0x48ff24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ff24) {
            ctx->pc = 0x48FEB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48feb4;
        }
    }
    ctx->pc = 0x48FF2Cu;
    // 0x48ff2c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48ff30: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x48ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x48ff34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48ff34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48ff38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48ff38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48ff3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48ff3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ff40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48ff40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ff44: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x48ff44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48ff48: 0x3e00008  jr          $ra
    ctx->pc = 0x48FF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FF50u;
}
