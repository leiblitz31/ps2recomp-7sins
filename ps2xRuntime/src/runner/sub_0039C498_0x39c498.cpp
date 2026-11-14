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

// Function: sub_0039C498
// Address: 0x39c498 - 0x39c5c8
void sub_0039C498_0x39c498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C498_0x39c498");
#endif

    switch (ctx->pc) {
        case 0x39c498u: goto label_39c498;
        case 0x39c49cu: goto label_39c49c;
        case 0x39c4a0u: goto label_39c4a0;
        case 0x39c4a4u: goto label_39c4a4;
        case 0x39c4a8u: goto label_39c4a8;
        case 0x39c4acu: goto label_39c4ac;
        case 0x39c4b0u: goto label_39c4b0;
        case 0x39c4b4u: goto label_39c4b4;
        case 0x39c4b8u: goto label_39c4b8;
        case 0x39c4bcu: goto label_39c4bc;
        case 0x39c4c0u: goto label_39c4c0;
        case 0x39c4c4u: goto label_39c4c4;
        case 0x39c4c8u: goto label_39c4c8;
        case 0x39c4ccu: goto label_39c4cc;
        case 0x39c4d0u: goto label_39c4d0;
        case 0x39c4d4u: goto label_39c4d4;
        case 0x39c4d8u: goto label_39c4d8;
        case 0x39c4dcu: goto label_39c4dc;
        case 0x39c4e0u: goto label_39c4e0;
        case 0x39c4e4u: goto label_39c4e4;
        case 0x39c4e8u: goto label_39c4e8;
        case 0x39c4ecu: goto label_39c4ec;
        case 0x39c4f0u: goto label_39c4f0;
        case 0x39c4f4u: goto label_39c4f4;
        case 0x39c4f8u: goto label_39c4f8;
        case 0x39c4fcu: goto label_39c4fc;
        case 0x39c500u: goto label_39c500;
        case 0x39c504u: goto label_39c504;
        case 0x39c508u: goto label_39c508;
        case 0x39c50cu: goto label_39c50c;
        case 0x39c510u: goto label_39c510;
        case 0x39c514u: goto label_39c514;
        case 0x39c518u: goto label_39c518;
        case 0x39c51cu: goto label_39c51c;
        case 0x39c520u: goto label_39c520;
        case 0x39c524u: goto label_39c524;
        case 0x39c528u: goto label_39c528;
        case 0x39c52cu: goto label_39c52c;
        case 0x39c530u: goto label_39c530;
        case 0x39c534u: goto label_39c534;
        case 0x39c538u: goto label_39c538;
        case 0x39c53cu: goto label_39c53c;
        case 0x39c540u: goto label_39c540;
        case 0x39c544u: goto label_39c544;
        case 0x39c548u: goto label_39c548;
        case 0x39c54cu: goto label_39c54c;
        case 0x39c550u: goto label_39c550;
        case 0x39c554u: goto label_39c554;
        case 0x39c558u: goto label_39c558;
        case 0x39c55cu: goto label_39c55c;
        case 0x39c560u: goto label_39c560;
        case 0x39c564u: goto label_39c564;
        case 0x39c568u: goto label_39c568;
        case 0x39c56cu: goto label_39c56c;
        case 0x39c570u: goto label_39c570;
        case 0x39c574u: goto label_39c574;
        case 0x39c578u: goto label_39c578;
        case 0x39c57cu: goto label_39c57c;
        case 0x39c580u: goto label_39c580;
        case 0x39c584u: goto label_39c584;
        case 0x39c588u: goto label_39c588;
        case 0x39c58cu: goto label_39c58c;
        case 0x39c590u: goto label_39c590;
        case 0x39c594u: goto label_39c594;
        case 0x39c598u: goto label_39c598;
        case 0x39c59cu: goto label_39c59c;
        case 0x39c5a0u: goto label_39c5a0;
        case 0x39c5a4u: goto label_39c5a4;
        case 0x39c5a8u: goto label_39c5a8;
        case 0x39c5acu: goto label_39c5ac;
        case 0x39c5b0u: goto label_39c5b0;
        case 0x39c5b4u: goto label_39c5b4;
        case 0x39c5b8u: goto label_39c5b8;
        case 0x39c5bcu: goto label_39c5bc;
        case 0x39c5c0u: goto label_39c5c0;
        case 0x39c5c4u: goto label_39c5c4;
        default: break;
    }

    ctx->pc = 0x39c498u;

label_39c498:
    // 0x39c498: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39c498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_39c49c:
    // 0x39c49c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x39c49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_39c4a0:
    // 0x39c4a0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x39c4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_39c4a4:
    // 0x39c4a4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x39c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_39c4a8:
    // 0x39c4a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39c4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c4ac:
    // 0x39c4ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39c4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39c4b0:
    // 0x39c4b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39c4b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39c4b4:
    // 0x39c4b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39c4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39c4b8:
    // 0x39c4b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39c4b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39c4bc:
    // 0x39c4bc: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x39c4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_39c4c0:
    // 0x39c4c0: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x39c4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_39c4c4:
    // 0x39c4c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x39c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_39c4c8:
    // 0x39c4c8: 0x10b00014  beq         $a1, $s0, . + 4 + (0x14 << 2)
