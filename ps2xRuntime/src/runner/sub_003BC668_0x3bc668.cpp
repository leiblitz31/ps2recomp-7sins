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

// Function: sub_003BC668
// Address: 0x3bc668 - 0x3bc8a0
void sub_003BC668_0x3bc668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BC668_0x3bc668");
#endif

    switch (ctx->pc) {
        case 0x3bc6dcu: goto label_3bc6dc;
        case 0x3bc708u: goto label_3bc708;
        case 0x3bc738u: goto label_3bc738;
        case 0x3bc758u: goto label_3bc758;
        case 0x3bc774u: goto label_3bc774;
        case 0x3bc794u: goto label_3bc794;
        case 0x3bc7b4u: goto label_3bc7b4;
        case 0x3bc7d4u: goto label_3bc7d4;
        case 0x3bc87cu: goto label_3bc87c;
        case 0x3bc890u: goto label_3bc890;
        default: break;
    }

    ctx->pc = 0x3bc668u;

    // 0x3bc668: 0x8f82ab6c  lw          $v0, -0x5494($gp)
    ctx->pc = 0x3bc668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945644)));
    // 0x3bc66c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bc66cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bc670: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bc670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bc674: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bc674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc678: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x3bc678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3bc67c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x3BC67Cu;
    {
        const bool branch_taken_0x3bc67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC67Cu;
        // 0x3bc680: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc67c) {
            ctx->pc = 0x3BC86Cu;
            goto label_3bc86c;
        }
    }
    ctx->pc = 0x3BC684u;
    // 0x3bc684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bc684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc688: 0x18a00058  blez        $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x3BC688u;
    {
        const bool branch_taken_0x3bc688 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3BC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC688u;
        // 0x3bc68c: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc688) {
            ctx->pc = 0x3BC7ECu;
            goto label_3bc7ec;
        }
    }
    ctx->pc = 0x3BC690u;
    // 0x3bc690: 0x248adcd8  addiu       $t2, $a0, -0x2328
    ctx->pc = 0x3bc690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958296));
    // 0x3bc694: 0x240801b7  addiu       $t0, $zero, 0x1B7
    ctx->pc = 0x3bc694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x3bc698: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x3bc698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc69c: 0x18a0001f  blez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3BC69Cu;
    {
        const bool branch_taken_0x3bc69c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3BC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC69Cu;
        // 0x3bc6a0: 0x30a30003  andi        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc69c) {
            ctx->pc = 0x3BC71Cu;
            goto label_3bc71c;
        }
    }
    ctx->pc = 0x3BC6A4u;
    // 0x3bc6a4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3BC6A4u;
    {
        const bool branch_taken_0x3bc6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC6A4u;
        // 0x3bc6a8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc6a4) {
            ctx->pc = 0x3BC754u;
            goto label_3bc754;
        }
    }
    ctx->pc = 0x3BC6ACu;
    // 0x3bc6ac: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3BC6ACu;
    {
        const bool branch_taken_0x3bc6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc6ac) {
            ctx->pc = 0x3BC6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC6ACu;
            // 0x3bc6b0: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC720u;
            goto label_3bc720;
        }
    }
    ctx->pc = 0x3BC6B4u;
    // 0x3bc6b4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3bc6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3bc6b8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3BC6B8u;
    {
        const bool branch_taken_0x3bc6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc6b8) {
            ctx->pc = 0x3BC6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC6B8u;
            // 0x3bc6bc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC6F0u;
            goto label_3bc6f0;
        }
    }
    ctx->pc = 0x3BC6C0u;
    // 0x3bc6c0: 0x8c83dcd8  lw          $v1, -0x2328($a0)
    ctx->pc = 0x3bc6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958296)));
    // 0x3bc6c4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3bc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3bc6c8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BC6C8u;
    {
        const bool branch_taken_0x3bc6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC6C8u;
        // 0x3bc6cc: 0x25460030  addiu       $a2, $t2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc6c8) {
            ctx->pc = 0x3BC6E8u;
            goto label_3bc6e8;
        }
    }
    ctx->pc = 0x3BC6D0u;
    // 0x3bc6d0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x3bc6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x3bc6d4: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BC6D4u;
    SET_GPR_U32(ctx, 31, 0x3BC6DCu);
    ctx->pc = 0x3BC6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC6D4u;
    // 0x3bc6d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BC6D4u, 0x3BC6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC6DCu;
label_3bc6dc:
    // 0x3bc6dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bc6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc6e0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x3BC6E0u;
    {
        const bool branch_taken_0x3bc6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC6E0u;
        // 0x3bc6e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc6e0) {
            ctx->pc = 0x3BC888u;
            goto label_3bc888;
        }
    }
    ctx->pc = 0x3BC6E8u;
label_3bc6e8:
    // 0x3bc6e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3bc6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bc6ec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3bc6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3bc6f0:
    // 0x3bc6f0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3bc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3bc6f4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC6F4u;
    {
        const bool branch_taken_0x3bc6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC6F4u;
        // 0x3bc6f8: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc6f4) {
            ctx->pc = 0x3BC718u;
            goto label_3bc718;
        }
    }
    ctx->pc = 0x3BC6FCu;
    // 0x3bc6fc: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x3bc6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x3bc700: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BC700u;
    SET_GPR_U32(ctx, 31, 0x3BC708u);
    ctx->pc = 0x3BC704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC700u;
    // 0x3bc704: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BC700u, 0x3BC708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC708u;
