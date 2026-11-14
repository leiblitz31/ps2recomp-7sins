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

// Function: sub_003258B8
// Address: 0x3258b8 - 0x325a20
void sub_003258B8_0x3258b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003258B8_0x3258b8");
#endif

    switch (ctx->pc) {
        case 0x3258b8u: goto label_3258b8;
        case 0x3258bcu: goto label_3258bc;
        case 0x3258c0u: goto label_3258c0;
        case 0x3258c4u: goto label_3258c4;
        case 0x3258c8u: goto label_3258c8;
        case 0x3258ccu: goto label_3258cc;
        case 0x3258d0u: goto label_3258d0;
        case 0x3258d4u: goto label_3258d4;
        case 0x3258d8u: goto label_3258d8;
        case 0x3258dcu: goto label_3258dc;
        case 0x3258e0u: goto label_3258e0;
        case 0x3258e4u: goto label_3258e4;
        case 0x3258e8u: goto label_3258e8;
        case 0x3258ecu: goto label_3258ec;
        case 0x3258f0u: goto label_3258f0;
        case 0x3258f4u: goto label_3258f4;
        case 0x3258f8u: goto label_3258f8;
        case 0x3258fcu: goto label_3258fc;
        case 0x325900u: goto label_325900;
        case 0x325904u: goto label_325904;
        case 0x325908u: goto label_325908;
        case 0x32590cu: goto label_32590c;
        case 0x325910u: goto label_325910;
        case 0x325914u: goto label_325914;
        case 0x325918u: goto label_325918;
        case 0x32591cu: goto label_32591c;
        case 0x325920u: goto label_325920;
        case 0x325924u: goto label_325924;
        case 0x325928u: goto label_325928;
        case 0x32592cu: goto label_32592c;
        case 0x325930u: goto label_325930;
        case 0x325934u: goto label_325934;
        case 0x325938u: goto label_325938;
        case 0x32593cu: goto label_32593c;
        case 0x325940u: goto label_325940;
        case 0x325944u: goto label_325944;
        case 0x325948u: goto label_325948;
        case 0x32594cu: goto label_32594c;
        case 0x325950u: goto label_325950;
        case 0x325954u: goto label_325954;
        case 0x325958u: goto label_325958;
        case 0x32595cu: goto label_32595c;
        case 0x325960u: goto label_325960;
        case 0x325964u: goto label_325964;
        case 0x325968u: goto label_325968;
        case 0x32596cu: goto label_32596c;
        case 0x325970u: goto label_325970;
        case 0x325974u: goto label_325974;
        case 0x325978u: goto label_325978;
        case 0x32597cu: goto label_32597c;
        case 0x325980u: goto label_325980;
        case 0x325984u: goto label_325984;
        case 0x325988u: goto label_325988;
        case 0x32598cu: goto label_32598c;
        case 0x325990u: goto label_325990;
        case 0x325994u: goto label_325994;
        case 0x325998u: goto label_325998;
        case 0x32599cu: goto label_32599c;
        case 0x3259a0u: goto label_3259a0;
        case 0x3259a4u: goto label_3259a4;
        case 0x3259a8u: goto label_3259a8;
        case 0x3259acu: goto label_3259ac;
        case 0x3259b0u: goto label_3259b0;
        case 0x3259b4u: goto label_3259b4;
        case 0x3259b8u: goto label_3259b8;
        case 0x3259bcu: goto label_3259bc;
        case 0x3259c0u: goto label_3259c0;
        case 0x3259c4u: goto label_3259c4;
        case 0x3259c8u: goto label_3259c8;
        case 0x3259ccu: goto label_3259cc;
        case 0x3259d0u: goto label_3259d0;
        case 0x3259d4u: goto label_3259d4;
        case 0x3259d8u: goto label_3259d8;
        case 0x3259dcu: goto label_3259dc;
        case 0x3259e0u: goto label_3259e0;
        case 0x3259e4u: goto label_3259e4;
        case 0x3259e8u: goto label_3259e8;
        case 0x3259ecu: goto label_3259ec;
        case 0x3259f0u: goto label_3259f0;
        case 0x3259f4u: goto label_3259f4;
        case 0x3259f8u: goto label_3259f8;
        case 0x3259fcu: goto label_3259fc;
        case 0x325a00u: goto label_325a00;
        case 0x325a04u: goto label_325a04;
        case 0x325a08u: goto label_325a08;
        case 0x325a0cu: goto label_325a0c;
        case 0x325a10u: goto label_325a10;
        case 0x325a14u: goto label_325a14;
        case 0x325a18u: goto label_325a18;
        case 0x325a1cu: goto label_325a1c;
        default: break;
    }

    ctx->pc = 0x3258b8u;

