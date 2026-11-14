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

// Function: sub_00229920
// Address: 0x229920 - 0x229b00
void sub_00229920_0x229920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229920_0x229920");
#endif

    switch (ctx->pc) {
        case 0x229948u: goto label_229948;
        case 0x229954u: goto label_229954;
        case 0x22997cu: goto label_22997c;
        case 0x229990u: goto label_229990;
        case 0x2299b0u: goto label_2299b0;
        case 0x2299c4u: goto label_2299c4;
        case 0x2299d4u: goto label_2299d4;
        case 0x2299e0u: goto label_2299e0;
        case 0x2299f0u: goto label_2299f0;
        case 0x229a04u: goto label_229a04;
        case 0x229a2cu: goto label_229a2c;
        case 0x229a3cu: goto label_229a3c;
        case 0x229a50u: goto label_229a50;
        case 0x229a60u: goto label_229a60;
        case 0x229a78u: goto label_229a78;
        case 0x229a90u: goto label_229a90;
        case 0x229a9cu: goto label_229a9c;
        case 0x229ab0u: goto label_229ab0;
        case 0x229ac0u: goto label_229ac0;
        case 0x229ad8u: goto label_229ad8;
        default: break;
    }

    ctx->pc = 0x229920u;

    // 0x229920: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x229920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x229924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x229924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x229928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x229928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22992c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x229930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229934: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x229934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x229938: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x229938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22993c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x22993cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229940: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x229940u;
    SET_GPR_U32(ctx, 31, 0x229948u);
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x229940u, 0x229948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229948u;
label_229948:
    // 0x229948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22994c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22994Cu;
    {
        const bool branch_taken_0x22994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22994c) {
            ctx->pc = 0x2299A0u;
            goto label_2299a0;
        }
    }
    ctx->pc = 0x229954u;
label_229954:
    // 0x229954: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x229954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229958: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x229958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22995c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x22995cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x229960: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x229960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x229964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229968: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x229968u;
    {
        const bool branch_taken_0x229968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229968) {
            ctx->pc = 0x22999Cu;
            goto label_22999c;
        }
    }
    ctx->pc = 0x229970u;
    // 0x229970: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x229970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x229974: 0xc0e20da  jal         func_388368
    ctx->pc = 0x229974u;
    SET_GPR_U32(ctx, 31, 0x22997Cu);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x229974u, 0x22997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22997Cu;
label_22997c:
    // 0x22997c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229980: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229988: 0xc08a120  jal         func_228480
    ctx->pc = 0x229988u;
    SET_GPR_U32(ctx, 31, 0x229990u);
    ctx->pc = 0x228480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228480u, 0x229988u, 0x229990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229990u;
label_229990:
    // 0x229990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229994: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229994u;
    {
        const bool branch_taken_0x229994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229994) {
            ctx->pc = 0x2299A0u;
            goto label_2299a0;
        }
    }
    ctx->pc = 0x22999Cu;
label_22999c:
    // 0x22999c: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x22999cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_2299a0:
    // 0x2299a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2299a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2299a4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2299a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2299a8: 0xc08a118  jal         func_228460
    ctx->pc = 0x2299A8u;
    SET_GPR_U32(ctx, 31, 0x2299B0u);
    ctx->pc = 0x228460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228460u, 0x2299A8u, 0x2299B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299B0u;
label_2299b0:
    // 0x2299b0: 0x1602ffe8  bne         $s0, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2299B0u;
    {
        const bool branch_taken_0x2299b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2299b0) {
            ctx->pc = 0x229954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229954;
        }
    }
    ctx->pc = 0x2299B8u;
    // 0x2299b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2299b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2299bc: 0xc089f90  jal         func_227E40
    ctx->pc = 0x2299BCu;
    SET_GPR_U32(ctx, 31, 0x2299C4u);
    ctx->pc = 0x227E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E40u, 0x2299BCu, 0x2299C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299C4u;
label_2299c4:
    // 0x2299c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2299c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2299c8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2299c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2299cc: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x2299CCu;
    SET_GPR_U32(ctx, 31, 0x2299D4u);
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x2299CCu, 0x2299D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299D4u;
label_2299d4:
    // 0x2299d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2299d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2299d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2299D8u;
    {
        const bool branch_taken_0x2299d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2299d8) {
            ctx->pc = 0x2299F4u;
            goto label_2299f4;
        }
    }
    ctx->pc = 0x2299E0u;
label_2299e0:
    // 0x2299e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2299e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2299e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2299e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2299e8: 0xc08a390  jal         func_228E40
    ctx->pc = 0x2299E8u;
    SET_GPR_U32(ctx, 31, 0x2299F0u);
    ctx->pc = 0x228E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228E40u, 0x2299E8u, 0x2299F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299F0u;
