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

// Function: sub_003DF420
// Address: 0x3df420 - 0x3e00b0
void sub_003DF420_0x3df420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF420_0x3df420");
#endif

    switch (ctx->pc) {
        case 0x3df490u: goto label_3df490;
        case 0x3df514u: goto label_3df514;
        case 0x3df640u: goto label_3df640;
        case 0x3df858u: goto label_3df858;
        case 0x3df9e0u: goto label_3df9e0;
        case 0x3dfbe0u: goto label_3dfbe0;
        case 0x3dfcd0u: goto label_3dfcd0;
        case 0x3dfd2cu: goto label_3dfd2c;
        case 0x3dfe30u: goto label_3dfe30;
        case 0x3dfef8u: goto label_3dfef8;
        case 0x3e0080u: goto label_3e0080;
        default: break;
    }

    ctx->pc = 0x3df420u;

    // 0x3df420: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3df420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3df424: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3df424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df428: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3df428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3df42c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3df42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3df430: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3df430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df434: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3df434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3df438: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3df438u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df43c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3df43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3df440: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3df440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3df444: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3df444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3df448: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3df448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3df44c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3df44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x3df450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3df450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3df454: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x3df454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x3df458: 0x8e8a0038  lw          $t2, 0x38($s4)
    ctx->pc = 0x3df458u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x3df45c: 0x8e970004  lw          $s7, 0x4($s4)
    ctx->pc = 0x3df45cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3df460: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x3df460u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3df464: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3df464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3df468: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x3df468u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3df46c: 0xde920020  ld          $s2, 0x20($s4)
    ctx->pc = 0x3df46cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3df470: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF470u;
    {
        const bool branch_taken_0x3df470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF470u;
        // 0x3df474: 0x8e90001c  lw          $s0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df470) {
            ctx->pc = 0x3DF484u;
            goto label_3df484;
        }
    }
    ctx->pc = 0x3DF478u;
    // 0x3df478: 0x6a1023  subu        $v0, $v1, $t2
    ctx->pc = 0x3df478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3df47c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF47Cu;
    {
        const bool branch_taken_0x3df47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF47Cu;
        // 0x3df480: 0x244bffff  addiu       $t3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df47c) {
            ctx->pc = 0x3DF490u;
            goto label_3df490;
        }
    }
    ctx->pc = 0x3DF484u;
label_3df484:
    // 0x3df484: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x3df484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3df488: 0x4a5823  subu        $t3, $v0, $t2
    ctx->pc = 0x3df488u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3df48c: 0x0  nop
    ctx->pc = 0x3df48cu;
    // NOP
label_3df490:
    // 0x3df490: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3df490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3df494: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x3df494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3df498: 0x104002eb  beqz        $v0, . + 4 + (0x2EB << 2)
    ctx->pc = 0x3DF498u;
    {
        const bool branch_taken_0x3df498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF498u;
        // 0x3df49c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df498) {
            ctx->pc = 0x3E0048u;
            goto label_3e0048;
        }
    }
    ctx->pc = 0x3DF4A0u;
    // 0x3df4a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3df4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3df4a4: 0x2442d840  addiu       $v0, $v0, -0x27C0
    ctx->pc = 0x3df4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957120));
    // 0x3df4a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3df4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3df4ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3df4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3df4b0: 0x800008  jr          $a0
    ctx->pc = 0x3DF4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3DF4B8u: goto label_3df4b8;
            case 0x3DF580u: goto label_3df580;
            case 0x3DF798u: goto label_3df798;
            case 0x3DF924u: goto label_3df924;
            case 0x3DFB24u: goto label_3dfb24;
            case 0x3DFC9Cu: goto label_3dfc9c;
            case 0x3DFDD4u: goto label_3dfdd4;
            case 0x3DFED0u: goto label_3dfed0;
            case 0x3DFF38u: goto label_3dff38;
            case 0x3DFF54u: goto label_3dff54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF4B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3DF4B8u;
label_3df4b8:
    // 0x3df4b8: 0x2d620102  sltiu       $v0, $t3, 0x102
    ctx->pc = 0x3df4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
    // 0x3df4bc: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3DF4BCu;
    {
        const bool branch_taken_0x3df4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df4bc) {
            ctx->pc = 0x3DF4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF4BCu;
            // 0x3df4c0: 0x92e20010  lbu         $v0, 0x10($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF56Cu;
            goto label_3df56c;
        }
    }
    ctx->pc = 0x3DF4C4u;
    // 0x3df4c4: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x3df4c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3df4c8: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x3DF4C8u;
    {
        const bool branch_taken_0x3df4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df4c8) {
            ctx->pc = 0x3DF4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF4C8u;
            // 0x3df4cc: 0x92e20010  lbu         $v0, 0x10($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF56Cu;
            goto label_3df56c;
        }
    }
    ctx->pc = 0x3DF4D0u;
    // 0x3df4d0: 0xfe920020  sd          $s2, 0x20($s4)
    ctx->pc = 0x3df4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
    // 0x3df4d4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3df4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df4d8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3df4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3df4dc: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x3df4dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df4e0: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3df4e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3df4e4: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3df4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3df4e8: 0xae90001c  sw          $s0, 0x1C($s4)
    ctx->pc = 0x3df4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 16));
    // 0x3df4ec: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x3df4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x3df4f0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3df4f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3df4f4: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x3df4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x3df4f8: 0xae8a0038  sw          $t2, 0x38($s4)
    ctx->pc = 0x3df4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 10));
    // 0x3df4fc: 0xfea30008  sd          $v1, 0x8($s5)
    ctx->pc = 0x3df4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x3df500: 0x8ee60014  lw          $a2, 0x14($s7)
    ctx->pc = 0x3df500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x3df504: 0x92e40010  lbu         $a0, 0x10($s7)
    ctx->pc = 0x3df504u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x3df508: 0x92e50011  lbu         $a1, 0x11($s7)
    ctx->pc = 0x3df508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 17)));
    // 0x3df50c: 0xc0f80b4  jal         func_3E02D0
    ctx->pc = 0x3DF50Cu;
    SET_GPR_U32(ctx, 31, 0x3DF514u);
    ctx->pc = 0x3DF510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF50Cu;
    // 0x3df510: 0x8ee70018  lw          $a3, 0x18($s7) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E02D0u, 0x3DF50Cu, 0x3DF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF514u;
label_3df514:
    // 0x3df514: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x3df514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x3df518: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3df518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df51c: 0x8e8a0038  lw          $t2, 0x38($s4)
    ctx->pc = 0x3df51cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x3df520: 0x8eb30000  lw          $s3, 0x0($s5)
    ctx->pc = 0x3df520u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3df524: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x3df524u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3df528: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3df528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3df52c: 0xde920020  ld          $s2, 0x20($s4)
    ctx->pc = 0x3df52cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3df530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF530u;
    {
        const bool branch_taken_0x3df530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF530u;
        // 0x3df534: 0x8e90001c  lw          $s0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df530) {
            ctx->pc = 0x3DF544u;
            goto label_3df544;
        }
    }
    ctx->pc = 0x3DF538u;
    // 0x3df538: 0x6a1023  subu        $v0, $v1, $t2
    ctx->pc = 0x3df538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3df53c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DF53Cu;
    {
        const bool branch_taken_0x3df53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF53Cu;
        // 0x3df540: 0x244bffff  addiu       $t3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df53c) {
            ctx->pc = 0x3DF54Cu;
            goto label_3df54c;
        }
    }
    ctx->pc = 0x3DF544u;
label_3df544:
    // 0x3df544: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x3df544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3df548: 0x4a5823  subu        $t3, $v0, $t2
    ctx->pc = 0x3df548u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3df54c:
    // 0x3df54c: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DF54Cu;
    {
        const bool branch_taken_0x3df54c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF54Cu;
        // 0x3df550: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df54c) {
            ctx->pc = 0x3DF568u;
            goto label_3df568;
        }
    }
    ctx->pc = 0x3DF554u;
    // 0x3df554: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3df554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3df558: 0x39030001  xori        $v1, $t0, 0x1
    ctx->pc = 0x3df558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x3df55c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3df55cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3df560: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x3DF560u;
    {
        const bool branch_taken_0x3df560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF560u;
        // 0x3df564: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df560) {
            ctx->pc = 0x3DF490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df490;
        }
    }
    ctx->pc = 0x3DF568u;
label_3df568:
    // 0x3df568: 0x92e20010  lbu         $v0, 0x10($s7)
    ctx->pc = 0x3df568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 16)));
