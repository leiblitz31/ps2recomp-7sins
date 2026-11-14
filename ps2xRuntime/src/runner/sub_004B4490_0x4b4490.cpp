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

// Function: sub_004B4490
// Address: 0x4b4490 - 0x4b45c8
void sub_004B4490_0x4b4490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4490_0x4b4490");
#endif

    switch (ctx->pc) {
        case 0x4b44d8u: goto label_4b44d8;
        case 0x4b4528u: goto label_4b4528;
        case 0x4b4550u: goto label_4b4550;
        case 0x4b4568u: goto label_4b4568;
        default: break;
    }

    ctx->pc = 0x4b4490u;

    // 0x4b4490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4b4490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4b4494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b4494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b4498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b449c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4b449cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x4b44a0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4b44a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4b44a4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x4b44a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4b44a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4b44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4b44ac: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4b44acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x4b44b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B44B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B44B0u;
        // 0x4b44b4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B44B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B44B8u;
    // 0x4b44b8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x4b44b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b44bc: 0x8cc90014  lw          $t1, 0x14($a2)
    ctx->pc = 0x4b44bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4b44c0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x4b44c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b44c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b44c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b44c8: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B44C8u;
    {
        const bool branch_taken_0x4b44c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B44C8u;
        // 0x4b44cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b44c8) {
            ctx->pc = 0x4B44F4u;
            goto label_4b44f4;
        }
    }
    ctx->pc = 0x4B44D0u;
    // 0x4b44d0: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x4b44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x4b44d4: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4b44d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_4b44d8:
    // 0x4b44d8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4b44d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b44dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4b44dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4b44e0: 0x25080028  addiu       $t0, $t0, 0x28
    ctx->pc = 0x4b44e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
    // 0x4b44e4: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x4b44e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4b44e8: 0x9082000d  lbu         $v0, 0xD($a0)
    ctx->pc = 0x4b44e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x4b44ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B44ECu;
    {
        const bool branch_taken_0x4b44ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B44ECu;
        // 0x4b44f0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b44ec) {
            ctx->pc = 0x4B44D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b44d8;
        }
    }
    ctx->pc = 0x4B44F4u;
label_4b44f4:
    // 0x4b44f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4b44f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4b44f8: 0x145102b  sltu        $v0, $t2, $a1
    ctx->pc = 0x4b44f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4b44fc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B44FCu;
    {
        const bool branch_taken_0x4b44fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b44fc) {
            ctx->pc = 0x4B4500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B44FCu;
            // 0x4b4500: 0x8cc20014  lw          $v0, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B450Cu;
            goto label_4b450c;
        }
    }
    ctx->pc = 0x4B4504u;
    // 0x4b4504: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4504u;
        // 0x4b4508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B450Cu;
label_4b450c:
    // 0x4b450c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b450cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4510: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4B4510u;
    {
        const bool branch_taken_0x4b4510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4510u;
        // 0x4b4514: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4510) {
            ctx->pc = 0x4B45BCu;
            goto label_4b45bc;
        }
    }
    ctx->pc = 0x4B4518u;
    // 0x4b4518: 0x240e0028  addiu       $t6, $zero, 0x28
    ctx->pc = 0x4b4518u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4b451c: 0x240d0028  addiu       $t5, $zero, 0x28
    ctx->pc = 0x4b451cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4b4520: 0xee2018  mult        $a0, $a3, $t6
    ctx->pc = 0x4b4520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4b4524: 0x0  nop
    ctx->pc = 0x4b4524u;
    // NOP
label_4b4528:
    // 0x4b4528: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x4b4528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x4b452c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b452cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4530: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4b4530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4b4534: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x4b4534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4b4538: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x4b4538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x4b453c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B453Cu;
    {
        const bool branch_taken_0x4b453c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B453Cu;
        // 0x4b4540: 0x24eb0001  addiu       $t3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b453c) {
            ctx->pc = 0x4B45A8u;
            goto label_4b45a8;
        }
    }
    ctx->pc = 0x4B4544u;
    // 0x4b4544: 0xed5018  mult        $t2, $a3, $t5
    ctx->pc = 0x4b4544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4b4548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4b4548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4b454c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b454cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b4550:
    // 0x4b4550: 0x81180  sll         $v0, $t0, 6
    ctx->pc = 0x4b4550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x4b4554: 0x25090001  addiu       $t1, $t0, 0x1
    ctx->pc = 0x4b4554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4b4558: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b4558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b455c: 0x4c1821  addu        $v1, $v0, $t4
    ctx->pc = 0x4b455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x4b4560: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x4b4560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4b4564: 0x0  nop
    ctx->pc = 0x4b4564u;
    // NOP
label_4b4568:
    // 0x4b4568: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4b4568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x4b456c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x4b456cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x4b4570: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b4570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4b4574: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x4b4574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x4b4578: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x4b4578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4b457c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x4b457cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x4b4580: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4B4580u;
    {
        const bool branch_taken_0x4b4580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4580u;
        // 0x4b4584: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4580) {
            ctx->pc = 0x4B4568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4568;
        }
    }
    ctx->pc = 0x4B4588u;
    // 0x4b4588: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x4b4588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x4b458c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4b458cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4590: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x4b4590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x4b4594: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4b4594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4b4598: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x4b4598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x4b459c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4b459cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4b45a0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4B45A0u;
    {
        const bool branch_taken_0x4b45a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B45A0u;
        // 0x4b45a4: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b45a0) {
            ctx->pc = 0x4B4550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4550;
        }
    }
    ctx->pc = 0x4B45A8u;
label_4b45a8:
    // 0x4b45a8: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x4b45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4b45ac: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x4b45acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b45b0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x4b45b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4b45b4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x4B45B4u;
    {
        const bool branch_taken_0x4b45b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B45B4u;
        // 0x4b45b8: 0xee2018  mult        $a0, $a3, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b45b4) {
            ctx->pc = 0x4B4528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4528;
        }
    }
    ctx->pc = 0x4B45BCu;
label_4b45bc:
    // 0x4b45bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B45BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B45BCu;
        // 0x4b45c0: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B45BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B45C4u;
    // 0x4b45c4: 0x0  nop
    ctx->pc = 0x4b45c4u;
    // NOP
    ctx->pc = 0x4b45c8u;
}
