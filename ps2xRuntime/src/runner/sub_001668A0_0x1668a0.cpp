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

// Function: sub_001668A0
// Address: 0x1668a0 - 0x166970
void sub_001668A0_0x1668a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001668A0_0x1668a0");
#endif

    switch (ctx->pc) {
        case 0x1668c8u: goto label_1668c8;
        case 0x1668e0u: goto label_1668e0;
        case 0x166900u: goto label_166900;
        case 0x166914u: goto label_166914;
        case 0x166928u: goto label_166928;
        case 0x166938u: goto label_166938;
        case 0x166954u: goto label_166954;
        default: break;
    }

    ctx->pc = 0x1668a0u;

    // 0x1668a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1668a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1668a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1668a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1668a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1668a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1668ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1668acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1668b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1668b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1668b4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1668b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1668b8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1668b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1668bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1668bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1668c0: 0xc0599e8  jal         func_1667A0
    ctx->pc = 0x1668C0u;
    SET_GPR_U32(ctx, 31, 0x1668C8u);
    ctx->pc = 0x1667A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667A0u, 0x1668C0u, 0x1668C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668C8u;
label_1668c8:
    // 0x1668c8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1668c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1668cc: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1668CCu;
    {
        const bool branch_taken_0x1668cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1668cc) {
            ctx->pc = 0x16691Cu;
            goto label_16691c;
        }
    }
    ctx->pc = 0x1668D4u;
    // 0x1668d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1668d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1668d8: 0xc059a08  jal         func_166820
    ctx->pc = 0x1668D8u;
    SET_GPR_U32(ctx, 31, 0x1668E0u);
    ctx->pc = 0x166820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166820u, 0x1668D8u, 0x1668E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668E0u;
label_1668e0:
    // 0x1668e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1668e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1668e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1668e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1668e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1668e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1668ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1668ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1668f0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1668f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1668f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1668f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1668f8: 0xc059ad0  jal         func_166B40
    ctx->pc = 0x1668F8u;
    SET_GPR_U32(ctx, 31, 0x166900u);
    ctx->pc = 0x166B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166B40u, 0x1668F8u, 0x166900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166900u;
label_166900:
    // 0x166900: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x166900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166908: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x166908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16690c: 0xc059a6c  jal         func_1669B0
    ctx->pc = 0x16690Cu;
    SET_GPR_U32(ctx, 31, 0x166914u);
    ctx->pc = 0x1669B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1669B0u, 0x16690Cu, 0x166914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166914u;
label_166914:
    // 0x166914: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x166914u;
    {
        const bool branch_taken_0x166914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166914) {
            ctx->pc = 0x166954u;
            goto label_166954;
        }
    }
    ctx->pc = 0x16691Cu;
label_16691c:
    // 0x16691c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16691cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166920: 0xc059ad0  jal         func_166B40
    ctx->pc = 0x166920u;
    SET_GPR_U32(ctx, 31, 0x166928u);
    ctx->pc = 0x166B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166B40u, 0x166920u, 0x166928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166928u;
label_166928:
    // 0x166928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16692c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166930: 0xc0599e8  jal         func_1667A0
    ctx->pc = 0x166930u;
    SET_GPR_U32(ctx, 31, 0x166938u);
    ctx->pc = 0x1667A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667A0u, 0x166930u, 0x166938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166938u;
label_166938:
    // 0x166938: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x166938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16693c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x16693cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166940: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x166940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166944: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166948: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x166948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16694c: 0xc059a5c  jal         func_166970
    ctx->pc = 0x16694Cu;
    SET_GPR_U32(ctx, 31, 0x166954u);
    ctx->pc = 0x166970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166970u, 0x16694Cu, 0x166954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166954u;
label_166954:
    // 0x166954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16695c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16695cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x166960: 0x3e00008  jr          $ra
    ctx->pc = 0x166960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166968u;
    // 0x166968: 0x0  nop
    ctx->pc = 0x166968u;
    // NOP
    // 0x16696c: 0x0  nop
    ctx->pc = 0x16696cu;
    // NOP
    ctx->pc = 0x166970u;
}