label_3df56c:
    // 0x3df56c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3df56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3df570: 0x8ee30014  lw          $v1, 0x14($s7)
    ctx->pc = 0x3df570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x3df574: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x3df574u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
    // 0x3df578: 0xaee30008  sw          $v1, 0x8($s7)
    ctx->pc = 0x3df578u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
    // 0x3df57c: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x3df57cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_3df580:
    // 0x3df580: 0x8ee9000c  lw          $t1, 0xC($s7)
    ctx->pc = 0x3df580u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x3df584: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3df584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3df588: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3DF588u;
    {
        const bool branch_taken_0x3df588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF588u;
        // 0x3df58c: 0x1301823  subu        $v1, $t1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df588) {
            ctx->pc = 0x3DF6C0u;
            goto label_3df6c0;
        }
    }
    ctx->pc = 0x3DF590u;
    // 0x3df590: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3df590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df594: 0x209102a  slt         $v0, $s0, $t1
    ctx->pc = 0x3df594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3df598: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DF598u;
    {
        const bool branch_taken_0x3df598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF598u;
        // 0x3df59c: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df598) {
            ctx->pc = 0x3DF60Cu;
            goto label_3df60c;
        }
    }
    ctx->pc = 0x3DF5A0u;
    // 0x3df5a0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3DF5A0u;
    {
        const bool branch_taken_0x3df5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5A0u;
        // 0x3df5a4: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df5a0) {
            ctx->pc = 0x3DF638u;
            goto label_3df638;
        }
    }
    ctx->pc = 0x3DF5A8u;
    // 0x3df5a8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DF5A8u;
    {
        const bool branch_taken_0x3df5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5A8u;
        // 0x3df5ac: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df5a8) {
            ctx->pc = 0x3DF60Cu;
            goto label_3df60c;
        }
    }
    ctx->pc = 0x3DF5B0u;
    // 0x3df5b0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3DF5B0u;
    {
        const bool branch_taken_0x3df5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5B0u;
        // 0x3df5b4: 0x28620019  slti        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df5b0) {
            ctx->pc = 0x3DF5E8u;
            goto label_3df5e8;
        }
    }
    ctx->pc = 0x3DF5B8u;
    // 0x3df5b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3DF5B8u;
    {
        const bool branch_taken_0x3df5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5B8u;
        // 0x3df5bc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df5b8) {
            ctx->pc = 0x3DF640u;
            goto label_3df640;
        }
    }
    ctx->pc = 0x3DF5C0u;
    // 0x3df5c0: 0x1220026b  beqz        $s1, . + 4 + (0x26B << 2)
    ctx->pc = 0x3DF5C0u;
    {
        const bool branch_taken_0x3df5c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5C0u;
        // 0x3df5c4: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df5c0) {
            ctx->pc = 0x3DFF70u;
            goto label_3dff70;
        }
    }
    ctx->pc = 0x3DF5C8u;
    // 0x3df5c8: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x3df5c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3df5cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3df5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df5d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df5d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df5d4: 0x2031814  dsllv       $v1, $v1, $s0
    ctx->pc = 0x3df5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df5d8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3df5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3df5dc: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x3df5dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x3df5e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3df5e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df5e4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3df5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3df5e8:
    // 0x3df5e8: 0x12200261  beqz        $s1, . + 4 + (0x261 << 2)
    ctx->pc = 0x3DF5E8u;
    {
        const bool branch_taken_0x3df5e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5E8u;
        // 0x3df5ec: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df5e8) {
            ctx->pc = 0x3DFF70u;
            goto label_3dff70;
        }
    }
    ctx->pc = 0x3DF5F0u;
    // 0x3df5f0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3df5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df5f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df5f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df5f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3df5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3df5fc: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df600: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3df600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3df604: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df604u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df608: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3df608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3df60c:
    // 0x3df60c: 0x12200258  beqz        $s1, . + 4 + (0x258 << 2)
    ctx->pc = 0x3DF60Cu;
    {
        const bool branch_taken_0x3df60c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF60Cu;
        // 0x3df610: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df60c) {
            ctx->pc = 0x3DFF70u;
            goto label_3dff70;
        }
    }
    ctx->pc = 0x3DF614u;
    // 0x3df614: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3df614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df618: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df61c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3df61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3df620: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df624: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3df624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3df628: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df628u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df62c: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3df62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3df630: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3DF630u;
    {
        const bool branch_taken_0x3df630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF630u;
        // 0x3df634: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df630) {
            ctx->pc = 0x3DF6C0u;
            goto label_3df6c0;
        }
    }
    ctx->pc = 0x3DF638u;
label_3df638:
    // 0x3df638: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3df638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df63c: 0x0  nop
    ctx->pc = 0x3df63cu;
    // NOP
label_3df640:
    // 0x3df640: 0x1220024b  beqz        $s1, . + 4 + (0x24B << 2)
    ctx->pc = 0x3DF640u;
    {
        const bool branch_taken_0x3df640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF640u;
        // 0x3df644: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df640) {
            ctx->pc = 0x3DFF70u;
            goto label_3dff70;
        }
    }
    ctx->pc = 0x3DF648u;
    // 0x3df648: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3df648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3df64c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df64cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df650: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3df650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3df654: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df658: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df658u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df65c: 0x12200244  beqz        $s1, . + 4 + (0x244 << 2)
    ctx->pc = 0x3DF65Cu;
    {
        const bool branch_taken_0x3df65c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF65Cu;
        // 0x3df660: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df65c) {
            ctx->pc = 0x3DFF70u;
            goto label_3dff70;
        }
    }
    ctx->pc = 0x3DF664u;
    // 0x3df664: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x3df664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x3df668: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3df668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3df66c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3df66cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3df670: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df674: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df674u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df678: 0x1220023d  beqz        $s1, . + 4 + (0x23D << 2)
    ctx->pc = 0x3DF678u;
    {
        const bool branch_taken_0x3df678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF678u;
        // 0x3df67c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df678) {
            ctx->pc = 0x3DFF70u;
            goto label_3dff70;
        }
    }
    ctx->pc = 0x3DF680u;
    // 0x3df680: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3df680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3df684: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3df684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3df688: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3df688u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3df68c: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df690: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df690u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df694: 0x12200236  beqz        $s1, . + 4 + (0x236 << 2)
    ctx->pc = 0x3DF694u;
    {
        const bool branch_taken_0x3df694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF694u;
        // 0x3df698: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df694) {
            ctx->pc = 0x3DFF70u;
            goto label_3dff70;
        }
    }
    ctx->pc = 0x3DF69Cu;
    // 0x3df69c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x3df69cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x3df6a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3df6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3df6a4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3df6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3df6a8: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df6ac: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3df6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3df6b0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df6b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df6b4: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3df6b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3df6b8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3DF6B8u;
    {
        const bool branch_taken_0x3df6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF6B8u;
        // 0x3df6bc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df6b8) {
            ctx->pc = 0x3DF640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df640;
        }
    }
    ctx->pc = 0x3DF6C0u;
label_3df6c0:
    // 0x3df6c0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3df6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3df6c4: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x3df6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3df6c8: 0x2442c500  addiu       $v0, $v0, -0x3B00
    ctx->pc = 0x3df6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952192));
    // 0x3df6cc: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x3df6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3df6d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3df6d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3df6d4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3df6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3df6d8: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x3df6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3df6dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3df6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df6e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3df6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3df6e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3df6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3df6e8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3df6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3df6ec: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3df6ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3df6f0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3df6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3df6f4: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x3df6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3df6f8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DF6F8u;
    {
        const bool branch_taken_0x3df6f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF6F8u;
        // 0x3df6fc: 0x529016  dsrlv       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df6f8) {
            ctx->pc = 0x3DF714u;
            goto label_3df714;
        }
    }
    ctx->pc = 0x3DF700u;
    // 0x3df700: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3df700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3df704: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3df704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3df708: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x3df708u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x3df70c: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
    ctx->pc = 0x3DF70Cu;
    {
        const bool branch_taken_0x3df70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF70Cu;
        // 0x3df710: 0xaee30008  sw          $v1, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df70c) {
            ctx->pc = 0x3DF490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df490;
        }
    }
    ctx->pc = 0x3DF714u;
label_3df714:
    // 0x3df714: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3df714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3df718: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DF718u;
    {
        const bool branch_taken_0x3df718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF718u;
        // 0x3df71c: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df718) {
            ctx->pc = 0x3DF738u;
            goto label_3df738;
        }
    }
    ctx->pc = 0x3DF720u;
    // 0x3df720: 0xaee20008  sw          $v0, 0x8($s7)
    ctx->pc = 0x3df720u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
    // 0x3df724: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3df724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3df728: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x3df728u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x3df72c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3df72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3df730: 0x1000ff57  b           . + 4 + (-0xA9 << 2)
    ctx->pc = 0x3DF730u;
    {
        const bool branch_taken_0x3df730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF730u;
        // 0x3df734: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df730) {
            ctx->pc = 0x3DF490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df490;
        }
    }
    ctx->pc = 0x3DF738u;
