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

// Function: sub_00401740
// Address: 0x401740 - 0x401880
void sub_00401740_0x401740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401740_0x401740");
#endif

    switch (ctx->pc) {
        case 0x40182cu: goto label_40182c;
        case 0x401850u: goto label_401850;
        case 0x401860u: goto label_401860;
        case 0x401868u: goto label_401868;
        default: break;
    }

    ctx->pc = 0x401740u;

    // 0x401740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x401740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x401744: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x401744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x401748: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x401748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40174c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40174cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x401750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x401750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401754: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x401754u;
    {
        const bool branch_taken_0x401754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x401758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401754u;
        // 0x401758: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401754) {
            ctx->pc = 0x4017C8u;
            goto label_4017c8;
        }
    }
    ctx->pc = 0x40175Cu;
    // 0x40175c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x40175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x401760: 0x10c20002  beq         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x401760u;
    {
        const bool branch_taken_0x401760 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x401764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401760u;
        // 0x401764: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401760) {
            ctx->pc = 0x40176Cu;
            goto label_40176c;
        }
    }
    ctx->pc = 0x401768u;
    // 0x401768: 0x9204020c  lbu         $a0, 0x20C($s0)
    ctx->pc = 0x401768u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
label_40176c:
    // 0x40176c: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x40176cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x401770: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x401770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401774: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x401774u;
    {
        const bool branch_taken_0x401774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x401778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401774u;
        // 0x401778: 0x82102b  sltu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x401774) {
            ctx->pc = 0x40181Cu;
            goto label_40181c;
        }
    }
    ctx->pc = 0x40177Cu;
    // 0x40177c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x40177Cu;
    {
        const bool branch_taken_0x40177c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40177c) {
            ctx->pc = 0x401780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40177Cu;
            // 0x401780: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x401820u;
            goto label_401820;
        }
    }
    ctx->pc = 0x401784u;
    // 0x401784: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x401784u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x401788: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x401788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x40178c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x40178Cu;
    {
        const bool branch_taken_0x40178c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x401790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40178Cu;
        // 0x401790: 0x82102b  sltu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40178c) {
            ctx->pc = 0x40181Cu;
            goto label_40181c;
        }
    }
    ctx->pc = 0x401794u;
    // 0x401794: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x401794u;
    {
        const bool branch_taken_0x401794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x401794) {
            ctx->pc = 0x401798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x401794u;
            // 0x401798: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x401820u;
            goto label_401820;
        }
    }
    ctx->pc = 0x40179Cu;
    // 0x40179c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x40179cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4017a0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4017a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4017a4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4017A4u;
    {
        const bool branch_taken_0x4017a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4017A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4017A4u;
        // 0x4017a8: 0x82102b  sltu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4017a4) {
            ctx->pc = 0x40181Cu;
            goto label_40181c;
        }
    }
    ctx->pc = 0x4017ACu;
    // 0x4017ac: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x4017ACu;
    {
        const bool branch_taken_0x4017ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4017ac) {
            ctx->pc = 0x4017B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4017ACu;
            // 0x4017b0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x401820u;
            goto label_401820;
        }
    }
    ctx->pc = 0x4017B4u;
    // 0x4017b4: 0xa3a80000  sb          $t0, 0x0($sp)
    ctx->pc = 0x4017b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x4017b8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x4017b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4017bc: 0xa3a70001  sb          $a3, 0x1($sp)
    ctx->pc = 0x4017bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x4017c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4017C0u;
    {
        const bool branch_taken_0x4017c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4017C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4017C0u;
        // 0x4017c4: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4017c0) {
            ctx->pc = 0x4017F0u;
            goto label_4017f0;
        }
    }
    ctx->pc = 0x4017C8u;
