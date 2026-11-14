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

// Function: sub_001B3B80
// Address: 0x1b3b80 - 0x1b3c40
void sub_001B3B80_0x1b3b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3B80_0x1b3b80");
#endif

    switch (ctx->pc) {
        case 0x1b3ba8u: goto label_1b3ba8;
        case 0x1b3bc0u: goto label_1b3bc0;
        case 0x1b3bd8u: goto label_1b3bd8;
        case 0x1b3becu: goto label_1b3bec;
        case 0x1b3c00u: goto label_1b3c00;
        case 0x1b3c10u: goto label_1b3c10;
        case 0x1b3c2cu: goto label_1b3c2c;
        default: break;
    }

    ctx->pc = 0x1b3b80u;

    // 0x1b3b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b3b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b3b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b3b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b3b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3b8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b3b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b3b90: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b3b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b3b94: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1b3b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1b3b98: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1b3b98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3b9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3ba0: 0xc06cf54  jal         func_1B3D50
    ctx->pc = 0x1B3BA0u;
    SET_GPR_U32(ctx, 31, 0x1B3BA8u);
    ctx->pc = 0x1B3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D50u, 0x1B3BA0u, 0x1B3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BA8u;
label_1b3ba8:
    // 0x1b3ba8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1b3ba8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b3bac: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3BACu;
    {
        const bool branch_taken_0x1b3bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bac) {
            ctx->pc = 0x1B3BF4u;
            goto label_1b3bf4;
        }
    }
    ctx->pc = 0x1B3BB4u;
    // 0x1b3bb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b3bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3bb8: 0xc06be60  jal         func_1AF980
    ctx->pc = 0x1B3BB8u;
    SET_GPR_U32(ctx, 31, 0x1B3BC0u);
    ctx->pc = 0x1AF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF980u, 0x1B3BB8u, 0x1B3BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BC0u;
label_1b3bc0:
    // 0x1b3bc0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3bc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b3bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b3bc8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1b3bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3bcc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b3bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3bd0: 0xc06cf4c  jal         func_1B3D30
    ctx->pc = 0x1B3BD0u;
    SET_GPR_U32(ctx, 31, 0x1B3BD8u);
    ctx->pc = 0x1B3D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D30u, 0x1B3BD0u, 0x1B3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BD8u;
label_1b3bd8:
    // 0x1b3bd8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b3bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3be0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b3be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3be4: 0xc06cf20  jal         func_1B3C80
    ctx->pc = 0x1B3BE4u;
    SET_GPR_U32(ctx, 31, 0x1B3BECu);
    ctx->pc = 0x1B3C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C80u, 0x1B3BE4u, 0x1B3BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BECu;
label_1b3bec:
    // 0x1b3bec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3BECu;
    {
        const bool branch_taken_0x1b3bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bec) {
            ctx->pc = 0x1B3C2Cu;
            goto label_1b3c2c;
        }
    }
    ctx->pc = 0x1B3BF4u;
label_1b3bf4:
    // 0x1b3bf4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b3bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3bf8: 0xc06cf4c  jal         func_1B3D30
    ctx->pc = 0x1B3BF8u;
    SET_GPR_U32(ctx, 31, 0x1B3C00u);
    ctx->pc = 0x1B3D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D30u, 0x1B3BF8u, 0x1B3C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C00u;
label_1b3c00:
    // 0x1b3c00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b3c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3c08: 0xc06cf54  jal         func_1B3D50
    ctx->pc = 0x1B3C08u;
    SET_GPR_U32(ctx, 31, 0x1B3C10u);
    ctx->pc = 0x1B3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D50u, 0x1B3C08u, 0x1B3C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C10u;
label_1b3c10:
    // 0x1b3c10: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3c14: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1b3c14u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3c18: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b3c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3c1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c20: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1b3c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3c24: 0xc06cf10  jal         func_1B3C40
    ctx->pc = 0x1B3C24u;
    SET_GPR_U32(ctx, 31, 0x1B3C2Cu);
    ctx->pc = 0x1B3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C40u, 0x1B3C24u, 0x1B3C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C2Cu;
label_1b3c2c:
    // 0x1b3c2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3c30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3c34: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b3c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b3c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3C40u;
}
