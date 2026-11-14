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

// Function: sub_002CD4B0
// Address: 0x2cd4b0 - 0x2cd570
void sub_002CD4B0_0x2cd4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD4B0_0x2cd4b0");
#endif

    switch (ctx->pc) {
        case 0x2cd4f4u: goto label_2cd4f4;
        case 0x2cd50cu: goto label_2cd50c;
        case 0x2cd518u: goto label_2cd518;
        case 0x2cd530u: goto label_2cd530;
        case 0x2cd548u: goto label_2cd548;
        default: break;
    }

    ctx->pc = 0x2cd4b0u;

    // 0x2cd4b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cd4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cd4b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cd4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cd4b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd4bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd4c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2cd4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2cd4c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2cd4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2cd4c8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2cd4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2cd4cc: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2cd4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2cd4d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cd4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4d4: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x2cd4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cd4d8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD4D8u;
    {
        const bool branch_taken_0x2cd4d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd4d8) {
            ctx->pc = 0x2CD4F8u;
            goto label_2cd4f8;
        }
    }
    ctx->pc = 0x2CD4E0u;
    // 0x2cd4e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2cd4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd4e4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2cd4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cd4e8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2cd4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd4ec: 0xc0b3344  jal         func_2CCD10
    ctx->pc = 0x2CD4ECu;
    SET_GPR_U32(ctx, 31, 0x2CD4F4u);
    ctx->pc = 0x2CCD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCD10u, 0x2CD4ECu, 0x2CD4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4F4u;
label_2cd4f4:
    // 0x2cd4f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd4f8:
    // 0x2cd4f8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CD4F8u;
    {
        const bool branch_taken_0x2cd4f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd4f8) {
            ctx->pc = 0x2CD548u;
            goto label_2cd548;
        }
    }
    ctx->pc = 0x2CD500u;
    // 0x2cd500: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2cd500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd504: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CD504u;
    SET_GPR_U32(ctx, 31, 0x2CD50Cu);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CD504u, 0x2CD50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD50Cu;
label_2cd50c:
    // 0x2cd50c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd510: 0xc0970c0  jal         func_25C300
    ctx->pc = 0x2CD510u;
    SET_GPR_U32(ctx, 31, 0x2CD518u);
    ctx->pc = 0x25C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C300u, 0x2CD510u, 0x2CD518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD518u;
label_2cd518:
    // 0x2cd518: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2cd518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd51c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2cd51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd520: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cd520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd524: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2cd524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd528: 0xc0b355c  jal         func_2CD570
    ctx->pc = 0x2CD528u;
    SET_GPR_U32(ctx, 31, 0x2CD530u);
    ctx->pc = 0x2CD570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD570u, 0x2CD528u, 0x2CD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD530u;
label_2cd530:
    // 0x2cd530: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2cd530u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cd534: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD534u;
    {
        const bool branch_taken_0x2cd534 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd534) {
            ctx->pc = 0x2CD548u;
            goto label_2cd548;
        }
    }
    ctx->pc = 0x2CD53Cu;
    // 0x2cd53c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2cd53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd540: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2CD540u;
    SET_GPR_U32(ctx, 31, 0x2CD548u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CD540u, 0x2CD548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD548u;
label_2cd548:
    // 0x2cd548: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cd548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd54c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cd54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd558: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2cd558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cd55c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD564u;
    // 0x2cd564: 0x0  nop
    ctx->pc = 0x2cd564u;
    // NOP
    // 0x2cd568: 0x0  nop
    ctx->pc = 0x2cd568u;
    // NOP
    // 0x2cd56c: 0x0  nop
    ctx->pc = 0x2cd56cu;
    // NOP
    ctx->pc = 0x2cd570u;
}
