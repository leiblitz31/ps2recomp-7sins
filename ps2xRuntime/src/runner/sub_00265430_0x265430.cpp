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

// Function: sub_00265430
// Address: 0x265430 - 0x265550
void sub_00265430_0x265430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265430_0x265430");
#endif

    switch (ctx->pc) {
        case 0x265448u: goto label_265448;
        case 0x265458u: goto label_265458;
        case 0x265464u: goto label_265464;
        case 0x265478u: goto label_265478;
        case 0x265490u: goto label_265490;
        case 0x2654a8u: goto label_2654a8;
        case 0x2654b4u: goto label_2654b4;
        case 0x2654d0u: goto label_2654d0;
        case 0x2654f8u: goto label_2654f8;
        case 0x26550cu: goto label_26550c;
        case 0x265524u: goto label_265524;
        case 0x265534u: goto label_265534;
        default: break;
    }

    ctx->pc = 0x265430u;

    // 0x265430: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x265430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x265434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x265434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x265438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26543c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26543cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x265440: 0xc122430  jal         func_4890C0
    ctx->pc = 0x265440u;
    SET_GPR_U32(ctx, 31, 0x265448u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x265440u, 0x265448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265448u;
label_265448:
    // 0x265448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26544c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265450: 0xc08dea4  jal         func_237A90
    ctx->pc = 0x265450u;
    SET_GPR_U32(ctx, 31, 0x265458u);
    ctx->pc = 0x237A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237A90u, 0x265450u, 0x265458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265458u;
label_265458:
    // 0x265458: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x265458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26545c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x26545Cu;
    SET_GPR_U32(ctx, 31, 0x265464u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x26545Cu, 0x265464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265464u;
label_265464:
    // 0x265464: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x265464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265468: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x265468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26546c: 0x24a5cd10  addiu       $a1, $a1, -0x32F0
    ctx->pc = 0x26546cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954256));
    // 0x265470: 0xc08ded4  jal         func_237B50
    ctx->pc = 0x265470u;
    SET_GPR_U32(ctx, 31, 0x265478u);
    ctx->pc = 0x237B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237B50u, 0x265470u, 0x265478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265478u;
label_265478:
    // 0x265478: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x265478u;
    {
        const bool branch_taken_0x265478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265478) {
            ctx->pc = 0x265514u;
            goto label_265514;
        }
    }
    ctx->pc = 0x265480u;
    // 0x265480: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x265480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x265484: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x265484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265488: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x265488u;
    {
        const bool branch_taken_0x265488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265488) {
            ctx->pc = 0x2654F8u;
            goto label_2654f8;
        }
    }
    ctx->pc = 0x265490u;
label_265490:
    // 0x265490: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x265490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x265494: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x265494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x265498: 0x24a5cd30  addiu       $a1, $a1, -0x32D0
    ctx->pc = 0x265498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954288));
    // 0x26549c: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x26549cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2654a0: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x2654A0u;
    SET_GPR_U32(ctx, 31, 0x2654A8u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x2654A0u, 0x2654A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2654A8u;
label_2654a8:
    // 0x2654a8: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2654a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2654ac: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2654ACu;
    SET_GPR_U32(ctx, 31, 0x2654B4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2654ACu, 0x2654B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2654B4u;
label_2654b4:
    // 0x2654b4: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x2654b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2654b8: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2654b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2654bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2654bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2654c0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2654c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2654c4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2654c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2654c8: 0xc041874  jal         func_1061D0
    ctx->pc = 0x2654C8u;
    SET_GPR_U32(ctx, 31, 0x2654D0u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x2654C8u, 0x2654D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2654D0u;
label_2654d0:
    // 0x2654d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2654d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2654d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2654d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654dc: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x2654dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2654e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2654e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2654e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2654e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2654ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654f0: 0xc120c08  jal         func_483020
    ctx->pc = 0x2654F0u;
    SET_GPR_U32(ctx, 31, 0x2654F8u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x2654F0u, 0x2654F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2654F8u;
label_2654f8:
    // 0x2654f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2654f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2654fc: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x2654fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x265500: 0x2786a0b8  addiu       $a2, $gp, -0x5F48
    ctx->pc = 0x265500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942904));
    // 0x265504: 0xc08dee4  jal         func_237B90
    ctx->pc = 0x265504u;
    SET_GPR_U32(ctx, 31, 0x26550Cu);
    ctx->pc = 0x237B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237B90u, 0x265504u, 0x26550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26550Cu;
label_26550c:
    // 0x26550c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x26550Cu;
    {
        const bool branch_taken_0x26550c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26550c) {
            ctx->pc = 0x265490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265490;
        }
    }
    ctx->pc = 0x265514u;
label_265514:
    // 0x265514: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x265514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x265518: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x265518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26551c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26551Cu;
    SET_GPR_U32(ctx, 31, 0x265524u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26551Cu, 0x265524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265524u;
label_265524:
    // 0x265524: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x265524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265528: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x265528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26552c: 0xc08deb0  jal         func_237AC0
    ctx->pc = 0x26552Cu;
    SET_GPR_U32(ctx, 31, 0x265534u);
    ctx->pc = 0x237AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237AC0u, 0x26552Cu, 0x265534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265534u;
label_265534:
    // 0x265534: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x265534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26553c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26553cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265540: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x265540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x265544: 0x3e00008  jr          $ra
    ctx->pc = 0x265544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26554Cu;
    // 0x26554c: 0x0  nop
    ctx->pc = 0x26554cu;
    // NOP
    ctx->pc = 0x265550u;
}
