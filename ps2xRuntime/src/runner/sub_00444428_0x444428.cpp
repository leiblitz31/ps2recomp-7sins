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

// Function: sub_00444428
// Address: 0x444428 - 0x4446c0
void sub_00444428_0x444428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444428_0x444428");
#endif

    switch (ctx->pc) {
        case 0x444518u: goto label_444518;
        case 0x444524u: goto label_444524;
        case 0x4446a0u: goto label_4446a0;
        case 0x4446acu: goto label_4446ac;
        default: break;
    }

    ctx->pc = 0x444428u;

    // 0x444428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x444428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44442c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x44442cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444430: 0x10c0003f  beqz        $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x444430u;
    {
        const bool branch_taken_0x444430 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x444434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444430u;
        // 0x444434: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444430) {
            ctx->pc = 0x444530u;
            goto label_444530;
        }
    }
    ctx->pc = 0x444438u;
    // 0x444438: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x444438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x44443c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x44443cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x444440: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x444440u;
    {
        const bool branch_taken_0x444440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444440u;
        // 0x444444: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444440) {
            ctx->pc = 0x444508u;
            goto label_444508;
        }
    }
    ctx->pc = 0x444448u;
    // 0x444448: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x444448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x44444c: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x44444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x444450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444454: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x444454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x444458: 0x800008  jr          $a0
    ctx->pc = 0x444458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x444460u: goto label_444460;
            case 0x44447Cu: goto label_44447c;
            case 0x444498u: goto label_444498;
            case 0x4444B4u: goto label_4444b4;
            case 0x4444D0u: goto label_4444d0;
            case 0x4444ECu: goto label_4444ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444458u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x444460u;