label_3bc708:
    // 0x3bc708: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bc708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc70c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3BC70Cu;
    {
        const bool branch_taken_0x3bc70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC70Cu;
        // 0x3bc710: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc70c) {
            ctx->pc = 0x3BC888u;
            goto label_3bc888;
        }
    }
    ctx->pc = 0x3BC714u;
    // 0x3bc714: 0x0  nop
    ctx->pc = 0x3bc714u;
    // NOP
label_3bc718:
    // 0x3bc718: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3bc718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3bc71c:
    // 0x3bc71c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3bc71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3bc720:
    // 0x3bc720: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3bc720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3bc724: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC724u;
    {
        const bool branch_taken_0x3bc724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BC728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC724u;
        // 0x3bc728: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc724) {
            ctx->pc = 0x3BC748u;
            goto label_3bc748;
        }
    }
    ctx->pc = 0x3BC72Cu;
    // 0x3bc72c: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x3bc72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x3bc730: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BC730u;
    SET_GPR_U32(ctx, 31, 0x3BC738u);
    ctx->pc = 0x3BC734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC730u;
    // 0x3bc734: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BC730u, 0x3BC738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC738u;
label_3bc738:
    // 0x3bc738: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bc738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc73c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x3BC73Cu;
    {
        const bool branch_taken_0x3bc73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC73Cu;
        // 0x3bc740: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc73c) {
            ctx->pc = 0x3BC888u;
            goto label_3bc888;
        }
    }
    ctx->pc = 0x3BC744u;
    // 0x3bc744: 0x0  nop
    ctx->pc = 0x3bc744u;
    // NOP
label_3bc748:
    // 0x3bc748: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x3bc748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3bc74c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3BC74Cu;
    {
        const bool branch_taken_0x3bc74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC74Cu;
        // 0x3bc750: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc74c) {
            ctx->pc = 0x3BC7ECu;
            goto label_3bc7ec;
        }
    }
    ctx->pc = 0x3BC754u;
label_3bc754:
    // 0x3bc754: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3bc754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bc758:
    // 0x3bc758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3bc758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bc75c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x3bc75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3bc760: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BC760u;
    {
        const bool branch_taken_0x3bc760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x3bc760) {
            ctx->pc = 0x3BC764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC760u;
            // 0x3bc764: 0x8c620030  lw          $v0, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC780u;
            goto label_3bc780;
        }
    }
    ctx->pc = 0x3BC768u;
    // 0x3bc768: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x3bc768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x3bc76c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BC76Cu;
    SET_GPR_U32(ctx, 31, 0x3BC774u);
    ctx->pc = 0x3BC770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC76Cu;
    // 0x3bc770: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BC76Cu, 0x3BC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC774u;
label_3bc774:
    // 0x3bc774: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bc774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc778: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3BC778u;
    {
        const bool branch_taken_0x3bc778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC778u;
        // 0x3bc77c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc778) {
            ctx->pc = 0x3BC888u;
            goto label_3bc888;
        }
    }
    ctx->pc = 0x3BC780u;
label_3bc780:
    // 0x3bc780: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BC780u;
    {
        const bool branch_taken_0x3bc780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x3bc780) {
            ctx->pc = 0x3BC784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC780u;
            // 0x3bc784: 0x8c620060  lw          $v0, 0x60($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC7A0u;
            goto label_3bc7a0;
        }
    }
    ctx->pc = 0x3BC788u;
    // 0x3bc788: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x3bc788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x3bc78c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BC78Cu;
    SET_GPR_U32(ctx, 31, 0x3BC794u);
    ctx->pc = 0x3BC790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC78Cu;
    // 0x3bc790: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BC78Cu, 0x3BC794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC794u;
label_3bc794:
    // 0x3bc794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bc794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc798: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3BC798u;
    {
        const bool branch_taken_0x3bc798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC798u;
        // 0x3bc79c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc798) {
            ctx->pc = 0x3BC888u;
            goto label_3bc888;
        }
    }
    ctx->pc = 0x3BC7A0u;
label_3bc7a0:
    // 0x3bc7a0: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BC7A0u;
    {
        const bool branch_taken_0x3bc7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x3bc7a0) {
            ctx->pc = 0x3BC7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BC7A0u;
            // 0x3bc7a4: 0x8c620090  lw          $v0, 0x90($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BC7C0u;
            goto label_3bc7c0;
        }
    }
    ctx->pc = 0x3BC7A8u;
    // 0x3bc7a8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x3bc7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x3bc7ac: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BC7ACu;
    SET_GPR_U32(ctx, 31, 0x3BC7B4u);
    ctx->pc = 0x3BC7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC7ACu;
    // 0x3bc7b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BC7ACu, 0x3BC7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC7B4u;
