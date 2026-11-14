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

// Function: sub_002FB290
// Address: 0x2fb290 - 0x2fb350
void sub_002FB290_0x2fb290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB290_0x2fb290");
#endif

    ctx->pc = 0x2fb290u;

    // 0x2fb290: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2fb290u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb294: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fb294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb298: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2fb298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb29c: 0x52b3a  dsrl        $a1, $a1, 12
    ctx->pc = 0x2fb29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 12);
    // 0x2fb2a0: 0x21d3e  dsrl32      $v1, $v0, 20
    ctx->pc = 0x2fb2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x2fb2a4: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x2fb2a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2fb2a8: 0x306707ff  andi        $a3, $v1, 0x7FF
    ctx->pc = 0x2fb2a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2fb2ac: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x2fb2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2fb2b0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB2B0u;
    {
        const bool branch_taken_0x2fb2b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2B0u;
        // 0x2fb2b4: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2b0) {
            ctx->pc = 0x2FB2C8u;
            goto label_2fb2c8;
        }
    }
    ctx->pc = 0x2FB2B8u;
    // 0x2fb2b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fb2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fb2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2BCu;
        // 0x2fb2c0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB2C4u;
    // 0x2fb2c4: 0x0  nop
    ctx->pc = 0x2fb2c4u;
    // NOP
label_2fb2c8:
    // 0x2fb2c8: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x2fb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x2fb2cc: 0x54e20016  bnel        $a3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FB2CCu;
    {
        const bool branch_taken_0x2fb2cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fb2cc) {
            ctx->pc = 0x2FB2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB2CCu;
            // 0x2fb2d0: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB328u;
            goto label_2fb328;
        }
    }
    ctx->pc = 0x2FB2D4u;
    // 0x2fb2d4: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x2fb2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2fb2d8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB2D8u;
    {
        const bool branch_taken_0x2fb2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2D8u;
        // 0x2fb2dc: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2d8) {
            ctx->pc = 0x2FB2F8u;
            goto label_2fb2f8;
        }
    }
    ctx->pc = 0x2FB2E0u;
    // 0x2fb2e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2fb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fb2e4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2fb2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fb2e8: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2fb2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2fb2ec: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x2fb2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x2fb2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB2F0u;
        // 0x2fb2f4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB2F8u;
label_2fb2f8:
    // 0x2fb2f8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2fb2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fb2fc: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2fb2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2fb300: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fb300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fb304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB304u;
    {
        const bool branch_taken_0x2fb304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB304u;
        // 0x2fb308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb304) {
            ctx->pc = 0x2FB318u;
            goto label_2fb318;
        }
    }
    ctx->pc = 0x2FB30Cu;
    // 0x2fb30c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB30Cu;
    {
        const bool branch_taken_0x2fb30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB30Cu;
        // 0x2fb310: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb30c) {
            ctx->pc = 0x2FB31Cu;
            goto label_2fb31c;
        }
    }
    ctx->pc = 0x2FB314u;
    // 0x2fb314: 0x0  nop
    ctx->pc = 0x2fb314u;
    // NOP
label_2fb318:
    // 0x2fb318: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2fb318u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2fb31c:
    // 0x2fb31c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB31Cu;
        // 0x2fb320: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB324u;
    // 0x2fb324: 0x0  nop
    ctx->pc = 0x2fb324u;
    // NOP
label_2fb328:
    // 0x2fb328: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2fb328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fb32c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2fb32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2fb330: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2fb330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2fb334: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fb334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fb338: 0x24e4fc01  addiu       $a0, $a3, -0x3FF
    ctx->pc = 0x2fb338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966273));
    // 0x2fb33c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x2fb33cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x2fb340: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x2fb340u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x2fb344: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB344u;
        // 0x2fb348: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB34Cu;
    // 0x2fb34c: 0x0  nop
    ctx->pc = 0x2fb34cu;
    // NOP
    ctx->pc = 0x2fb350u;
}
