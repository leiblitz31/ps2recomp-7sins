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

// Function: sub_001E30D0
// Address: 0x1e30d0 - 0x1e31a0
void sub_001E30D0_0x1e30d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E30D0_0x1e30d0");
#endif

    switch (ctx->pc) {
        case 0x1e30f8u: goto label_1e30f8;
        case 0x1e3110u: goto label_1e3110;
        case 0x1e3130u: goto label_1e3130;
        case 0x1e3144u: goto label_1e3144;
        case 0x1e3158u: goto label_1e3158;
        case 0x1e3168u: goto label_1e3168;
        case 0x1e3184u: goto label_1e3184;
        default: break;
    }

    ctx->pc = 0x1e30d0u;

    // 0x1e30d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e30d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e30d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e30d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e30d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e30d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e30dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e30dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e30e0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e30e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e30e4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e30e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e30e8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1e30e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e30ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e30ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e30f0: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E30F0u;
    SET_GPR_U32(ctx, 31, 0x1E30F8u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E30F0u, 0x1E30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30F8u;
label_1e30f8:
    // 0x1e30f8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e30f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e30fc: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E30FCu;
    {
        const bool branch_taken_0x1e30fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e30fc) {
            ctx->pc = 0x1E314Cu;
            goto label_1e314c;
        }
    }
    ctx->pc = 0x1E3104u;
    // 0x1e3104: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e3104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3108: 0xc077fb0  jal         func_1DFEC0
    ctx->pc = 0x1E3108u;
    SET_GPR_U32(ctx, 31, 0x1E3110u);
    ctx->pc = 0x1DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFEC0u, 0x1E3108u, 0x1E3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3110u;
label_1e3110:
    // 0x1e3110: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e3110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3114: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e3114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e3118: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e3118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e311c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e311cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e3120: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1e3120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3124: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e3124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3128: 0xc078de0  jal         func_1E3780
    ctx->pc = 0x1E3128u;
    SET_GPR_U32(ctx, 31, 0x1E3130u);
    ctx->pc = 0x1E3780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3780u, 0x1E3128u, 0x1E3130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3130u;
label_1e3130:
    // 0x1e3130: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e3130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e3134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3138: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e3138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e313c: 0xc078c78  jal         func_1E31E0
    ctx->pc = 0x1E313Cu;
    SET_GPR_U32(ctx, 31, 0x1E3144u);
    ctx->pc = 0x1E31E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E31E0u, 0x1E313Cu, 0x1E3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3144u;
label_1e3144:
    // 0x1e3144: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E3144u;
    {
        const bool branch_taken_0x1e3144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3144) {
            ctx->pc = 0x1E3184u;
            goto label_1e3184;
        }
    }
    ctx->pc = 0x1E314Cu;
label_1e314c:
    // 0x1e314c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e314cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3150: 0xc078de0  jal         func_1E3780
    ctx->pc = 0x1E3150u;
    SET_GPR_U32(ctx, 31, 0x1E3158u);
    ctx->pc = 0x1E3780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3780u, 0x1E3150u, 0x1E3158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3158u;
label_1e3158:
    // 0x1e3158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e3158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e315c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e315cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3160: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E3160u;
    SET_GPR_U32(ctx, 31, 0x1E3168u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E3160u, 0x1E3168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3168u;
label_1e3168:
    // 0x1e3168: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e3168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e316c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1e316cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3170: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e3170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3174: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e3174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3178: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1e3178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e317c: 0xc078c68  jal         func_1E31A0
    ctx->pc = 0x1E317Cu;
    SET_GPR_U32(ctx, 31, 0x1E3184u);
    ctx->pc = 0x1E31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E31A0u, 0x1E317Cu, 0x1E3184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3184u;
label_1e3184:
    // 0x1e3184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e318c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e318cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e3190: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3198u;
    // 0x1e3198: 0x0  nop
    ctx->pc = 0x1e3198u;
    // NOP
    // 0x1e319c: 0x0  nop
    ctx->pc = 0x1e319cu;
    // NOP
    ctx->pc = 0x1e31a0u;
}
