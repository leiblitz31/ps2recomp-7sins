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

// Function: sub_0039A6B0
// Address: 0x39a6b0 - 0x39a768
void sub_0039A6B0_0x39a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A6B0_0x39a6b0");
#endif

    switch (ctx->pc) {
        case 0x39a6d8u: goto label_39a6d8;
        case 0x39a734u: goto label_39a734;
        default: break;
    }

    ctx->pc = 0x39a6b0u;

    // 0x39a6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39a6b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x39a6b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39a6bc: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39a6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a6c8: 0x8c44e880  lw          $a0, -0x1780($v0)
    ctx->pc = 0x39a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61E880u));
    // 0x39a6cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39a6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a6d0: 0xc0e702a  jal         func_39C0A8
    ctx->pc = 0x39A6D0u;
    SET_GPR_U32(ctx, 31, 0x39A6D8u);
    ctx->pc = 0x39A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A6D0u;
    // 0x39a6d4: 0x24a5a980  addiu       $a1, $a1, -0x5680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C0A8u, 0x39A6D0u, 0x39A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A6D8u;
label_39a6d8:
    // 0x39a6d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a6dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a6e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39a6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x39A6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6E4u;
        // 0x39a6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A6ECu;
    // 0x39a6ec: 0x0  nop
    ctx->pc = 0x39a6ecu;
    // NOP
    // 0x39a6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39a6f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39a6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39a6f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39a6fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a704: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x39a704u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x39a708: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x39a708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39a70c: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x39a70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x39a710: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x39A710u;
    {
        const bool branch_taken_0x39a710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A710u;
        // 0x39a714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a710) {
            ctx->pc = 0x39A750u;
            goto label_39a750;
        }
    }
    ctx->pc = 0x39A718u;
    // 0x39a718: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x39a718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x39a71c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39a720: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x39a720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39a724: 0x24a5ab48  addiu       $a1, $a1, -0x54B8
    ctx->pc = 0x39a724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945608));
    // 0x39a728: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x39a728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x39a72c: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x39A72Cu;
    SET_GPR_U32(ctx, 31, 0x39A734u);
    ctx->pc = 0x39A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A72Cu;
    // 0x39a730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x39A72Cu, 0x39A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A734u;
label_39a734:
    // 0x39a734: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39a734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39a738: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x39a738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x39a73c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x39a73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x39a740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a744: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x39a744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x39a748: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x39a748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x39a74c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x39a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_39a750:
    // 0x39a750: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39a750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39a754: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a75c: 0x3e00008  jr          $ra
    ctx->pc = 0x39A75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A75Cu;
        // 0x39a760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A764u;
    // 0x39a764: 0x0  nop
    ctx->pc = 0x39a764u;
    // NOP
    ctx->pc = 0x39a768u;
}
