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

// Function: sub_00443408
// Address: 0x443408 - 0x4436e0
void sub_00443408_0x443408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443408_0x443408");
#endif

    switch (ctx->pc) {
        case 0x4434b0u: goto label_4434b0;
        case 0x4435c4u: goto label_4435c4;
        case 0x443698u: goto label_443698;
        default: break;
    }

    ctx->pc = 0x443408u;

    // 0x443408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x443408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44340c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x44340cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443410: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x443410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x443414: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x443414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x443418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x443418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44341c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x44341cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443420: 0x8f8abeb8  lw          $t2, -0x4148($gp)
    ctx->pc = 0x443420u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443424: 0x2449d7c0  addiu       $t1, $v0, -0x2840
    ctx->pc = 0x443424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
    // 0x443428: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x443428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x44342c: 0x8c43d7c0  lw          $v1, -0x2840($v0)
    ctx->pc = 0x44342cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5DD7C0u));
    // 0x443430: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x443430u;
    {
        const bool branch_taken_0x443430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x443434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443430u;
        // 0x443434: 0x8a8021  addu        $s0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443430) {
            ctx->pc = 0x4436C8u;
            goto label_4436c8;
        }
    }
    ctx->pc = 0x443438u;
    // 0x443438: 0x10a00077  beqz        $a1, . + 4 + (0x77 << 2)
    ctx->pc = 0x443438u;
    {
        const bool branch_taken_0x443438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443438u;
        // 0x44343c: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443438) {
            ctx->pc = 0x443618u;
            goto label_443618;
        }
    }
    ctx->pc = 0x443440u;
    // 0x443440: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x443440u;
    {
        const bool branch_taken_0x443440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x443444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443440u;
        // 0x443444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443440) {
            ctx->pc = 0x4436CCu;
            goto label_4436cc;
        }
    }
    ctx->pc = 0x443448u;
    // 0x443448: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x443448u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x44344c: 0x2d020007  sltiu       $v0, $t0, 0x7
    ctx->pc = 0x44344cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x443450: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x443450u;
    {
        const bool branch_taken_0x443450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x443454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443450u;
        // 0x443454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443450) {
            ctx->pc = 0x4436CCu;
            goto label_4436cc;
        }
    }
    ctx->pc = 0x443458u;
    // 0x443458: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x443458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x44345c: 0x8d240014  lw          $a0, 0x14($t1)
    ctx->pc = 0x44345cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x443460: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x443460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x443464: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x443464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x443468: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x443468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x44346c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x443470: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x443470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x443474: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x443474u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x443478: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x443478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x44347c: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x44347Cu;
    {
        const bool branch_taken_0x44347c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x443480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44347Cu;
        // 0x443480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44347c) {
            ctx->pc = 0x4436CCu;
            goto label_4436cc;
        }
    }
    ctx->pc = 0x443484u;
    // 0x443484: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x443484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x443488: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x443488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x44348c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44348cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x443490: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x443490u;
    {
        const bool branch_taken_0x443490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x443494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443490u;
        // 0x443494: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443490) {
            ctx->pc = 0x443504u;
            goto label_443504;
        }
    }
    ctx->pc = 0x443498u;
    // 0x443498: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x443498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x44349c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x44349cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4434a0: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x4434a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4434a4: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x4434a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4434a8: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x4434a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4434ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4434acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4434b0:
    // 0x4434b0: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x4434b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4434b4: 0xc91026  xor         $v0, $a2, $t1
    ctx->pc = 0x4434b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 9));
    // 0x4434b8: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x4434b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x4434bc: 0xca2818  mult        $a1, $a2, $t2
    ctx->pc = 0x4434bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4434c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4434c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4434c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4434c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4434c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4434C8u;
    {
        const bool branch_taken_0x4434c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4434CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4434C8u;
        // 0x4434cc: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4434c8) {
            ctx->pc = 0x4434F8u;
            goto label_4434f8;
        }
    }
    ctx->pc = 0x4434D0u;
    // 0x4434d0: 0x8ce40024  lw          $a0, 0x24($a3)
    ctx->pc = 0x4434d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x4434d4: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x4434d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x4434d8: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x4434d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4434dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4434dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4434e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4434e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4434e4: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x4434E4u;
    {
        const bool branch_taken_0x4434e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4434e4) {
            ctx->pc = 0x4434E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4434E4u;
            // 0x4434e8: 0xace00024  sw          $zero, 0x24($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4434ECu;
            goto label_4434ec;
        }
    }
    ctx->pc = 0x4434ECu;
