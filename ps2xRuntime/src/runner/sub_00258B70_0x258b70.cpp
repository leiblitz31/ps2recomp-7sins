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

// Function: sub_00258B70
// Address: 0x258b70 - 0x258c30
void sub_00258B70_0x258b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258B70_0x258b70");
#endif

    switch (ctx->pc) {
        case 0x258b98u: goto label_258b98;
        case 0x258bb0u: goto label_258bb0;
        case 0x258bc8u: goto label_258bc8;
        case 0x258bdcu: goto label_258bdc;
        case 0x258bf0u: goto label_258bf0;
        case 0x258c00u: goto label_258c00;
        case 0x258c1cu: goto label_258c1c;
        default: break;
    }

    ctx->pc = 0x258b70u;

    // 0x258b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x258b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x258b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x258b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x258b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258b7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x258b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x258b80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x258b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x258b84: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x258b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x258b88: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x258b88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258b8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258b90: 0xc096374  jal         func_258DD0
    ctx->pc = 0x258B90u;
    SET_GPR_U32(ctx, 31, 0x258B98u);
    ctx->pc = 0x258DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258DD0u, 0x258B90u, 0x258B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B98u;
label_258b98:
    // 0x258b98: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x258b98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x258b9c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x258B9Cu;
    {
        const bool branch_taken_0x258b9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x258b9c) {
            ctx->pc = 0x258BE4u;
            goto label_258be4;
        }
    }
    ctx->pc = 0x258BA4u;
    // 0x258ba4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258ba8: 0xc0962c4  jal         func_258B10
    ctx->pc = 0x258BA8u;
    SET_GPR_U32(ctx, 31, 0x258BB0u);
    ctx->pc = 0x258B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B10u, 0x258BA8u, 0x258BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BB0u;
label_258bb0:
    // 0x258bb0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x258bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258bb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258bb8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x258bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258bbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258bc0: 0xc09636c  jal         func_258DB0
    ctx->pc = 0x258BC0u;
    SET_GPR_U32(ctx, 31, 0x258BC8u);
    ctx->pc = 0x258DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258DB0u, 0x258BC0u, 0x258BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BC8u;
label_258bc8:
    // 0x258bc8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258bcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x258bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258bd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x258bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258bd4: 0xc09631c  jal         func_258C70
    ctx->pc = 0x258BD4u;
    SET_GPR_U32(ctx, 31, 0x258BDCu);
    ctx->pc = 0x258C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C70u, 0x258BD4u, 0x258BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BDCu;
label_258bdc:
    // 0x258bdc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x258BDCu;
    {
        const bool branch_taken_0x258bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258bdc) {
            ctx->pc = 0x258C1Cu;
            goto label_258c1c;
        }
    }
    ctx->pc = 0x258BE4u;
label_258be4:
    // 0x258be4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258be8: 0xc09636c  jal         func_258DB0
    ctx->pc = 0x258BE8u;
    SET_GPR_U32(ctx, 31, 0x258BF0u);
    ctx->pc = 0x258DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258DB0u, 0x258BE8u, 0x258BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BF0u;
label_258bf0:
    // 0x258bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258bf4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258bf8: 0xc096374  jal         func_258DD0
    ctx->pc = 0x258BF8u;
    SET_GPR_U32(ctx, 31, 0x258C00u);
    ctx->pc = 0x258DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258DD0u, 0x258BF8u, 0x258C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C00u;
label_258c00:
    // 0x258c00: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x258c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258c04: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x258c04u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258c08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258c0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x258c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258c10: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x258c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258c14: 0xc09630c  jal         func_258C30
    ctx->pc = 0x258C14u;
    SET_GPR_U32(ctx, 31, 0x258C1Cu);
    ctx->pc = 0x258C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C30u, 0x258C14u, 0x258C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C1Cu;
label_258c1c:
    // 0x258c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x258c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258c24: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x258c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x258c28: 0x3e00008  jr          $ra
    ctx->pc = 0x258C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258C30u;
}
