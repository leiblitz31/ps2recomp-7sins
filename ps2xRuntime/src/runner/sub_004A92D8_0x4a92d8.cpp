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

// Function: sub_004A92D8
// Address: 0x4a92d8 - 0x4a9338
void sub_004A92D8_0x4a92d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A92D8_0x4a92d8");
#endif

    switch (ctx->pc) {
        case 0x4a9310u: goto label_4a9310;
        default: break;
    }

    ctx->pc = 0x4a92d8u;

    // 0x4a92d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a92d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a92dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a92dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a92e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a92e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a92e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a92e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a92e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4a92e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a92ec: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x4A92ECu;
    {
        const bool branch_taken_0x4a92ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A92ECu;
        // 0x4a92f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a92ec) {
            ctx->pc = 0x4A9328u;
            goto label_4a9328;
        }
    }
    ctx->pc = 0x4A92F4u;
    // 0x4a92f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a92f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a92f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a92fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A92FCu;
    {
        const bool branch_taken_0x4a92fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A92FCu;
        // 0x4a9300: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a92fc) {
            ctx->pc = 0x4A9328u;
            goto label_4a9328;
        }
    }
    ctx->pc = 0x4A9304u;
    // 0x4a9304: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a9304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4a9308: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4A9308u;
    SET_GPR_U32(ctx, 31, 0x4A9310u);
    ctx->pc = 0x4A930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9308u;
    // 0x4a930c: 0x248488a8  addiu       $a0, $a0, -0x7758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A9308u, 0x4A9310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9310u;
label_4a9310:
    // 0x4a9310: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4a9310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a9314: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a9314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9318: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4a9318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x4a931c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a931cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a9320: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4a9320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x4a9324: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a9324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a9328:
    // 0x4a9328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a932c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a932cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9330: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9330u;
        // 0x4a9334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9338u;
}