label_3258b8:
    // 0x3258b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3258b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3258bc:
    // 0x3258bc: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x3258bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_3258c0:
    // 0x3258c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3258c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3258c4:
    // 0x3258c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3258c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3258c8:
    // 0x3258c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3258c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3258cc:
    // 0x3258cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3258ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3258d0:
    // 0x3258d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3258d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3258d4:
    // 0x3258d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3258d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3258d8:
    // 0x3258d8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3258d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3258dc:
    // 0x3258dc: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
label_3258e0:
    if (ctx->pc == 0x3258E0u) {
        ctx->pc = 0x3258E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258DCu;
        // 0x3258e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3258E4u;
        goto label_3258e4;
    }
    ctx->pc = 0x3258DCu;
    {
        const bool branch_taken_0x3258dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3258E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258DCu;
        // 0x3258e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3258dc) {
            ctx->pc = 0x32592Cu;
            goto label_32592c;
        }
    }
    ctx->pc = 0x3258E4u;
label_3258e4:
    // 0x3258e4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3258e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3258e8:
    // 0x3258e8: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x3258e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_3258ec:
    // 0x3258ec: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x3258ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_3258f0:
    // 0x3258f0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3258f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3258f4:
    // 0x3258f4: 0x8cc422d0  lw          $a0, 0x22D0($a2)
    ctx->pc = 0x3258f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8912)));
label_3258f8:
    // 0x3258f8: 0x40f809  jalr        $v0
label_3258fc:
    if (ctx->pc == 0x3258FCu) {
        ctx->pc = 0x3258FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258F8u;
        // 0x3258fc: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x325900u;
        goto label_325900;
    }
    ctx->pc = 0x3258F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x325900u);
        ctx->pc = 0x3258FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258F8u;
        // 0x3258fc: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3258F8u, 0x325900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x325900u;
label_325900:
    // 0x325900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x325900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_325904:
    // 0x325904: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_325908:
    if (ctx->pc == 0x325908u) {
        ctx->pc = 0x325908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325904u;
        // 0x325908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32590Cu;
        goto label_32590c;
    }
    ctx->pc = 0x325904u;
    {
        const bool branch_taken_0x325904 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x325908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325904u;
        // 0x325908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325904) {
            ctx->pc = 0x325914u;
            goto label_325914;
        }
    }
    ctx->pc = 0x32590Cu;
label_32590c:
    // 0x32590c: 0x10000007  b           . + 4 + (0x7 << 2)
label_325910:
    if (ctx->pc == 0x325910u) {
        ctx->pc = 0x325910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32590Cu;
        // 0x325910: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325914u;
        goto label_325914;
    }
    ctx->pc = 0x32590Cu;
    {
        const bool branch_taken_0x32590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32590Cu;
        // 0x325910: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32590c) {
            ctx->pc = 0x32592Cu;
            goto label_32592c;
        }
    }
    ctx->pc = 0x325914u;
label_325914:
    // 0x325914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325918:
    // 0x325918: 0xc0bb7e6  jal         func_2EDF98
label_32591c:
    if (ctx->pc == 0x32591Cu) {
        ctx->pc = 0x32591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325918u;
        // 0x32591c: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325920u;
        goto label_325920;
    }
    ctx->pc = 0x325918u;
    SET_GPR_U32(ctx, 31, 0x325920u);
    ctx->pc = 0x32591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325918u;
    // 0x32591c: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x325918u, 0x325920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325920u;
label_325920:
    // 0x325920: 0x8f83a634  lw          $v1, -0x59CC($gp)
    ctx->pc = 0x325920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_325924:
    // 0x325924: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x325924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_325928:
    // 0x325928: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x325928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_32592c:
    // 0x32592c: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_325930:
    if (ctx->pc == 0x325930u) {
        ctx->pc = 0x325930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32592Cu;
        // 0x325930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325934u;
        goto label_325934;
    }
    ctx->pc = 0x32592Cu;
    {
        const bool branch_taken_0x32592c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x325930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32592Cu;
        // 0x325930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32592c) {
            ctx->pc = 0x325A04u;
            goto label_325a04;
        }
    }
    ctx->pc = 0x325934u;
label_325934:
    // 0x325934: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_325938:
    if (ctx->pc == 0x325938u) {
        ctx->pc = 0x32593Cu;
        goto label_32593c;
    }
    ctx->pc = 0x325934u;
    {
        const bool branch_taken_0x325934 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x325934) {
            ctx->pc = 0x325950u;
            goto label_325950;
        }
    }
    ctx->pc = 0x32593Cu;
