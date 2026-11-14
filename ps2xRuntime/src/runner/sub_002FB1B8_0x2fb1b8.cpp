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

// Function: sub_002FB1B8
// Address: 0x2fb1b8 - 0x2fb290
void sub_002FB1B8_0x2fb1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB1B8_0x2fb1b8");
#endif

    ctx->pc = 0x2fb1b8u;

    // 0x2fb1b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fb1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb1bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fb1bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb1c0: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x2fb1c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fb1c4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2fb1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fb1c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB1C8u;
    {
        const bool branch_taken_0x2fb1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1C8u;
        // 0x2fb1cc: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1c8) {
            ctx->pc = 0x2FB1E8u;
            goto label_2fb1e8;
        }
    }
    ctx->pc = 0x2FB1D0u;
    // 0x2fb1d0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2fb1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fb1d4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2fb1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2fb1d8: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x2fb1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x2fb1dc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2FB1DCu;
    {
        const bool branch_taken_0x2fb1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1DCu;
        // 0x2fb1e0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1dc) {
            ctx->pc = 0x2FB234u;
            goto label_2fb234;
        }
    }
    ctx->pc = 0x2FB1E4u;
    // 0x2fb1e4: 0x0  nop
    ctx->pc = 0x2fb1e4u;
    // NOP
label_2fb1e8:
    // 0x2fb1e8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2fb1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2fb1ec: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FB1ECu;
    {
        const bool branch_taken_0x2fb1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb1ec) {
            ctx->pc = 0x2FB1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB1ECu;
            // 0x2fb1f0: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB228u;
            goto label_2fb228;
        }
    }
    ctx->pc = 0x2FB1F4u;
    // 0x2fb1f4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2fb1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2fb1f8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FB1F8u;
    {
        const bool branch_taken_0x2fb1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb1f8) {
            ctx->pc = 0x2FB1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB1F8u;
            // 0x2fb1fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB234u;
            goto label_2fb234;
        }
    }
    ctx->pc = 0x2FB200u;
    // 0x2fb200: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2FB200u;
    {
        const bool branch_taken_0x2fb200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb200) {
            ctx->pc = 0x2FB234u;
            goto label_2fb234;
        }
    }
    ctx->pc = 0x2FB208u;
    // 0x2fb208: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2fb208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fb20c: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x2fb20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x2fb210: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB210u;
    {
        const bool branch_taken_0x2fb210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb210) {
            ctx->pc = 0x2FB214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB210u;
            // 0x2fb214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB234u;
            goto label_2fb234;
        }
    }
    ctx->pc = 0x2FB218u;
    // 0x2fb218: 0x28820400  slti        $v0, $a0, 0x400
    ctx->pc = 0x2fb218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2fb21c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB21Cu;
    {
        const bool branch_taken_0x2fb21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb21c) {
            ctx->pc = 0x2FB220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB21Cu;
            // 0x2fb220: 0x248703ff  addiu       $a3, $a0, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB230u;
            goto label_2fb230;
        }
    }
    ctx->pc = 0x2FB224u;
    // 0x2fb224: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x2fb224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_2fb228:
    // 0x2fb228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB228u;
    {
        const bool branch_taken_0x2fb228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB228u;
        // 0x2fb22c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb228) {
            ctx->pc = 0x2FB234u;
            goto label_2fb234;
        }
    }
    ctx->pc = 0x2FB230u;
label_2fb230:
    // 0x2fb230: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x2fb230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_2fb234:
    // 0x2fb234: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x2fb234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x2fb238: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2fb238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2fb23c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb240: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2fb240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2fb244: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2fb244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fb248: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2fb248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2fb24c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2fb24cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2fb250: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x2fb250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x2fb254: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fb254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fb258: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fb258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fb25c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fb25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fb260: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fb260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fb264: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fb264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fb268: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x2fb268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x2fb26c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2fb26cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2fb270: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x2fb270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x2fb274: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2fb274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb278: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x2fb278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x2fb27c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2fb27cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2fb280: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x2fb280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x2fb284: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2fb284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2fb288: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB288u;
        // 0x2fb28c: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB290u;
}
