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

// Function: sub_0037F9C0
// Address: 0x37f9c0 - 0x37fa88
void sub_0037F9C0_0x37f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F9C0_0x37f9c0");
#endif

    switch (ctx->pc) {
        case 0x37f9ecu: goto label_37f9ec;
        case 0x37fa30u: goto label_37fa30;
        default: break;
    }

    ctx->pc = 0x37f9c0u;

    // 0x37f9c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37f9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37f9c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37f9c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37f9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37f9cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37f9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f9d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37f9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37f9d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37f9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37f9d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x37f9d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37f9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37f9e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37f9e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f9e4: 0xc0dfc42  jal         func_37F108
    ctx->pc = 0x37F9E4u;
    SET_GPR_U32(ctx, 31, 0x37F9ECu);
    ctx->pc = 0x37F9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F9E4u;
    // 0x37f9e8: 0x8e050100  lw          $a1, 0x100($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F108u, 0x37F9E4u, 0x37F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F9ECu;
label_37f9ec:
    // 0x37f9ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37f9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f9f0: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x37F9F0u;
    {
        const bool branch_taken_0x37f9f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F9F0u;
        // 0x37f9f4: 0x3c0338e3  lui         $v1, 0x38E3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f9f0) {
            ctx->pc = 0x37FA64u;
            goto label_37fa64;
        }
    }
    ctx->pc = 0x37F9F8u;
    // 0x37f9f8: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x37f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x37f9fc: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x37f9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
    // 0x37fa00: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x37fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37fa04: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x37fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x37fa08: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x37fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37fa0c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x37fa0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37fa10: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x37fa10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x37fa14: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x37fa14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37fa18: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x37fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x37fa1c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x37fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37fa20: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37FA20u;
    {
        const bool branch_taken_0x37fa20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fa20) {
            ctx->pc = 0x37FA3Cu;
            goto label_37fa3c;
        }
    }
    ctx->pc = 0x37FA28u;
    // 0x37fa28: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x37FA28u;
    SET_GPR_U32(ctx, 31, 0x37FA30u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x37FA28u, 0x37FA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA30u;
label_37fa30:
    // 0x37fa30: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x37fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37fa34: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x37fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x37fa38: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x37fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_37fa3c:
    // 0x37fa3c: 0x5240000a  beql        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x37FA3Cu;
    {
        const bool branch_taken_0x37fa3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fa3c) {
            ctx->pc = 0x37FA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FA3Cu;
            // 0x37fa40: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FA68u;
            goto label_37fa68;
        }
    }
    ctx->pc = 0x37FA44u;
    // 0x37fa44: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x37fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x37fa48: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37fa4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37fa50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x37fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37fa54: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x37fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    // 0x37fa58: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x37fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x37fa5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37FA5Cu;
    {
        const bool branch_taken_0x37fa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA5Cu;
        // 0x37fa60: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fa5c) {
            ctx->pc = 0x37FA68u;
            goto label_37fa68;
        }
    }
    ctx->pc = 0x37FA64u;
label_37fa64:
    // 0x37fa64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37fa64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37fa68:
    // 0x37fa68: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37fa68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37fa6c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37fa6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37fa70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37fa70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37fa74: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37fa74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fa78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37fa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x37FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA7Cu;
        // 0x37fa80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FA84u;
    // 0x37fa84: 0x0  nop
    ctx->pc = 0x37fa84u;
    // NOP
    ctx->pc = 0x37fa88u;
}