label_3bc7b4:
    // 0x3bc7b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bc7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc7b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3BC7B8u;
    {
        const bool branch_taken_0x3bc7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC7B8u;
        // 0x3bc7bc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc7b8) {
            ctx->pc = 0x3BC888u;
            goto label_3bc888;
        }
    }
    ctx->pc = 0x3BC7C0u;
label_3bc7c0:
    // 0x3bc7c0: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BC7C0u;
    {
        const bool branch_taken_0x3bc7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x3BC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC7C0u;
        // 0x3bc7c4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc7c0) {
            ctx->pc = 0x3BC7E0u;
            goto label_3bc7e0;
        }
    }
    ctx->pc = 0x3BC7C8u;
    // 0x3bc7c8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x3bc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x3bc7cc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BC7CCu;
    SET_GPR_U32(ctx, 31, 0x3BC7D4u);
    ctx->pc = 0x3BC7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC7CCu;
    // 0x3bc7d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BC7CCu, 0x3BC7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC7D4u;
label_3bc7d4:
    // 0x3bc7d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bc7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc7d8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3BC7D8u;
    {
        const bool branch_taken_0x3bc7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC7D8u;
        // 0x3bc7dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc7d8) {
            ctx->pc = 0x3BC888u;
            goto label_3bc888;
        }
    }
    ctx->pc = 0x3BC7E0u;
label_3bc7e0:
    // 0x3bc7e0: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x3bc7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3bc7e4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3BC7E4u;
    {
        const bool branch_taken_0x3bc7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC7E4u;
        // 0x3bc7e8: 0x246300c0  addiu       $v1, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc7e4) {
            ctx->pc = 0x3BC758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc758;
        }
    }
    ctx->pc = 0x3BC7ECu;
label_3bc7ec:
    // 0x3bc7ec: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3bc7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3bc7f0: 0x2484dcd8  addiu       $a0, $a0, -0x2328
    ctx->pc = 0x3bc7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958296));
    // 0x3bc7f4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x3bc7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3bc7f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bc7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bc7fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3bc7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3bc800: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bc800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bc804: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x3bc804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3bc808: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x3bc808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3bc80c: 0x6926000f  ldl         $a2, 0xF($t1)
    ctx->pc = 0x3bc80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3bc810: 0x6d260008  ldr         $a2, 0x8($t1)
    ctx->pc = 0x3bc810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3bc814: 0x69270017  ldl         $a3, 0x17($t1)
    ctx->pc = 0x3bc814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3bc818: 0x6d270010  ldr         $a3, 0x10($t1)
    ctx->pc = 0x3bc818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3bc81c: 0x6928001f  ldl         $t0, 0x1F($t1)
    ctx->pc = 0x3bc81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3bc820: 0x6d280018  ldr         $t0, 0x18($t1)
    ctx->pc = 0x3bc820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3bc824: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x3bc824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc828: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x3bc828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc82c: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x3bc82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc830: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x3bc830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc834: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x3bc834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc838: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x3bc838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc83c: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x3bc83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc840: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x3bc840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc844: 0x69240027  ldl         $a0, 0x27($t1)
    ctx->pc = 0x3bc844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3bc848: 0x6d240020  ldr         $a0, 0x20($t1)
    ctx->pc = 0x3bc848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3bc84c: 0x6926002f  ldl         $a2, 0x2F($t1)
    ctx->pc = 0x3bc84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3bc850: 0x6d260028  ldr         $a2, 0x28($t1)
    ctx->pc = 0x3bc850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3bc854: 0xb0640027  sdl         $a0, 0x27($v1)
    ctx->pc = 0x3bc854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc858: 0xb4640020  sdr         $a0, 0x20($v1)
    ctx->pc = 0x3bc858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc85c: 0xb066002f  sdl         $a2, 0x2F($v1)
    ctx->pc = 0x3bc85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc860: 0xb4660028  sdr         $a2, 0x28($v1)
    ctx->pc = 0x3bc860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bc864: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3BC864u;
    {
        const bool branch_taken_0x3bc864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC864u;
        // 0x3bc868: 0xaf85ab6c  sw          $a1, -0x5494($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945644), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc864) {
            ctx->pc = 0x3BC894u;
            goto label_3bc894;
        }
    }
    ctx->pc = 0x3BC86Cu;
label_3bc86c:
    // 0x3bc86c: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x3bc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x3bc870: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3bc870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bc874: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BC874u;
    SET_GPR_U32(ctx, 31, 0x3BC87Cu);
    ctx->pc = 0x3BC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC874u;
    // 0x3bc878: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BC874u, 0x3BC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC87Cu;
label_3bc87c:
    // 0x3bc87c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3bc87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3bc880: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3bc880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bc884: 0x0  nop
    ctx->pc = 0x3bc884u;
    // NOP
label_3bc888:
    // 0x3bc888: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3BC888u;
    SET_GPR_U32(ctx, 31, 0x3BC890u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BC888u, 0x3BC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC890u;
label_3bc890:
    // 0x3bc890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bc890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bc894:
    // 0x3bc894: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bc894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bc898: 0x3e00008  jr          $ra
    ctx->pc = 0x3BC898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC898u;
        // 0x3bc89c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BC8A0u;
}