label_39c4cc:
    if (ctx->pc == 0x39C4CCu) {
        ctx->pc = 0x39C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4C8u;
        // 0x39c4cc: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4D0u;
        goto label_39c4d0;
    }
    ctx->pc = 0x39C4C8u;
    {
        const bool branch_taken_0x39c4c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x39C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4C8u;
        // 0x39c4cc: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c4c8) {
            ctx->pc = 0x39C51Cu;
            goto label_39c51c;
        }
    }
    ctx->pc = 0x39C4D0u;
label_39c4d0:
    // 0x39c4d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39c4d4:
    // 0x39c4d4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x39c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_39c4d8:
    // 0x39c4d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_39c4dc:
    // 0x39c4dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39c4e0:
    // 0x39c4e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x39c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_39c4e4:
    // 0x39c4e4: 0xac5d0004  sw          $sp, 0x4($v0)
    ctx->pc = 0x39c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
label_39c4e8:
    // 0x39c4e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_39c4ec:
    if (ctx->pc == 0x39C4ECu) {
        ctx->pc = 0x39C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4E8u;
        // 0x39c4ec: 0xacbd0000  sw          $sp, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4F0u;
        goto label_39c4f0;
    }
    ctx->pc = 0x39C4E8u;
    {
        const bool branch_taken_0x39c4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4E8u;
        // 0x39c4ec: 0xacbd0000  sw          $sp, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c4e8) {
            ctx->pc = 0x39C500u;
            goto label_39c500;
        }
    }
    ctx->pc = 0x39C4F0u;
label_39c4f0:
    // 0x39c4f0: 0x260f809  jalr        $s3
label_39c4f4:
    if (ctx->pc == 0x39C4F4u) {
        ctx->pc = 0x39C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4F0u;
        // 0x39c4f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4F8u;
        goto label_39c4f8;
    }
    ctx->pc = 0x39C4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x39C4F8u);
        ctx->pc = 0x39C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4F0u;
        // 0x39c4f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C4F0u, 0x39C4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C4F8u;
label_39c4f8:
    // 0x39c4f8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_39c4fc:
    if (ctx->pc == 0x39C4FCu) {
        ctx->pc = 0x39C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4F8u;
        // 0x39c4fc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C500u;
        goto label_39c500;
    }
    ctx->pc = 0x39C4F8u;
    {
        const bool branch_taken_0x39c4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4F8u;
        // 0x39c4fc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c4f8) {
            ctx->pc = 0x39C56Cu;
            goto label_39c56c;
        }
    }
    ctx->pc = 0x39C500u;
label_39c500:
    // 0x39c500: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c504:
    // 0x39c504: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39c504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c508:
    // 0x39c508: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x39c508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_39c50c:
    // 0x39c50c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c510:
    // 0x39c510: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c514:
    // 0x39c514: 0x14b0ffee  bne         $a1, $s0, . + 4 + (-0x12 << 2)
label_39c518:
    if (ctx->pc == 0x39C518u) {
        ctx->pc = 0x39C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C514u;
        // 0x39c518: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C51Cu;
        goto label_39c51c;
    }
    ctx->pc = 0x39C514u;
    {
        const bool branch_taken_0x39c514 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x39C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C514u;
        // 0x39c518: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c514) {
            ctx->pc = 0x39C4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c4d0;
        }
    }
    ctx->pc = 0x39C51Cu;
label_39c51c:
    // 0x39c51c: 0xc0e69e4  jal         func_39A790
label_39c520:
    if (ctx->pc == 0x39C520u) {
        ctx->pc = 0x39C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C51Cu;
        // 0x39c520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C524u;
        goto label_39c524;
    }
    ctx->pc = 0x39C51Cu;
    SET_GPR_U32(ctx, 31, 0x39C524u);
    ctx->pc = 0x39C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C51Cu;
    // 0x39c520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x39C51Cu, 0x39C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C524u;
label_39c524:
    // 0x39c524: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_39c528:
    if (ctx->pc == 0x39C528u) {
        ctx->pc = 0x39C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C524u;
        // 0x39c528: 0x2450003c  addiu       $s0, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C52Cu;
        goto label_39c52c;
    }
    ctx->pc = 0x39C524u;
    {
        const bool branch_taken_0x39c524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C524u;
        // 0x39c528: 0x2450003c  addiu       $s0, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c524) {
            ctx->pc = 0x39C5A4u;
            goto label_39c5a4;
        }
    }
    ctx->pc = 0x39C52Cu;
label_39c52c:
    // 0x39c52c: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x39c52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_39c530:
    // 0x39c530: 0x10b0001d  beq         $a1, $s0, . + 4 + (0x1D << 2)
