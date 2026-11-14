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

// Function: sub_004B4680
// Address: 0x4b4680 - 0x4b4758
void sub_004B4680_0x4b4680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4680_0x4b4680");
#endif

    switch (ctx->pc) {
        case 0x4b46d0u: goto label_4b46d0;
        default: break;
    }

    ctx->pc = 0x4b4680u;

    // 0x4b4680: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x4b4680u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4684: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x4b4684u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4688: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x4b4688u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b468c: 0x24180004  addiu       $t8, $zero, 0x4
    ctx->pc = 0x4b468cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b4690: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b4690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b4694: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4694u;
    {
        const bool branch_taken_0x4b4694 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4694u;
        // 0x4b4698: 0x8cab0008  lw          $t3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4694) {
            ctx->pc = 0x4B46A4u;
            goto label_4b46a4;
        }
    }
    ctx->pc = 0x4B469Cu;
    // 0x4b469c: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x4b469cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b46a0: 0x25eb0001  addiu       $t3, $t7, 0x1
    ctx->pc = 0x4b46a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_4b46a4:
    // 0x4b46a4: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B46A4u;
    {
        const bool branch_taken_0x4b46a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B46A4u;
        // 0x4b46a8: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b46a4) {
            ctx->pc = 0x4B46B4u;
            goto label_4b46b4;
        }
    }
    ctx->pc = 0x4B46ACu;
    // 0x4b46ac: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x4b46acu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b46b0: 0x25180001  addiu       $t8, $t0, 0x1
    ctx->pc = 0x4b46b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4b46b4:
    // 0x4b46b4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4B46B4u;
    {
        const bool branch_taken_0x4b46b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B46B4u;
        // 0x4b46b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b46b4) {
            ctx->pc = 0x4B4748u;
            goto label_4b4748;
        }
    }
    ctx->pc = 0x4B46BCu;
    // 0x4b46bc: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x4b46bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x4b46c0: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x4b46c0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x4b46c4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4b46c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4b46c8: 0x25a80018  addiu       $t0, $t5, 0x18
    ctx->pc = 0x4b46c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 24));
    // 0x4b46cc: 0x0  nop
    ctx->pc = 0x4b46ccu;
    // NOP
label_4b46d0:
    // 0x4b46d0: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4b46d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b46d4: 0xcc1024  and         $v0, $a2, $t4
    ctx->pc = 0x4b46d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 12));
    // 0x4b46d8: 0xca1824  and         $v1, $a2, $t2
    ctx->pc = 0x4b46d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4b46dc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x4b46dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x4b46e0: 0xcf202a  slt         $a0, $a2, $t7
    ctx->pc = 0x4b46e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x4b46e4: 0x54800014  bnel        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4B46E4u;
    {
        const bool branch_taken_0x4b46e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b46e4) {
            ctx->pc = 0x4B46E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B46E4u;
            // 0x4b46e8: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4738u;
            goto label_4b4738;
        }
    }
    ctx->pc = 0x4B46ECu;
    // 0x4b46ec: 0xcb102a  slt         $v0, $a2, $t3
    ctx->pc = 0x4b46ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x4b46f0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B46F0u;
    {
        const bool branch_taken_0x4b46f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b46f0) {
            ctx->pc = 0x4B46F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B46F0u;
            // 0x4b46f4: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4738u;
            goto label_4b4738;
        }
    }
    ctx->pc = 0x4B46F8u;
    // 0x4b46f8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x4b46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4b46fc: 0x6e102a  slt         $v0, $v1, $t6
    ctx->pc = 0x4b46fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x4b4700: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4B4700u;
    {
        const bool branch_taken_0x4b4700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4700) {
            ctx->pc = 0x4B4704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4700u;
            // 0x4b4704: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4738u;
            goto label_4b4738;
        }
    }
    ctx->pc = 0x4B4708u;
    // 0x4b4708: 0x78102a  slt         $v0, $v1, $t8
    ctx->pc = 0x4b4708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x4b470c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4B470Cu;
    {
        const bool branch_taken_0x4b470c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b470c) {
            ctx->pc = 0x4B4710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B470Cu;
            // 0x4b4710: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4738u;
            goto label_4b4738;
        }
    }
    ctx->pc = 0x4B4714u;
    // 0x4b4714: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4b4714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4b4718: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4718u;
    {
        const bool branch_taken_0x4b4718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x4B471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4718u;
        // 0x4b471c: 0xcc1025  or          $v0, $a2, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4718) {
            ctx->pc = 0x4B472Cu;
            goto label_4b472c;
        }
    }
    ctx->pc = 0x4B4720u;
    // 0x4b4720: 0x4e30005  bgezl       $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4720u;
    {
        const bool branch_taken_0x4b4720 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x4b4720) {
            ctx->pc = 0x4B4724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4720u;
            // 0x4b4724: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4738u;
            goto label_4b4738;
        }
    }
    ctx->pc = 0x4B4728u;
    // 0x4b4728: 0xcc1025  or          $v0, $a2, $t4
    ctx->pc = 0x4b4728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
label_4b472c:
    // 0x4b472c: 0xe50c000c  swc1        $f12, 0xC($t0)
    ctx->pc = 0x4b472cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x4b4730: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4b4730u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4b4734: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4b4734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4b4738:
    // 0x4b4738: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4b4738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4b473c: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x4b473cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4b4740: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4B4740u;
    {
        const bool branch_taken_0x4b4740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4740u;
        // 0x4b4744: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4740) {
            ctx->pc = 0x4B46D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b46d0;
        }
    }
    ctx->pc = 0x4B4748u;
label_4b4748:
    // 0x4b4748: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4b4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b474c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4b474cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4b4750: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4750u;
        // 0x4b4754: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4758u;
}