label_3df738:
    // 0x3df738: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x3df738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3df73c: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x3DF73Cu;
    {
        const bool branch_taken_0x3df73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF73Cu;
        // 0x3df740: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df73c) {
            ctx->pc = 0x3DFACCu;
            goto label_3dfacc;
        }
    }
    ctx->pc = 0x3DF744u;
    // 0x3df744: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DF744u;
    {
        const bool branch_taken_0x3df744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF744u;
        // 0x3df748: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df744) {
            ctx->pc = 0x3DF754u;
            goto label_3df754;
        }
    }
    ctx->pc = 0x3DF74Cu;
    // 0x3df74c: 0x1000ff50  b           . + 4 + (-0xB0 << 2)
    ctx->pc = 0x3DF74Cu;
    {
        const bool branch_taken_0x3df74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF74Cu;
        // 0x3df750: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df74c) {
            ctx->pc = 0x3DF490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df490;
        }
    }
    ctx->pc = 0x3DF754u;
label_3df754:
    // 0x3df754: 0xfe920020  sd          $s2, 0x20($s4)
    ctx->pc = 0x3df754u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
    // 0x3df758: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3df758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x3df75c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3df75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3df760: 0x24c6d800  addiu       $a2, $a2, -0x2800
    ctx->pc = 0x3df760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957056));
    // 0x3df764: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3df764u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3df768: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3df768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3df76c: 0xae90001c  sw          $s0, 0x1C($s4)
    ctx->pc = 0x3df76cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 16));
    // 0x3df770: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3df770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3df774: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3df774u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3df778: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x3df778u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x3df77c: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x3df77cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x3df780: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3df780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df784: 0xaea60020  sw          $a2, 0x20($s5)
    ctx->pc = 0x3df784u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 6));
    // 0x3df788: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3df788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df78c: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x3df78cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x3df790: 0x10000238  b           . + 4 + (0x238 << 2)
    ctx->pc = 0x3DF790u;
    {
        const bool branch_taken_0x3df790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF790u;
        // 0x3df794: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df790) {
            ctx->pc = 0x3E0074u;
            goto label_3e0074;
        }
    }
    ctx->pc = 0x3DF798u;
label_3df798:
    // 0x3df798: 0x8ee90008  lw          $t1, 0x8($s7)
    ctx->pc = 0x3df798u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3df79c: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3df79cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3df7a0: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3DF7A0u;
    {
        const bool branch_taken_0x3df7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7A0u;
        // 0x3df7a4: 0x1301823  subu        $v1, $t1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df7a0) {
            ctx->pc = 0x3DF8D8u;
            goto label_3df8d8;
        }
    }
    ctx->pc = 0x3DF7A8u;
    // 0x3df7a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3df7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df7ac: 0x209102a  slt         $v0, $s0, $t1
    ctx->pc = 0x3df7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3df7b0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DF7B0u;
    {
        const bool branch_taken_0x3df7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7B0u;
        // 0x3df7b4: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df7b0) {
            ctx->pc = 0x3DF824u;
            goto label_3df824;
        }
    }
    ctx->pc = 0x3DF7B8u;
    // 0x3df7b8: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3DF7B8u;
    {
        const bool branch_taken_0x3df7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7B8u;
        // 0x3df7bc: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df7b8) {
            ctx->pc = 0x3DF850u;
            goto label_3df850;
        }
    }
    ctx->pc = 0x3DF7C0u;
    // 0x3df7c0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DF7C0u;
    {
        const bool branch_taken_0x3df7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7C0u;
        // 0x3df7c4: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df7c0) {
            ctx->pc = 0x3DF824u;
            goto label_3df824;
        }
    }
    ctx->pc = 0x3DF7C8u;
    // 0x3df7c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3DF7C8u;
    {
        const bool branch_taken_0x3df7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7C8u;
        // 0x3df7cc: 0x28620019  slti        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df7c8) {
            ctx->pc = 0x3DF800u;
            goto label_3df800;
        }
    }
    ctx->pc = 0x3DF7D0u;
    // 0x3df7d0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3DF7D0u;
    {
        const bool branch_taken_0x3df7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7D0u;
        // 0x3df7d4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df7d0) {
            ctx->pc = 0x3DF858u;
            goto label_3df858;
        }
    }
    ctx->pc = 0x3DF7D8u;
    // 0x3df7d8: 0x122001f1  beqz        $s1, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x3DF7D8u;
    {
        const bool branch_taken_0x3df7d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7D8u;
        // 0x3df7dc: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df7d8) {
            ctx->pc = 0x3DFFA0u;
            goto label_3dffa0;
        }
    }
    ctx->pc = 0x3DF7E0u;
    // 0x3df7e0: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x3df7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3df7e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3df7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df7e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df7e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df7ec: 0x2031814  dsllv       $v1, $v1, $s0
    ctx->pc = 0x3df7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df7f0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3df7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3df7f4: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x3df7f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x3df7f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3df7f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df7fc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3df7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3df800:
    // 0x3df800: 0x122001e7  beqz        $s1, . + 4 + (0x1E7 << 2)
    ctx->pc = 0x3DF800u;
    {
        const bool branch_taken_0x3df800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF800u;
        // 0x3df804: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df800) {
            ctx->pc = 0x3DFFA0u;
            goto label_3dffa0;
        }
    }
    ctx->pc = 0x3DF808u;
    // 0x3df808: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3df808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df80c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df80cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df810: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3df810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3df814: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df818: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3df818u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3df81c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df81cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df820: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3df820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3df824:
    // 0x3df824: 0x122001de  beqz        $s1, . + 4 + (0x1DE << 2)
    ctx->pc = 0x3DF824u;
    {
        const bool branch_taken_0x3df824 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF824u;
        // 0x3df828: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df824) {
            ctx->pc = 0x3DFFA0u;
            goto label_3dffa0;
        }
    }
    ctx->pc = 0x3DF82Cu;
    // 0x3df82c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3df82cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df834: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3df834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3df838: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df83c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3df83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3df840: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df840u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df844: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3df844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3df848: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3DF848u;
    {
        const bool branch_taken_0x3df848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF848u;
        // 0x3df84c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df848) {
            ctx->pc = 0x3DF8D8u;
            goto label_3df8d8;
        }
    }
    ctx->pc = 0x3DF850u;
label_3df850:
    // 0x3df850: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3df850u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df854: 0x0  nop
    ctx->pc = 0x3df854u;
    // NOP
label_3df858:
    // 0x3df858: 0x122001d1  beqz        $s1, . + 4 + (0x1D1 << 2)
    ctx->pc = 0x3DF858u;
    {
        const bool branch_taken_0x3df858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF858u;
        // 0x3df85c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df858) {
            ctx->pc = 0x3DFFA0u;
            goto label_3dffa0;
        }
    }
    ctx->pc = 0x3DF860u;
    // 0x3df860: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3df860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3df864: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df868: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3df868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3df86c: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df870: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df870u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df874: 0x122001ca  beqz        $s1, . + 4 + (0x1CA << 2)
    ctx->pc = 0x3DF874u;
    {
        const bool branch_taken_0x3df874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF874u;
        // 0x3df878: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df874) {
            ctx->pc = 0x3DFFA0u;
            goto label_3dffa0;
        }
    }
    ctx->pc = 0x3DF87Cu;
    // 0x3df87c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x3df87cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x3df880: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3df880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3df884: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3df884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3df888: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df88c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df88cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df890: 0x122001c3  beqz        $s1, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x3DF890u;
    {
        const bool branch_taken_0x3df890 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF890u;
        // 0x3df894: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df890) {
            ctx->pc = 0x3DFFA0u;
            goto label_3dffa0;
        }
    }
    ctx->pc = 0x3DF898u;
    // 0x3df898: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3df898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3df89c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3df89cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3df8a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3df8a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3df8a4: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df8a8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df8a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df8ac: 0x122001bc  beqz        $s1, . + 4 + (0x1BC << 2)
    ctx->pc = 0x3DF8ACu;
    {
        const bool branch_taken_0x3df8ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8ACu;
        // 0x3df8b0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df8ac) {
            ctx->pc = 0x3DFFA0u;
            goto label_3dffa0;
        }
    }
    ctx->pc = 0x3DF8B4u;
    // 0x3df8b4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x3df8b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x3df8b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3df8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3df8bc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3df8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3df8c0: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df8c4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3df8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3df8c8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df8c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df8cc: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3df8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3df8d0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3DF8D0u;
    {
        const bool branch_taken_0x3df8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8D0u;
        // 0x3df8d4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df8d0) {
            ctx->pc = 0x3DF858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df858;
        }
    }
    ctx->pc = 0x3DF8D8u;
