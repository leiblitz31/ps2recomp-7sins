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

// Function: sub_0019E4B0
// Address: 0x19e4b0 - 0x19e560
void sub_0019E4B0_0x19e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E4B0_0x19e4b0");
#endif

    switch (ctx->pc) {
        case 0x19e4b0u: goto label_19e4b0;
        case 0x19e4b4u: goto label_19e4b4;
        case 0x19e4b8u: goto label_19e4b8;
        case 0x19e4bcu: goto label_19e4bc;
        case 0x19e4c0u: goto label_19e4c0;
        case 0x19e4c4u: goto label_19e4c4;
        case 0x19e4c8u: goto label_19e4c8;
        case 0x19e4ccu: goto label_19e4cc;
        case 0x19e4d0u: goto label_19e4d0;
        case 0x19e4d4u: goto label_19e4d4;
        case 0x19e4d8u: goto label_19e4d8;
        case 0x19e4dcu: goto label_19e4dc;
        case 0x19e4e0u: goto label_19e4e0;
        case 0x19e4e4u: goto label_19e4e4;
        case 0x19e4e8u: goto label_19e4e8;
        case 0x19e4ecu: goto label_19e4ec;
        case 0x19e4f0u: goto label_19e4f0;
        case 0x19e4f4u: goto label_19e4f4;
        case 0x19e4f8u: goto label_19e4f8;
        case 0x19e4fcu: goto label_19e4fc;
        case 0x19e500u: goto label_19e500;
        case 0x19e504u: goto label_19e504;
        case 0x19e508u: goto label_19e508;
        case 0x19e50cu: goto label_19e50c;
        case 0x19e510u: goto label_19e510;
        case 0x19e514u: goto label_19e514;
        case 0x19e518u: goto label_19e518;
        case 0x19e51cu: goto label_19e51c;
        case 0x19e520u: goto label_19e520;
        case 0x19e524u: goto label_19e524;
        case 0x19e528u: goto label_19e528;
        case 0x19e52cu: goto label_19e52c;
        case 0x19e530u: goto label_19e530;
        case 0x19e534u: goto label_19e534;
        case 0x19e538u: goto label_19e538;
        case 0x19e53cu: goto label_19e53c;
        case 0x19e540u: goto label_19e540;
        case 0x19e544u: goto label_19e544;
        case 0x19e548u: goto label_19e548;
        case 0x19e54cu: goto label_19e54c;
        case 0x19e550u: goto label_19e550;
        case 0x19e554u: goto label_19e554;
        case 0x19e558u: goto label_19e558;
        case 0x19e55cu: goto label_19e55c;
        default: break;
    }

    ctx->pc = 0x19e4b0u;

label_19e4b0:
    // 0x19e4b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19e4b4:
    // 0x19e4b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19e4b8:
    // 0x19e4b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19e4bc:
    // 0x19e4bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19e4c0:
    // 0x19e4c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_19e4c4:
    // 0x19e4c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e4c8:
    // 0x19e4c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19e4cc:
    if (ctx->pc == 0x19E4CCu) {
        ctx->pc = 0x19E4D0u;
        goto label_19e4d0;
    }
    ctx->pc = 0x19E4C8u;
    {
        const bool branch_taken_0x19e4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e4c8) {
            ctx->pc = 0x19E4D8u;
            goto label_19e4d8;
        }
    }
    ctx->pc = 0x19E4D0u;
label_19e4d0:
    // 0x19e4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e4d4:
    // 0x19e4d4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x19e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_19e4d8:
    // 0x19e4d8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x19e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e4dc:
    // 0x19e4dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19e4e0:
    // 0x19e4e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19e4e4:
    // 0x19e4e4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x19e4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19e4e8:
    // 0x19e4e8: 0xc119b68  jal         func_466DA0