label_32593c:
    // 0x32593c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x32593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_325940:
    // 0x325940: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_325944:
    if (ctx->pc == 0x325944u) {
        ctx->pc = 0x325944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325940u;
        // 0x325944: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x325948u;
        goto label_325948;
    }
    ctx->pc = 0x325940u;
    {
        const bool branch_taken_0x325940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x325940) {
            ctx->pc = 0x325944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325940u;
            // 0x325944: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32595Cu;
            goto label_32595c;
        }
    }
    ctx->pc = 0x325948u;
label_325948:
    // 0x325948: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_32594c:
    if (ctx->pc == 0x32594Cu) {
        ctx->pc = 0x32594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325948u;
        // 0x32594c: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x325950u;
        goto label_325950;
    }
    ctx->pc = 0x325948u;
    {
        const bool branch_taken_0x325948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x32594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325948u;
        // 0x32594c: 0x2e220007  sltiu       $v0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325948) {
            ctx->pc = 0x32595Cu;
            goto label_32595c;
        }
    }
    ctx->pc = 0x325950u;
label_325950:
    // 0x325950: 0xc0c91c8  jal         func_324720
label_325954:
    if (ctx->pc == 0x325954u) {
        ctx->pc = 0x325954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325950u;
        // 0x325954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325958u;
        goto label_325958;
    }
    ctx->pc = 0x325950u;
    SET_GPR_U32(ctx, 31, 0x325958u);
    ctx->pc = 0x325954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325950u;
    // 0x325954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324720u, 0x325950u, 0x325958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325958u;
label_325958:
    // 0x325958: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x325958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_32595c:
    // 0x32595c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_325960:
    if (ctx->pc == 0x325960u) {
        ctx->pc = 0x325960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32595Cu;
        // 0x325960: 0xae110080  sw          $s1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325964u;
        goto label_325964;
    }
    ctx->pc = 0x32595Cu;
    {
        const bool branch_taken_0x32595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32595Cu;
        // 0x325960: 0xae110080  sw          $s1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32595c) {
            ctx->pc = 0x3259F8u;
            goto label_3259f8;
        }
    }
    ctx->pc = 0x325964u;
label_325964:
    // 0x325964: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x325964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_325968:
    // 0x325968: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x325968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_32596c:
    // 0x32596c: 0x2442b790  addiu       $v0, $v0, -0x4870
    ctx->pc = 0x32596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948752));
label_325970:
    // 0x325970: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x325970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_325974:
    // 0x325974: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x325974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_325978:
    // 0x325978: 0x800008  jr          $a0
label_32597c:
    if (ctx->pc == 0x32597Cu) {
        ctx->pc = 0x325980u;
        goto label_325980;
    }
    ctx->pc = 0x325978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x325980u: goto label_325980;
            case 0x32598Cu: goto label_32598c;
            case 0x325998u: goto label_325998;
            case 0x3259ACu: goto label_3259ac;
            case 0x3259CCu: goto label_3259cc;
            case 0x3259D8u: goto label_3259d8;
            case 0x3259F8u: goto label_3259f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325978u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x325980u;
label_325980:
    // 0x325980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325984:
    // 0x325984: 0x1000001c  b           . + 4 + (0x1C << 2)
label_325988:
    if (ctx->pc == 0x325988u) {
        ctx->pc = 0x325988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325984u;
        // 0x325988: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32598Cu;
        goto label_32598c;
    }
    ctx->pc = 0x325984u;
    {
        const bool branch_taken_0x325984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325984u;
        // 0x325988: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325984) {
            ctx->pc = 0x3259F8u;
            goto label_3259f8;
        }
    }
    ctx->pc = 0x32598Cu;
label_32598c:
    // 0x32598c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_325990:
    // 0x325990: 0x10000019  b           . + 4 + (0x19 << 2)
label_325994:
    if (ctx->pc == 0x325994u) {
        ctx->pc = 0x325994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325990u;
        // 0x325994: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325998u;
        goto label_325998;
    }
    ctx->pc = 0x325990u;
    {
        const bool branch_taken_0x325990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325990u;
        // 0x325994: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325990) {
            ctx->pc = 0x3259F8u;
            goto label_3259f8;
        }
    }
    ctx->pc = 0x325998u;
label_325998:
    // 0x325998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x325998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32599c:
    // 0x32599c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3259a0:
    // 0x3259a0: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3259a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_3259a4:
    // 0x3259a4: 0x10000014  b           . + 4 + (0x14 << 2)
