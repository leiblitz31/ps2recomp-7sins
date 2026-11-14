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

// Function: sub_00216BA0
// Address: 0x216ba0 - 0x216c60
void sub_00216BA0_0x216ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216BA0_0x216ba0");
#endif

    switch (ctx->pc) {
        case 0x216bc8u: goto label_216bc8;
        case 0x216be0u: goto label_216be0;
        case 0x216bf8u: goto label_216bf8;
        case 0x216c0cu: goto label_216c0c;
        case 0x216c20u: goto label_216c20;
        case 0x216c30u: goto label_216c30;
        case 0x216c4cu: goto label_216c4c;
        default: break;
    }

    ctx->pc = 0x216ba0u;

    // 0x216ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x216ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x216ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x216ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x216ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x216bac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x216bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x216bb0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x216bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x216bb4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x216bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x216bb8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x216bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216bbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x216bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216bc0: 0xc085b90  jal         func_216E40
    ctx->pc = 0x216BC0u;
    SET_GPR_U32(ctx, 31, 0x216BC8u);
    ctx->pc = 0x216E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E40u, 0x216BC0u, 0x216BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BC8u;
label_216bc8:
    // 0x216bc8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x216bc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x216bcc: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x216BCCu;
    {
        const bool branch_taken_0x216bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x216bcc) {
            ctx->pc = 0x216C14u;
            goto label_216c14;
        }
    }
    ctx->pc = 0x216BD4u;
    // 0x216bd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x216bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216bd8: 0xc085ac8  jal         func_216B20
    ctx->pc = 0x216BD8u;
    SET_GPR_U32(ctx, 31, 0x216BE0u);
    ctx->pc = 0x216B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216B20u, 0x216BD8u, 0x216BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BE0u;
label_216be0:
    // 0x216be0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x216be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216be4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x216be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x216be8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x216be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216bec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x216becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216bf0: 0xc085b88  jal         func_216E20
    ctx->pc = 0x216BF0u;
    SET_GPR_U32(ctx, 31, 0x216BF8u);
    ctx->pc = 0x216E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E20u, 0x216BF0u, 0x216BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BF8u;
label_216bf8:
    // 0x216bf8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x216bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x216c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c04: 0xc085b28  jal         func_216CA0
    ctx->pc = 0x216C04u;
    SET_GPR_U32(ctx, 31, 0x216C0Cu);
    ctx->pc = 0x216CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216CA0u, 0x216C04u, 0x216C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C0Cu;
label_216c0c:
    // 0x216c0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x216C0Cu;
    {
        const bool branch_taken_0x216c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216c0c) {
            ctx->pc = 0x216C4Cu;
            goto label_216c4c;
        }
    }
    ctx->pc = 0x216C14u;
label_216c14:
    // 0x216c14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x216c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216c18: 0xc085b88  jal         func_216E20
    ctx->pc = 0x216C18u;
    SET_GPR_U32(ctx, 31, 0x216C20u);
    ctx->pc = 0x216E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E20u, 0x216C18u, 0x216C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C20u;
label_216c20:
    // 0x216c20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x216c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x216c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216c28: 0xc085b90  jal         func_216E40
    ctx->pc = 0x216C28u;
    SET_GPR_U32(ctx, 31, 0x216C30u);
    ctx->pc = 0x216E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E40u, 0x216C28u, 0x216C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C30u;
label_216c30:
    // 0x216c30: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x216c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216c34: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x216c34u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216c38: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x216c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216c3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c40: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x216c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216c44: 0xc085b18  jal         func_216C60
    ctx->pc = 0x216C44u;
    SET_GPR_U32(ctx, 31, 0x216C4Cu);
    ctx->pc = 0x216C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216C60u, 0x216C44u, 0x216C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216C4Cu;
label_216c4c:
    // 0x216c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x216c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216c54: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x216c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x216c58: 0x3e00008  jr          $ra
    ctx->pc = 0x216C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216C60u;
}
