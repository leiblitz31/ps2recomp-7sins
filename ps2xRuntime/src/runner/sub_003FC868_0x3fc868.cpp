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

// Function: sub_003FC868
// Address: 0x3fc868 - 0x3fcd80
void sub_003FC868_0x3fc868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FC868_0x3fc868");
#endif

    switch (ctx->pc) {
        case 0x3fc920u: goto label_3fc920;
        case 0x3fc978u: goto label_3fc978;
        case 0x3fca10u: goto label_3fca10;
        case 0x3fcb50u: goto label_3fcb50;
        case 0x3fccd0u: goto label_3fccd0;
        default: break;
    }

    ctx->pc = 0x3fc868u;

    // 0x3fc868: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x3fc868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3fc86c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3fc86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3fc870: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3FC870u;
    {
        const bool branch_taken_0x3fc870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC870u;
        // 0x3fc874: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc870) {
            ctx->pc = 0x3FC978u;
            goto label_3fc978;
        }
    }
    ctx->pc = 0x3FC878u;
    // 0x3fc878: 0x90850011  lbu         $a1, 0x11($a0)
    ctx->pc = 0x3fc878u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3fc87c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3fc87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fc880: 0x14a2007b  bne         $a1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x3FC880u;
    {
        const bool branch_taken_0x3fc880 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC880u;
        // 0x3fc884: 0xdc8c0000  ld          $t4, 0x0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc880) {
            ctx->pc = 0x3FCA70u;
            goto label_3fca70;
        }
    }
    ctx->pc = 0x3FC888u;
    // 0x3fc888: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3fc888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3fc88c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fc88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3fc890: 0x5462003b  bnel        $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3FC890u;
    {
        const bool branch_taken_0x3fc890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fc890) {
            ctx->pc = 0x3FC894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC890u;
            // 0x3fc894: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC980u;
            goto label_3fc980;
        }
    }
    ctx->pc = 0x3FC898u;
    // 0x3fc898: 0x11800037  beqz        $t4, . + 4 + (0x37 << 2)
    ctx->pc = 0x3FC898u;
    {
        const bool branch_taken_0x3fc898 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC898u;
        // 0x3fc89c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc898) {
            ctx->pc = 0x3FC978u;
            goto label_3fc978;
        }
    }
    ctx->pc = 0x3FC8A0u;
    // 0x3fc8a0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3fc8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc8a4: 0x19800014  blez        $t4, . + 4 + (0x14 << 2)
    ctx->pc = 0x3FC8A4u;
    {
        const bool branch_taken_0x3fc8a4 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x3FC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC8A4u;
        // 0x3fc8a8: 0x31830003  andi        $v1, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc8a4) {
            ctx->pc = 0x3FC8F8u;
            goto label_3fc8f8;
        }
    }
    ctx->pc = 0x3FC8ACu;
    // 0x3fc8ac: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3FC8ACu;
    {
        const bool branch_taken_0x3fc8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC8ACu;
        // 0x3fc8b0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc8ac) {
            ctx->pc = 0x3FC918u;
            goto label_3fc918;
        }
    }
    ctx->pc = 0x3FC8B4u;
    // 0x3fc8b4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3FC8B4u;
    {
        const bool branch_taken_0x3fc8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc8b4) {
            ctx->pc = 0x3FC8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC8B4u;
            // 0x3fc8b8: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC8FCu;
            goto label_3fc8fc;
        }
    }
    ctx->pc = 0x3FC8BCu;
    // 0x3fc8bc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fc8bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fc8c0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FC8C0u;
    {
        const bool branch_taken_0x3fc8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc8c0) {
            ctx->pc = 0x3FC8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC8C0u;
            // 0x3fc8c4: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC8E4u;
            goto label_3fc8e4;
        }
    }
    ctx->pc = 0x3FC8C8u;
    // 0x3fc8c8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3fc8c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc8cc: 0x24e40003  addiu       $a0, $a3, 0x3
    ctx->pc = 0x3fc8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3fc8d0: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x3fc8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3fc8d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3fc8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fc8d8: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x3fc8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc8dc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3fc8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc8e0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fc8e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3fc8e4:
    // 0x3fc8e4: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3fc8e4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3fc8e8: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3fc8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3fc8ec: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3fc8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc8f0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fc8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc8f4: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x3fc8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_3fc8f8:
    // 0x3fc8f8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fc8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3fc8fc:
    // 0x3fc8fc: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3fc8fcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3fc900: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3fc900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3fc904: 0x10c382b  sltu        $a3, $t0, $t4
    ctx->pc = 0x3fc904u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3fc908: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3fc908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc90c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fc90cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc910: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FC910u;
    {
        const bool branch_taken_0x3fc910 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC910u;
        // 0x3fc914: 0x24840003  addiu       $a0, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc910) {
            ctx->pc = 0x3FC978u;
            goto label_3fc978;
        }
    }
    ctx->pc = 0x3FC918u;
