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

// Function: sub_0046CD00
// Address: 0x46cd00 - 0x46cd90
void sub_0046CD00_0x46cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CD00_0x46cd00");
#endif

    switch (ctx->pc) {
        case 0x46cd24u: goto label_46cd24;
        case 0x46cd44u: goto label_46cd44;
        case 0x46cd50u: goto label_46cd50;
        case 0x46cd60u: goto label_46cd60;
        case 0x46cd78u: goto label_46cd78;
        default: break;
    }

    ctx->pc = 0x46cd00u;

    // 0x46cd00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46cd04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46cd08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46cd0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46cd10: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46cd14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cd18: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46cd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46cd1c: 0xc11b3d8  jal         func_46CF60
    ctx->pc = 0x46CD1Cu;
    SET_GPR_U32(ctx, 31, 0x46CD24u);
    ctx->pc = 0x46CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF60u, 0x46CD1Cu, 0x46CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CD24u;
label_46cd24:
    // 0x46cd24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46cd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46cd28: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x46CD28u;
    {
        const bool branch_taken_0x46cd28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cd28) {
            ctx->pc = 0x46CD78u;
            goto label_46cd78;
        }
    }
    ctx->pc = 0x46CD30u;
    // 0x46cd30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cd34: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46cd38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46cd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46cd3c: 0xc11b170  jal         func_46C5C0
    ctx->pc = 0x46CD3Cu;
    SET_GPR_U32(ctx, 31, 0x46CD44u);
    ctx->pc = 0x46C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C5C0u, 0x46CD3Cu, 0x46CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CD44u;
label_46cd44:
    // 0x46cd44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46cd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46cd48: 0xc11bb28  jal         func_46ECA0
    ctx->pc = 0x46CD48u;
    SET_GPR_U32(ctx, 31, 0x46CD50u);
    ctx->pc = 0x46ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46ECA0u, 0x46CD48u, 0x46CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CD50u;
label_46cd50:
    // 0x46cd50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cd54: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46cd58: 0xc11b180  jal         func_46C600
    ctx->pc = 0x46CD58u;
    SET_GPR_U32(ctx, 31, 0x46CD60u);
    ctx->pc = 0x46C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C600u, 0x46CD58u, 0x46CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CD60u;
label_46cd60:
    // 0x46cd60: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x46cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x46cd64: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x46cd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x46cd68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cd6c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46cd70: 0xc11b364  jal         func_46CD90
    ctx->pc = 0x46CD70u;
    SET_GPR_U32(ctx, 31, 0x46CD78u);
    ctx->pc = 0x46CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CD90u, 0x46CD70u, 0x46CD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CD78u;
label_46cd78:
    // 0x46cd78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46cd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cd7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46cd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46cd80: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46cd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46cd84: 0x3e00008  jr          $ra
    ctx->pc = 0x46CD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CD8Cu;
    // 0x46cd8c: 0x0  nop
    ctx->pc = 0x46cd8cu;
    // NOP
    ctx->pc = 0x46cd90u;
}
