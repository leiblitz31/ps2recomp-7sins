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

// Function: sub_0031C198
// Address: 0x31c198 - 0x31c260
void sub_0031C198_0x31c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C198_0x31c198");
#endif

    switch (ctx->pc) {
        case 0x31c218u: goto label_31c218;
        default: break;
    }

    ctx->pc = 0x31c198u;

    // 0x31c198: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x31c198u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31c19c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31c19cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c1a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c1a4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x31c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x31c1a8: 0x11000027  beqz        $t0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31C1A8u;
    {
        const bool branch_taken_0x31c1a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1A8u;
        // 0x31c1ac: 0x244a001c  addiu       $t2, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1a8) {
            ctx->pc = 0x31C248u;
            goto label_31c248;
        }
    }
    ctx->pc = 0x31C1B0u;
    // 0x31c1b0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x31c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31c1b4: 0x31050003  andi        $a1, $t0, 0x3
    ctx->pc = 0x31c1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x31c1b8: 0x1900000f  blez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x31C1B8u;
    {
        const bool branch_taken_0x31c1b8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x31C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1B8u;
        // 0x31c1bc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1b8) {
            ctx->pc = 0x31C1F8u;
            goto label_31c1f8;
        }
    }
    ctx->pc = 0x31C1C0u;
    // 0x31c1c0: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x31C1C0u;
    {
        const bool branch_taken_0x31c1c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1C0u;
        // 0x31c1c4: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1c0) {
            ctx->pc = 0x31C210u;
            goto label_31c210;
        }
    }
    ctx->pc = 0x31C1C8u;
    // 0x31c1c8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x31C1C8u;
    {
        const bool branch_taken_0x31c1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c1c8) {
            ctx->pc = 0x31C1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C1C8u;
            // 0x31c1cc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C1FCu;
            goto label_31c1fc;
        }
    }
    ctx->pc = 0x31C1D0u;
    // 0x31c1d0: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x31c1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31c1d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C1D4u;
    {
        const bool branch_taken_0x31c1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c1d4) {
            ctx->pc = 0x31C1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C1D4u;
            // 0x31c1d8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C1ECu;
            goto label_31c1ec;
        }
    }
    ctx->pc = 0x31C1DCu;
    // 0x31c1dc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x31c1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31c1e0: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x31c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x31c1e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x31c1e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c1e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31c1ec:
    // 0x31c1ec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31c1ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x31c1f0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x31c1f4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x31c1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_31c1f8:
    // 0x31c1f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31c1fc:
    // 0x31c1fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31c1fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x31c200: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31c200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x31c204: 0x128382b  sltu        $a3, $t1, $t0
    ctx->pc = 0x31c204u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x31c208: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x31C208u;
    {
        const bool branch_taken_0x31c208 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C208u;
        // 0x31c20c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c208) {
            ctx->pc = 0x31C248u;
            goto label_31c248;
        }
    }
    ctx->pc = 0x31C210u;
label_31c210:
    // 0x31c210: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x31c210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c214: 0x0  nop
    ctx->pc = 0x31c214u;
    // NOP
label_31c218:
    // 0x31c218: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x31c218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31c21c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x31c21cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x31c220: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x31c220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31c224: 0x128382b  sltu        $a3, $t1, $t0
    ctx->pc = 0x31c224u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x31c228: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x31c228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31c22c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x31c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x31c230: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x31c230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x31c234: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x31c234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x31c238: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x31c238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31c23c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x31c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x31c240: 0x14e0fff5  bnez        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x31C240u;
    {
        const bool branch_taken_0x31c240 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C240u;
        // 0x31c244: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c240) {
            ctx->pc = 0x31C218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c218;
        }
    }
    ctx->pc = 0x31C248u;
label_31c248:
    // 0x31c248: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x31c248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c24c: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x31c24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31c250: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x31c250u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x31c254: 0x3e00008  jr          $ra
    ctx->pc = 0x31C254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C254u;
        // 0x31c258: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C25Cu;
    // 0x31c25c: 0x0  nop
    ctx->pc = 0x31c25cu;
    // NOP
    ctx->pc = 0x31c260u;
}