label_444460:
    // 0x444460: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x444460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444464: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x444464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x444468: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x444468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x44446c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x44446cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444470: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x444470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x444474: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x444474u;
    {
        const bool branch_taken_0x444474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444474u;
        // 0x444478: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444474) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x44447Cu;
label_44447c:
    // 0x44447c: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x44447cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444480: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x444480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x444484: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x444484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x444488: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x444488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44448c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x44448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x444490: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x444490u;
    {
        const bool branch_taken_0x444490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444490u;
        // 0x444494: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444490) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x444498u;
label_444498:
    // 0x444498: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x444498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x44449c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x44449cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4444a0: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x4444a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x4444a4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4444a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4444a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4444a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4444ac: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x4444ACu;
    {
        const bool branch_taken_0x4444ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4444B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4444ACu;
        // 0x4444b0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4444ac) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x4444B4u;
label_4444b4:
    // 0x4444b4: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x4444b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4444b8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4444b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4444bc: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x4444bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x4444c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4444c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4444c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4444c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4444c8: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x4444C8u;
    {
        const bool branch_taken_0x4444c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4444CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4444C8u;
        // 0x4444cc: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4444c8) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x4444D0u;
label_4444d0:
    // 0x4444d0: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x4444d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4444d4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4444d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4444d8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x4444d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x4444dc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4444dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4444e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4444e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4444e4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x4444E4u;
    {
        const bool branch_taken_0x4444e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4444E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4444E4u;
        // 0x4444e8: 0xac860014  sw          $a2, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4444e4) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x4444ECu;
label_4444ec:
    // 0x4444ec: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x4444ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4444f0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4444f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4444f4: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x4444f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x4444f8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4444f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4444fc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4444fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x444500: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x444500u;
    {
        const bool branch_taken_0x444500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444500u;
        // 0x444504: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444500) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x444508u;
label_444508:
    // 0x444508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x444508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44450c: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x44450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x444510: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x444510u;
    SET_GPR_U32(ctx, 31, 0x444518u);
    ctx->pc = 0x444514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444510u;
    // 0x444514: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x444510u, 0x444518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444518u;
label_444518:
    // 0x444518: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x444518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44451c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x44451Cu;
    SET_GPR_U32(ctx, 31, 0x444524u);
    ctx->pc = 0x444520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44451Cu;
    // 0x444520: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44451Cu, 0x444524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444524u;
label_444524:
    // 0x444524: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x444524u;
    {
        const bool branch_taken_0x444524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444524u;
        // 0x444528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444524) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x44452Cu;
    // 0x44452c: 0x0  nop
    ctx->pc = 0x44452cu;
    // NOP
label_444530:
    // 0x444530: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x444530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x444534: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x444534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x444538: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x444538u;
    {
        const bool branch_taken_0x444538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444538u;
        // 0x44453c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444538) {
            ctx->pc = 0x444690u;
            goto label_444690;
        }
    }
    ctx->pc = 0x444540u;
    // 0x444540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x444540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x444544: 0x24421780  addiu       $v0, $v0, 0x1780
    ctx->pc = 0x444544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
    // 0x444548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44454c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x44454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x444550: 0x800008  jr          $a0
    ctx->pc = 0x444550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x444558u: goto label_444558;
            case 0x44458Cu: goto label_44458c;
            case 0x4445C0u: goto label_4445c0;
            case 0x4445F4u: goto label_4445f4;
            case 0x444628u: goto label_444628;
            case 0x44465Cu: goto label_44465c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444550u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x444558u;
label_444558:
    // 0x444558: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x444558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x44455c: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x44455cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444560: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x444560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444564: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x444564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x444568: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x444568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x44456c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x44456Cu;
    {
        const bool branch_taken_0x44456c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44456c) {
            ctx->pc = 0x444570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44456Cu;
            // 0x444570: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444578u;
            goto label_444578;
        }
    }
    ctx->pc = 0x444574u;
    // 0x444574: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x444574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_444578:
    // 0x444578: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x44457c: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x44457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444580: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444584: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x444584u;
    {
        const bool branch_taken_0x444584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444584u;
        // 0x444588: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444584) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x44458Cu;
label_44458c:
    // 0x44458c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x44458cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x444590: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x444590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444594: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x444594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444598: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x444598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x44459c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x44459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x4445a0: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4445A0u;
    {
        const bool branch_taken_0x4445a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4445a0) {
            ctx->pc = 0x4445A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4445A0u;
            // 0x4445a4: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4445ACu;
            goto label_4445ac;
        }
    }
    ctx->pc = 0x4445A8u;
    // 0x4445a8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x4445a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_4445ac:
    // 0x4445ac: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x4445acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4445b0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x4445b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x4445b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4445b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4445b8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x4445B8u;
    {
        const bool branch_taken_0x4445b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4445BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4445B8u;
        // 0x4445bc: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4445b8) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x4445C0u;
label_4445c0:
    // 0x4445c0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4445c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4445c4: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x4445c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4445c8: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x4445c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x4445cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4445ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4445d0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x4445d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x4445d4: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4445D4u;
    {
        const bool branch_taken_0x4445d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4445d4) {
            ctx->pc = 0x4445D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4445D4u;
            // 0x4445d8: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4445E0u;
            goto label_4445e0;
        }
    }
    ctx->pc = 0x4445DCu;
    // 0x4445dc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4445dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_4445e0:
    // 0x4445e0: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x4445e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4445e4: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x4445e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x4445e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4445e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4445ec: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x4445ECu;
    {
        const bool branch_taken_0x4445ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4445F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4445ECu;
        // 0x4445f0: 0x8c620028  lw          $v0, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4445ec) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x4445F4u;
label_4445f4:
    // 0x4445f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4445f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4445f8: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x4445f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4445fc: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x4445fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444600: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x444600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x444604: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x444604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x444608: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x444608u;
    {
        const bool branch_taken_0x444608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x444608) {
            ctx->pc = 0x44460Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444608u;
            // 0x44460c: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444614u;
            goto label_444614;
        }
    }
    ctx->pc = 0x444610u;
    // 0x444610: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x444610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_444614:
    // 0x444614: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444618: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x444618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x44461c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444620: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x444620u;
    {
        const bool branch_taken_0x444620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444620u;
        // 0x444624: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444620) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x444628u;
label_444628:
    // 0x444628: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x444628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x44462c: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x44462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444630: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x444630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444634: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x444634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x444638: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x444638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x44463c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x44463Cu;
    {
        const bool branch_taken_0x44463c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44463c) {
            ctx->pc = 0x444640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44463Cu;
            // 0x444640: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444648u;
            goto label_444648;
        }
    }
    ctx->pc = 0x444644u;
    // 0x444644: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x444644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_444648:
    // 0x444648: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x44464c: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x44464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444654: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x444654u;
    {
        const bool branch_taken_0x444654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444654u;
        // 0x444658: 0x8c620030  lw          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444654) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x44465Cu;
label_44465c:
    // 0x44465c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x44465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x444660: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x444660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444664: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x444664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444668: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x444668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x44466c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x44466cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x444670: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x444670u;
    {
        const bool branch_taken_0x444670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x444670) {
            ctx->pc = 0x444674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444670u;
            // 0x444674: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44467Cu;
            goto label_44467c;
        }
    }
    ctx->pc = 0x444678u;
    // 0x444678: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x444678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_44467c:
    // 0x44467c: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x44467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444680: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x444680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444684: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444688: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x444688u;
    {
        const bool branch_taken_0x444688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444688u;
        // 0x44468c: 0x8c620034  lw          $v0, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444688) {
            ctx->pc = 0x4446B0u;
            goto label_4446b0;
        }
    }
    ctx->pc = 0x444690u;
label_444690:
    // 0x444690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x444690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x444694: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x444694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x444698: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x444698u;
    SET_GPR_U32(ctx, 31, 0x4446A0u);
    ctx->pc = 0x44469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444698u;
    // 0x44469c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x444698u, 0x4446A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4446A0u;
label_4446a0:
    // 0x4446a0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4446a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4446a4: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x4446A4u;
    SET_GPR_U32(ctx, 31, 0x4446ACu);
    ctx->pc = 0x4446A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4446A4u;
    // 0x4446a8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4446A4u, 0x4446ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4446ACu;
label_4446ac:
    // 0x4446ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4446acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4446b0:
    // 0x4446b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4446b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4446b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4446B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4446B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4446B4u;
        // 0x4446b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4446B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4446BCu;
    // 0x4446bc: 0x0  nop
    ctx->pc = 0x4446bcu;
    // NOP
    ctx->pc = 0x4446c0u;
}