label_3df8d8:
    // 0x3df8d8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3df8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3df8dc: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3df8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3df8e0: 0x2442c500  addiu       $v0, $v0, -0x3B00
    ctx->pc = 0x3df8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952192));
    // 0x3df8e4: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x3df8e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3df8e8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3df8e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3df8ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3df8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3df8f0: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x3df8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3df8f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3df8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3df8f8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3df8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3df8fc: 0x92e30011  lbu         $v1, 0x11($s7)
    ctx->pc = 0x3df8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 17)));
    // 0x3df900: 0x2098023  subu        $s0, $s0, $t1
    ctx->pc = 0x3df900u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x3df904: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3df904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3df908: 0x8ee60018  lw          $a2, 0x18($s7)
    ctx->pc = 0x3df908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x3df90c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3df90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3df910: 0xaee3000c  sw          $v1, 0xC($s7)
    ctx->pc = 0x3df910u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 3));
    // 0x3df914: 0xaee50004  sw          $a1, 0x4($s7)
    ctx->pc = 0x3df914u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 5));
    // 0x3df918: 0x1329016  dsrlv       $s2, $s2, $t1
    ctx->pc = 0x3df918u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 9) & 0x3F));
    // 0x3df91c: 0xaee60008  sw          $a2, 0x8($s7)
    ctx->pc = 0x3df91cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 6));
    // 0x3df920: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x3df920u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
label_3df924:
    // 0x3df924: 0x8ee9000c  lw          $t1, 0xC($s7)
    ctx->pc = 0x3df924u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x3df928: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3df928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3df92c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3DF92Cu;
    {
        const bool branch_taken_0x3df92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF92Cu;
        // 0x3df930: 0x1301823  subu        $v1, $t1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df92c) {
            ctx->pc = 0x3DFA60u;
            goto label_3dfa60;
        }
    }
    ctx->pc = 0x3DF934u;
    // 0x3df934: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3df934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df938: 0x209102a  slt         $v0, $s0, $t1
    ctx->pc = 0x3df938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3df93c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DF93Cu;
    {
        const bool branch_taken_0x3df93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF93Cu;
        // 0x3df940: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df93c) {
            ctx->pc = 0x3DF9B0u;
            goto label_3df9b0;
        }
    }
    ctx->pc = 0x3DF944u;
    // 0x3df944: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3DF944u;
    {
        const bool branch_taken_0x3df944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF944u;
        // 0x3df948: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df944) {
            ctx->pc = 0x3DF9DCu;
            goto label_3df9dc;
        }
    }
    ctx->pc = 0x3DF94Cu;
    // 0x3df94c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DF94Cu;
    {
        const bool branch_taken_0x3df94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF94Cu;
        // 0x3df950: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df94c) {
            ctx->pc = 0x3DF9B0u;
            goto label_3df9b0;
        }
    }
    ctx->pc = 0x3DF954u;
    // 0x3df954: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3DF954u;
    {
        const bool branch_taken_0x3df954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF954u;
        // 0x3df958: 0x28620019  slti        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df954) {
            ctx->pc = 0x3DF98Cu;
            goto label_3df98c;
        }
    }
    ctx->pc = 0x3DF95Cu;
    // 0x3df95c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3DF95Cu;
    {
        const bool branch_taken_0x3df95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF95Cu;
        // 0x3df960: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df95c) {
            ctx->pc = 0x3DF9E0u;
            goto label_3df9e0;
        }
    }
    ctx->pc = 0x3DF964u;
    // 0x3df964: 0x1220019a  beqz        $s1, . + 4 + (0x19A << 2)
    ctx->pc = 0x3DF964u;
    {
        const bool branch_taken_0x3df964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF964u;
        // 0x3df968: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df964) {
            ctx->pc = 0x3DFFD0u;
            goto label_3dffd0;
        }
    }
    ctx->pc = 0x3DF96Cu;
    // 0x3df96c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x3df96cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3df970: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3df970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df978: 0x2031814  dsllv       $v1, $v1, $s0
    ctx->pc = 0x3df978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df97c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3df97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3df980: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x3df980u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x3df984: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3df984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df988: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3df988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3df98c:
    // 0x3df98c: 0x12200190  beqz        $s1, . + 4 + (0x190 << 2)
    ctx->pc = 0x3DF98Cu;
    {
        const bool branch_taken_0x3df98c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF98Cu;
        // 0x3df990: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df98c) {
            ctx->pc = 0x3DFFD0u;
            goto label_3dffd0;
        }
    }
    ctx->pc = 0x3DF994u;
    // 0x3df994: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3df994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df998: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df99c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3df99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3df9a0: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df9a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3df9a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3df9a8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df9a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df9ac: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3df9acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3df9b0:
    // 0x3df9b0: 0x12200187  beqz        $s1, . + 4 + (0x187 << 2)
    ctx->pc = 0x3DF9B0u;
    {
        const bool branch_taken_0x3df9b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9B0u;
        // 0x3df9b4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df9b0) {
            ctx->pc = 0x3DFFD0u;
            goto label_3dffd0;
        }
    }
    ctx->pc = 0x3DF9B8u;
    // 0x3df9b8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3df9b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3df9bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df9bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df9c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3df9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3df9c4: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df9c8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3df9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3df9cc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df9ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df9d0: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3df9d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3df9d4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3DF9D4u;
    {
        const bool branch_taken_0x3df9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9D4u;
        // 0x3df9d8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df9d4) {
            ctx->pc = 0x3DFA60u;
            goto label_3dfa60;
        }
    }
    ctx->pc = 0x3DF9DCu;
label_3df9dc:
    // 0x3df9dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3df9dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df9e0:
    // 0x3df9e0: 0x1220017b  beqz        $s1, . + 4 + (0x17B << 2)
    ctx->pc = 0x3DF9E0u;
    {
        const bool branch_taken_0x3df9e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9E0u;
        // 0x3df9e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df9e0) {
            ctx->pc = 0x3DFFD0u;
            goto label_3dffd0;
        }
    }
    ctx->pc = 0x3DF9E8u;
    // 0x3df9e8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3df9e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3df9ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3df9ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df9f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3df9f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3df9f4: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3df9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3df9f8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3df9f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3df9fc: 0x12200174  beqz        $s1, . + 4 + (0x174 << 2)
    ctx->pc = 0x3DF9FCu;
    {
        const bool branch_taken_0x3df9fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9FCu;
        // 0x3dfa00: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df9fc) {
            ctx->pc = 0x3DFFD0u;
            goto label_3dffd0;
        }
    }
    ctx->pc = 0x3DFA04u;
    // 0x3dfa04: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x3dfa04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x3dfa08: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3dfa08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3dfa0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3dfa0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3dfa10: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dfa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3dfa14: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dfa14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3dfa18: 0x1220016d  beqz        $s1, . + 4 + (0x16D << 2)
    ctx->pc = 0x3DFA18u;
    {
        const bool branch_taken_0x3dfa18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA18u;
        // 0x3dfa1c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfa18) {
            ctx->pc = 0x3DFFD0u;
            goto label_3dffd0;
        }
    }
    ctx->pc = 0x3DFA20u;
    // 0x3dfa20: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3dfa20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3dfa24: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3dfa24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3dfa28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3dfa28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3dfa2c: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dfa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3dfa30: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dfa30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3dfa34: 0x12200166  beqz        $s1, . + 4 + (0x166 << 2)
    ctx->pc = 0x3DFA34u;
    {
        const bool branch_taken_0x3dfa34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA34u;
        // 0x3dfa38: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfa34) {
            ctx->pc = 0x3DFFD0u;
            goto label_3dffd0;
        }
    }
    ctx->pc = 0x3DFA3Cu;
    // 0x3dfa3c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x3dfa3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x3dfa40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3dfa40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3dfa44: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3dfa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3dfa48: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dfa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3dfa4c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dfa4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3dfa50: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dfa50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3dfa54: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3dfa54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3dfa58: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3DFA58u;
    {
        const bool branch_taken_0x3dfa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA58u;
        // 0x3dfa5c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfa58) {
            ctx->pc = 0x3DF9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df9e0;
        }
    }
    ctx->pc = 0x3DFA60u;
label_3dfa60:
    // 0x3dfa60: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3dfa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3dfa64: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x3dfa64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3dfa68: 0x2442c500  addiu       $v0, $v0, -0x3B00
    ctx->pc = 0x3dfa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952192));
    // 0x3dfa6c: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x3dfa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3dfa70: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3dfa70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3dfa74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3dfa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3dfa78: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x3dfa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3dfa7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dfa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dfa80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3dfa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3dfa84: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3dfa84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3dfa88: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3dfa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3dfa8c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3dfa8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3dfa90: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3dfa90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3dfa94: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x3dfa94u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3dfa98: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3dfa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3dfa9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DFA9Cu;
    {
        const bool branch_taken_0x3dfa9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA9Cu;
        // 0x3dfaa0: 0x929016  dsrlv       $s2, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 4) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfa9c) {
            ctx->pc = 0x3DFAC0u;
            goto label_3dfac0;
        }
    }
    ctx->pc = 0x3DFAA4u;
    // 0x3dfaa4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x3dfaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3dfaa8: 0xaee20008  sw          $v0, 0x8($s7)
    ctx->pc = 0x3dfaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
    // 0x3dfaac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dfaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3dfab0: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x3dfab0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x3dfab4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dfab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dfab8: 0x1000fe75  b           . + 4 + (-0x18B << 2)
    ctx->pc = 0x3DFAB8u;
    {
        const bool branch_taken_0x3dfab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFAB8u;
        // 0x3dfabc: 0xaee2000c  sw          $v0, 0xC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfab8) {
            ctx->pc = 0x3DF490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df490;
        }
    }
    ctx->pc = 0x3DFAC0u;
