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

// Function: sub_00390458
// Address: 0x390458 - 0x3905b0
void sub_00390458_0x390458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390458_0x390458");
#endif

    ctx->pc = 0x390458u;

    // 0x390458: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x390458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39045c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x390460: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x390460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x390464: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x390464u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390468: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x390468u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x39046c: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x39046cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x390470: 0x15090003  bne         $t0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x390470u;
    {
        const bool branch_taken_0x390470 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x390474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390470u;
        // 0x390474: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390470) {
            ctx->pc = 0x390480u;
            goto label_390480;
        }
    }
    ctx->pc = 0x390478u;
    // 0x390478: 0x3e00008  jr          $ra
    ctx->pc = 0x390478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390478u;
        // 0x39047c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390480u;
label_390480:
    // 0x390480: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x390480u;
    {
        const bool branch_taken_0x390480 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x390480) {
            ctx->pc = 0x3904D0u;
            goto label_3904d0;
        }
    }
    ctx->pc = 0x390488u;
    // 0x390488: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x390488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x39048c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39048Cu;
    {
        const bool branch_taken_0x39048c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39048Cu;
        // 0x390490: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39048c) {
            ctx->pc = 0x3904C0u;
            goto label_3904c0;
        }
    }
    ctx->pc = 0x390494u;
    // 0x390494: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x390494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x390498: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x390498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x39049c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x39049cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3904a0: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x3904a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x3904a4: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3904A4u;
    {
        const bool branch_taken_0x3904a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3904A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3904A4u;
        // 0x3904a8: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3904a4) {
            ctx->pc = 0x3904BCu;
            goto label_3904bc;
        }
    }
    ctx->pc = 0x3904ACu;
    // 0x3904ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3904ACu;
    {
        const bool branch_taken_0x3904ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3904B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3904ACu;
        // 0x3904b0: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3904ac) {
            ctx->pc = 0x3904BCu;
            goto label_3904bc;
        }
    }
    ctx->pc = 0x3904B4u;
    // 0x3904b4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3904B4u;
    {
        const bool branch_taken_0x3904b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3904b4) {
            ctx->pc = 0x3904B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3904B4u;
            // 0x3904b8: 0x91020007  lbu         $v0, 0x7($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3904C4u;
            goto label_3904c4;
        }
    }
    ctx->pc = 0x3904BCu;
label_3904bc:
    // 0x3904bc: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x3904bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3904c0:
    // 0x3904c0: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x3904c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
label_3904c4:
    // 0x3904c4: 0x35a30010  ori         $v1, $t5, 0x10
    ctx->pc = 0x3904c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)16);
    // 0x3904c8: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x3904c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x3904cc: 0x62680b  movn        $t5, $v1, $v0
    ctx->pc = 0x3904ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
label_3904d0:
    // 0x3904d0: 0x51200016  beql        $t1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3904D0u;
    {
        const bool branch_taken_0x3904d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3904d0) {
            ctx->pc = 0x3904D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3904D0u;
            // 0x3904d4: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39052Cu;
            goto label_39052c;
        }
    }
    ctx->pc = 0x3904D8u;
    // 0x3904d8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3904d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3904dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3904DCu;
    {
        const bool branch_taken_0x3904dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3904E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3904DCu;
        // 0x3904e0: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3904dc) {
            ctx->pc = 0x390518u;
            goto label_390518;
        }
    }
    ctx->pc = 0x3904E4u;
    // 0x3904e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3904e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3904e8: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x3904e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x3904ec: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3904ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3904f0: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x3904f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x3904f4: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3904F4u;
    {
        const bool branch_taken_0x3904f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3904f4) {
            ctx->pc = 0x3904F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3904F4u;
            // 0x3904f8: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390518u;
            goto label_390518;
        }
    }
    ctx->pc = 0x3904FCu;
    // 0x3904fc: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x3904fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x390500: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390500u;
    {
        const bool branch_taken_0x390500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x390500) {
            ctx->pc = 0x390504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390500u;
            // 0x390504: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390518u;
            goto label_390518;
        }
    }
    ctx->pc = 0x390508u;
    // 0x390508: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x390508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x39050c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39050Cu;
    {
        const bool branch_taken_0x39050c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39050c) {
            ctx->pc = 0x390510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39050Cu;
            // 0x390510: 0x91220007  lbu         $v0, 0x7($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39051Cu;
            goto label_39051c;
        }
    }
    ctx->pc = 0x390514u;
    // 0x390514: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x390514u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_390518:
    // 0x390518: 0x91220007  lbu         $v0, 0x7($t1)
    ctx->pc = 0x390518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
