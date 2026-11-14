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

// Function: sub_001A35D0
// Address: 0x1a35d0 - 0x1a3660
void sub_001A35D0_0x1a35d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A35D0_0x1a35d0");
#endif

    switch (ctx->pc) {
        case 0x1a360cu: goto label_1a360c;
        case 0x1a364cu: goto label_1a364c;
        default: break;
    }

    ctx->pc = 0x1a35d0u;

    // 0x1a35d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a35d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a35d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a35d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a35d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a35d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a35dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1a35dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1a35e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a35e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a35e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a35ec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a35f0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A35F0u;
    {
        const bool branch_taken_0x1a35f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35f0) {
            ctx->pc = 0x1A3624u;
            goto label_1a3624;
        }
    }
    ctx->pc = 0x1A35F8u;
    // 0x1a35f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a35fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1a35fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a3600: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1a3600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3604: 0xc068e3c  jal         func_1A38F0
    ctx->pc = 0x1A3604u;
    SET_GPR_U32(ctx, 31, 0x1A360Cu);
    ctx->pc = 0x1A38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A38F0u, 0x1A3604u, 0x1A360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A360Cu;
label_1a360c:
    // 0x1a360c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3610: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a3610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a3614: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a3614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a3618: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1a3618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1a361c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A361Cu;
    {
        const bool branch_taken_0x1a361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a361c) {
            ctx->pc = 0x1A364Cu;
            goto label_1a364c;
        }
    }
    ctx->pc = 0x1A3624u;
label_1a3624:
    // 0x1a3624: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a3624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3628: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1a3628u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a362c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3630: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a3630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a3634: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1a3634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3638: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1a3638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1a363c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a363cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3640: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a3640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3644: 0xc068d98  jal         func_1A3660
    ctx->pc = 0x1A3644u;
    SET_GPR_U32(ctx, 31, 0x1A364Cu);
    ctx->pc = 0x1A3660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3660u, 0x1A3644u, 0x1A364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A364Cu;
label_1a364c:
    // 0x1a364c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a364cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3650: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a3650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a3654: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A365Cu;
    // 0x1a365c: 0x0  nop
    ctx->pc = 0x1a365cu;
    // NOP
    ctx->pc = 0x1a3660u;
}