label_3dfac0:
    // 0x3dfac0: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x3dfac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3dfac4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DFAC4u;
    {
        const bool branch_taken_0x3dfac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dfac4) {
            ctx->pc = 0x3DFAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFAC4u;
            // 0x3dfac8: 0xfe920020  sd          $s2, 0x20($s4) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFAE4u;
            goto label_3dfae4;
        }
    }
    ctx->pc = 0x3DFACCu;
label_3dfacc:
    // 0x3dfacc: 0xaee3000c  sw          $v1, 0xC($s7)
    ctx->pc = 0x3dfaccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 3));
    // 0x3dfad0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dfad4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3dfad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3dfad8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3dfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3dfadc: 0x1000fe6c  b           . + 4 + (-0x194 << 2)
    ctx->pc = 0x3DFADCu;
    {
        const bool branch_taken_0x3dfadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFADCu;
        // 0x3dfae0: 0xaee20008  sw          $v0, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfadc) {
            ctx->pc = 0x3DF490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df490;
        }
    }
    ctx->pc = 0x3DFAE4u;
label_3dfae4:
    // 0x3dfae4: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3dfae4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x3dfae8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3dfae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3dfaec: 0x24c6d820  addiu       $a2, $a2, -0x27E0
    ctx->pc = 0x3dfaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957088));
    // 0x3dfaf0: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3dfaf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3dfaf4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3dfaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3dfaf8: 0xae90001c  sw          $s0, 0x1C($s4)
    ctx->pc = 0x3dfaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 16));
    // 0x3dfafc: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3dfafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3dfb00: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3dfb00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3dfb04: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x3dfb04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x3dfb08: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x3dfb08u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x3dfb0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dfb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfb10: 0xaea60020  sw          $a2, 0x20($s5)
    ctx->pc = 0x3dfb10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 6));
    // 0x3dfb14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3dfb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfb18: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x3dfb18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x3dfb1c: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x3DFB1Cu;
    {
        const bool branch_taken_0x3dfb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB1Cu;
        // 0x3dfb20: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb1c) {
            ctx->pc = 0x3E0074u;
            goto label_3e0074;
        }
    }
    ctx->pc = 0x3DFB24u;
label_3dfb24:
    // 0x3dfb24: 0x8ee90008  lw          $t1, 0x8($s7)
    ctx->pc = 0x3dfb24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3dfb28: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3dfb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3dfb2c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3DFB2Cu;
    {
        const bool branch_taken_0x3dfb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB2Cu;
        // 0x3dfb30: 0x1301823  subu        $v1, $t1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb2c) {
            ctx->pc = 0x3DFC60u;
            goto label_3dfc60;
        }
    }
    ctx->pc = 0x3DFB34u;
    // 0x3dfb34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3dfb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfb38: 0x209102a  slt         $v0, $s0, $t1
    ctx->pc = 0x3dfb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3dfb3c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DFB3Cu;
    {
        const bool branch_taken_0x3dfb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB3Cu;
        // 0x3dfb40: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb3c) {
            ctx->pc = 0x3DFBB0u;
            goto label_3dfbb0;
        }
    }
    ctx->pc = 0x3DFB44u;
    // 0x3dfb44: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3DFB44u;
    {
        const bool branch_taken_0x3dfb44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB44u;
        // 0x3dfb48: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb44) {
            ctx->pc = 0x3DFBDCu;
            goto label_3dfbdc;
        }
    }
    ctx->pc = 0x3DFB4Cu;
    // 0x3dfb4c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DFB4Cu;
    {
        const bool branch_taken_0x3dfb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB4Cu;
        // 0x3dfb50: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb4c) {
            ctx->pc = 0x3DFBB0u;
            goto label_3dfbb0;
        }
    }
    ctx->pc = 0x3DFB54u;
    // 0x3dfb54: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3DFB54u;
    {
        const bool branch_taken_0x3dfb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB54u;
        // 0x3dfb58: 0x28620019  slti        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb54) {
            ctx->pc = 0x3DFB8Cu;
            goto label_3dfb8c;
        }
    }
    ctx->pc = 0x3DFB5Cu;
    // 0x3dfb5c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3DFB5Cu;
    {
        const bool branch_taken_0x3dfb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB5Cu;
        // 0x3dfb60: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb5c) {
            ctx->pc = 0x3DFBE0u;
            goto label_3dfbe0;
        }
    }
    ctx->pc = 0x3DFB64u;
    // 0x3dfb64: 0x12200126  beqz        $s1, . + 4 + (0x126 << 2)
    ctx->pc = 0x3DFB64u;
    {
        const bool branch_taken_0x3dfb64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB64u;
        // 0x3dfb68: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb64) {
            ctx->pc = 0x3E0000u;
            goto label_3e0000;
        }
    }
    ctx->pc = 0x3DFB6Cu;
    // 0x3dfb6c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x3dfb6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3dfb70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dfb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfb74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3dfb74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfb78: 0x2031814  dsllv       $v1, $v1, $s0
    ctx->pc = 0x3dfb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3dfb7c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3dfb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3dfb80: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x3dfb80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x3dfb84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dfb84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfb88: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dfb88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dfb8c:
    // 0x3dfb8c: 0x1220011c  beqz        $s1, . + 4 + (0x11C << 2)
    ctx->pc = 0x3DFB8Cu;
    {
        const bool branch_taken_0x3dfb8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB8Cu;
        // 0x3dfb90: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb8c) {
            ctx->pc = 0x3E0000u;
            goto label_3e0000;
        }
    }
    ctx->pc = 0x3DFB94u;
    // 0x3dfb94: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3dfb94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dfb98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3dfb98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfb9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dfb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dfba0: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dfba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3dfba4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3dfba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3dfba8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dfba8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3dfbac: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dfbacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dfbb0:
    // 0x3dfbb0: 0x12200113  beqz        $s1, . + 4 + (0x113 << 2)
    ctx->pc = 0x3DFBB0u;
    {
        const bool branch_taken_0x3dfbb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBB0u;
        // 0x3dfbb4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfbb0) {
            ctx->pc = 0x3E0000u;
            goto label_3e0000;
        }
    }
    ctx->pc = 0x3DFBB8u;
    // 0x3dfbb8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3dfbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dfbbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3dfbbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfbc0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dfbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dfbc4: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dfbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3dfbc8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dfbc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3dfbcc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dfbccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3dfbd0: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3dfbd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3dfbd4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3DFBD4u;
    {
        const bool branch_taken_0x3dfbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBD4u;
        // 0x3dfbd8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfbd4) {
            ctx->pc = 0x3DFC60u;
            goto label_3dfc60;
        }
    }
    ctx->pc = 0x3DFBDCu;
label_3dfbdc:
    // 0x3dfbdc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3dfbdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dfbe0:
    // 0x3dfbe0: 0x12200107  beqz        $s1, . + 4 + (0x107 << 2)
    ctx->pc = 0x3DFBE0u;
    {
        const bool branch_taken_0x3dfbe0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBE0u;
        // 0x3dfbe4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfbe0) {
            ctx->pc = 0x3E0000u;
            goto label_3e0000;
        }
    }
    ctx->pc = 0x3DFBE8u;
    // 0x3dfbe8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3dfbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dfbec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3dfbecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfbf0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3dfbf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3dfbf4: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dfbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3dfbf8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dfbf8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3dfbfc: 0x12200100  beqz        $s1, . + 4 + (0x100 << 2)
    ctx->pc = 0x3DFBFCu;
    {
        const bool branch_taken_0x3dfbfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBFCu;
        // 0x3dfc00: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfbfc) {
            ctx->pc = 0x3E0000u;
            goto label_3e0000;
        }
    }
    ctx->pc = 0x3DFC04u;
    // 0x3dfc04: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x3dfc04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x3dfc08: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3dfc08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3dfc0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3dfc0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3dfc10: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dfc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3dfc14: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dfc14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3dfc18: 0x122000f9  beqz        $s1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x3DFC18u;
    {
        const bool branch_taken_0x3dfc18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC18u;
        // 0x3dfc1c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc18) {
            ctx->pc = 0x3E0000u;
            goto label_3e0000;
        }
    }
    ctx->pc = 0x3DFC20u;
    // 0x3dfc20: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3dfc20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3dfc24: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3dfc24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3dfc28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3dfc28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3dfc2c: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dfc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3dfc30: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dfc30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3dfc34: 0x122000f2  beqz        $s1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x3DFC34u;
    {
        const bool branch_taken_0x3dfc34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC34u;
        // 0x3dfc38: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc34) {
            ctx->pc = 0x3E0000u;
            goto label_3e0000;
        }
    }
    ctx->pc = 0x3DFC3Cu;
    // 0x3dfc3c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x3dfc3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x3dfc40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3dfc40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3dfc44: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3dfc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3dfc48: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dfc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x3dfc4c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dfc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3dfc50: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dfc50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3dfc54: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x3dfc54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3dfc58: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3DFC58u;
    {
        const bool branch_taken_0x3dfc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC58u;
        // 0x3dfc5c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc58) {
            ctx->pc = 0x3DFBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dfbe0;
        }
    }
    ctx->pc = 0x3DFC60u;
