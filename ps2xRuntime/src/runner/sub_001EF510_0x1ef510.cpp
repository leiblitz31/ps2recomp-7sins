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

// Function: sub_001EF510
// Address: 0x1ef510 - 0x1ef5d0
void sub_001EF510_0x1ef510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF510_0x1ef510");
#endif

    switch (ctx->pc) {
        case 0x1ef55cu: goto label_1ef55c;
        case 0x1ef568u: goto label_1ef568;
        case 0x1ef5a4u: goto label_1ef5a4;
        default: break;
    }

    ctx->pc = 0x1ef510u;

    // 0x1ef510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ef510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ef514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ef514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ef518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ef51c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef524: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1ef524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1ef528: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1ef528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1ef52c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ef52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef530: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x1ef530u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ef534: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF534u;
    {
        const bool branch_taken_0x1ef534 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef534) {
            ctx->pc = 0x1EF548u;
            goto label_1ef548;
        }
    }
    ctx->pc = 0x1EF53Cu;
    // 0x1ef53c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef53cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef540: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1EF540u;
    {
        const bool branch_taken_0x1ef540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef540) {
            ctx->pc = 0x1EF5B0u;
            goto label_1ef5b0;
        }
    }
    ctx->pc = 0x1EF548u;
label_1ef548:
    // 0x1ef548: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef54c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ef54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef550: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ef550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ef554: 0xc07ac08  jal         func_1EB020
    ctx->pc = 0x1EF554u;
    SET_GPR_U32(ctx, 31, 0x1EF55Cu);
    ctx->pc = 0x1EB020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB020u, 0x1EF554u, 0x1EF55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF55Cu;
label_1ef55c:
    // 0x1ef55c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ef55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef560: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EF560u;
    {
        const bool branch_taken_0x1ef560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef560) {
            ctx->pc = 0x1EF594u;
            goto label_1ef594;
        }
    }
    ctx->pc = 0x1EF568u;
label_1ef568:
    // 0x1ef568: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1ef568u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef56c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF56Cu;
    {
        const bool branch_taken_0x1ef56c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef56c) {
            ctx->pc = 0x1EF590u;
            goto label_1ef590;
        }
    }
    ctx->pc = 0x1EF574u;
    // 0x1ef574: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ef574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef578: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ef578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef57c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF57Cu;
    {
        const bool branch_taken_0x1ef57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef57c) {
            ctx->pc = 0x1EF590u;
            goto label_1ef590;
        }
    }
    ctx->pc = 0x1EF584u;
    // 0x1ef584: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ef584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef588: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF588u;
    {
        const bool branch_taken_0x1ef588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef588) {
            ctx->pc = 0x1EF5B0u;
            goto label_1ef5b0;
        }
    }
    ctx->pc = 0x1EF590u;
label_1ef590:
    // 0x1ef590: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ef590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ef594:
    // 0x1ef594: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ef594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef598: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ef598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ef59c: 0xc07abf8  jal         func_1EAFE0
    ctx->pc = 0x1EF59Cu;
    SET_GPR_U32(ctx, 31, 0x1EF5A4u);
    ctx->pc = 0x1EAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFE0u, 0x1EF59Cu, 0x1EF5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF5A4u;
label_1ef5a4:
    // 0x1ef5a4: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1EF5A4u;
    {
        const bool branch_taken_0x1ef5a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef5a4) {
            ctx->pc = 0x1EF568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef568;
        }
    }
    ctx->pc = 0x1EF5ACu;
    // 0x1ef5ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef5b0:
    // 0x1ef5b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ef5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef5b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef5b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef5b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef5b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef5bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef5c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ef5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ef5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF5CCu;
    // 0x1ef5cc: 0x0  nop
    ctx->pc = 0x1ef5ccu;
    // NOP
    ctx->pc = 0x1ef5d0u;
}
