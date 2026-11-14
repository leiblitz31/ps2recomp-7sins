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

// Function: sub_003A78A8
// Address: 0x3a78a8 - 0x3a7970
void sub_003A78A8_0x3a78a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A78A8_0x3a78a8");
#endif

    switch (ctx->pc) {
        case 0x3a78a8u: goto label_3a78a8;
        case 0x3a78acu: goto label_3a78ac;
        case 0x3a78b0u: goto label_3a78b0;
        case 0x3a78b4u: goto label_3a78b4;
        case 0x3a78b8u: goto label_3a78b8;
        case 0x3a78bcu: goto label_3a78bc;
        case 0x3a78c0u: goto label_3a78c0;
        case 0x3a78c4u: goto label_3a78c4;
        case 0x3a78c8u: goto label_3a78c8;
        case 0x3a78ccu: goto label_3a78cc;
        case 0x3a78d0u: goto label_3a78d0;
        case 0x3a78d4u: goto label_3a78d4;
        case 0x3a78d8u: goto label_3a78d8;
        case 0x3a78dcu: goto label_3a78dc;
        case 0x3a78e0u: goto label_3a78e0;
        case 0x3a78e4u: goto label_3a78e4;
        case 0x3a78e8u: goto label_3a78e8;
        case 0x3a78ecu: goto label_3a78ec;
        case 0x3a78f0u: goto label_3a78f0;
        case 0x3a78f4u: goto label_3a78f4;
        case 0x3a78f8u: goto label_3a78f8;
        case 0x3a78fcu: goto label_3a78fc;
        case 0x3a7900u: goto label_3a7900;
        case 0x3a7904u: goto label_3a7904;
        case 0x3a7908u: goto label_3a7908;
        case 0x3a790cu: goto label_3a790c;
        case 0x3a7910u: goto label_3a7910;
        case 0x3a7914u: goto label_3a7914;
        case 0x3a7918u: goto label_3a7918;
        case 0x3a791cu: goto label_3a791c;
        case 0x3a7920u: goto label_3a7920;
        case 0x3a7924u: goto label_3a7924;
        case 0x3a7928u: goto label_3a7928;
        case 0x3a792cu: goto label_3a792c;
        case 0x3a7930u: goto label_3a7930;
        case 0x3a7934u: goto label_3a7934;
        case 0x3a7938u: goto label_3a7938;
        case 0x3a793cu: goto label_3a793c;
        case 0x3a7940u: goto label_3a7940;
        case 0x3a7944u: goto label_3a7944;
        case 0x3a7948u: goto label_3a7948;
        case 0x3a794cu: goto label_3a794c;
        case 0x3a7950u: goto label_3a7950;
        case 0x3a7954u: goto label_3a7954;
        case 0x3a7958u: goto label_3a7958;
        case 0x3a795cu: goto label_3a795c;
        case 0x3a7960u: goto label_3a7960;
        case 0x3a7964u: goto label_3a7964;
        case 0x3a7968u: goto label_3a7968;
        case 0x3a796cu: goto label_3a796c;
        default: break;
    }

    ctx->pc = 0x3a78a8u;

label_3a78a8:
    // 0x3a78a8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a78a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a78ac:
    // 0x3a78ac: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3a78acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3a78b0:
    // 0x3a78b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a78b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a78b4:
    // 0x3a78b4: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x3a78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_3a78b8:
    // 0x3a78b8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3a78b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3a78bc:
    // 0x3a78bc: 0x8cc4d380  lw          $a0, -0x2C80($a2)
    ctx->pc = 0x3a78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955904)));
label_3a78c0:
    // 0x3a78c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a78c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3a78c4:
    // 0x3a78c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a78c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a78c8:
    // 0x3a78c8: 0x40f809  jalr        $v0
label_3a78cc:
    if (ctx->pc == 0x3A78CCu) {
        ctx->pc = 0x3A78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78C8u;
        // 0x3a78cc: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78D0u;
        goto label_3a78d0;
    }
    ctx->pc = 0x3A78C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A78D0u);
        ctx->pc = 0x3A78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78C8u;
        // 0x3a78cc: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A78C8u, 0x3A78D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A78D0u;
label_3a78d0:
    // 0x3a78d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a78d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a78d4:
    // 0x3a78d4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_3a78d8:
    if (ctx->pc == 0x3A78D8u) {
        ctx->pc = 0x3A78D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78D4u;
        // 0x3a78d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78DCu;
        goto label_3a78dc;
    }
    ctx->pc = 0x3A78D4u;
    {
        const bool branch_taken_0x3a78d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A78D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78D4u;
        // 0x3a78d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a78d4) {
            ctx->pc = 0x3A78E4u;
            goto label_3a78e4;
        }
    }
    ctx->pc = 0x3A78DCu;