label_3dfc60:
    // 0x3dfc60: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3dfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3dfc64: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3dfc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3dfc68: 0x2442c500  addiu       $v0, $v0, -0x3B00
    ctx->pc = 0x3dfc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952192));
    // 0x3dfc6c: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x3dfc6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3dfc70: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3dfc70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3dfc74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3dfc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3dfc78: 0x8ee4000c  lw          $a0, 0xC($s7)
    ctx->pc = 0x3dfc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x3dfc7c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3dfc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dfc80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3dfc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3dfc84: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x3dfc84u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x3dfc88: 0x2098023  subu        $s0, $s0, $t1
    ctx->pc = 0x3dfc88u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x3dfc8c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x3dfc8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x3dfc90: 0x1329016  dsrlv       $s2, $s2, $t1
    ctx->pc = 0x3dfc90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 9) & 0x3F));
    // 0x3dfc94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3dfc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3dfc98: 0xaee4000c  sw          $a0, 0xC($s7)
    ctx->pc = 0x3dfc98u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 4));
label_3dfc9c:
    // 0x3dfc9c: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x3dfc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x3dfca0: 0x8ee4000c  lw          $a0, 0xC($s7)
    ctx->pc = 0x3dfca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x3dfca4: 0x1432823  subu        $a1, $t2, $v1
    ctx->pc = 0x3dfca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3dfca8: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3dfca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3dfcac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFCACu;
    {
        const bool branch_taken_0x3dfcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFCACu;
        // 0x3dfcb0: 0x851023  subu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfcac) {
            ctx->pc = 0x3DFCC0u;
            goto label_3dfcc0;
        }
    }
    ctx->pc = 0x3DFCB4u;
    // 0x3dfcb4: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x3dfcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3dfcb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DFCB8u;
    {
        const bool branch_taken_0x3dfcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFCB8u;
        // 0x3dfcbc: 0x62b023  subu        $s6, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfcb8) {
            ctx->pc = 0x3DFCC4u;
            goto label_3dfcc4;
        }
    }
    ctx->pc = 0x3DFCC0u;
label_3dfcc0:
    // 0x3dfcc0: 0x144b023  subu        $s6, $t2, $a0
    ctx->pc = 0x3dfcc0u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_3dfcc4:
    // 0x3dfcc4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3dfcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3dfcc8: 0x5040fdf1  beql        $v0, $zero, . + 4 + (-0x20F << 2)
    ctx->pc = 0x3DFCC8u;
    {
        const bool branch_taken_0x3dfcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfcc8) {
            ctx->pc = 0x3DFCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFCC8u;
            // 0x3dfccc: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df490;
        }
    }
    ctx->pc = 0x3DFCD0u;
label_3dfcd0:
    // 0x3dfcd0: 0x55600032  bnel        $t3, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x3DFCD0u;
    {
        const bool branch_taken_0x3dfcd0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dfcd0) {
            ctx->pc = 0x3DFCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFCD0u;
            // 0x3dfcd4: 0x92c20000  lbu         $v0, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFD9Cu;
            goto label_3dfd9c;
        }
    }
    ctx->pc = 0x3DFCD8u;
    // 0x3dfcd8: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x3dfcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3dfcdc: 0x1544000c  bne         $t2, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DFCDCu;
    {
        const bool branch_taken_0x3dfcdc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        if (branch_taken_0x3dfcdc) {
            ctx->pc = 0x3DFD10u;
            goto label_3dfd10;
        }
    }
    ctx->pc = 0x3DFCE4u;
    // 0x3dfce4: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x3dfce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x3dfce8: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x3dfce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x3dfcec: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DFCECu;
    {
        const bool branch_taken_0x3dfcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3dfcec) {
            ctx->pc = 0x3DFD10u;
            goto label_3dfd10;
        }
    }
    ctx->pc = 0x3DFCF4u;
    // 0x3dfcf4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3dfcf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfcf8: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3dfcf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dfcfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFCFCu;
    {
        const bool branch_taken_0x3dfcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFCFCu;
        // 0x3dfd00: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfcfc) {
            ctx->pc = 0x3DFD0Cu;
            goto label_3dfd0c;
        }
    }
    ctx->pc = 0x3DFD04u;
    // 0x3dfd04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DFD04u;
    {
        const bool branch_taken_0x3dfd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD04u;
        // 0x3dfd08: 0x244bffff  addiu       $t3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfd04) {
            ctx->pc = 0x3DFD10u;
            goto label_3dfd10;
        }
    }
    ctx->pc = 0x3DFD0Cu;
label_3dfd0c:
    // 0x3dfd0c: 0x8a5823  subu        $t3, $a0, $t2
    ctx->pc = 0x3dfd0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_3dfd10:
    // 0x3dfd10: 0x55600022  bnel        $t3, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x3DFD10u;
    {
        const bool branch_taken_0x3dfd10 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dfd10) {
            ctx->pc = 0x3DFD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFD10u;
            // 0x3dfd14: 0x92c20000  lbu         $v0, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFD9Cu;
            goto label_3dfd9c;
        }
    }
    ctx->pc = 0x3DFD18u;
    // 0x3dfd18: 0xae8a0038  sw          $t2, 0x38($s4)
    ctx->pc = 0x3dfd18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 10));
    // 0x3dfd1c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3dfd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfd20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dfd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfd24: 0xc0f8054  jal         func_3E0150
    ctx->pc = 0x3DFD24u;
    SET_GPR_U32(ctx, 31, 0x3DFD2Cu);
    ctx->pc = 0x3DFD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFD24u;
    // 0x3dfd28: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0150u, 0x3DFD24u, 0x3DFD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFD2Cu;
label_3dfd2c:
    // 0x3dfd2c: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x3dfd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x3dfd30: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3dfd30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfd34: 0x8e8a0038  lw          $t2, 0x38($s4)
    ctx->pc = 0x3dfd34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x3dfd38: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3dfd38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dfd3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFD3Cu;
    {
        const bool branch_taken_0x3dfd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD3Cu;
        // 0x3dfd40: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfd3c) {
            ctx->pc = 0x3DFD50u;
            goto label_3dfd50;
        }
    }
    ctx->pc = 0x3DFD44u;
    // 0x3dfd44: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x3dfd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3dfd48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFD48u;
    {
        const bool branch_taken_0x3dfd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD48u;
        // 0x3dfd4c: 0x244bffff  addiu       $t3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfd48) {
            ctx->pc = 0x3DFD5Cu;
            goto label_3dfd5c;
        }
    }
    ctx->pc = 0x3DFD50u;
label_3dfd50:
    // 0x3dfd50: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x3dfd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3dfd54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dfd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfd58: 0x4a5823  subu        $t3, $v0, $t2
    ctx->pc = 0x3dfd58u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3dfd5c:
    // 0x3dfd5c: 0x1544000c  bne         $t2, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DFD5Cu;
    {
        const bool branch_taken_0x3dfd5c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        if (branch_taken_0x3dfd5c) {
            ctx->pc = 0x3DFD90u;
            goto label_3dfd90;
        }
    }
    ctx->pc = 0x3DFD64u;
    // 0x3dfd64: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x3dfd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x3dfd68: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x3dfd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x3dfd6c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DFD6Cu;
    {
        const bool branch_taken_0x3dfd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3dfd6c) {
            ctx->pc = 0x3DFD90u;
            goto label_3dfd90;
        }
    }
    ctx->pc = 0x3DFD74u;
    // 0x3dfd74: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3dfd74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfd78: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3dfd78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dfd7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFD7Cu;
    {
        const bool branch_taken_0x3dfd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD7Cu;
        // 0x3dfd80: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfd7c) {
            ctx->pc = 0x3DFD8Cu;
            goto label_3dfd8c;
        }
    }
    ctx->pc = 0x3DFD84u;
    // 0x3dfd84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DFD84u;
    {
        const bool branch_taken_0x3dfd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD84u;
        // 0x3dfd88: 0x244bffff  addiu       $t3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfd84) {
            ctx->pc = 0x3DFD90u;
            goto label_3dfd90;
        }
    }
    ctx->pc = 0x3DFD8Cu;