label_3fc918:
    // 0x3fc918: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fc918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc91c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3fc91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fc920:
    // 0x3fc920: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x3fc920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3fc924: 0x65080004  daddiu      $t0, $t0, 0x4
    ctx->pc = 0x3fc924u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4);
    // 0x3fc928: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fc928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fc92c: 0x10c382b  sltu        $a3, $t0, $t4
    ctx->pc = 0x3fc92cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3fc930: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fc930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc934: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3fc934u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc938: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x3fc938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x3fc93c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x3fc93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3fc940: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3fc940u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc944: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x3fc944u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc948: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x3fc948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3fc94c: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x3fc94cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3fc950: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x3fc950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc954: 0xa0a30008  sb          $v1, 0x8($a1)
    ctx->pc = 0x3fc954u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc958: 0x90c2000b  lbu         $v0, 0xB($a2)
    ctx->pc = 0x3fc958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x3fc95c: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x3fc95cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x3fc960: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3fc960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x3fc964: 0xa0820009  sb          $v0, 0x9($a0)
    ctx->pc = 0x3fc964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc968: 0xa0a3000b  sb          $v1, 0xB($a1)
    ctx->pc = 0x3fc968u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc96c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x3fc96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x3fc970: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3FC970u;
    {
        const bool branch_taken_0x3fc970 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC970u;
        // 0x3fc974: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc970) {
            ctx->pc = 0x3FC920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc920;
        }
    }
    ctx->pc = 0x3FC978u;
label_3fc978:
    // 0x3fc978: 0x3e00008  jr          $ra
    ctx->pc = 0x3FC978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FC980u;
label_3fc980:
    // 0x3fc980: 0x146200fd  bne         $v1, $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x3FC980u;
    {
        const bool branch_taken_0x3fc980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fc980) {
            ctx->pc = 0x3FCD78u;
            goto label_3fcd78;
        }
    }
    ctx->pc = 0x3FC988u;
    // 0x3fc988: 0x1180fffb  beqz        $t4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3FC988u;
    {
        const bool branch_taken_0x3fc988 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC988u;
        // 0x3fc98c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc988) {
            ctx->pc = 0x3FC978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc978;
        }
    }
    ctx->pc = 0x3FC990u;
    // 0x3fc990: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3fc990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc994: 0x19800014  blez        $t4, . + 4 + (0x14 << 2)
    ctx->pc = 0x3FC994u;
    {
        const bool branch_taken_0x3fc994 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x3FC998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC994u;
        // 0x3fc998: 0x31830003  andi        $v1, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc994) {
            ctx->pc = 0x3FC9E8u;
            goto label_3fc9e8;
        }
    }
    ctx->pc = 0x3FC99Cu;
    // 0x3fc99c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3FC99Cu;
    {
        const bool branch_taken_0x3fc99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC99Cu;
        // 0x3fc9a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc99c) {
            ctx->pc = 0x3FCA08u;
            goto label_3fca08;
        }
    }
    ctx->pc = 0x3FC9A4u;
    // 0x3fc9a4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3FC9A4u;
    {
        const bool branch_taken_0x3fc9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc9a4) {
            ctx->pc = 0x3FC9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC9A4u;
            // 0x3fc9a8: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC9ECu;
            goto label_3fc9ec;
        }
    }
    ctx->pc = 0x3FC9ACu;
    // 0x3fc9ac: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fc9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fc9b0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FC9B0u;
    {
        const bool branch_taken_0x3fc9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc9b0) {
            ctx->pc = 0x3FC9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC9B0u;
            // 0x3fc9b4: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC9D4u;
            goto label_3fc9d4;
        }
    }
    ctx->pc = 0x3FC9B8u;
    // 0x3fc9b8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3fc9b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc9bc: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x3fc9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3fc9c0: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x3fc9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3fc9c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3fc9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fc9c8: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x3fc9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc9cc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3fc9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc9d0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fc9d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3fc9d4:
    // 0x3fc9d4: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3fc9d4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3fc9d8: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3fc9d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3fc9dc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3fc9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc9e0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fc9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc9e4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3fc9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3fc9e8:
    // 0x3fc9e8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fc9e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3fc9ec:
    // 0x3fc9ec: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x3fc9ecu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x3fc9f0: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3fc9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3fc9f4: 0x10c382b  sltu        $a3, $t0, $t4
    ctx->pc = 0x3fc9f4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3fc9f8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3fc9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc9fc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fc9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fca00: 0x10e0ffdd  beqz        $a3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x3FCA00u;
    {
        const bool branch_taken_0x3fca00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA00u;
        // 0x3fca04: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fca00) {
            ctx->pc = 0x3FC978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc978;
        }
    }
    ctx->pc = 0x3FCA08u;
