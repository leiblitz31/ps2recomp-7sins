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

// Function: sub_004A5510
// Address: 0x4a5510 - 0x4a5628
void sub_004A5510_0x4a5510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5510_0x4a5510");
#endif

    ctx->pc = 0x4a5510u;

    // 0x4a5510: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a5510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a5514: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x4a5514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x4a5518: 0x24635e58  addiu       $v1, $v1, 0x5E58
    ctx->pc = 0x4a5518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24152));
    // 0x4a551c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a551cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a5520: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a5520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a5524: 0x44c03  sra         $t1, $a0, 16
    ctx->pc = 0x4a5524u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4a5528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a5528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a552c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4a552cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a5530: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4a5530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a5534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a5534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5538: 0x1242023  subu        $a0, $t1, $a0
    ctx->pc = 0x4a5538u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x4a553c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a553cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a5540: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5540u;
    {
        const bool branch_taken_0x4a5540 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4A5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5540u;
        // 0x4a5544: 0x33c03  sra         $a3, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5540) {
            ctx->pc = 0x4A5550u;
            goto label_4a5550;
        }
    }
    ctx->pc = 0x4A5548u;
    // 0x4a5548: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x4a5548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a554c: 0x42023  negu        $a0, $a0
    ctx->pc = 0x4a554cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_4a5550:
    // 0x4a5550: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x4a5550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4a5554: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A5554u;
    {
        const bool branch_taken_0x4a5554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5554) {
            ctx->pc = 0x4A5558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5554u;
            // 0x4a5558: 0x33c43  sra         $a3, $v1, 17 (Delay Slot)
            SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5568u;
            goto label_4a5568;
        }
    }
    ctx->pc = 0x4A555Cu;
    // 0x4a555c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x4a555cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4a5560: 0x35080004  ori         $t0, $t0, 0x4
    ctx->pc = 0x4a5560u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
    // 0x4a5564: 0x33c43  sra         $a3, $v1, 17
    ctx->pc = 0x4a5564u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 17));
label_4a5568:
    // 0x4a5568: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x4a5568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4a556c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A556Cu;
    {
        const bool branch_taken_0x4a556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a556c) {
            ctx->pc = 0x4A5570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A556Cu;
            // 0x4a5570: 0x33c83  sra         $a3, $v1, 18 (Delay Slot)
            SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5580u;
            goto label_4a5580;
        }
    }
    ctx->pc = 0x4A5574u;
    // 0x4a5574: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x4a5574u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4a5578: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x4a5578u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x4a557c: 0x33c83  sra         $a3, $v1, 18
    ctx->pc = 0x4a557cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 18));
label_4a5580:
    // 0x4a5580: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x4a5580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4a5584: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A5584u;
    {
        const bool branch_taken_0x4a5584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5584u;
        // 0x4a5588: 0x31020008  andi        $v0, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5584) {
            ctx->pc = 0x4A5598u;
            goto label_4a5598;
        }
    }
    ctx->pc = 0x4A558Cu;
    // 0x4a558c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x4a558cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4a5590: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x4a5590u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x4a5594: 0x31020008  andi        $v0, $t0, 0x8
    ctx->pc = 0x4a5594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
label_4a5598:
    // 0x4a5598: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A5598u;
    {
        const bool branch_taken_0x4a5598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5598u;
        // 0x4a559c: 0x1241021  addu        $v0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5598) {
            ctx->pc = 0x4A55ACu;
            goto label_4a55ac;
        }
    }
    ctx->pc = 0x4A55A0u;
    // 0x4a55a0: 0x31cc3  sra         $v1, $v1, 19
    ctx->pc = 0x4a55a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 19));
    // 0x4a55a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A55A4u;
    {
        const bool branch_taken_0x4a55a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A55A4u;
        // 0x4a55a8: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a55a4) {
            ctx->pc = 0x4A55B8u;
            goto label_4a55b8;
        }
    }
    ctx->pc = 0x4A55ACu;
label_4a55ac:
    // 0x4a55ac: 0x1241023  subu        $v0, $t1, $a0
    ctx->pc = 0x4a55acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x4a55b0: 0x31cc3  sra         $v1, $v1, 19
    ctx->pc = 0x4a55b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 19));
    // 0x4a55b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a55b8:
    // 0x4a55b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a55bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a55c0: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x4a55c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a55c4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x4a55c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4a55c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A55C8u;
    {
        const bool branch_taken_0x4a55c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A55C8u;
        // 0x4a55cc: 0x28628000  slti        $v0, $v1, -0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294934528) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a55c8) {
            ctx->pc = 0x4A55D8u;
            goto label_4a55d8;
        }
    }
    ctx->pc = 0x4A55D0u;
    // 0x4a55d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A55D0u;
    {
        const bool branch_taken_0x4a55d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A55D0u;
        // 0x4a55d4: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a55d0) {
            ctx->pc = 0x4A55E4u;
            goto label_4a55e4;
        }
    }
    ctx->pc = 0x4A55D8u;
label_4a55d8:
    // 0x4a55d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A55D8u;
    {
        const bool branch_taken_0x4a55d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A55D8u;
        // 0x4a55dc: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a55d8) {
            ctx->pc = 0x4A55E4u;
            goto label_4a55e4;
        }
    }
    ctx->pc = 0x4A55E0u;
    // 0x4a55e0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a55e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4a55e4:
    // 0x4a55e4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4a55e8: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x4a55e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x4a55ec: 0x24425e38  addiu       $v0, $v0, 0x5E38
    ctx->pc = 0x4a55ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24120));
    // 0x4a55f0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4a55f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a55f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a55f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a55f8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x4a55f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a55fc: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x4a55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4a5600: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5600u;
    {
        const bool branch_taken_0x4a5600 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A5604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5600u;
        // 0x4a5604: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5600) {
            ctx->pc = 0x4A5610u;
            goto label_4a5610;
        }
    }
    ctx->pc = 0x4A5608u;
    // 0x4a5608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A5608u;
    {
        const bool branch_taken_0x4a5608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5608u;
        // 0x4a560c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5608) {
            ctx->pc = 0x4A5620u;
            goto label_4a5620;
        }
    }
    ctx->pc = 0x4A5610u;
label_4a5610:
    // 0x4a5610: 0x28420059  slti        $v0, $v0, 0x59
    ctx->pc = 0x4a5610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x4a5614: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A5614u;
    {
        const bool branch_taken_0x4a5614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5614u;
        // 0x4a5618: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5614) {
            ctx->pc = 0x4A5620u;
            goto label_4a5620;
        }
    }
    ctx->pc = 0x4A561Cu;
    // 0x4a561c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a561cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4a5620:
    // 0x4a5620: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5620u;
        // 0x4a5624: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5628u;
}
