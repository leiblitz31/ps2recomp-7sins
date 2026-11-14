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

// Function: sub_004072C8
// Address: 0x4072c8 - 0x407338
void sub_004072C8_0x4072c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004072C8_0x4072c8");
#endif

    switch (ctx->pc) {
        case 0x4072f4u: goto label_4072f4;
        case 0x407308u: goto label_407308;
        case 0x407318u: goto label_407318;
        case 0x407320u: goto label_407320;
        default: break;
    }

    ctx->pc = 0x4072c8u;

    // 0x4072c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4072c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4072cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4072ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4072d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4072d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4072d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4072d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4072d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4072d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4072dc: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x4072dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4072e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4072E0u;
    {
        const bool branch_taken_0x4072e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4072E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4072E0u;
        // 0x4072e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4072e0) {
            ctx->pc = 0x4072F4u;
            goto label_4072f4;
        }
    }
    ctx->pc = 0x4072E8u;
    // 0x4072e8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4072e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4072ec: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x4072ECu;
    SET_GPR_U32(ctx, 31, 0x4072F4u);
    ctx->pc = 0x4072F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4072ECu;
    // 0x4072f0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x4072ECu, 0x4072F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4072F4u;
label_4072f4:
    // 0x4072f4: 0xa3b10000  sb          $s1, 0x0($sp)
    ctx->pc = 0x4072f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x4072f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4072f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4072fc: 0x2785acb8  addiu       $a1, $gp, -0x5348
    ctx->pc = 0x4072fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945976));
    // 0x407300: 0xc101b98  jal         func_406E60
    ctx->pc = 0x407300u;
    SET_GPR_U32(ctx, 31, 0x407308u);
    ctx->pc = 0x407304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407300u;
    // 0x407304: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x407300u, 0x407308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407308u;
label_407308:
    // 0x407308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40730c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40730cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407310: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x407310u;
    SET_GPR_U32(ctx, 31, 0x407318u);
    ctx->pc = 0x407314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407310u;
    // 0x407314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x407310u, 0x407318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407318u;
label_407318:
    // 0x407318: 0xc101bda  jal         func_406F68
    ctx->pc = 0x407318u;
    SET_GPR_U32(ctx, 31, 0x407320u);
    ctx->pc = 0x40731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407318u;
    // 0x40731c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x407318u, 0x407320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407320u;
label_407320:
    // 0x407320: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x407320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x407324: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x407324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x407328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x407328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40732c: 0x3e00008  jr          $ra
    ctx->pc = 0x40732Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40732Cu;
        // 0x407330: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40732Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407334u;
    // 0x407334: 0x0  nop
    ctx->pc = 0x407334u;
    // NOP
    ctx->pc = 0x407338u;
}