label_3259a8:
    if (ctx->pc == 0x3259A8u) {
        ctx->pc = 0x3259A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3259A4u;
        // 0x3259a8: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3259ACu;
        goto label_3259ac;
    }
    ctx->pc = 0x3259A4u;
    {
        const bool branch_taken_0x3259a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3259A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3259A4u;
        // 0x3259a8: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3259a4) {
            ctx->pc = 0x3259F8u;
            goto label_3259f8;
        }
    }
    ctx->pc = 0x3259ACu;
label_3259ac:
    // 0x3259ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3259acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3259b0:
    // 0x3259b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3259b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3259b4:
    // 0x3259b4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3259b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_3259b8:
    // 0x3259b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3259b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3259bc:
    // 0x3259bc: 0xc0c9912  jal         func_326448
label_3259c0:
    if (ctx->pc == 0x3259C0u) {
        ctx->pc = 0x3259C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3259BCu;
        // 0x3259c0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3259C4u;
        goto label_3259c4;
    }
    ctx->pc = 0x3259BCu;
    SET_GPR_U32(ctx, 31, 0x3259C4u);
    ctx->pc = 0x3259C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259BCu;
    // 0x3259c0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326448u, 0x3259BCu, 0x3259C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259C4u;
label_3259c4:
    // 0x3259c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3259c8:
    if (ctx->pc == 0x3259C8u) {
        ctx->pc = 0x3259CCu;
        goto label_3259cc;
    }
    ctx->pc = 0x3259C4u;
    {
        const bool branch_taken_0x3259c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3259c4) {
            ctx->pc = 0x3259F8u;
            goto label_3259f8;
        }
    }
    ctx->pc = 0x3259CCu;
label_3259cc:
    // 0x3259cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3259ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3259d0:
    // 0x3259d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3259d4:
    if (ctx->pc == 0x3259D4u) {
        ctx->pc = 0x3259D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3259D0u;
        // 0x3259d4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3259D8u;
        goto label_3259d8;
    }
    ctx->pc = 0x3259D0u;
    {
        const bool branch_taken_0x3259d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3259D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3259D0u;
        // 0x3259d4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3259d0) {
            ctx->pc = 0x3259F8u;
            goto label_3259f8;
        }
    }
    ctx->pc = 0x3259D8u;
label_3259d8:
    // 0x3259d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3259d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3259dc:
    // 0x3259dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3259dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3259e0:
    // 0x3259e0: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3259e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_3259e4:
    // 0x3259e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3259e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3259e8:
    // 0x3259e8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3259e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_3259ec:
    // 0x3259ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3259ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3259f0:
    // 0x3259f0: 0xc0c9912  jal         func_326448
label_3259f4:
    if (ctx->pc == 0x3259F4u) {
        ctx->pc = 0x3259F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3259F0u;
        // 0x3259f4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3259F8u;
        goto label_3259f8;
    }
    ctx->pc = 0x3259F0u;
    SET_GPR_U32(ctx, 31, 0x3259F8u);
    ctx->pc = 0x3259F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259F0u;
    // 0x3259f4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326448u, 0x3259F0u, 0x3259F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259F8u;
label_3259f8:
    // 0x3259f8: 0xc0c9b12  jal         func_326C48
label_3259fc:
    if (ctx->pc == 0x3259FCu) {
        ctx->pc = 0x3259FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3259F8u;
        // 0x3259fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325A00u;
        goto label_325a00;
    }
    ctx->pc = 0x3259F8u;
    SET_GPR_U32(ctx, 31, 0x325A00u);
    ctx->pc = 0x3259FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259F8u;
    // 0x3259fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326C48u, 0x3259F8u, 0x325A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A00u;
label_325a00:
    // 0x325a00: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x325a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_325a04:
    // 0x325a04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x325a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_325a08:
    // 0x325a08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x325a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_325a0c:
    // 0x325a0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x325a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_325a10:
    // 0x325a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_325a14:
    // 0x325a14: 0x3e00008  jr          $ra
label_325a18:
    if (ctx->pc == 0x325A18u) {
        ctx->pc = 0x325A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A14u;
        // 0x325a18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325A1Cu;
        goto label_325a1c;
    }
    ctx->pc = 0x325A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A14u;
        // 0x325a18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325A1Cu;
label_325a1c:
    // 0x325a1c: 0x0  nop
    ctx->pc = 0x325a1cu;
    // NOP
    ctx->pc = 0x325a20u;
}
