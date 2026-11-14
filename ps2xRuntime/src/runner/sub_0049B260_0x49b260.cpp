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

// Function: sub_0049B260
// Address: 0x49b260 - 0x49b450
void sub_0049B260_0x49b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B260_0x49b260");
#endif

    switch (ctx->pc) {
        case 0x49b29cu: goto label_49b29c;
        default: break;
    }

    ctx->pc = 0x49b260u;

    // 0x49b260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49b264: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49b264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x49b268: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x49b26c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x49b26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49b274: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49b274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b278: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49b278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x49b27c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49b27cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49b284: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x49b284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b288: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49b288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x49b28c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x49b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x49b290: 0x248482e0  addiu       $a0, $a0, -0x7D20
    ctx->pc = 0x49b290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935264));
    // 0x49b294: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x49B294u;
    SET_GPR_U32(ctx, 31, 0x49B29Cu);
    ctx->pc = 0x49B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B294u;
    // 0x49b298: 0x34a5080b  ori         $a1, $a1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x49B294u, 0x49B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B29Cu;
label_49b29c:
    // 0x49b29c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x49b29cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b2a0: 0x55600003  bnel        $t3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x49B2A0u;
    {
        const bool branch_taken_0x49b2a0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x49b2a0) {
            ctx->pc = 0x49B2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49B2A0u;
            // 0x49b2a4: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49B2B0u;
            goto label_49b2b0;
        }
    }
    ctx->pc = 0x49B2A8u;
    // 0x49b2a8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x49B2A8u;
    {
        const bool branch_taken_0x49b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B2A8u;
        // 0x49b2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b2a8) {
            ctx->pc = 0x49B430u;
            goto label_49b430;
        }
    }
    ctx->pc = 0x49B2B0u;
label_49b2b0:
    // 0x49b2b0: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x49B2B0u;
    {
        const bool branch_taken_0x49b2b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B2B0u;
        // 0x49b2b4: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b2b0) {
            ctx->pc = 0x49B2F8u;
            goto label_49b2f8;
        }
    }
    ctx->pc = 0x49B2B8u;
    // 0x49b2b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x49b2bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x49B2BCu;
    {
        const bool branch_taken_0x49b2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B2BCu;
        // 0x49b2c0: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b2bc) {
            ctx->pc = 0x49B2E0u;
            goto label_49b2e0;
        }
    }
    ctx->pc = 0x49B2C4u;
    // 0x49b2c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49b2c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49b2cc: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x49b2d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49b2d4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x49b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x49b2d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x49B2D8u;
    {
        const bool branch_taken_0x49b2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B2D8u;
        // 0x49b2dc: 0x244c0004  addiu       $t4, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b2d8) {
            ctx->pc = 0x49B308u;
            goto label_49b308;
        }
    }
    ctx->pc = 0x49B2E0u;
label_49b2e0:
    // 0x49b2e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49b2e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49b2e8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x49b2ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49b2f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49B2F0u;
    {
        const bool branch_taken_0x49b2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B2F0u;
        // 0x49b2f4: 0xa26021  addu        $t4, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b2f0) {
            ctx->pc = 0x49B308u;
            goto label_49b308;
        }
    }
    ctx->pc = 0x49B2F8u;
label_49b2f8:
    // 0x49b2f8: 0x262c0028  addiu       $t4, $s1, 0x28
    ctx->pc = 0x49b2f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x49b2fc: 0x2623002c  addiu       $v1, $s1, 0x2C
    ctx->pc = 0x49b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x49b300: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x49b304: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x49b304u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
label_49b308:
    // 0x49b308: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x49b308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x49b30c: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x49B30Cu;
    {
        const bool branch_taken_0x49b30c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B30Cu;
        // 0x49b310: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b30c) {
            ctx->pc = 0x49B354u;
            goto label_49b354;
        }
    }
    ctx->pc = 0x49B314u;
    // 0x49b314: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x49b318: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x49B318u;
    {
        const bool branch_taken_0x49b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B318u;
        // 0x49b31c: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b318) {
            ctx->pc = 0x49B33Cu;
            goto label_49b33c;
        }
    }
    ctx->pc = 0x49B320u;
    // 0x49b320: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49b320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49b324: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49b328: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x49b32c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49b330: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x49b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x49b334: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x49B334u;
    {
        const bool branch_taken_0x49b334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B334u;
        // 0x49b338: 0x244a0004  addiu       $t2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b334) {
            ctx->pc = 0x49B364u;
            goto label_49b364;
        }
    }
    ctx->pc = 0x49B33Cu;