label_3fca08:
    // 0x3fca08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fca08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fca0c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3fca0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fca10:
    // 0x3fca10: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x3fca10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3fca14: 0x65080004  daddiu      $t0, $t0, 0x4
    ctx->pc = 0x3fca14u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4);
    // 0x3fca18: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fca18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fca1c: 0x10c382b  sltu        $a3, $t0, $t4
    ctx->pc = 0x3fca1cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3fca20: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fca20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fca24: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3fca24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fca28: 0x90c20006  lbu         $v0, 0x6($a2)
    ctx->pc = 0x3fca28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3fca2c: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x3fca2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3fca30: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x3fca30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fca34: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x3fca34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fca38: 0x90c2000a  lbu         $v0, 0xA($a2)
    ctx->pc = 0x3fca38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x3fca3c: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x3fca3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3fca40: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x3fca40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fca44: 0xa0a3000a  sb          $v1, 0xA($a1)
    ctx->pc = 0x3fca44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fca48: 0x90c2000e  lbu         $v0, 0xE($a2)
    ctx->pc = 0x3fca48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x3fca4c: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3fca4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3fca50: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3fca50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3fca54: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x3fca54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fca58: 0xa0a3000e  sb          $v1, 0xE($a1)
    ctx->pc = 0x3fca58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fca5c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3fca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3fca60: 0x14e0ffeb  bnez        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3FCA60u;
    {
        const bool branch_taken_0x3fca60 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA60u;
        // 0x3fca64: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fca60) {
            ctx->pc = 0x3FCA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fca10;
        }
    }
    ctx->pc = 0x3FCA68u;
    // 0x3fca68: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCA70u;
