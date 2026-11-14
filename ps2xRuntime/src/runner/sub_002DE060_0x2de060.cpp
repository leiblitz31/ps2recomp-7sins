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

// Function: sub_002DE060
// Address: 0x2de060 - 0x2de0f0
void sub_002DE060_0x2de060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE060_0x2de060");
#endif

    switch (ctx->pc) {
        case 0x2de09cu: goto label_2de09c;
        case 0x2de0dcu: goto label_2de0dc;
        default: break;
    }

    ctx->pc = 0x2de060u;

    // 0x2de060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2de064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de068: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2de068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2de06c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2de06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2de070: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2de070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de074: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2de074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2de078: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2de078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de07c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2de07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2de080: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DE080u;
    {
        const bool branch_taken_0x2de080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2de080) {
            ctx->pc = 0x2DE0B4u;
            goto label_2de0b4;
        }
    }
    ctx->pc = 0x2DE088u;
    // 0x2de088: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2de088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de08c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2de08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2de090: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2de090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de094: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x2DE094u;
    SET_GPR_U32(ctx, 31, 0x2DE09Cu);
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x2DE094u, 0x2DE09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE09Cu;
label_2de09c:
    // 0x2de09c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2de09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de0a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2de0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2de0a4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2de0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2de0a8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2de0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2de0ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DE0ACu;
    {
        const bool branch_taken_0x2de0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de0ac) {
            ctx->pc = 0x2DE0DCu;
            goto label_2de0dc;
        }
    }
    ctx->pc = 0x2DE0B4u;
label_2de0b4:
    // 0x2de0b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2de0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de0b8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2de0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2de0bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2de0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de0c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2de0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2de0c4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2de0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de0c8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2de0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2de0cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2de0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de0d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2de0d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de0d4: 0xc0b783c  jal         func_2DE0F0
    ctx->pc = 0x2DE0D4u;
    SET_GPR_U32(ctx, 31, 0x2DE0DCu);
    ctx->pc = 0x2DE0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE0F0u, 0x2DE0D4u, 0x2DE0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0DCu;
label_2de0dc:
    // 0x2de0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de0e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2de0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2de0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE0ECu;
    // 0x2de0ec: 0x0  nop
    ctx->pc = 0x2de0ecu;
    // NOP
    ctx->pc = 0x2de0f0u;
}
