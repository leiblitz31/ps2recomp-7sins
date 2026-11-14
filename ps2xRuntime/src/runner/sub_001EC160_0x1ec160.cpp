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

// Function: sub_001EC160
// Address: 0x1ec160 - 0x1ec1f0
void sub_001EC160_0x1ec160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC160_0x1ec160");
#endif

    switch (ctx->pc) {
        case 0x1ec19cu: goto label_1ec19c;
        case 0x1ec1dcu: goto label_1ec1dc;
        default: break;
    }

    ctx->pc = 0x1ec160u;

    // 0x1ec160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec168: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ec168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ec16c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ec16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ec170: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec174: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ec174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ec178: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec17c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ec17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ec180: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EC180u;
    {
        const bool branch_taken_0x1ec180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ec180) {
            ctx->pc = 0x1EC1B4u;
            goto label_1ec1b4;
        }
    }
    ctx->pc = 0x1EC188u;
    // 0x1ec188: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec18c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ec18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ec190: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1ec190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec194: 0xc07b120  jal         func_1EC480
    ctx->pc = 0x1EC194u;
    SET_GPR_U32(ctx, 31, 0x1EC19Cu);
    ctx->pc = 0x1EC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC480u, 0x1EC194u, 0x1EC19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC19Cu;
label_1ec19c:
    // 0x1ec19c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ec19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec1a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ec1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ec1a4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1ec1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1ec1a8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ec1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1ec1ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EC1ACu;
    {
        const bool branch_taken_0x1ec1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec1ac) {
            ctx->pc = 0x1EC1DCu;
            goto label_1ec1dc;
        }
    }
    ctx->pc = 0x1EC1B4u;
label_1ec1b4:
    // 0x1ec1b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ec1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec1b8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1ec1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec1bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ec1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec1c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1ec1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ec1c4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1ec1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec1c8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1ec1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ec1cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ec1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec1d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ec1d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec1d4: 0xc07b07c  jal         func_1EC1F0
    ctx->pc = 0x1EC1D4u;
    SET_GPR_U32(ctx, 31, 0x1EC1DCu);
    ctx->pc = 0x1EC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC1F0u, 0x1EC1D4u, 0x1EC1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1DCu;
label_1ec1dc:
    // 0x1ec1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec1e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ec1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC1ECu;
    // 0x1ec1ec: 0x0  nop
    ctx->pc = 0x1ec1ecu;
    // NOP
    ctx->pc = 0x1ec1f0u;
}