label_3a78dc:
    // 0x3a78dc: 0x10000020  b           . + 4 + (0x20 << 2)
label_3a78e0:
    if (ctx->pc == 0x3A78E0u) {
        ctx->pc = 0x3A78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78DCu;
        // 0x3a78e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78E4u;
        goto label_3a78e4;
    }
    ctx->pc = 0x3A78DCu;
    {
        const bool branch_taken_0x3a78dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78DCu;
        // 0x3a78e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a78dc) {
            ctx->pc = 0x3A7960u;
            goto label_3a7960;
        }
    }
    ctx->pc = 0x3A78E4u;
label_3a78e4:
    // 0x3a78e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a78e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a78e8:
    // 0x3a78e8: 0xc0bb7e6  jal         func_2EDF98
label_3a78ec:
    if (ctx->pc == 0x3A78ECu) {
        ctx->pc = 0x3A78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78E8u;
        // 0x3a78ec: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78F0u;
        goto label_3a78f0;
    }
    ctx->pc = 0x3A78E8u;
    SET_GPR_U32(ctx, 31, 0x3A78F0u);
    ctx->pc = 0x3A78ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A78E8u;
    // 0x3a78ec: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3A78E8u, 0x3A78F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A78F0u;
label_3a78f0:
    // 0x3a78f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3a78f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3a78f4:
    // 0x3a78f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a78f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a78f8:
    // 0x3a78f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3a78f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a78fc:
    // 0x3a78fc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3a78fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a7900:
    // 0x3a7900: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x3a7900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a7904:
    // 0x3a7904: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x3a7904u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
label_3a7908:
    // 0x3a7908: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x3a7908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_3a790c:
    // 0x3a790c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a790cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7910:
    // 0x3a7910: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x3a7910u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_3a7914:
    // 0x3a7914: 0xc0e9e76  jal         func_3A79D8
label_3a7918:
    if (ctx->pc == 0x3A7918u) {
        ctx->pc = 0x3A7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7914u;
        // 0x3a7918: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A791Cu;
        goto label_3a791c;
    }
    ctx->pc = 0x3A7914u;
    SET_GPR_U32(ctx, 31, 0x3A791Cu);
    ctx->pc = 0x3A7918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7914u;
    // 0x3a7918: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A79D8u, 0x3A7914u, 0x3A791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A791Cu;
label_3a791c:
    // 0x3a791c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3a791cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a7920:
    // 0x3a7920: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3a7920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3a7924:
    // 0x3a7924: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3a7924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a7928:
    // 0x3a7928: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3a7928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a792c:
    // 0x3a792c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3a792cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a7930:
    // 0x3a7930: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3a7930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_3a7934:
    // 0x3a7934: 0xc0e9ecc  jal         func_3A7B30
label_3a7938:
    if (ctx->pc == 0x3A7938u) {
        ctx->pc = 0x3A7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7934u;
        // 0x3a7938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A793Cu;
        goto label_3a793c;
    }
    ctx->pc = 0x3A7934u;
    SET_GPR_U32(ctx, 31, 0x3A793Cu);
    ctx->pc = 0x3A7938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7934u;
    // 0x3a7938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B30u, 0x3A7934u, 0x3A793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A793Cu;
label_3a793c:
    // 0x3a793c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a793cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7940:
    // 0x3a7940: 0xc0e9f00  jal         func_3A7C00
label_3a7944:
    if (ctx->pc == 0x3A7944u) {
        ctx->pc = 0x3A7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7940u;
        // 0x3a7944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7948u;
        goto label_3a7948;
    }
    ctx->pc = 0x3A7940u;
    SET_GPR_U32(ctx, 31, 0x3A7948u);
    ctx->pc = 0x3A7944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7940u;
    // 0x3a7944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C00u, 0x3A7940u, 0x3A7948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7948u;
label_3a7948:
    // 0x3a7948: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a7948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3a794c:
    // 0x3a794c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a794cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7950:
    // 0x3a7950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a7950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a7954:
    // 0x3a7954: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x3a7954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_3a7958:
    // 0x3a7958: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x3a7958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_3a795c:
    // 0x3a795c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a795cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7960:
    // 0x3a7960: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a7960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a7964:
    // 0x3a7964: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a7964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a7968:
    // 0x3a7968: 0x3e00008  jr          $ra
label_3a796c:
    if (ctx->pc == 0x3A796Cu) {
        ctx->pc = 0x3A796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7968u;
        // 0x3a796c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7970u;
        goto label_fallthrough_0x3a7968;
    }
    ctx->pc = 0x3A7968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7968u;
        // 0x3a796c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a7968:
    ctx->pc = 0x3A7970u;
}
