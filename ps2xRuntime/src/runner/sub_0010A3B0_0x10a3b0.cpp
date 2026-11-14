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

// Function: sub_0010A3B0
// Address: 0x10a3b0 - 0x10a480
void sub_0010A3B0_0x10a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A3B0_0x10a3b0");
#endif

    ctx->pc = 0x10a3b0u;

    // 0x10a3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a3b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10a3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10a3b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10a3bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10a3c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a3c4: 0x8c70000c  lw          $s0, 0xC($v1)
    ctx->pc = 0x10a3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x10a3c8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x10a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10a3cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a3d0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x10a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x10a3d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x10a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10a3d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A3D8u;
    {
        const bool branch_taken_0x10a3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a3d8) {
            ctx->pc = 0x10A3ECu;
            goto label_10a3ec;
        }
    }
    ctx->pc = 0x10A3E0u;
    // 0x10a3e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a3e4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x10a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10a3e8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x10a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_10a3ec:
    // 0x10a3ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a3f0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a3f4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x10a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x10a3f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a3fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a400: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10a400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10a404: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A404u;
    {
        const bool branch_taken_0x10a404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10a404) {
            ctx->pc = 0x10A41Cu;
            goto label_10a41c;
        }
    }
    ctx->pc = 0x10A40Cu;
    // 0x10a40c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a410: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x10a410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x10a414: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10A414u;
    {
        const bool branch_taken_0x10a414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a414) {
            ctx->pc = 0x10A454u;
            goto label_10a454;
        }
    }
    ctx->pc = 0x10A41Cu;
label_10a41c:
    // 0x10a41c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a420: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a424: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a428: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x10a428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10a42c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A42Cu;
    {
        const bool branch_taken_0x10a42c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10a42c) {
            ctx->pc = 0x10A448u;
            goto label_10a448;
        }
    }
    ctx->pc = 0x10A434u;
    // 0x10a434: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a438: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a43c: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x10a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x10a440: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A440u;
    {
        const bool branch_taken_0x10a440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a440) {
            ctx->pc = 0x10A454u;
            goto label_10a454;
        }
    }
    ctx->pc = 0x10A448u;
label_10a448:
    // 0x10a448: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a44c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a450: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x10a450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
label_10a454:
    // 0x10a454: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a458: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10a458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10a45c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a460: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x10a460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x10a464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a468: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10a468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10a46c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A474u;
    // 0x10a474: 0x0  nop
    ctx->pc = 0x10a474u;
    // NOP
    // 0x10a478: 0x0  nop
    ctx->pc = 0x10a478u;
    // NOP
    // 0x10a47c: 0x0  nop
    ctx->pc = 0x10a47cu;
    // NOP
    ctx->pc = 0x10a480u;
}