label_49b33c:
    // 0x49b33c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49b340: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49b344: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49b344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x49b348: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49b34c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49B34Cu;
    {
        const bool branch_taken_0x49b34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B34Cu;
        // 0x49b350: 0xc25021  addu        $t2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b34c) {
            ctx->pc = 0x49B364u;
            goto label_49b364;
        }
    }
    ctx->pc = 0x49B354u;
label_49b354:
    // 0x49b354: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x49b354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x49b358: 0x260a0028  addiu       $t2, $s0, 0x28
    ctx->pc = 0x49b358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x49b35c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x49b360: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x49b360u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
label_49b364:
    // 0x49b364: 0xad710000  sw          $s1, 0x0($t3)
    ctx->pc = 0x49b364u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 17));
    // 0x49b368: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x49b368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x49b36c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x49b36cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49b370: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x49b370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x49b374: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49b374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49b378: 0x2663018  mult        $a2, $s3, $a2
    ctx->pc = 0x49b378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49b37c: 0x25680014  addiu       $t0, $t3, 0x14
    ctx->pc = 0x49b37cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x49b380: 0x1238c0  sll         $a3, $s2, 3
    ctx->pc = 0x49b380u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x49b384: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x49b384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x49b388: 0x2569000c  addiu       $t1, $t3, 0xC
    ctx->pc = 0x49b388u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x49b38c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49b38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b390: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x49b390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x49b394: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x49b394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x49b398: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x49b398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x49b39c: 0xad720004  sw          $s2, 0x4($t3)
    ctx->pc = 0x49b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 18));
    // 0x49b3a0: 0xad650008  sw          $a1, 0x8($t3)
    ctx->pc = 0x49b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 5));
    // 0x49b3a4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x49b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49b3a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x49b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x49b3ac: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x49b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x49b3b0: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x49b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
    // 0x49b3b4: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x49b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x49b3b8: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x49b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x49b3bc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x49b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x49b3c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49b3c4: 0xad64000c  sw          $a0, 0xC($t3)
    ctx->pc = 0x49b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 4));
    // 0x49b3c8: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x49b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x49b3cc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49b3d0: 0xad630010  sw          $v1, 0x10($t3)
    ctx->pc = 0x49b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 3));
    // 0x49b3d4: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x49b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x49b3d8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x49b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x49b3dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49b3e0: 0xac690004  sw          $t1, 0x4($v1)
    ctx->pc = 0x49b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 9));
    // 0x49b3e4: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x49b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x49b3e8: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x49b3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x49b3ec: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x49b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x49b3f0: 0xad600018  sw          $zero, 0x18($t3)
    ctx->pc = 0x49b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 0));
    // 0x49b3f4: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x49b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x49b3f8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x49b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49b3fc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x49b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x49b400: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49b400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49b404: 0xad640014  sw          $a0, 0x14($t3)
    ctx->pc = 0x49b404u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 4));
    // 0x49b408: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x49b408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49b40c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x49b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x49b410: 0xad630018  sw          $v1, 0x18($t3)
    ctx->pc = 0x49b410u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 3));
    // 0x49b414: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x49b414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49b418: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x49b418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x49b41c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49b420: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x49b420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x49b424: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x49b424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49b428: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x49b428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x49b42c: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x49b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
label_49b430:
    // 0x49b430: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49b430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49b434: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49b434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49b438: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49b438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49b43c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49b43cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49b440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b444: 0x3e00008  jr          $ra
    ctx->pc = 0x49B444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B444u;
        // 0x49b448: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B44Cu;
    // 0x49b44c: 0x0  nop
    ctx->pc = 0x49b44cu;
    // NOP
    ctx->pc = 0x49b450u;
}