label_2299f0:
    // 0x2299f0: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x2299f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_2299f4:
    // 0x2299f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2299f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2299f8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2299f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2299fc: 0xc08a118  jal         func_228460
    ctx->pc = 0x2299FCu;
    SET_GPR_U32(ctx, 31, 0x229A04u);
    ctx->pc = 0x228460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228460u, 0x2299FCu, 0x229A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A04u;
label_229a04:
    // 0x229a04: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x229A04u;
    {
        const bool branch_taken_0x229a04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x229a04) {
            ctx->pc = 0x2299E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2299e0;
        }
    }
    ctx->pc = 0x229A0Cu;
    // 0x229a0c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x229a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229a10: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x229a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229a14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x229A14u;
    {
        const bool branch_taken_0x229a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a14) {
            ctx->pc = 0x229A44u;
            goto label_229a44;
        }
    }
    ctx->pc = 0x229A1Cu;
    // 0x229a1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x229a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229a20: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229a24: 0xc08a0f4  jal         func_2283D0
    ctx->pc = 0x229A24u;
    SET_GPR_U32(ctx, 31, 0x229A2Cu);
    ctx->pc = 0x2283D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283D0u, 0x229A24u, 0x229A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A2Cu;
label_229a2c:
    // 0x229a2c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x229a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229a30: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229a34: 0xc119c5c  jal         func_467170
    ctx->pc = 0x229A34u;
    SET_GPR_U32(ctx, 31, 0x229A3Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x229A34u, 0x229A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A3Cu;
label_229a3c:
    // 0x229a3c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x229a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229a40: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x229a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_229a44:
    // 0x229a44: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x229a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x229a48: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x229A48u;
    SET_GPR_U32(ctx, 31, 0x229A50u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x229A48u, 0x229A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A50u;
label_229a50:
    // 0x229a50: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x229a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x229a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a58: 0xc0400e0  jal         func_100380
    ctx->pc = 0x229A58u;
    SET_GPR_U32(ctx, 31, 0x229A60u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x229A58u, 0x229A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A60u;
label_229a60:
    // 0x229a60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x229a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a64: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x229A64u;
    {
        const bool branch_taken_0x229a64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a64) {
            ctx->pc = 0x229A7Cu;
            goto label_229a7c;
        }
    }
    ctx->pc = 0x229A6Cu;
    // 0x229a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a70: 0xc089f90  jal         func_227E40
    ctx->pc = 0x229A70u;
    SET_GPR_U32(ctx, 31, 0x229A78u);
    ctx->pc = 0x227E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E40u, 0x229A70u, 0x229A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A78u;
label_229a78:
    // 0x229a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x229a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229a7c:
    // 0x229a7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x229a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229a80: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x229a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
    // 0x229a84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x229a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x229a88: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x229A88u;
    SET_GPR_U32(ctx, 31, 0x229A90u);
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x229A88u, 0x229A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A90u;
label_229a90:
    // 0x229a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x229A94u;
    {
        const bool branch_taken_0x229a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a94) {
            ctx->pc = 0x229AB4u;
            goto label_229ab4;
        }
    }
    ctx->pc = 0x229A9Cu;
label_229a9c:
    // 0x229a9c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x229a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229aa0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229aa8: 0xc08a390  jal         func_228E40
    ctx->pc = 0x229AA8u;
    SET_GPR_U32(ctx, 31, 0x229AB0u);
    ctx->pc = 0x228E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228E40u, 0x229AA8u, 0x229AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AB0u;
label_229ab0:
    // 0x229ab0: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x229ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_229ab4:
    // 0x229ab4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x229ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x229ab8: 0xc08a118  jal         func_228460
    ctx->pc = 0x229AB8u;
    SET_GPR_U32(ctx, 31, 0x229AC0u);
    ctx->pc = 0x228460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228460u, 0x229AB8u, 0x229AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AC0u;
label_229ac0:
    // 0x229ac0: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x229AC0u;
    {
        const bool branch_taken_0x229ac0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x229ac0) {
            ctx->pc = 0x229A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229a9c;
        }
    }
    ctx->pc = 0x229AC8u;
    // 0x229ac8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x229ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x229acc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x229accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x229ad0: 0xc08a100  jal         func_228400
    ctx->pc = 0x229AD0u;
    SET_GPR_U32(ctx, 31, 0x229AD8u);
    ctx->pc = 0x228400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228400u, 0x229AD0u, 0x229AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AD8u;
label_229ad8:
    // 0x229ad8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x229ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229adc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x229adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x229ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x229ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229ae8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x229ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x229aec: 0x3e00008  jr          $ra
    ctx->pc = 0x229AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229AF4u;
    // 0x229af4: 0x0  nop
    ctx->pc = 0x229af4u;
    // NOP
    // 0x229af8: 0x0  nop
    ctx->pc = 0x229af8u;
    // NOP
    // 0x229afc: 0x0  nop
    ctx->pc = 0x229afcu;
    // NOP
    ctx->pc = 0x229b00u;
}