label_3fca70:
    // 0x3fca70: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3fca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3fca74: 0x14a2ffc0  bne         $a1, $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x3FCA74u;
    {
        const bool branch_taken_0x3fca74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA74u;
        // 0x3fca78: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fca74) {
            ctx->pc = 0x3FC978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc978;
        }
    }
    ctx->pc = 0x3FCA7Cu;
    // 0x3fca7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3fca80: 0x5462005f  bnel        $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x3FCA80u;
    {
        const bool branch_taken_0x3fca80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fca80) {
            ctx->pc = 0x3FCA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCA80u;
            // 0x3fca84: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCC00u;
            goto label_3fcc00;
        }
    }
    ctx->pc = 0x3FCA88u;
    // 0x3fca88: 0x1180ffbb  beqz        $t4, . + 4 + (-0x45 << 2)
    ctx->pc = 0x3FCA88u;
    {
        const bool branch_taken_0x3fca88 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA88u;
        // 0x3fca8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fca88) {
            ctx->pc = 0x3FC978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc978;
        }
    }
    ctx->pc = 0x3FCA90u;
    // 0x3fca90: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3fca90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fca94: 0x1980001c  blez        $t4, . + 4 + (0x1C << 2)
    ctx->pc = 0x3FCA94u;
    {
        const bool branch_taken_0x3fca94 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x3FCA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA94u;
        // 0x3fca98: 0x31830003  andi        $v1, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fca94) {
            ctx->pc = 0x3FCB08u;
            goto label_3fcb08;
        }
    }
    ctx->pc = 0x3FCA9Cu;
    // 0x3fca9c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3FCA9Cu;
    {
        const bool branch_taken_0x3fca9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCA9Cu;
        // 0x3fcaa0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fca9c) {
            ctx->pc = 0x3FCB38u;
            goto label_3fcb38;
        }
    }
    ctx->pc = 0x3FCAA4u;
    // 0x3fcaa4: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FCAA4u;
    {
        const bool branch_taken_0x3fcaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fcaa4) {
            ctx->pc = 0x3FCAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCAA4u;
            // 0x3fcaa8: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCB0Cu;
            goto label_3fcb0c;
        }
    }
    ctx->pc = 0x3FCAACu;
    // 0x3fcaac: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fcaacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fcab0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3FCAB0u;
    {
        const bool branch_taken_0x3fcab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fcab0) {
            ctx->pc = 0x3FCAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCAB0u;
            // 0x3fcab4: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCAE4u;
            goto label_3fcae4;
        }
    }
    ctx->pc = 0x3FCAB8u;
    // 0x3fcab8: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3fcab8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fcabc: 0x24e60006  addiu       $a2, $a3, 0x6
    ctx->pc = 0x3fcabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x3fcac0: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x3fcac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3fcac4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3fcac4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fcac8: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x3fcac8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3fcacc: 0x90e20005  lbu         $v0, 0x5($a3)
    ctx->pc = 0x3fcaccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x3fcad0: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3fcad0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcad4: 0xa0e50004  sb          $a1, 0x4($a3)
    ctx->pc = 0x3fcad4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x3fcad8: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x3fcad8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcadc: 0xa0e40005  sb          $a0, 0x5($a3)
    ctx->pc = 0x3fcadcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fcae0: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3fcae0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3fcae4:
    // 0x3fcae4: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3fcae4u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3fcae8: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x3fcae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3fcaec: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3fcaecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3fcaf0: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x3fcaf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x3fcaf4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fcaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcaf8: 0xa0c50004  sb          $a1, 0x4($a2)
    ctx->pc = 0x3fcaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x3fcafc: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3fcafcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcb00: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x3fcb00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fcb04: 0x24c60006  addiu       $a2, $a2, 0x6
    ctx->pc = 0x3fcb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
label_3fcb08:
    // 0x3fcb08: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3fcb08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3fcb0c:
    // 0x3fcb0c: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3fcb0cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3fcb10: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x3fcb10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3fcb14: 0x16c682b  sltu        $t5, $t3, $t4
    ctx->pc = 0x3fcb14u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3fcb18: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3fcb18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3fcb1c: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x3fcb1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x3fcb20: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fcb20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcb24: 0xa0c50004  sb          $a1, 0x4($a2)
    ctx->pc = 0x3fcb24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x3fcb28: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3fcb28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcb2c: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x3fcb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fcb30: 0x11a0ff91  beqz        $t5, . + 4 + (-0x6F << 2)
    ctx->pc = 0x3FCB30u;
    {
        const bool branch_taken_0x3fcb30 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCB30u;
        // 0x3fcb34: 0x24c60006  addiu       $a2, $a2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcb30) {
            ctx->pc = 0x3FC978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc978;
        }
    }
    ctx->pc = 0x3FCB38u;
