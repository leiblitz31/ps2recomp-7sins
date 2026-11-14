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

// Function: sub_004037A8
// Address: 0x4037a8 - 0x403a70
void sub_004037A8_0x4037a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004037A8_0x4037a8");
#endif

    switch (ctx->pc) {
        case 0x403840u: goto label_403840;
        case 0x403880u: goto label_403880;
        case 0x4038b4u: goto label_4038b4;
        case 0x403904u: goto label_403904;
        case 0x403910u: goto label_403910;
        case 0x40392cu: goto label_40392c;
        case 0x403948u: goto label_403948;
        case 0x403950u: goto label_403950;
        case 0x40397cu: goto label_40397c;
        case 0x40398cu: goto label_40398c;
        case 0x403994u: goto label_403994;
        case 0x4039d0u: goto label_4039d0;
        case 0x4039e0u: goto label_4039e0;
        case 0x403a14u: goto label_403a14;
        case 0x403a24u: goto label_403a24;
        case 0x403a2cu: goto label_403a2c;
        case 0x403a44u: goto label_403a44;
        default: break;
    }

    ctx->pc = 0x4037a8u;

    // 0x4037a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4037a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4037ac: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4037acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x4037b0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4037b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x4037b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4037b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4037b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4037b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4037bc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4037bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4037c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4037c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4037c4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4037c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x4037c8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4037c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x4037cc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4037ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x4037d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4037d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4037d4: 0xde4201b0  ld          $v0, 0x1B0($s2)
    ctx->pc = 0x4037d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x4037d8: 0xde430188  ld          $v1, 0x188($s2)
    ctx->pc = 0x4037d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 392)));
    // 0x4037dc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x4037dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x4037e0: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x4037e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4037e4: 0x14600097  bnez        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x4037E4u;
    {
        const bool branch_taken_0x4037e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4037E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4037E4u;
        // 0x4037e8: 0xfe4201b0  sd          $v0, 0x1B0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4037e4) {
            ctx->pc = 0x403A44u;
            goto label_403a44;
        }
    }
    ctx->pc = 0x4037ECu;
    // 0x4037ec: 0x92420207  lbu         $v0, 0x207($s2)
    ctx->pc = 0x4037ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 519)));
    // 0x4037f0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x4037F0u;
    {
        const bool branch_taken_0x4037f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4037F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4037F0u;
        // 0x4037f4: 0x26540110  addiu       $s4, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4037f0) {
            ctx->pc = 0x403938u;
            goto label_403938;
        }
    }
    ctx->pc = 0x4037F8u;
    // 0x4037f8: 0xde420108  ld          $v0, 0x108($s2)
    ctx->pc = 0x4037f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x4037fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4037fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x403800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x403800u;
    {
        const bool branch_taken_0x403800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403800u;
        // 0x403804: 0xfe4001b0  sd          $zero, 0x1B0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 432), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403800) {
            ctx->pc = 0x403818u;
            goto label_403818;
        }
    }
    ctx->pc = 0x403808u;
    // 0x403808: 0x92420208  lbu         $v0, 0x208($s2)
    ctx->pc = 0x403808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x40380c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x40380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x403810: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x403810u;
    {
        const bool branch_taken_0x403810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403810u;
        // 0x403814: 0xa2420208  sb          $v0, 0x208($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 520), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403810) {
            ctx->pc = 0x4038D8u;
            goto label_4038d8;
        }
    }
    ctx->pc = 0x403818u;
label_403818:
    // 0x403818: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x403818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x40381c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x40381cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x403820: 0x2455e0d8  addiu       $s5, $v0, -0x1F28
    ctx->pc = 0x403820u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959320));
    // 0x403824: 0x2474e0b8  addiu       $s4, $v1, -0x1F48
    ctx->pc = 0x403824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959288));
    // 0x403828: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x403828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x40382c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x40382cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x403830: 0x2453e118  addiu       $s3, $v0, -0x1EE8
    ctx->pc = 0x403830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959384));
    // 0x403834: 0x2471e0f8  addiu       $s1, $v1, -0x1F08
    ctx->pc = 0x403834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959352));
    // 0x403838: 0x92420208  lbu         $v0, 0x208($s2)
    ctx->pc = 0x403838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x40383c: 0x0  nop
    ctx->pc = 0x40383cu;
    // NOP