label_4434ec:
    // 0x4434ec: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x4434ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4434f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4434f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4434f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4434f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4434f8:
    // 0x4434f8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4434f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4434fc: 0x14c2ffec  bne         $a2, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4434FCu;
    {
        const bool branch_taken_0x4434fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x443500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4434FCu;
        // 0x443500: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4434fc) {
            ctx->pc = 0x4434B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4434b0;
        }
    }
    ctx->pc = 0x443504u;
label_443504:
    // 0x443504: 0x25a7d7c0  addiu       $a3, $t5, -0x2840
    ctx->pc = 0x443504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956992));
    // 0x443508: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x443508u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x44350c: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x44350cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x443510: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x443510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x443514: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x443514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x443518: 0x8ce90014  lw          $t1, 0x14($a3)
    ctx->pc = 0x443518u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x44351c: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x44351cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x443520: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x443520u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x443524: 0xcc1818  mult        $v1, $a2, $t4
    ctx->pc = 0x443524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x443528: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x443528u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x44352c: 0x8f84af00  lw          $a0, -0x5100($gp)
    ctx->pc = 0x44352cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946560)));
    // 0x443530: 0x8e080030  lw          $t0, 0x30($s0)
    ctx->pc = 0x443530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x443534: 0x695021  addu        $t2, $v1, $t1
    ctx->pc = 0x443534u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x443538: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x443538u;
    {
        const bool branch_taken_0x443538 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x44353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443538u;
        // 0x44353c: 0xad4b0000  sw          $t3, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443538) {
            ctx->pc = 0x443554u;
            goto label_443554;
        }
    }
    ctx->pc = 0x443540u;
    // 0x443540: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x443540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x443544: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x443544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x443548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x443548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44354c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x44354Cu;
    {
        const bool branch_taken_0x44354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44354Cu;
        // 0x443550: 0x481823  subu        $v1, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44354c) {
            ctx->pc = 0x443564u;
            goto label_443564;
        }
    }
    ctx->pc = 0x443554u;
label_443554:
    // 0x443554: 0xac1818  mult        $v1, $a1, $t4
    ctx->pc = 0x443554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x443558: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x443558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x44355c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x44355cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x443560: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x443560u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_443564:
    // 0x443564: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x443564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x443568: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x443568u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x44356c: 0xc23818  mult        $a3, $a2, $v0
    ctx->pc = 0x44356cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x443570: 0x25a5d7c0  addiu       $a1, $t5, -0x2840
    ctx->pc = 0x443570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956992));
    // 0x443574: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x443574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x443578: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x443578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44357c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x44357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x443580: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x443580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x443584: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x443584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x443588: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x443588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x44358c: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x44358cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x443590: 0xa2040017  sb          $a0, 0x17($s0)
    ctx->pc = 0x443590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 4));
    // 0x443594: 0x91620020  lbu         $v0, 0x20($t3)
    ctx->pc = 0x443594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x443598: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x443598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x44359c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x44359Cu;
    {
        const bool branch_taken_0x44359c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44359c) {
            ctx->pc = 0x4435A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44359Cu;
            // 0x4435a0: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4435C8u;
            goto label_4435c8;
        }
    }
    ctx->pc = 0x4435A4u;
    // 0x4435a4: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x4435a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x4435a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4435A8u;
    {
        const bool branch_taken_0x4435a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4435ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4435A8u;
        // 0x4435ac: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4435a8) {
            ctx->pc = 0x4435C4u;
            goto label_4435c4;
        }
    }
    ctx->pc = 0x4435B0u;
    // 0x4435b0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x4435b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4435b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4435b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4435b8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4435b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4435bc: 0xc11067a  jal         func_4419E8
    ctx->pc = 0x4435BCu;
    SET_GPR_U32(ctx, 31, 0x4435C4u);
    ctx->pc = 0x4435C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4435BCu;
    // 0x4435c0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4419E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4419E8u, 0x4435BCu, 0x4435C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4435C4u;
