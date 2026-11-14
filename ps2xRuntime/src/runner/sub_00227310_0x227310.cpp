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

// Function: sub_00227310
// Address: 0x227310 - 0x227380
void sub_00227310_0x227310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227310_0x227310");
#endif

    ctx->pc = 0x227310u;

    // 0x227310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x227310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x227314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x227318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22731c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22731cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x227320: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x227320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x227324: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x227324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227328: 0x1002000b  beq         $zero, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x227328u;
    {
        const bool branch_taken_0x227328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x227328) {
            ctx->pc = 0x227358u;
            goto label_227358;
        }
    }
    ctx->pc = 0x227330u;
    // 0x227330: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x227330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227334: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x227334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x227338: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22733c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x22733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x227340: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x227340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x227344: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227348: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x227348u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22734c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x22734cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x227350: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x227350u;
    {
        const bool branch_taken_0x227350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227350) {
            ctx->pc = 0x227364u;
            goto label_227364;
        }
    }
    ctx->pc = 0x227358u;
label_227358:
    // 0x227358: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22735c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22735cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x227360: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x227360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_227364:
    // 0x227364: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x227368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22736c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22736cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227370: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x227370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x227374: 0x3e00008  jr          $ra
    ctx->pc = 0x227374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22737Cu;
    // 0x22737c: 0x0  nop
    ctx->pc = 0x22737cu;
    // NOP
    ctx->pc = 0x227380u;
}
