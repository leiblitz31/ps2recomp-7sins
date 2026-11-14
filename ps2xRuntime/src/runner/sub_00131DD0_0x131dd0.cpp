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

// Function: sub_00131DD0
// Address: 0x131dd0 - 0x131ec0
void sub_00131DD0_0x131dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131DD0_0x131dd0");
#endif

    switch (ctx->pc) {
        case 0x131df4u: goto label_131df4;
        case 0x131e10u: goto label_131e10;
        case 0x131e44u: goto label_131e44;
        case 0x131e54u: goto label_131e54;
        case 0x131e74u: goto label_131e74;
        case 0x131e9cu: goto label_131e9c;
        default: break;
    }

    ctx->pc = 0x131dd0u;

    // 0x131dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x131dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x131dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131de0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x131de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x131de4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x131de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x131de8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x131de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131dec: 0xc04c868  jal         func_1321A0
    ctx->pc = 0x131DECu;
    SET_GPR_U32(ctx, 31, 0x131DF4u);
    ctx->pc = 0x1321A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1321A0u, 0x131DECu, 0x131DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131DF4u;
label_131df4:
    // 0x131df4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x131df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131df8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x131df8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x131dfc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x131DFCu;
    {
        const bool branch_taken_0x131dfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x131dfc) {
            ctx->pc = 0x131E9Cu;
            goto label_131e9c;
        }
    }
    ctx->pc = 0x131E04u;
    // 0x131e04: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x131e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131e08: 0xc04c858  jal         func_132160
    ctx->pc = 0x131E08u;
    SET_GPR_U32(ctx, 31, 0x131E10u);
    ctx->pc = 0x132160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132160u, 0x131E08u, 0x131E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E10u;
label_131e10:
    // 0x131e10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x131e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x131e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131e18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x131e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131e1c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x131E1Cu;
    {
        const bool branch_taken_0x131e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e1c) {
            ctx->pc = 0x131E5Cu;
            goto label_131e5c;
        }
    }
    ctx->pc = 0x131E24u;
    // 0x131e24: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x131e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131e28: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x131e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131e2c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x131e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131e30: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x131e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131e34: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x131e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131e38: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x131e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131e3c: 0xc04c7e4  jal         func_131F90
    ctx->pc = 0x131E3Cu;
    SET_GPR_U32(ctx, 31, 0x131E44u);
    ctx->pc = 0x131F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F90u, 0x131E3Cu, 0x131E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E44u;
label_131e44:
    // 0x131e44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x131e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e48: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x131e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131e4c: 0xc04c7c4  jal         func_131F10
    ctx->pc = 0x131E4Cu;
    SET_GPR_U32(ctx, 31, 0x131E54u);
    ctx->pc = 0x131F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F10u, 0x131E4Cu, 0x131E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E54u;
label_131e54:
    // 0x131e54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x131E54u;
    {
        const bool branch_taken_0x131e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e54) {
            ctx->pc = 0x131E78u;
            goto label_131e78;
        }
    }
    ctx->pc = 0x131E5Cu;
label_131e5c:
    // 0x131e5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x131e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131e60: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x131e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x131e64: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x131e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131e68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e6c: 0xc04c878  jal         func_1321E0
    ctx->pc = 0x131E6Cu;
    SET_GPR_U32(ctx, 31, 0x131E74u);
    ctx->pc = 0x1321E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1321E0u, 0x131E6Cu, 0x131E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E74u;
label_131e74:
    // 0x131e74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x131e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131e78:
    // 0x131e78: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x131e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x131e7c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x131e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x131e80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x131e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131e84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131e88: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x131e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x131e8c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x131e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131e90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e94: 0xc04c7b0  jal         func_131EC0
    ctx->pc = 0x131E94u;
    SET_GPR_U32(ctx, 31, 0x131E9Cu);
    ctx->pc = 0x131EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131EC0u, 0x131E94u, 0x131E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E9Cu;
label_131e9c:
    // 0x131e9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131ea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131ea8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x131ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x131eac: 0x3e00008  jr          $ra
    ctx->pc = 0x131EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131EB4u;
    // 0x131eb4: 0x0  nop
    ctx->pc = 0x131eb4u;
    // NOP
    // 0x131eb8: 0x0  nop
    ctx->pc = 0x131eb8u;
    // NOP
    // 0x131ebc: 0x0  nop
    ctx->pc = 0x131ebcu;
    // NOP
    ctx->pc = 0x131ec0u;
}