label_3dfd8c:
    // 0x3dfd8c: 0x8a5823  subu        $t3, $a0, $t2
    ctx->pc = 0x3dfd8cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_3dfd90:
    // 0x3dfd90: 0x516000a7  beql        $t3, $zero, . + 4 + (0xA7 << 2)
    ctx->pc = 0x3DFD90u;
    {
        const bool branch_taken_0x3dfd90 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfd90) {
            ctx->pc = 0x3DFD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFD90u;
            // 0x3dfd94: 0xfe920020  sd          $s2, 0x20($s4) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0030u;
            goto label_3e0030;
        }
    }
    ctx->pc = 0x3DFD98u;
    // 0x3dfd98: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x3dfd98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3dfd9c:
    // 0x3dfd9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3dfd9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfda0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3dfda0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3dfda4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3dfda4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3dfda8: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x3dfda8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dfdac: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x3dfdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3dfdb0: 0x16c20002  bne         $s6, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DFDB0u;
    {
        const bool branch_taken_0x3dfdb0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFDB0u;
        // 0x3dfdb4: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfdb0) {
            ctx->pc = 0x3DFDBCu;
            goto label_3dfdbc;
        }
    }
    ctx->pc = 0x3DFDB8u;
    // 0x3dfdb8: 0x8e96002c  lw          $s6, 0x2C($s4)
    ctx->pc = 0x3dfdb8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_3dfdbc:
    // 0x3dfdbc: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3dfdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3dfdc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dfdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3dfdc4: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x3DFDC4u;
    {
        const bool branch_taken_0x3dfdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFDC4u;
        // 0x3dfdc8: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfdc4) {
            ctx->pc = 0x3DFCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dfcd0;
        }
    }
    ctx->pc = 0x3DFDCCu;
    // 0x3dfdcc: 0x1000fdb0  b           . + 4 + (-0x250 << 2)
    ctx->pc = 0x3DFDCCu;
    {
        const bool branch_taken_0x3dfdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFDCCu;
        // 0x3dfdd0: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfdcc) {
            ctx->pc = 0x3DF490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df490;
        }
    }
    ctx->pc = 0x3DFDD4u;
label_3dfdd4:
    // 0x3dfdd4: 0x55600038  bnel        $t3, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x3DFDD4u;
    {
        const bool branch_taken_0x3dfdd4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dfdd4) {
            ctx->pc = 0x3DFDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFDD4u;
            // 0x3dfdd8: 0x92e20008  lbu         $v0, 0x8($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFEB8u;
            goto label_3dfeb8;
        }
    }
    ctx->pc = 0x3DFDDCu;
    // 0x3dfddc: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x3dfddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3dfde0: 0x1544000c  bne         $t2, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DFDE0u;
    {
        const bool branch_taken_0x3dfde0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        if (branch_taken_0x3dfde0) {
            ctx->pc = 0x3DFE14u;
            goto label_3dfe14;
        }
    }
    ctx->pc = 0x3DFDE8u;
    // 0x3dfde8: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x3dfde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x3dfdec: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x3dfdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x3dfdf0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DFDF0u;
    {
        const bool branch_taken_0x3dfdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3dfdf0) {
            ctx->pc = 0x3DFE14u;
            goto label_3dfe14;
        }
    }
    ctx->pc = 0x3DFDF8u;
    // 0x3dfdf8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3dfdf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfdfc: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3dfdfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dfe00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFE00u;
    {
        const bool branch_taken_0x3dfe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE00u;
        // 0x3dfe04: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe00) {
            ctx->pc = 0x3DFE10u;
            goto label_3dfe10;
        }
    }
    ctx->pc = 0x3DFE08u;
    // 0x3dfe08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DFE08u;
    {
        const bool branch_taken_0x3dfe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE08u;
        // 0x3dfe0c: 0x244bffff  addiu       $t3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe08) {
            ctx->pc = 0x3DFE14u;
            goto label_3dfe14;
        }
    }
    ctx->pc = 0x3DFE10u;
label_3dfe10:
    // 0x3dfe10: 0x8a5823  subu        $t3, $a0, $t2
    ctx->pc = 0x3dfe10u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_3dfe14:
    // 0x3dfe14: 0x55600028  bnel        $t3, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x3DFE14u;
    {
        const bool branch_taken_0x3dfe14 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dfe14) {
            ctx->pc = 0x3DFE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFE14u;
            // 0x3dfe18: 0x92e20008  lbu         $v0, 0x8($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFEB8u;
            goto label_3dfeb8;
        }
    }
    ctx->pc = 0x3DFE1Cu;
    // 0x3dfe1c: 0xae8a0038  sw          $t2, 0x38($s4)
    ctx->pc = 0x3dfe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 10));
    // 0x3dfe20: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3dfe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfe24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dfe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfe28: 0xc0f8054  jal         func_3E0150
    ctx->pc = 0x3DFE28u;
    SET_GPR_U32(ctx, 31, 0x3DFE30u);
    ctx->pc = 0x3DFE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFE28u;
    // 0x3dfe2c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0150u, 0x3DFE28u, 0x3DFE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFE30u;
label_3dfe30:
    // 0x3dfe30: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x3dfe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x3dfe34: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3dfe34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfe38: 0x8e8a0038  lw          $t2, 0x38($s4)
    ctx->pc = 0x3dfe38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x3dfe3c: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3dfe3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dfe40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFE40u;
    {
        const bool branch_taken_0x3dfe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE40u;
        // 0x3dfe44: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe40) {
            ctx->pc = 0x3DFE54u;
            goto label_3dfe54;
        }
    }
    ctx->pc = 0x3DFE48u;
    // 0x3dfe48: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x3dfe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3dfe4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFE4Cu;
    {
        const bool branch_taken_0x3dfe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE4Cu;
        // 0x3dfe50: 0x244bffff  addiu       $t3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe4c) {
            ctx->pc = 0x3DFE60u;
            goto label_3dfe60;
        }
    }
    ctx->pc = 0x3DFE54u;
label_3dfe54:
    // 0x3dfe54: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x3dfe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3dfe58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dfe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfe5c: 0x4a5823  subu        $t3, $v0, $t2
    ctx->pc = 0x3dfe5cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3dfe60:
    // 0x3dfe60: 0x1544000c  bne         $t2, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DFE60u;
    {
        const bool branch_taken_0x3dfe60 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        if (branch_taken_0x3dfe60) {
            ctx->pc = 0x3DFE94u;
            goto label_3dfe94;
        }
    }
    ctx->pc = 0x3DFE68u;
    // 0x3dfe68: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x3dfe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x3dfe6c: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x3dfe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x3dfe70: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DFE70u;
    {
        const bool branch_taken_0x3dfe70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3dfe70) {
            ctx->pc = 0x3DFE94u;
            goto label_3dfe94;
        }
    }
    ctx->pc = 0x3DFE78u;
    // 0x3dfe78: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3dfe78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfe7c: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3dfe7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dfe80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFE80u;
    {
        const bool branch_taken_0x3dfe80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE80u;
        // 0x3dfe84: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe80) {
            ctx->pc = 0x3DFE90u;
            goto label_3dfe90;
        }
    }
    ctx->pc = 0x3DFE88u;
    // 0x3dfe88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DFE88u;
    {
        const bool branch_taken_0x3dfe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE88u;
        // 0x3dfe8c: 0x244bffff  addiu       $t3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe88) {
            ctx->pc = 0x3DFE94u;
            goto label_3dfe94;
        }
    }
    ctx->pc = 0x3DFE90u;
label_3dfe90:
    // 0x3dfe90: 0x8a5823  subu        $t3, $a0, $t2
    ctx->pc = 0x3dfe90u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_3dfe94:
    // 0x3dfe94: 0x55600008  bnel        $t3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DFE94u;
    {
        const bool branch_taken_0x3dfe94 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dfe94) {
            ctx->pc = 0x3DFE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFE94u;
            // 0x3dfe98: 0x92e20008  lbu         $v0, 0x8($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFEB8u;
            goto label_3dfeb8;
        }
    }
    ctx->pc = 0x3DFE9Cu;
    // 0x3dfe9c: 0xfe920020  sd          $s2, 0x20($s4)
    ctx->pc = 0x3dfe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
    // 0x3dfea0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dfea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfea4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3dfea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3dfea8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3dfea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfeac: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3dfeacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3dfeb0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3DFEB0u;
    {
        const bool branch_taken_0x3dfeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEB0u;
        // 0x3dfeb4: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfeb0) {
            ctx->pc = 0x3E0060u;
            goto label_3e0060;
        }
    }
    ctx->pc = 0x3DFEB8u;