label_4017c8:
    // 0x4017c8: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x4017c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x4017cc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x4017ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4017d0: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x4017D0u;
    {
        const bool branch_taken_0x4017d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4017d0) {
            ctx->pc = 0x4017D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4017D0u;
            // 0x4017d4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x401820u;
            goto label_401820;
        }
    }
    ctx->pc = 0x4017D8u;
    // 0x4017d8: 0x9202020c  lbu         $v0, 0x20C($s0)
    ctx->pc = 0x4017d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x4017dc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4017dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4017e0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4017E0u;
    {
        const bool branch_taken_0x4017e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4017e0) {
            ctx->pc = 0x4017E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4017E0u;
            // 0x4017e4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x401820u;
            goto label_401820;
        }
    }
    ctx->pc = 0x4017E8u;
    // 0x4017e8: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x4017e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x4017ec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4017ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4017f0:
    // 0x4017f0: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x4017f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x4017f4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4017F4u;
    {
        const bool branch_taken_0x4017f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4017f4) {
            ctx->pc = 0x4017F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4017F4u;
            // 0x4017f8: 0x11303c  dsll32      $a2, $s1, 0 (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x401840u;
            goto label_401840;
        }
    }
    ctx->pc = 0x4017FCu;
    // 0x4017fc: 0x90a50004  lbu         $a1, 0x4($a1)
    ctx->pc = 0x4017fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x401800: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x401800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x401804: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x401804u;
    {
        const bool branch_taken_0x401804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x401804) {
            ctx->pc = 0x401808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x401804u;
            // 0x401808: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x401820u;
            goto label_401820;
        }
    }
    ctx->pc = 0x40180Cu;
    // 0x40180c: 0x9202020c  lbu         $v0, 0x20C($s0)
    ctx->pc = 0x40180cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x401810: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x401810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x401814: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x401814u;
    {
        const bool branch_taken_0x401814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x401818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401814u;
        // 0x401818: 0x3b11021  addu        $v0, $sp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401814) {
            ctx->pc = 0x401834u;
            goto label_401834;
        }
    }
    ctx->pc = 0x40181Cu;
label_40181c:
    // 0x40181c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x40181cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_401820:
    // 0x401820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401824: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x401824u;
    SET_GPR_U32(ctx, 31, 0x40182Cu);
    ctx->pc = 0x401828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401824u;
    // 0x401828: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x401824u, 0x40182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40182Cu;
label_40182c:
    // 0x40182c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x40182Cu;
    {
        const bool branch_taken_0x40182c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x401830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40182Cu;
        // 0x401830: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40182c) {
            ctx->pc = 0x40186Cu;
            goto label_40186c;
        }
    }
    ctx->pc = 0x401834u;
label_401834:
    // 0x401834: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x401834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x401838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x401838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x40183c: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x40183cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
label_401840:
    // 0x401840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401844: 0x2785aca8  addiu       $a1, $gp, -0x5358
    ctx->pc = 0x401844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945960));
    // 0x401848: 0xc101b98  jal         func_406E60
    ctx->pc = 0x401848u;
    SET_GPR_U32(ctx, 31, 0x401850u);
    ctx->pc = 0x40184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401848u;
    // 0x40184c: 0x6303e  dsrl32      $a2, $a2, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x401848u, 0x401850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401850u;
label_401850:
    // 0x401850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x401850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401854: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x401854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401858: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x401858u;
    SET_GPR_U32(ctx, 31, 0x401860u);
    ctx->pc = 0x40185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401858u;
    // 0x40185c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x401858u, 0x401860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401860u;
label_401860:
    // 0x401860: 0xc101bda  jal         func_406F68
    ctx->pc = 0x401860u;
    SET_GPR_U32(ctx, 31, 0x401868u);
    ctx->pc = 0x401864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401860u;
    // 0x401864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x401860u, 0x401868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401868u;
label_401868:
    // 0x401868: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x401868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40186c:
    // 0x40186c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40186cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x401870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x401870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x401874: 0x3e00008  jr          $ra
    ctx->pc = 0x401874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x401878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401874u;
        // 0x401878: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x401874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40187Cu;
    // 0x40187c: 0x0  nop
    ctx->pc = 0x40187cu;
    // NOP
    ctx->pc = 0x401880u;
}
