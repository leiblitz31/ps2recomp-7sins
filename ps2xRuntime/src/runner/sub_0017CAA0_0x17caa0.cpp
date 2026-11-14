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

// Function: sub_0017CAA0
// Address: 0x17caa0 - 0x17cb60
void sub_0017CAA0_0x17caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CAA0_0x17caa0");
#endif

    switch (ctx->pc) {
        case 0x17cac8u: goto label_17cac8;
        case 0x17cae0u: goto label_17cae0;
        case 0x17caf8u: goto label_17caf8;
        case 0x17cb0cu: goto label_17cb0c;
        case 0x17cb20u: goto label_17cb20;
        case 0x17cb30u: goto label_17cb30;
        case 0x17cb4cu: goto label_17cb4c;
        default: break;
    }

    ctx->pc = 0x17caa0u;

    // 0x17caa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17caa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17caa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17caa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17caac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17caacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17cab0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17cab4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x17cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x17cab8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x17cab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cabc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17cabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cac0: 0xc05f31c  jal         func_17CC70
    ctx->pc = 0x17CAC0u;
    SET_GPR_U32(ctx, 31, 0x17CAC8u);
    ctx->pc = 0x17CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC70u, 0x17CAC0u, 0x17CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CAC8u;
label_17cac8:
    // 0x17cac8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x17cac8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17cacc: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x17CACCu;
    {
        const bool branch_taken_0x17cacc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cacc) {
            ctx->pc = 0x17CB14u;
            goto label_17cb14;
        }
    }
    ctx->pc = 0x17CAD4u;
    // 0x17cad4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cad8: 0xc05f1b8  jal         func_17C6E0
    ctx->pc = 0x17CAD8u;
    SET_GPR_U32(ctx, 31, 0x17CAE0u);
    ctx->pc = 0x17C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6E0u, 0x17CAD8u, 0x17CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CAE0u;
label_17cae0:
    // 0x17cae0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cae4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17cae8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x17cae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17caec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17caecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17caf0: 0xc05f314  jal         func_17CC50
    ctx->pc = 0x17CAF0u;
    SET_GPR_U32(ctx, 31, 0x17CAF8u);
    ctx->pc = 0x17CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC50u, 0x17CAF0u, 0x17CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CAF8u;
label_17caf8:
    // 0x17caf8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cafc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17cb00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb04: 0xc05f2e8  jal         func_17CBA0
    ctx->pc = 0x17CB04u;
    SET_GPR_U32(ctx, 31, 0x17CB0Cu);
    ctx->pc = 0x17CBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CBA0u, 0x17CB04u, 0x17CB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB0Cu;
label_17cb0c:
    // 0x17cb0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17CB0Cu;
    {
        const bool branch_taken_0x17cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cb0c) {
            ctx->pc = 0x17CB4Cu;
            goto label_17cb4c;
        }
    }
    ctx->pc = 0x17CB14u;
label_17cb14:
    // 0x17cb14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cb18: 0xc05f314  jal         func_17CC50
    ctx->pc = 0x17CB18u;
    SET_GPR_U32(ctx, 31, 0x17CB20u);
    ctx->pc = 0x17CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC50u, 0x17CB18u, 0x17CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB20u;
label_17cb20:
    // 0x17cb20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17cb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cb28: 0xc05f31c  jal         func_17CC70
    ctx->pc = 0x17CB28u;
    SET_GPR_U32(ctx, 31, 0x17CB30u);
    ctx->pc = 0x17CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC70u, 0x17CB28u, 0x17CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB30u;
label_17cb30:
    // 0x17cb30: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cb34: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x17cb34u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17cb38: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cb3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb40: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x17cb40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cb44: 0xc05f2d8  jal         func_17CB60
    ctx->pc = 0x17CB44u;
    SET_GPR_U32(ctx, 31, 0x17CB4Cu);
    ctx->pc = 0x17CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB60u, 0x17CB44u, 0x17CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB4Cu;
label_17cb4c:
    // 0x17cb4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17cb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cb50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17cb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cb54: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17cb54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17cb58: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CB60u;
}
