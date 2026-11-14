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

// Function: sub_001BE710
// Address: 0x1be710 - 0x1be7d0
void sub_001BE710_0x1be710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE710_0x1be710");
#endif

    switch (ctx->pc) {
        case 0x1be738u: goto label_1be738;
        case 0x1be750u: goto label_1be750;
        case 0x1be768u: goto label_1be768;
        case 0x1be77cu: goto label_1be77c;
        case 0x1be790u: goto label_1be790;
        case 0x1be7a0u: goto label_1be7a0;
        case 0x1be7bcu: goto label_1be7bc;
        default: break;
    }

    ctx->pc = 0x1be710u;

    // 0x1be710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1be710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1be714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be71c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1be71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1be720: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1be720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1be724: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1be724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1be728: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1be728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be72c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1be72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be730: 0xc06f98c  jal         func_1BE630
    ctx->pc = 0x1BE730u;
    SET_GPR_U32(ctx, 31, 0x1BE738u);
    ctx->pc = 0x1BE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE630u, 0x1BE730u, 0x1BE738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE738u;
label_1be738:
    // 0x1be738: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1be738u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1be73c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BE73Cu;
    {
        const bool branch_taken_0x1be73c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be73c) {
            ctx->pc = 0x1BE784u;
            goto label_1be784;
        }
    }
    ctx->pc = 0x1BE744u;
    // 0x1be744: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1be744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be748: 0xc06f9ac  jal         func_1BE6B0
    ctx->pc = 0x1BE748u;
    SET_GPR_U32(ctx, 31, 0x1BE750u);
    ctx->pc = 0x1BE6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE6B0u, 0x1BE748u, 0x1BE750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE750u;
label_1be750:
    // 0x1be750: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1be750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be754: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1be754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1be758: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1be758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be75c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1be75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be760: 0xc06fa20  jal         func_1BE880
    ctx->pc = 0x1BE760u;
    SET_GPR_U32(ctx, 31, 0x1BE768u);
    ctx->pc = 0x1BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE880u, 0x1BE760u, 0x1BE768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE768u;
label_1be768:
    // 0x1be768: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1be768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be76c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be770: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1be770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be774: 0xc06fa04  jal         func_1BE810
    ctx->pc = 0x1BE774u;
    SET_GPR_U32(ctx, 31, 0x1BE77Cu);
    ctx->pc = 0x1BE810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE810u, 0x1BE774u, 0x1BE77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE77Cu;
label_1be77c:
    // 0x1be77c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BE77Cu;
    {
        const bool branch_taken_0x1be77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be77c) {
            ctx->pc = 0x1BE7BCu;
            goto label_1be7bc;
        }
    }
    ctx->pc = 0x1BE784u;
label_1be784:
    // 0x1be784: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1be784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be788: 0xc06fa20  jal         func_1BE880
    ctx->pc = 0x1BE788u;
    SET_GPR_U32(ctx, 31, 0x1BE790u);
    ctx->pc = 0x1BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE880u, 0x1BE788u, 0x1BE790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE790u;
label_1be790:
    // 0x1be790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be794: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1be794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be798: 0xc06f98c  jal         func_1BE630
    ctx->pc = 0x1BE798u;
    SET_GPR_U32(ctx, 31, 0x1BE7A0u);
    ctx->pc = 0x1BE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE630u, 0x1BE798u, 0x1BE7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE7A0u;
label_1be7a0:
    // 0x1be7a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1be7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be7a4: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1be7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be7a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1be7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be7ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7b0: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1be7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be7b4: 0xc06f9f4  jal         func_1BE7D0
    ctx->pc = 0x1BE7B4u;
    SET_GPR_U32(ctx, 31, 0x1BE7BCu);
    ctx->pc = 0x1BE7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE7D0u, 0x1BE7B4u, 0x1BE7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE7BCu;
label_1be7bc:
    // 0x1be7bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be7c4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1be7c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1be7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE7D0u;
}