label_403840:
    // 0x403840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x403840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x403844: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x403844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x403848: 0x2c630007  sltiu       $v1, $v1, 0x7
    ctx->pc = 0x403848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x40384c: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x40384Cu;
    {
        const bool branch_taken_0x40384c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x403850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40384Cu;
        // 0x403850: 0xa2420208  sb          $v0, 0x208($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 520), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40384c) {
            ctx->pc = 0x403934u;
            goto label_403934;
        }
    }
    ctx->pc = 0x403854u;
    // 0x403854: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x403854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x403858: 0xde430178  ld          $v1, 0x178($s2)
    ctx->pc = 0x403858u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x40385c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40385cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x403860: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x403860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x403864: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x403864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x403868: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x403868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x40386c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x40386cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x403870: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x403870u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x403874: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x403874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x403878: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x403878u;
    SET_GPR_U32(ctx, 31, 0x403880u);
    ctx->pc = 0x40387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403878u;
    // 0x40387c: 0x64202f  dsubu       $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x403878u, 0x403880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403880u;
label_403880:
    // 0x403880: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x403880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403884: 0xde460180  ld          $a2, 0x180($s2)
    ctx->pc = 0x403884u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x403888: 0x92420208  lbu         $v0, 0x208($s2)
    ctx->pc = 0x403888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x40388c: 0xfe500190  sd          $s0, 0x190($s2)
    ctx->pc = 0x40388cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 400), GPR_U64(ctx, 16));
    // 0x403890: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x403890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x403894: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x403894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x403898: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x403898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x40389c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40389cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4038a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4038a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4038a4: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x4038a4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x4038a8: 0xc5302d  daddu       $a2, $a2, $a1
    ctx->pc = 0x4038a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x4038ac: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x4038ACu;
    SET_GPR_U32(ctx, 31, 0x4038B4u);
    ctx->pc = 0x4038B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4038ACu;
    // 0x4038b0: 0xc4202f  dsubu       $a0, $a2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) - GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x4038ACu, 0x4038B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4038B4u;
label_4038b4:
    // 0x4038b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4038b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4038b8: 0xde420108  ld          $v0, 0x108($s2)
    ctx->pc = 0x4038b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x4038bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4038bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4038c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4038C0u;
    {
        const bool branch_taken_0x4038c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4038C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4038C0u;
        // 0x4038c4: 0xfe430188  sd          $v1, 0x188($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 392), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4038c0) {
            ctx->pc = 0x4038D8u;
            goto label_4038d8;
        }
    }
    ctx->pc = 0x4038C8u;
    // 0x4038c8: 0x5200ffdd  beql        $s0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x4038C8u;
    {
        const bool branch_taken_0x4038c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4038c8) {
            ctx->pc = 0x4038CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4038C8u;
            // 0x4038cc: 0x92420208  lbu         $v0, 0x208($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403840;
        }
    }
    ctx->pc = 0x4038D0u;
    // 0x4038d0: 0x5060ffdb  beql        $v1, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x4038D0u;
    {
        const bool branch_taken_0x4038d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4038d0) {
            ctx->pc = 0x4038D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4038D0u;
            // 0x4038d4: 0x92420208  lbu         $v0, 0x208($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403840;
        }
    }
    ctx->pc = 0x4038D8u;
label_4038d8:
    // 0x4038d8: 0x92420208  lbu         $v0, 0x208($s2)
    ctx->pc = 0x4038d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x4038dc: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x4038dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4038e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4038E0u;
    {
        const bool branch_taken_0x4038e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4038E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4038E0u;
        // 0x4038e4: 0x26540110  addiu       $s4, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4038e0) {
            ctx->pc = 0x403938u;
            goto label_403938;
        }
    }
    ctx->pc = 0x4038E8u;
    // 0x4038e8: 0x8e5101b8  lw          $s1, 0x1B8($s2)
    ctx->pc = 0x4038e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x4038ec: 0x12200056  beqz        $s1, . + 4 + (0x56 << 2)
    ctx->pc = 0x4038ECu;
    {
        const bool branch_taken_0x4038ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4038F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4038ECu;
        // 0x4038f0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4038ec) {
            ctx->pc = 0x403A48u;
            goto label_403a48;
        }
    }
    ctx->pc = 0x4038F4u;
    // 0x4038f4: 0x9245020c  lbu         $a1, 0x20C($s2)
    ctx->pc = 0x4038f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 524)));
    // 0x4038f8: 0x9244020f  lbu         $a0, 0x20F($s2)
    ctx->pc = 0x4038f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 527)));
    // 0x4038fc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4038FCu;
    SET_GPR_U32(ctx, 31, 0x403904u);
    ctx->pc = 0x403900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4038FCu;
    // 0x403900: 0xde500178  ld          $s0, 0x178($s2) (Delay Slot)
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4038FCu, 0x403904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403904u;
label_403904:
    // 0x403904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x403904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403908: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x403908u;
    SET_GPR_U32(ctx, 31, 0x403910u);
    ctx->pc = 0x40390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403908u;
    // 0x40390c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x403908u, 0x403910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403910u;
