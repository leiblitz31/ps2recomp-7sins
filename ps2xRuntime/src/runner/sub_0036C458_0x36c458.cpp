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

// Function: sub_0036C458
// Address: 0x36c458 - 0x36c628
void sub_0036C458_0x36c458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C458_0x36c458");
#endif

    switch (ctx->pc) {
        case 0x36c488u: goto label_36c488;
        case 0x36c540u: goto label_36c540;
        default: break;
    }

    ctx->pc = 0x36c458u;

    // 0x36c458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c45c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c460: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x36c460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36c464: 0x8cc90030  lw          $t1, 0x30($a2)
    ctx->pc = 0x36c464u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x36c468: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x36c468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x36c46c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x36c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x36c470: 0x15220007  bne         $t1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36C470u;
    {
        const bool branch_taken_0x36c470 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x36C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C470u;
        // 0x36c474: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c470) {
            ctx->pc = 0x36C490u;
            goto label_36c490;
        }
    }
    ctx->pc = 0x36C478u;
    // 0x36c478: 0xa73018  mult        $a2, $a1, $a3
    ctx->pc = 0x36c478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x36c47c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x36c47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c480: 0xc0d4f32  jal         func_353CC8
    ctx->pc = 0x36C480u;
    SET_GPR_U32(ctx, 31, 0x36C488u);
    ctx->pc = 0x36C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C480u;
    // 0x36c484: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353CC8u, 0x36C480u, 0x36C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C488u;
label_36c488:
    // 0x36c488: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x36C488u;
    {
        const bool branch_taken_0x36c488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C488u;
        // 0x36c48c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c488) {
            ctx->pc = 0x36C61Cu;
            goto label_36c61c;
        }
    }
    ctx->pc = 0x36C490u;
label_36c490:
    // 0x36c490: 0x18a00062  blez        $a1, . + 4 + (0x62 << 2)
    ctx->pc = 0x36C490u;
    {
        const bool branch_taken_0x36c490 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x36C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C490u;
        // 0x36c494: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c490) {
            ctx->pc = 0x36C61Cu;
            goto label_36c61c;
        }
    }
    ctx->pc = 0x36C498u;
    // 0x36c498: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x36c498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c49c: 0x692823  subu        $a1, $v1, $t1
    ctx->pc = 0x36c49cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x36c4a0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x36c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x36c4a4: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x36c4a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36c4a8: 0x11000025  beqz        $t0, . + 4 + (0x25 << 2)
    ctx->pc = 0x36C4A8u;
    {
        const bool branch_taken_0x36c4a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C4A8u;
        // 0x36c4ac: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c4a8) {
            ctx->pc = 0x36C540u;
            goto label_36c540;
        }
    }
    ctx->pc = 0x36C4B0u;
    // 0x36c4b0: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x36c4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36c4b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x36C4B4u;
    {
        const bool branch_taken_0x36c4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C4B4u;
        // 0x36c4b8: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c4b4) {
            ctx->pc = 0x36C530u;
            goto label_36c530;
        }
    }
    ctx->pc = 0x36C4BCu;
    // 0x36c4bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36C4BCu;
    {
        const bool branch_taken_0x36c4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C4BCu;
        // 0x36c4c0: 0xa92821  addu        $a1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c4bc) {
            ctx->pc = 0x36C4FCu;
            goto label_36c4fc;
        }
    }
    ctx->pc = 0x36C4C4u;
    // 0x36c4c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x36c4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x36c4c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c4cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c4d0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c4d4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x36c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x36c4d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c4dc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c4e0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x36c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36c4e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c4e8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c4ec: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x36c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36c4f0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x36c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c4f4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c4f8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x36c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_36c4fc:
    // 0x36c4fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x36c4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x36c500: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c504: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c508: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c50c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x36c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x36c510: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c514: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c518: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x36c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36c51c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c520: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c524: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x36c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36c528: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c52c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36c530:
    // 0x36c530: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x36c530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x36c534: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x36C534u;
    {
        const bool branch_taken_0x36c534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C534u;
        // 0x36c538: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c534) {
            ctx->pc = 0x36C5E4u;
            goto label_36c5e4;
        }
    }
    ctx->pc = 0x36C53Cu;
    // 0x36c53c: 0x0  nop
    ctx->pc = 0x36c53cu;
    // NOP
label_36c540:
    // 0x36c540: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x36c540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x36c544: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x36c544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x36c548: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c54c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c550: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c554: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x36c554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x36c558: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c55c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c560: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x36c560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36c564: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c568: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c56c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x36c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36c570: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x36c570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x36c574: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c578: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c57c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c580: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c584: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c588: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x36c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x36c58c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c590: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c594: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x36c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36c598: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c59c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c5a0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x36c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36c5a4: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x36c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x36c5a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c5ac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c5b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c5b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c5b8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c5bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x36c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x36c5c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c5c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c5c8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x36c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36c5cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c5d0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c5d4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x36c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36c5d8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x36c5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x36c5dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c5e0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36c5e4:
    // 0x36c5e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c5e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c5ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c5f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x36c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x36c5f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c5f8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c5fc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x36c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36c600: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c604: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c608: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x36c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36c60c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c610: 0x14c0ffcb  bnez        $a2, . + 4 + (-0x35 << 2)
    ctx->pc = 0x36C610u;
    {
        const bool branch_taken_0x36c610 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C610u;
        // 0x36c614: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c610) {
            ctx->pc = 0x36C540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c540;
        }
    }
    ctx->pc = 0x36C618u;
    // 0x36c618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36c61c:
    // 0x36c61c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C61Cu;
        // 0x36c620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C624u;
    // 0x36c624: 0x0  nop
    ctx->pc = 0x36c624u;
    // NOP
    ctx->pc = 0x36c628u;
}
