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

// Function: sub_00232440
// Address: 0x232440 - 0x232550
void sub_00232440_0x232440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232440_0x232440");
#endif

    switch (ctx->pc) {
        case 0x23246cu: goto label_23246c;
        case 0x232478u: goto label_232478;
        case 0x2324bcu: goto label_2324bc;
        case 0x2324c8u: goto label_2324c8;
        case 0x2324e4u: goto label_2324e4;
        case 0x2324f0u: goto label_2324f0;
        case 0x232508u: goto label_232508;
        case 0x232528u: goto label_232528;
        default: break;
    }

    ctx->pc = 0x232440u;

    // 0x232440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x232440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x232444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x232444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x232448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x232448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23244c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x232450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x232454: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x232454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x232458: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x232458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x23245c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x232460: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x232460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x232464: 0xc08b9f4  jal         func_22E7D0
    ctx->pc = 0x232464u;
    SET_GPR_U32(ctx, 31, 0x23246Cu);
    ctx->pc = 0x22E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7D0u, 0x232464u, 0x23246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23246Cu;
label_23246c:
    // 0x23246c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23246cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232470: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x232470u;
    {
        const bool branch_taken_0x232470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232470) {
            ctx->pc = 0x232518u;
            goto label_232518;
        }
    }
    ctx->pc = 0x232478u;
label_232478:
    // 0x232478: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x232478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23247c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23247cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232480: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x232480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232484: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x232484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x232488: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x232488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23248c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23248Cu;
    {
        const bool branch_taken_0x23248c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23248c) {
            ctx->pc = 0x2324A4u;
            goto label_2324a4;
        }
    }
    ctx->pc = 0x232494u;
    // 0x232494: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x232494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x232498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23249c: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x23249Cu;
    {
        const bool branch_taken_0x23249c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23249c) {
            ctx->pc = 0x232514u;
            goto label_232514;
        }
    }
    ctx->pc = 0x2324A4u;
label_2324a4:
    // 0x2324a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2324a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2324a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2324A8u;
    {
        const bool branch_taken_0x2324a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2324a8) {
            ctx->pc = 0x2324CCu;
            goto label_2324cc;
        }
    }
    ctx->pc = 0x2324B0u;
    // 0x2324b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2324b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2324b4: 0xc08b9ec  jal         func_22E7B0
    ctx->pc = 0x2324B4u;
    SET_GPR_U32(ctx, 31, 0x2324BCu);
    ctx->pc = 0x22E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7B0u, 0x2324B4u, 0x2324BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324BCu;
label_2324bc:
    // 0x2324bc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2324bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2324c0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2324C0u;
    SET_GPR_U32(ctx, 31, 0x2324C8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2324C0u, 0x2324C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324C8u;
label_2324c8:
    // 0x2324c8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2324c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2324cc:
    // 0x2324cc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2324ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2324d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2324D0u;
    {
        const bool branch_taken_0x2324d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2324d0) {
            ctx->pc = 0x2324F4u;
            goto label_2324f4;
        }
    }
    ctx->pc = 0x2324D8u;
    // 0x2324d8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2324d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2324dc: 0xc08b9ec  jal         func_22E7B0
    ctx->pc = 0x2324DCu;
    SET_GPR_U32(ctx, 31, 0x2324E4u);
    ctx->pc = 0x22E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7B0u, 0x2324DCu, 0x2324E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324E4u;
label_2324e4:
    // 0x2324e4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2324e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2324e8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2324E8u;
    SET_GPR_U32(ctx, 31, 0x2324F0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2324E8u, 0x2324F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324F0u;
label_2324f0:
    // 0x2324f0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2324f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2324f4:
    // 0x2324f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2324f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2324f8: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2324f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2324fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2324fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232500: 0xc08b95c  jal         func_22E570
    ctx->pc = 0x232500u;
    SET_GPR_U32(ctx, 31, 0x232508u);
    ctx->pc = 0x22E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E570u, 0x232500u, 0x232508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232508u;
label_232508:
    // 0x232508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23250c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23250Cu;
    {
        const bool branch_taken_0x23250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23250c) {
            ctx->pc = 0x232518u;
            goto label_232518;
        }
    }
    ctx->pc = 0x232514u;
label_232514:
    // 0x232514: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x232514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_232518:
    // 0x232518: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x232518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23251c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x23251cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x232520: 0xc08b954  jal         func_22E550
    ctx->pc = 0x232520u;
    SET_GPR_U32(ctx, 31, 0x232528u);
    ctx->pc = 0x22E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E550u, 0x232520u, 0x232528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232528u;
label_232528:
    // 0x232528: 0x1622ffd3  bne         $s1, $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x232528u;
    {
        const bool branch_taken_0x232528 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x232528) {
            ctx->pc = 0x232478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232478;
        }
    }
    ctx->pc = 0x232530u;
    // 0x232530: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x232530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x232534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23253c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23253cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232540: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x232540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x232544: 0x3e00008  jr          $ra
    ctx->pc = 0x232544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23254Cu;
    // 0x23254c: 0x0  nop
    ctx->pc = 0x23254cu;
    // NOP
    ctx->pc = 0x232550u;
}