label_403910:
    // 0x403910: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x403910u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x403914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x403914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403918: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x403918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x40391c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x40391cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x403920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x403920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403924: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x403924u;
    SET_GPR_U32(ctx, 31, 0x40392Cu);
    ctx->pc = 0x403928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403924u;
    // 0x403928: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x403924u, 0x40392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40392Cu;
label_40392c:
    // 0x40392c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x40392Cu;
    {
        const bool branch_taken_0x40392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40392Cu;
        // 0x403930: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40392c) {
            ctx->pc = 0x403A48u;
            goto label_403a48;
        }
    }
    ctx->pc = 0x403934u;
label_403934:
    // 0x403934: 0x26540110  addiu       $s4, $s2, 0x110
    ctx->pc = 0x403934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_403938:
    // 0x403938: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x403938u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x40393c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x40393cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x403940: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x403940u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x403944: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x403944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_403948:
    // 0x403948: 0xc0f5d8e  jal         func_3D7638
    ctx->pc = 0x403948u;
    SET_GPR_U32(ctx, 31, 0x403950u);
    ctx->pc = 0x40394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403948u;
    // 0x40394c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7638u, 0x403948u, 0x403950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403950u;
label_403950:
    // 0x403950: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x403950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403954: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x403954u;
    {
        const bool branch_taken_0x403954 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x403954) {
            ctx->pc = 0x4039B4u;
            goto label_4039b4;
        }
    }
    ctx->pc = 0x40395Cu;
    // 0x40395c: 0x8e420124  lw          $v0, 0x124($s2)
    ctx->pc = 0x40395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
    // 0x403960: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x403960u;
    {
        const bool branch_taken_0x403960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403960u;
        // 0x403964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403960) {
            ctx->pc = 0x4039E0u;
            goto label_4039e0;
        }
    }
    ctx->pc = 0x403968u;
    // 0x403968: 0x9e46015c  lwu         $a2, 0x15C($s2)
    ctx->pc = 0x403968u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x40396c: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x40396cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x403970: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x403970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
    // 0x403974: 0xc101b98  jal         func_406E60
    ctx->pc = 0x403974u;
    SET_GPR_U32(ctx, 31, 0x40397Cu);
    ctx->pc = 0x403978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403974u;
    // 0x403978: 0x8e50015c  lw          $s0, 0x15C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x403974u, 0x40397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40397Cu;
label_40397c:
    // 0x40397c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40397cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403980: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x403980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403984: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x403984u;
    SET_GPR_U32(ctx, 31, 0x40398Cu);
    ctx->pc = 0x403988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403984u;
    // 0x403988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x403984u, 0x40398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40398Cu;
label_40398c:
    // 0x40398c: 0xc101bda  jal         func_406F68
    ctx->pc = 0x40398Cu;
    SET_GPR_U32(ctx, 31, 0x403994u);
    ctx->pc = 0x403990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40398Cu;
    // 0x403990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x40398Cu, 0x403994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403994u;
label_403994:
    // 0x403994: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x403994u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x403998: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x403998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x40399c: 0x8e44015c  lw          $a0, 0x15C($s2)
    ctx->pc = 0x40399cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x4039a0: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4039a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4039a4: 0xfe4200f8  sd          $v0, 0xF8($s2)
    ctx->pc = 0x4039a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 248), GPR_U64(ctx, 2));
    // 0x4039a8: 0xae430120  sw          $v1, 0x120($s2)
    ctx->pc = 0x4039a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 3));
    // 0x4039ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4039ACu;
    {
        const bool branch_taken_0x4039ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4039B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4039ACu;
        // 0x4039b0: 0xae440124  sw          $a0, 0x124($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4039ac) {
            ctx->pc = 0x4039E0u;
            goto label_4039e0;
        }
    }
    ctx->pc = 0x4039B4u;