label_3fcb38:
    // 0x3fcb38: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3fcb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcb3c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3fcb3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcb40: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3fcb40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcb44: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3fcb44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcb48: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3fcb48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcb4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3fcb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fcb50:
    // 0x3fcb50: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x3fcb50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3fcb54: 0x656b0004  daddiu      $t3, $t3, 0x4
    ctx->pc = 0x3fcb54u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4);
    // 0x3fcb58: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fcb58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fcb5c: 0x16c682b  sltu        $t5, $t3, $t4
    ctx->pc = 0x3fcb5cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3fcb60: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fcb60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcb64: 0xa0e30004  sb          $v1, 0x4($a3)
    ctx->pc = 0x3fcb64u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcb68: 0x91220005  lbu         $v0, 0x5($t1)
    ctx->pc = 0x3fcb68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x3fcb6c: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x3fcb6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3fcb70: 0xa1420001  sb          $v0, 0x1($t2)
    ctx->pc = 0x3fcb70u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcb74: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x3fcb74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcb78: 0x90c2000a  lbu         $v0, 0xA($a2)
    ctx->pc = 0x3fcb78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x3fcb7c: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x3fcb7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3fcb80: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x3fcb80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcb84: 0xa0e3000a  sb          $v1, 0xA($a3)
    ctx->pc = 0x3fcb84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcb88: 0x9122000b  lbu         $v0, 0xB($t1)
    ctx->pc = 0x3fcb88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 11)));
    // 0x3fcb8c: 0x91030007  lbu         $v1, 0x7($t0)
    ctx->pc = 0x3fcb8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x3fcb90: 0xa1420007  sb          $v0, 0x7($t2)
    ctx->pc = 0x3fcb90u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcb94: 0xa0a3000b  sb          $v1, 0xB($a1)
    ctx->pc = 0x3fcb94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcb98: 0x90c20010  lbu         $v0, 0x10($a2)
    ctx->pc = 0x3fcb98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3fcb9c: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3fcb9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3fcba0: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x3fcba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcba4: 0xa0e30010  sb          $v1, 0x10($a3)
    ctx->pc = 0x3fcba4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcba8: 0x91220011  lbu         $v0, 0x11($t1)
    ctx->pc = 0x3fcba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 17)));
    // 0x3fcbac: 0x9103000d  lbu         $v1, 0xD($t0)
    ctx->pc = 0x3fcbacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x3fcbb0: 0xa142000d  sb          $v0, 0xD($t2)
    ctx->pc = 0x3fcbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcbb4: 0xa0a30011  sb          $v1, 0x11($a1)
    ctx->pc = 0x3fcbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcbb8: 0x90c20016  lbu         $v0, 0x16($a2)
    ctx->pc = 0x3fcbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x3fcbbc: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x3fcbbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3fcbc0: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x3fcbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x3fcbc4: 0xa0820012  sb          $v0, 0x12($a0)
    ctx->pc = 0x3fcbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcbc8: 0xa0e30016  sb          $v1, 0x16($a3)
    ctx->pc = 0x3fcbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcbcc: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3fcbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x3fcbd0: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x3fcbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x3fcbd4: 0x91220017  lbu         $v0, 0x17($t1)
    ctx->pc = 0x3fcbd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 23)));
    // 0x3fcbd8: 0x91030013  lbu         $v1, 0x13($t0)
    ctx->pc = 0x3fcbd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 19)));
    // 0x3fcbdc: 0x25290018  addiu       $t1, $t1, 0x18
    ctx->pc = 0x3fcbdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
    // 0x3fcbe0: 0xa1420013  sb          $v0, 0x13($t2)
    ctx->pc = 0x3fcbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcbe4: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x3fcbe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x3fcbe8: 0xa0a30017  sb          $v1, 0x17($a1)
    ctx->pc = 0x3fcbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcbec: 0x254a0018  addiu       $t2, $t2, 0x18
    ctx->pc = 0x3fcbecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x3fcbf0: 0x15a0ffd7  bnez        $t5, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3FCBF0u;
    {
        const bool branch_taken_0x3fcbf0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCBF0u;
        // 0x3fcbf4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcbf0) {
            ctx->pc = 0x3FCB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fcb50;
        }
    }
    ctx->pc = 0x3FCBF8u;
    // 0x3fcbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCC00u;
