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

// Function: sub_0036C7F0
// Address: 0x36c7f0 - 0x36c990
void sub_0036C7F0_0x36c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C7F0_0x36c7f0");
#endif

    switch (ctx->pc) {
        case 0x36c814u: goto label_36c814;
        case 0x36c8b8u: goto label_36c8b8;
        default: break;
    }

    ctx->pc = 0x36c7f0u;

    // 0x36c7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c7f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36c7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c7fc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x36c7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36c800: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36C800u;
    {
        const bool branch_taken_0x36c800 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x36C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C800u;
        // 0x36c804: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c800) {
            ctx->pc = 0x36C81Cu;
            goto label_36c81c;
        }
    }
    ctx->pc = 0x36C808u;
    // 0x36c808: 0x8cc6007c  lw          $a2, 0x7C($a2)
    ctx->pc = 0x36c808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c80c: 0xc0d498a  jal         func_352628
    ctx->pc = 0x36C80Cu;
    SET_GPR_U32(ctx, 31, 0x36C814u);
    ctx->pc = 0x36C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C80Cu;
    // 0x36c810: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352628u, 0x36C80Cu, 0x36C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C814u;
label_36c814:
    // 0x36c814: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x36C814u;
    {
        const bool branch_taken_0x36c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C814u;
        // 0x36c818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c814) {
            ctx->pc = 0x36C984u;
            goto label_36c984;
        }
    }
    ctx->pc = 0x36C81Cu;
label_36c81c:
    // 0x36c81c: 0x18a00058  blez        $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x36C81Cu;
    {
        const bool branch_taken_0x36c81c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x36C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C81Cu;
        // 0x36c820: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c81c) {
            ctx->pc = 0x36C980u;
            goto label_36c980;
        }
    }
    ctx->pc = 0x36C824u;
    // 0x36c824: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x36c824u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36c828: 0x11000023  beqz        $t0, . + 4 + (0x23 << 2)
    ctx->pc = 0x36C828u;
    {
        const bool branch_taken_0x36c828 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C828u;
        // 0x36c82c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c828) {
            ctx->pc = 0x36C8B8u;
            goto label_36c8b8;
        }
    }
    ctx->pc = 0x36C830u;
    // 0x36c830: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x36c830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36c834: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x36C834u;
    {
        const bool branch_taken_0x36c834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C834u;
        // 0x36c838: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c834) {
            ctx->pc = 0x36C8A8u;
            goto label_36c8a8;
        }
    }
    ctx->pc = 0x36C83Cu;
    // 0x36c83c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x36C83Cu;
    {
        const bool branch_taken_0x36c83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C83Cu;
        // 0x36c840: 0x8cc2007c  lw          $v0, 0x7C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c83c) {
            ctx->pc = 0x36C878u;
            goto label_36c878;
        }
    }
    ctx->pc = 0x36C844u;
    // 0x36c844: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36c844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36c848: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c84c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c850: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c854: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c858: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36c858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c85c: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c860: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c864: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36c864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c868: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c86c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x36c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c870: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c874: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_36c878:
    // 0x36c878: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36c878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36c87c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c880: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c884: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c888: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c88c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c890: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c894: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c898: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c89c: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c8a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c8a4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36c8a8:
    // 0x36c8a8: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c8ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x36C8ACu;
    {
        const bool branch_taken_0x36c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C8ACu;
        // 0x36c8b0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c8ac) {
            ctx->pc = 0x36C950u;
            goto label_36c950;
        }
    }
    ctx->pc = 0x36C8B4u;
    // 0x36c8b4: 0x0  nop
    ctx->pc = 0x36c8b4u;
    // NOP
label_36c8b8:
    // 0x36c8b8: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c8bc: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x36c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x36c8c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c8c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c8c8: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c8cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c8d0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c8d4: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c8d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c8dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c8e0: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c8e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c8e8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c8ec: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c8f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c8f4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c8f8: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c8fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c900: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c904: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c908: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c90c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c910: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c914: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c918: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c91c: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c920: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c924: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c928: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c92c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c930: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c934: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c938: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c93c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c940: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c944: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c948: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c94c: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_36c950:
    // 0x36c950: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c954: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c958: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c95c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c960: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c964: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c968: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c96c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c970: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x36c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x36c974: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c978: 0x14a0ffcf  bnez        $a1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x36C978u;
    {
        const bool branch_taken_0x36c978 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C978u;
        // 0x36c97c: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c978) {
            ctx->pc = 0x36C8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c8b8;
        }
    }
    ctx->pc = 0x36C980u;
label_36c980:
    // 0x36c980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36c984:
    // 0x36c984: 0x3e00008  jr          $ra
    ctx->pc = 0x36C984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C984u;
        // 0x36c988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C98Cu;
    // 0x36c98c: 0x0  nop
    ctx->pc = 0x36c98cu;
    // NOP
    ctx->pc = 0x36c990u;
}
