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

// Function: sub_0017C760
// Address: 0x17c760 - 0x17c820
void sub_0017C760_0x17c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C760_0x17c760");
#endif

    switch (ctx->pc) {
        case 0x17c788u: goto label_17c788;
        case 0x17c7a0u: goto label_17c7a0;
        case 0x17c7b8u: goto label_17c7b8;
        case 0x17c7ccu: goto label_17c7cc;
        case 0x17c7e0u: goto label_17c7e0;
        case 0x17c7f0u: goto label_17c7f0;
        case 0x17c80cu: goto label_17c80c;
        default: break;
    }

    ctx->pc = 0x17c760u;

    // 0x17c760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17c764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c76c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17c770: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17c770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17c774: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x17c774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x17c778: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x17c778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c77c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c780: 0xc05f288  jal         func_17CA20
    ctx->pc = 0x17C780u;
    SET_GPR_U32(ctx, 31, 0x17C788u);
    ctx->pc = 0x17CA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA20u, 0x17C780u, 0x17C788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C788u;
label_17c788:
    // 0x17c788: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x17c788u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17c78c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x17C78Cu;
    {
        const bool branch_taken_0x17c78c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c78c) {
            ctx->pc = 0x17C7D4u;
            goto label_17c7d4;
        }
    }
    ctx->pc = 0x17C794u;
    // 0x17c794: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17c794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c798: 0xc05f1a0  jal         func_17C680
    ctx->pc = 0x17C798u;
    SET_GPR_U32(ctx, 31, 0x17C7A0u);
    ctx->pc = 0x17C680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C680u, 0x17C798u, 0x17C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C7A0u;
label_17c7a0:
    // 0x17c7a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c7a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17c7a8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x17c7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c7ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c7b0: 0xc05f280  jal         func_17CA00
    ctx->pc = 0x17C7B0u;
    SET_GPR_U32(ctx, 31, 0x17C7B8u);
    ctx->pc = 0x17CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA00u, 0x17C7B0u, 0x17C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C7B8u;
label_17c7b8:
    // 0x17c7b8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c7bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17c7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7c4: 0xc05f218  jal         func_17C860
    ctx->pc = 0x17C7C4u;
    SET_GPR_U32(ctx, 31, 0x17C7CCu);
    ctx->pc = 0x17C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C860u, 0x17C7C4u, 0x17C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C7CCu;
label_17c7cc:
    // 0x17c7cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17C7CCu;
    {
        const bool branch_taken_0x17c7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c7cc) {
            ctx->pc = 0x17C80Cu;
            goto label_17c80c;
        }
    }
    ctx->pc = 0x17C7D4u;
label_17c7d4:
    // 0x17c7d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c7d8: 0xc05f280  jal         func_17CA00
    ctx->pc = 0x17C7D8u;
    SET_GPR_U32(ctx, 31, 0x17C7E0u);
    ctx->pc = 0x17CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA00u, 0x17C7D8u, 0x17C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C7E0u;
label_17c7e0:
    // 0x17c7e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17c7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c7e8: 0xc05f288  jal         func_17CA20
    ctx->pc = 0x17C7E8u;
    SET_GPR_U32(ctx, 31, 0x17C7F0u);
    ctx->pc = 0x17CA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA20u, 0x17C7E8u, 0x17C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C7F0u;
label_17c7f0:
    // 0x17c7f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c7f4: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x17c7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c7f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c7fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c800: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x17c800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c804: 0xc05f208  jal         func_17C820
    ctx->pc = 0x17C804u;
    SET_GPR_U32(ctx, 31, 0x17C80Cu);
    ctx->pc = 0x17C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C820u, 0x17C804u, 0x17C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C80Cu;
label_17c80c:
    // 0x17c80c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c814: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17c814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17c818: 0x3e00008  jr          $ra
    ctx->pc = 0x17C818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C820u;
}