label_19e4ec:
    if (ctx->pc == 0x19E4ECu) {
        ctx->pc = 0x19E4F0u;
        goto label_19e4f0;
    }
    ctx->pc = 0x19E4E8u;
    SET_GPR_U32(ctx, 31, 0x19E4F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x19E4E8u, 0x19E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E4F0u;
label_19e4f0:
    // 0x19e4f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19e4f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e4f4:
    // 0x19e4f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_19e4f8:
    if (ctx->pc == 0x19E4F8u) {
        ctx->pc = 0x19E4FCu;
        goto label_19e4fc;
    }
    ctx->pc = 0x19E4F4u;
    {
        const bool branch_taken_0x19e4f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e4f4) {
            ctx->pc = 0x19E508u;
            goto label_19e508;
        }
    }
    ctx->pc = 0x19E4FCu;
label_19e4fc:
    // 0x19e4fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19e4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e500:
    // 0x19e500: 0x1000000e  b           . + 4 + (0xE << 2)
label_19e504:
    if (ctx->pc == 0x19E504u) {
        ctx->pc = 0x19E508u;
        goto label_19e508;
    }
    ctx->pc = 0x19E500u;
    {
        const bool branch_taken_0x19e500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e500) {
            ctx->pc = 0x19E53Cu;
            goto label_19e53c;
        }
    }
    ctx->pc = 0x19E508u;
label_19e508:
    // 0x19e508: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19e508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e50c:
    // 0x19e50c: 0xc0ba088  jal         func_2E8220
label_19e510:
    if (ctx->pc == 0x19E510u) {
        ctx->pc = 0x19E514u;
        goto label_19e514;
    }
    ctx->pc = 0x19E50Cu;
    SET_GPR_U32(ctx, 31, 0x19E514u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x19E50Cu, 0x19E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E514u;
label_19e514:
    // 0x19e514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e518:
    // 0x19e518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e51c:
    // 0x19e51c: 0xc0ba088  jal         func_2E8220
label_19e520:
    if (ctx->pc == 0x19E520u) {
        ctx->pc = 0x19E524u;
        goto label_19e524;
    }
    ctx->pc = 0x19E51Cu;
    SET_GPR_U32(ctx, 31, 0x19E524u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x19E51Cu, 0x19E524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E524u;
label_19e524:
    // 0x19e524: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_19e528:
    if (ctx->pc == 0x19E528u) {
        ctx->pc = 0x19E52Cu;
        goto label_19e52c;
    }
    ctx->pc = 0x19E524u;
    {
        const bool branch_taken_0x19e524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e524) {
            ctx->pc = 0x19E4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e4d8;
        }
    }
    ctx->pc = 0x19E52Cu;
label_19e52c:
    // 0x19e52c: 0x200f809  jalr        $s0
label_19e530:
    if (ctx->pc == 0x19E530u) {
        ctx->pc = 0x19E534u;
        goto label_19e534;
    }
    ctx->pc = 0x19E52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x19E534u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E52Cu, 0x19E534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E534u;
label_19e534:
    // 0x19e534: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_19e538:
    if (ctx->pc == 0x19E538u) {
        ctx->pc = 0x19E53Cu;
        goto label_19e53c;
    }
    ctx->pc = 0x19E534u;
    {
        const bool branch_taken_0x19e534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e534) {
            ctx->pc = 0x19E4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e4d8;
        }
    }
    ctx->pc = 0x19E53Cu;
label_19e53c:
    // 0x19e53c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19e53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19e540:
    // 0x19e540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19e544:
    // 0x19e544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19e548:
    // 0x19e548: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19e548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19e54c:
    // 0x19e54c: 0x3e00008  jr          $ra
label_19e550:
    if (ctx->pc == 0x19E550u) {
        ctx->pc = 0x19E554u;
        goto label_19e554;
    }
    ctx->pc = 0x19E54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E554u;
label_19e554:
    // 0x19e554: 0x0  nop
    ctx->pc = 0x19e554u;
    // NOP
label_19e558:
    // 0x19e558: 0x0  nop
    ctx->pc = 0x19e558u;
    // NOP
label_19e55c:
    // 0x19e55c: 0x0  nop
    ctx->pc = 0x19e55cu;
    // NOP
    ctx->pc = 0x19e560u;
}