label_3fcc00:
    // 0x3fcc00: 0x1462005d  bne         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x3FCC00u;
    {
        const bool branch_taken_0x3fcc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fcc00) {
            ctx->pc = 0x3FCD78u;
            goto label_3fcd78;
        }
    }
    ctx->pc = 0x3FCC08u;
    // 0x3fcc08: 0x1180ff5b  beqz        $t4, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x3FCC08u;
    {
        const bool branch_taken_0x3fcc08 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC08u;
        // 0x3fcc0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcc08) {
            ctx->pc = 0x3FC978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc978;
        }
    }
    ctx->pc = 0x3FCC10u;
    // 0x3fcc10: 0x31830003  andi        $v1, $t4, 0x3
    ctx->pc = 0x3fcc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x3fcc14: 0x1980001c  blez        $t4, . + 4 + (0x1C << 2)
    ctx->pc = 0x3FCC14u;
    {
        const bool branch_taken_0x3fcc14 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x3FCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC14u;
        // 0x3fcc18: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcc14) {
            ctx->pc = 0x3FCC88u;
            goto label_3fcc88;
        }
    }
    ctx->pc = 0x3FCC1Cu;
    // 0x3fcc1c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3FCC1Cu;
    {
        const bool branch_taken_0x3fcc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCC1Cu;
        // 0x3fcc20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcc1c) {
            ctx->pc = 0x3FCCB8u;
            goto label_3fccb8;
        }
    }
    ctx->pc = 0x3FCC24u;
    // 0x3fcc24: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FCC24u;
    {
        const bool branch_taken_0x3fcc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fcc24) {
            ctx->pc = 0x3FCC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCC24u;
            // 0x3fcc28: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCC8Cu;
            goto label_3fcc8c;
        }
    }
    ctx->pc = 0x3FCC2Cu;
    // 0x3fcc2c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fcc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fcc30: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3FCC30u;
    {
        const bool branch_taken_0x3fcc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fcc30) {
            ctx->pc = 0x3FCC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCC30u;
            // 0x3fcc34: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCC64u;
            goto label_3fcc64;
        }
    }
    ctx->pc = 0x3FCC38u;
    // 0x3fcc38: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3fcc38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fcc3c: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x3fcc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3fcc40: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x3fcc40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3fcc44: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3fcc44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fcc48: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x3fcc48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3fcc4c: 0x90e20005  lbu         $v0, 0x5($a3)
    ctx->pc = 0x3fcc4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x3fcc50: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3fcc50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcc54: 0xa0e50004  sb          $a1, 0x4($a3)
    ctx->pc = 0x3fcc54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x3fcc58: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x3fcc58u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcc5c: 0xa0e40005  sb          $a0, 0x5($a3)
    ctx->pc = 0x3fcc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fcc60: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3fcc60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3fcc64:
    // 0x3fcc64: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3fcc64u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3fcc68: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x3fcc68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3fcc6c: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3fcc6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3fcc70: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x3fcc70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x3fcc74: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fcc74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcc78: 0xa0c50004  sb          $a1, 0x4($a2)
    ctx->pc = 0x3fcc78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x3fcc7c: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3fcc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcc80: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x3fcc80u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fcc84: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3fcc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_3fcc88:
    // 0x3fcc88: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3fcc88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3fcc8c:
    // 0x3fcc8c: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x3fcc8cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
    // 0x3fcc90: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x3fcc90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3fcc94: 0x16c682b  sltu        $t5, $t3, $t4
    ctx->pc = 0x3fcc94u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3fcc98: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3fcc98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3fcc9c: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x3fcc9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x3fcca0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fcca0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcca4: 0xa0c50004  sb          $a1, 0x4($a2)
    ctx->pc = 0x3fcca4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x3fcca8: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3fcca8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fccac: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x3fccacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fccb0: 0x11a0ff31  beqz        $t5, . + 4 + (-0xCF << 2)
    ctx->pc = 0x3FCCB0u;
    {
        const bool branch_taken_0x3fccb0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCCB0u;
        // 0x3fccb4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fccb0) {
            ctx->pc = 0x3FC978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc978;
        }
    }
    ctx->pc = 0x3FCCB8u;