label_39c534:
    if (ctx->pc == 0x39C534u) {
        ctx->pc = 0x39C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C530u;
        // 0x39c534: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C538u;
        goto label_39c538;
    }
    ctx->pc = 0x39C530u;
    {
        const bool branch_taken_0x39c530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x39C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C530u;
        // 0x39c534: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c530) {
            ctx->pc = 0x39C5A8u;
            goto label_39c5a8;
        }
    }
    ctx->pc = 0x39C538u;
label_39c538:
    // 0x39c538: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39c53c:
    // 0x39c53c: 0x24a4ffcc  addiu       $a0, $a1, -0x34
    ctx->pc = 0x39c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967244));
label_39c540:
    // 0x39c540: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x39c540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_39c544:
    // 0x39c544: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39c544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_39c548:
    // 0x39c548: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39c54c:
    // 0x39c54c: 0xac5d0004  sw          $sp, 0x4($v0)
    ctx->pc = 0x39c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
label_39c550:
    // 0x39c550: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_39c554:
    if (ctx->pc == 0x39C554u) {
        ctx->pc = 0x39C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C550u;
        // 0x39c554: 0xacbd0000  sw          $sp, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C558u;
        goto label_39c558;
    }
    ctx->pc = 0x39C550u;
    {
        const bool branch_taken_0x39c550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C550u;
        // 0x39c554: 0xacbd0000  sw          $sp, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c550) {
            ctx->pc = 0x39C588u;
            goto label_39c588;
        }
    }
    ctx->pc = 0x39C558u;
label_39c558:
    // 0x39c558: 0x260f809  jalr        $s3
label_39c55c:
    if (ctx->pc == 0x39C55Cu) {
        ctx->pc = 0x39C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C558u;
        // 0x39c55c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C560u;
        goto label_39c560;
    }
    ctx->pc = 0x39C558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x39C560u);
        ctx->pc = 0x39C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C558u;
        // 0x39c55c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C558u, 0x39C560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C560u;
label_39c560:
    // 0x39c560: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_39c564:
    if (ctx->pc == 0x39C564u) {
        ctx->pc = 0x39C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C560u;
        // 0x39c564: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C568u;
        goto label_39c568;
    }
    ctx->pc = 0x39C560u;
    {
        const bool branch_taken_0x39c560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C560u;
        // 0x39c564: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c560) {
            ctx->pc = 0x39C58Cu;
            goto label_39c58c;
        }
    }
    ctx->pc = 0x39C568u;
label_39c568:
    // 0x39c568: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c56c:
    // 0x39c56c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39c56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c570:
    // 0x39c570: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x39c570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c574:
    // 0x39c574: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39c574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_39c578:
    // 0x39c578: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39c578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c57c:
    // 0x39c57c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c580:
    // 0x39c580: 0x10000009  b           . + 4 + (0x9 << 2)
label_39c584:
    if (ctx->pc == 0x39C584u) {
        ctx->pc = 0x39C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C580u;
        // 0x39c584: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C588u;
        goto label_39c588;
    }
    ctx->pc = 0x39C580u;
    {
        const bool branch_taken_0x39c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C580u;
        // 0x39c584: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c580) {
            ctx->pc = 0x39C5A8u;
            goto label_39c5a8;
        }
    }
    ctx->pc = 0x39C588u;
label_39c588:
    // 0x39c588: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c58c:
    // 0x39c58c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c590:
    // 0x39c590: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x39c590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_39c594:
    // 0x39c594: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39c594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c598:
    // 0x39c598: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39c598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c59c:
    // 0x39c59c: 0x14b0ffe6  bne         $a1, $s0, . + 4 + (-0x1A << 2)
label_39c5a0:
    if (ctx->pc == 0x39C5A0u) {
        ctx->pc = 0x39C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C59Cu;
        // 0x39c5a0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C5A4u;
        goto label_39c5a4;
    }
    ctx->pc = 0x39C59Cu;
    {
        const bool branch_taken_0x39c59c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x39C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C59Cu;
        // 0x39c5a0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c59c) {
            ctx->pc = 0x39C538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c538;
        }
    }
    ctx->pc = 0x39C5A4u;
label_39c5a4:
    // 0x39c5a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39c5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c5a8:
    // 0x39c5a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x39c5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39c5ac:
    // 0x39c5ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x39c5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39c5b0:
    // 0x39c5b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x39c5b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c5b4:
    // 0x39c5b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39c5b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c5b8:
    // 0x39c5b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39c5bc:
    // 0x39c5bc: 0x3e00008  jr          $ra
label_39c5c0:
    if (ctx->pc == 0x39C5C0u) {
        ctx->pc = 0x39C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5BCu;
        // 0x39c5c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C5C4u;
        goto label_39c5c4;
    }
    ctx->pc = 0x39C5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5BCu;
        // 0x39c5c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C5C4u;
label_39c5c4:
    // 0x39c5c4: 0x0  nop
    ctx->pc = 0x39c5c4u;
    // NOP
    ctx->pc = 0x39c5c8u;
}
