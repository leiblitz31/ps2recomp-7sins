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

// Function: sub_0033F0C8
// Address: 0x33f0c8 - 0x33f138
void sub_0033F0C8_0x33f0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F0C8_0x33f0c8");
#endif

    switch (ctx->pc) {
        case 0x33f0fcu: goto label_33f0fc;
        default: break;
    }

    ctx->pc = 0x33f0c8u;

    // 0x33f0c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33f0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33f0cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33f0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x33f0d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33f0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33f0d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33f0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f0d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33f0dc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33f0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33f0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f0e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33f0e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f0e8: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x33f0e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x33f0ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33f0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f0f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x33f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33f0f4: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33F0F4u;
    SET_GPR_U32(ctx, 31, 0x33F0FCu);
    ctx->pc = 0x33F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F0F4u;
    // 0x33f0f8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33F0F4u, 0x33F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F0FCu;
label_33f0fc:
    // 0x33f0fc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F0FCu;
    {
        const bool branch_taken_0x33f0fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0FCu;
        // 0x33f100: 0x2021821  addu        $v1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f0fc) {
            ctx->pc = 0x33F114u;
            goto label_33f114;
        }
    }
    ctx->pc = 0x33F104u;
    // 0x33f104: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x33f104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33f108: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f10c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x33f10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f110: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x33f110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_33f114:
    // 0x33f114: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x33f114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x33f118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33f118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f11c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33f11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f120: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33f120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f124: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33f124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f12c: 0x3e00008  jr          $ra
    ctx->pc = 0x33F12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F12Cu;
        // 0x33f130: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F134u;
    // 0x33f134: 0x0  nop
    ctx->pc = 0x33f134u;
    // NOP
    ctx->pc = 0x33f138u;
}