label_39051c:
    // 0x39051c: 0x35830010  ori         $v1, $t4, 0x10
    ctx->pc = 0x39051cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)16);
    // 0x390520: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x390520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x390524: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x390524u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
    // 0x390528: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x390528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_39052c:
    // 0x39052c: 0x35890008  ori         $t1, $t4, 0x8
    ctx->pc = 0x39052cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)8);
    // 0x390530: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x390530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x390534: 0x35ab0008  ori         $t3, $t5, 0x8
    ctx->pc = 0x390534u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)8);
    // 0x390538: 0x94e50010  lhu         $a1, 0x10($a3)
    ctx->pc = 0x390538u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x39053c: 0x94c20010  lhu         $v0, 0x10($a2)
    ctx->pc = 0x39053cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x390540: 0x94e80012  lhu         $t0, 0x12($a3)
    ctx->pc = 0x390540u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x390544: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x390544u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x390548: 0xa2202b  sltu        $a0, $a1, $v0
    ctx->pc = 0x390548u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39054c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x39054cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x390550: 0x124600b  movn        $t4, $t1, $a0
    ctx->pc = 0x390550u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 9));
    // 0x390554: 0x103502b  sltu        $t2, $t0, $v1
    ctx->pc = 0x390554u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x390558: 0x162680b  movn        $t5, $t3, $v0
    ctx->pc = 0x390558u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 11));
    // 0x39055c: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x39055cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x390560: 0x94e9000e  lhu         $t1, 0xE($a3)
    ctx->pc = 0x390560u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x390564: 0x94c5000e  lhu         $a1, 0xE($a2)
    ctx->pc = 0x390564u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x390568: 0x35a20004  ori         $v0, $t5, 0x4
    ctx->pc = 0x390568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)4);
    // 0x39056c: 0x94e8000c  lhu         $t0, 0xC($a3)
    ctx->pc = 0x39056cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x390570: 0x43680b  movn        $t5, $v0, $v1
    ctx->pc = 0x390570u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 2));
    // 0x390574: 0x125382b  sltu        $a3, $t1, $a1
    ctx->pc = 0x390574u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x390578: 0x35840004  ori         $a0, $t4, 0x4
    ctx->pc = 0x390578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)4);
    // 0x39057c: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x39057cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x390580: 0x35a30002  ori         $v1, $t5, 0x2
    ctx->pc = 0x390580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)2);
    // 0x390584: 0xa9282b  sltu        $a1, $a1, $t1
    ctx->pc = 0x390584u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x390588: 0x8a600b  movn        $t4, $a0, $t2
    ctx->pc = 0x390588u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x39058c: 0x65680b  movn        $t5, $v1, $a1
    ctx->pc = 0x39058cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x390590: 0x35840002  ori         $a0, $t4, 0x2
    ctx->pc = 0x390590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
    // 0x390594: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x390594u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x390598: 0x87600b  movn        $t4, $a0, $a3
    ctx->pc = 0x390598u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x39059c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x39059cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3905a0: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x3905a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x3905a4: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x3905a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x3905a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3905A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3905ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905A8u;
        // 0x3905ac: 0x1ac1023  subu        $v0, $t5, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3905A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3905B0u;
}