label_4435c4:
    // 0x4435c4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x4435c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4435c8:
    // 0x4435c8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4435c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4435cc: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x4435ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4435d0: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x4435d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x4435d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4435d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4435d8: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x4435d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x4435dc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4435dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4435e0: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x4435e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x4435e4: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x4435e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x4435e8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4435e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4435ec: 0x30473fff  andi        $a3, $v0, 0x3FFF
    ctx->pc = 0x4435ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4435f0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4435f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4435f4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4435f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4435f8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4435f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4435fc: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4435fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x443600: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x443600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x443604: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x443604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x443608: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x443608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x44360c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x44360cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x443610: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x443610u;
    {
        const bool branch_taken_0x443610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443610u;
        // 0x443614: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443610) {
            ctx->pc = 0x4436C0u;
            goto label_4436c0;
        }
    }
    ctx->pc = 0x443618u;
label_443618:
    // 0x443618: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x443618u;
    {
        const bool branch_taken_0x443618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443618u;
        // 0x44361c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443618) {
            ctx->pc = 0x4436CCu;
            goto label_4436cc;
        }
    }
    ctx->pc = 0x443620u;
    // 0x443620: 0xa2000017  sb          $zero, 0x17($s0)
    ctx->pc = 0x443620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x443624: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x443624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x443628: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x443628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x44362c: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x44362cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x443630: 0x8d240014  lw          $a0, 0x14($t1)
    ctx->pc = 0x443630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x443634: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x443634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x443638: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x443638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x44363c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x44363cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x443640: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x443640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x443644: 0x8d240024  lw          $a0, 0x24($t1)
    ctx->pc = 0x443644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x443648: 0x148b0002  bne         $a0, $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x443648u;
    {
        const bool branch_taken_0x443648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        ctx->pc = 0x44364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443648u;
        // 0x44364c: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443648) {
            ctx->pc = 0x443654u;
            goto label_443654;
        }
    }
    ctx->pc = 0x443650u;
    // 0x443650: 0xad200024  sw          $zero, 0x24($t1)
    ctx->pc = 0x443650u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 0));
label_443654:
    // 0x443654: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x443654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x443658: 0x14c2001c  bne         $a2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x443658u;
    {
        const bool branch_taken_0x443658 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x44365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443658u;
        // 0x44365c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443658) {
            ctx->pc = 0x4436CCu;
            goto label_4436cc;
        }
    }
    ctx->pc = 0x443660u;
    // 0x443660: 0x8f87af00  lw          $a3, -0x5100($gp)
    ctx->pc = 0x443660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946560)));
    // 0x443664: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x443664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x443668: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x443668u;
    {
        const bool branch_taken_0x443668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443668u;
        // 0x44366c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443668) {
            ctx->pc = 0x4436C0u;
            goto label_4436c0;
        }
    }
    ctx->pc = 0x443670u;
    // 0x443670: 0x8d240014  lw          $a0, 0x14($t1)
    ctx->pc = 0x443670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x443674: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x443674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x443678: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x443678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x44367c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x443680: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x443680u;
    {
        const bool branch_taken_0x443680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x443684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443680u;
        // 0x443684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443680) {
            ctx->pc = 0x4436CCu;
            goto label_4436cc;
        }
    }
    ctx->pc = 0x443688u;
    // 0x443688: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x443688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44368c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x44368cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x443690: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x443690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x443694: 0x0  nop
    ctx->pc = 0x443694u;
    // NOP
label_443698:
    // 0x443698: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x443698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x44369c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x44369cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4436a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4436A0u;
    {
        const bool branch_taken_0x4436a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4436A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4436A0u;
        // 0x4436a4: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4436a0) {
            ctx->pc = 0x4436C0u;
            goto label_4436c0;
        }
    }
    ctx->pc = 0x4436A8u;
    // 0x4436a8: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x4436a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4436ac: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4436acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4436b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4436b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4436b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4436b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4436b8: 0x5080fff7  beql        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4436B8u;
    {
        const bool branch_taken_0x4436b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4436b8) {
            ctx->pc = 0x4436BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4436B8u;
            // 0x4436bc: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_443698;
        }
    }
    ctx->pc = 0x4436C0u;
label_4436c0:
    // 0x4436c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4436C0u;
    {
        const bool branch_taken_0x4436c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4436C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4436C0u;
        // 0x4436c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4436c0) {
            ctx->pc = 0x4436CCu;
            goto label_4436cc;
        }
    }
    ctx->pc = 0x4436C8u;
label_4436c8:
    // 0x4436c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4436c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4436cc:
    // 0x4436cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4436ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4436d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4436d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4436d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4436D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4436D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4436D4u;
        // 0x4436d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4436D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4436DCu;
    // 0x4436dc: 0x0  nop
    ctx->pc = 0x4436dcu;
    // NOP
    ctx->pc = 0x4436e0u;
}