label_3fccb8:
    // 0x3fccb8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3fccb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fccbc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3fccbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fccc0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3fccc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fccc4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3fccc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fccc8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3fccc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcccc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3fccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fccd0:
    // 0x3fccd0: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x3fccd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3fccd4: 0x656b0004  daddiu      $t3, $t3, 0x4
    ctx->pc = 0x3fccd4u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4);
    // 0x3fccd8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3fccd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fccdc: 0x16c682b  sltu        $t5, $t3, $t4
    ctx->pc = 0x3fccdcu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3fcce0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3fcce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcce4: 0xa0e30004  sb          $v1, 0x4($a3)
    ctx->pc = 0x3fcce4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcce8: 0x91220005  lbu         $v0, 0x5($t1)
    ctx->pc = 0x3fcce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x3fccec: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x3fccecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3fccf0: 0xa1420001  sb          $v0, 0x1($t2)
    ctx->pc = 0x3fccf0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fccf4: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x3fccf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fccf8: 0x90c2000c  lbu         $v0, 0xC($a2)
    ctx->pc = 0x3fccf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3fccfc: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x3fccfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3fcd00: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x3fcd00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcd04: 0xa0e3000c  sb          $v1, 0xC($a3)
    ctx->pc = 0x3fcd04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcd08: 0x9122000d  lbu         $v0, 0xD($t1)
    ctx->pc = 0x3fcd08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13)));
    // 0x3fcd0c: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x3fcd0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x3fcd10: 0xa1420009  sb          $v0, 0x9($t2)
    ctx->pc = 0x3fcd10u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcd14: 0xa0a3000d  sb          $v1, 0xD($a1)
    ctx->pc = 0x3fcd14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcd18: 0x90c20014  lbu         $v0, 0x14($a2)
    ctx->pc = 0x3fcd18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3fcd1c: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x3fcd1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3fcd20: 0xa0820010  sb          $v0, 0x10($a0)
    ctx->pc = 0x3fcd20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcd24: 0xa0e30014  sb          $v1, 0x14($a3)
    ctx->pc = 0x3fcd24u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcd28: 0x91220015  lbu         $v0, 0x15($t1)
    ctx->pc = 0x3fcd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 21)));
    // 0x3fcd2c: 0x91030011  lbu         $v1, 0x11($t0)
    ctx->pc = 0x3fcd2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17)));
    // 0x3fcd30: 0xa1420011  sb          $v0, 0x11($t2)
    ctx->pc = 0x3fcd30u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcd34: 0xa0a30015  sb          $v1, 0x15($a1)
    ctx->pc = 0x3fcd34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcd38: 0x90c2001c  lbu         $v0, 0x1C($a2)
    ctx->pc = 0x3fcd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3fcd3c: 0x90830018  lbu         $v1, 0x18($a0)
    ctx->pc = 0x3fcd3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3fcd40: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3fcd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3fcd44: 0xa0820018  sb          $v0, 0x18($a0)
    ctx->pc = 0x3fcd44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcd48: 0xa0e3001c  sb          $v1, 0x1C($a3)
    ctx->pc = 0x3fcd48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcd4c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3fcd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3fcd50: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x3fcd50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x3fcd54: 0x9122001d  lbu         $v0, 0x1D($t1)
    ctx->pc = 0x3fcd54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 29)));
    // 0x3fcd58: 0x91030019  lbu         $v1, 0x19($t0)
    ctx->pc = 0x3fcd58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 25)));
    // 0x3fcd5c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x3fcd5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x3fcd60: 0xa1420019  sb          $v0, 0x19($t2)
    ctx->pc = 0x3fcd60u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fcd64: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x3fcd64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x3fcd68: 0xa0a3001d  sb          $v1, 0x1D($a1)
    ctx->pc = 0x3fcd68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fcd6c: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x3fcd6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x3fcd70: 0x15a0ffd7  bnez        $t5, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3FCD70u;
    {
        const bool branch_taken_0x3fcd70 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FCD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCD70u;
        // 0x3fcd74: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcd70) {
            ctx->pc = 0x3FCCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fccd0;
        }
    }
    ctx->pc = 0x3FCD78u;
label_3fcd78:
    // 0x3fcd78: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCD80u;
}