label_4039b4:
    // 0x4039b4: 0x5275000d  beql        $s3, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x4039B4u;
    {
        const bool branch_taken_0x4039b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x4039b4) {
            ctx->pc = 0x4039B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4039B4u;
            // 0x4039b8: 0x8e430124  lw          $v1, 0x124($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4039ECu;
            goto label_4039ec;
        }
    }
    ctx->pc = 0x4039BCu;
    // 0x4039bc: 0x8e450130  lw          $a1, 0x130($s2)
    ctx->pc = 0x4039bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x4039c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4039C0u;
    {
        const bool branch_taken_0x4039c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4039C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4039C0u;
        // 0x4039c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4039c0) {
            ctx->pc = 0x4039D8u;
            goto label_4039d8;
        }
    }
    ctx->pc = 0x4039C8u;
    // 0x4039c8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x4039C8u;
    SET_GPR_U32(ctx, 31, 0x4039D0u);
    ctx->pc = 0x4039CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4039C8u;
    // 0x4039cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x4039C8u, 0x4039D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4039D0u;
label_4039d0:
    // 0x4039d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4039D0u;
    {
        const bool branch_taken_0x4039d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4039d0) {
            ctx->pc = 0x4039E0u;
            goto label_4039e0;
        }
    }
    ctx->pc = 0x4039D8u;
label_4039d8:
    // 0x4039d8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x4039D8u;
    SET_GPR_U32(ctx, 31, 0x4039E0u);
    ctx->pc = 0x4039DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4039D8u;
    // 0x4039dc: 0x26c5fe10  addiu       $a1, $s6, -0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x4039D8u, 0x4039E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4039E0u;
label_4039e0:
    // 0x4039e0: 0x1675ffd9  bne         $s3, $s5, . + 4 + (-0x27 << 2)
    ctx->pc = 0x4039E0u;
    {
        const bool branch_taken_0x4039e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x4039E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4039E0u;
        // 0x4039e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4039e0) {
            ctx->pc = 0x403948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403948;
        }
    }
    ctx->pc = 0x4039E8u;
    // 0x4039e8: 0x8e430124  lw          $v1, 0x124($s2)
    ctx->pc = 0x4039e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
label_4039ec:
    // 0x4039ec: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x4039ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x4039f0: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x4039f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4039f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4039F4u;
    {
        const bool branch_taken_0x4039f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4039F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4039F4u;
        // 0x4039f8: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4039f4) {
            ctx->pc = 0x403A3Cu;
            goto label_403a3c;
        }
    }
    ctx->pc = 0x4039FCu;
    // 0x4039fc: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x4039fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x403a00: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x403a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x403a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x403a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a08: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x403a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
    // 0x403a0c: 0xc101b98  jal         func_406E60
    ctx->pc = 0x403A0Cu;
    SET_GPR_U32(ctx, 31, 0x403A14u);
    ctx->pc = 0x403A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403A0Cu;
    // 0x403a10: 0x6303e  dsrl32      $a2, $a2, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x403A0Cu, 0x403A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403A14u;
label_403a14:
    // 0x403a14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x403a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x403a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a1c: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x403A1Cu;
    SET_GPR_U32(ctx, 31, 0x403A24u);
    ctx->pc = 0x403A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403A1Cu;
    // 0x403a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x403A1Cu, 0x403A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403A24u;
label_403a24:
    // 0x403a24: 0xc101bda  jal         func_406F68
    ctx->pc = 0x403A24u;
    SET_GPR_U32(ctx, 31, 0x403A2Cu);
    ctx->pc = 0x403A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403A24u;
    // 0x403a28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x403A24u, 0x403A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403A2Cu;
label_403a2c:
    // 0x403a2c: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x403a2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x403a30: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x403a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x403a34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x403a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x403a38: 0xfe4200f8  sd          $v0, 0xF8($s2)
    ctx->pc = 0x403a38u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 248), GPR_U64(ctx, 2));
label_403a3c:
    // 0x403a3c: 0xc0f6564  jal         func_3D9590
    ctx->pc = 0x403A3Cu;
    SET_GPR_U32(ctx, 31, 0x403A44u);
    ctx->pc = 0x403A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403A3Cu;
    // 0x403a40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9590u, 0x403A3Cu, 0x403A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403A44u;
label_403a44:
    // 0x403a44: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x403a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_403a48:
    // 0x403a48: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x403a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x403a4c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x403a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x403a50: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x403a50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x403a54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x403a54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x403a58: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x403a58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x403a5c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x403a5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x403a60: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x403a60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x403a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x403a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x403a68: 0x3e00008  jr          $ra
    ctx->pc = 0x403A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403A68u;
        // 0x403a6c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x403A70u;
}