label_3dfeb8:
    // 0x3dfeb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3dfeb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfebc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3dfebcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3dfec0: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x3dfec0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dfec4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3dfec4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3dfec8: 0x1000fd71  b           . + 4 + (-0x28F << 2)
    ctx->pc = 0x3DFEC8u;
    {
        const bool branch_taken_0x3dfec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEC8u;
        // 0x3dfecc: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfec8) {
            ctx->pc = 0x3DF490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df490;
        }
    }
    ctx->pc = 0x3DFED0u;
label_3dfed0:
    // 0x3dfed0: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x3dfed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3dfed4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFED4u;
    {
        const bool branch_taken_0x3dfed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFED4u;
        // 0x3dfed8: 0xae8a0038  sw          $t2, 0x38($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfed4) {
            ctx->pc = 0x3DFEE8u;
            goto label_3dfee8;
        }
    }
    ctx->pc = 0x3DFEDCu;
    // 0x3dfedc: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3dfedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3dfee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3dfee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3dfee4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dfee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dfee8:
    // 0x3dfee8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3dfee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfeec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dfeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfef0: 0xc0f8054  jal         func_3E0150
    ctx->pc = 0x3DFEF0u;
    SET_GPR_U32(ctx, 31, 0x3DFEF8u);
    ctx->pc = 0x3DFEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFEF0u;
    // 0x3dfef4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0150u, 0x3DFEF0u, 0x3DFEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFEF8u;
label_3dfef8:
    // 0x3dfef8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3dfef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfefc: 0x8e8a0038  lw          $t2, 0x38($s4)
    ctx->pc = 0x3dfefcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x3dff00: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x3dff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x3dff04: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x3dff04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3dff08: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x3dff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x3dff0c: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x3dff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x3dff10: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DFF10u;
    {
        const bool branch_taken_0x3dff10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF10u;
        // 0x3dff14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff10) {
            ctx->pc = 0x3DFF30u;
            goto label_3dff30;
        }
    }
    ctx->pc = 0x3DFF18u;
    // 0x3dff18: 0xfe920020  sd          $s2, 0x20($s4)
    ctx->pc = 0x3dff18u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
    // 0x3dff1c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3dff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3dff20: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3dff20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dff24: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3dff24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3dff28: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3DFF28u;
    {
        const bool branch_taken_0x3dff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF28u;
        // 0x3dff2c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff28) {
            ctx->pc = 0x3E0060u;
            goto label_3e0060;
        }
    }
    ctx->pc = 0x3DFF30u;
label_3dff30:
    // 0x3dff30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3dff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3dff34: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x3dff34u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_3dff38:
    // 0x3dff38: 0xfe920020  sd          $s2, 0x20($s4)
    ctx->pc = 0x3dff38u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
    // 0x3dff3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dff3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dff40: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3dff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3dff44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3dff44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dff48: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3dff48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3dff4c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3DFF4Cu;
    {
        const bool branch_taken_0x3dff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF4Cu;
        // 0x3dff50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff4c) {
            ctx->pc = 0x3E0060u;
            goto label_3e0060;
        }
    }
    ctx->pc = 0x3DFF54u;
label_3dff54:
    // 0x3dff54: 0xfe920020  sd          $s2, 0x20($s4)
    ctx->pc = 0x3dff54u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
    // 0x3dff58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dff58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dff5c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3dff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3dff60: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3dff60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dff64: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3dff64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3dff68: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3DFF68u;
    {
        const bool branch_taken_0x3dff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF68u;
        // 0x3dff6c: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff68) {
            ctx->pc = 0x3E0060u;
            goto label_3e0060;
        }
    }
    ctx->pc = 0x3DFF70u;
label_3dff70:
    // 0x3dff70: 0xfe920020  sd          $s2, 0x20($s4)
    ctx->pc = 0x3dff70u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
    // 0x3dff74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dff74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dff78: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3dff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3dff7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3dff7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dff80: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3dff80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3dff84: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3dff84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dff88: 0xae90001c  sw          $s0, 0x1C($s4)
    ctx->pc = 0x3dff88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 16));
    // 0x3dff8c: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3dff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3dff90: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3dff90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3dff94: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x3dff94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x3dff98: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3DFF98u;
    {
        const bool branch_taken_0x3dff98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF98u;
        // 0x3dff9c: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff98) {
            ctx->pc = 0x3E0074u;
            goto label_3e0074;
        }
    }
    ctx->pc = 0x3DFFA0u;
label_3dffa0:
    // 0x3dffa0: 0xfe920020  sd          $s2, 0x20($s4)
    ctx->pc = 0x3dffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
    // 0x3dffa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dffa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dffa8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3dffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3dffac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3dffacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dffb0: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3dffb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3dffb4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3dffb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dffb8: 0xae90001c  sw          $s0, 0x1C($s4)
    ctx->pc = 0x3dffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 16));
    // 0x3dffbc: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3dffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3dffc0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3dffc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3dffc4: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x3dffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x3dffc8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3DFFC8u;
    {
        const bool branch_taken_0x3dffc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFC8u;
        // 0x3dffcc: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dffc8) {
            ctx->pc = 0x3E0074u;
            goto label_3e0074;
        }
    }
    ctx->pc = 0x3DFFD0u;
label_3dffd0:
    // 0x3dffd0: 0xfe920020  sd          $s2, 0x20($s4)
    ctx->pc = 0x3dffd0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
    // 0x3dffd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dffd8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3dffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3dffdc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3dffdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dffe0: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3dffe0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3dffe4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3dffe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dffe8: 0xae90001c  sw          $s0, 0x1C($s4)
    ctx->pc = 0x3dffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 16));
    // 0x3dffec: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3dffecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3dfff0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3dfff0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3dfff4: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x3dfff4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x3dfff8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3DFFF8u;
    {
        const bool branch_taken_0x3dfff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFF8u;
        // 0x3dfffc: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfff8) {
            ctx->pc = 0x3E0074u;
            goto label_3e0074;
        }
    }
    ctx->pc = 0x3E0000u;
label_3e0000:
    // 0x3e0000: 0xfe920020  sd          $s2, 0x20($s4)
    ctx->pc = 0x3e0000u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
    // 0x3e0004: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0008: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3e0008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3e000c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e000cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0010: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3e0010u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3e0014: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3e0014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0018: 0xae90001c  sw          $s0, 0x1C($s4)
    ctx->pc = 0x3e0018u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 16));
    // 0x3e001c: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3e001cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3e0020: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3e0020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3e0024: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x3e0024u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x3e0028: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3E0028u;
    {
        const bool branch_taken_0x3e0028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0028u;
        // 0x3e002c: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0028) {
            ctx->pc = 0x3E0074u;
            goto label_3e0074;
        }
    }
    ctx->pc = 0x3E0030u;
label_3e0030:
    // 0x3e0030: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0034: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3e0034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3e0038: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e0038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e003c: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3e003cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3e0040: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0040u;
    {
        const bool branch_taken_0x3e0040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0040u;
        // 0x3e0044: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0040) {
            ctx->pc = 0x3E0060u;
            goto label_3e0060;
        }
    }
    ctx->pc = 0x3E0048u;
label_3e0048:
    // 0x3e0048: 0xfe920020  sd          $s2, 0x20($s4)
    ctx->pc = 0x3e0048u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 18));
    // 0x3e004c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e004cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0050: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3e0050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3e0054: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e0054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0058: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x3e0058u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3e005c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x3e005cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3e0060:
    // 0x3e0060: 0xae90001c  sw          $s0, 0x1C($s4)
    ctx->pc = 0x3e0060u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 16));
    // 0x3e0064: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3e0064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3e0068: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3e0068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3e006c: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x3e006cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x3e0070: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x3e0070u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_3e0074:
    // 0x3e0074: 0xfea30008  sd          $v1, 0x8($s5)
    ctx->pc = 0x3e0074u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x3e0078: 0xc0f8054  jal         func_3E0150
    ctx->pc = 0x3E0078u;
    SET_GPR_U32(ctx, 31, 0x3E0080u);
    ctx->pc = 0x3E007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0078u;
    // 0x3e007c: 0xae8a0038  sw          $t2, 0x38($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0150u, 0x3E0078u, 0x3E0080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0080u;
label_3e0080:
    // 0x3e0080: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3e0080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3e0084: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3e0084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e0088: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3e0088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e008c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3e008cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e0090: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e0090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e0094: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3e0094u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e0098: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3e0098u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e009c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3e009cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e00a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e00a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e00a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E00A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E00A4u;
        // 0x3e00a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E00A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E00ACu;
    // 0x3e00ac: 0x0  nop
    ctx->pc = 0x3e00acu;
    // NOP
    ctx->pc = 0x3e00b0u;
}
