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

// Function: sub_0010A480
// Address: 0x10a480 - 0x10a550
void sub_0010A480_0x10a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A480_0x10a480");
#endif

    ctx->pc = 0x10a480u;

    // 0x10a480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10a484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10a488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10a488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10a48c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10a490: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a494: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x10a494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10a498: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x10a498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10a49c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a4a0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x10a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x10a4a4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x10a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10a4a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A4A8u;
    {
        const bool branch_taken_0x10a4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a4a8) {
            ctx->pc = 0x10A4BCu;
            goto label_10a4bc;
        }
    }
    ctx->pc = 0x10A4B0u;
    // 0x10a4b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a4b4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x10a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10a4b8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x10a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_10a4bc:
    // 0x10a4bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a4c0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a4c4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x10a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x10a4c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a4cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a4d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10a4d4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A4D4u;
    {
        const bool branch_taken_0x10a4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10a4d4) {
            ctx->pc = 0x10A4ECu;
            goto label_10a4ec;
        }
    }
    ctx->pc = 0x10A4DCu;
    // 0x10a4dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a4e0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x10a4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x10a4e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10A4E4u;
    {
        const bool branch_taken_0x10a4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a4e4) {
            ctx->pc = 0x10A524u;
            goto label_10a524;
        }
    }
    ctx->pc = 0x10A4ECu;
label_10a4ec:
    // 0x10a4ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a4f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a4f4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a4f8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x10a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x10a4fc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A4FCu;
    {
        const bool branch_taken_0x10a4fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10a4fc) {
            ctx->pc = 0x10A518u;
            goto label_10a518;
        }
    }
    ctx->pc = 0x10A504u;
    // 0x10a504: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a508: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a50c: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x10a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
    // 0x10a510: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A510u;
    {
        const bool branch_taken_0x10a510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a510) {
            ctx->pc = 0x10A524u;
            goto label_10a524;
        }
    }
    ctx->pc = 0x10A518u;
label_10a518:
    // 0x10a518: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a51c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a520: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x10a520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_10a524:
    // 0x10a524: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a528: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x10a528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x10a52c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a530: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x10a530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x10a534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a538: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10a53c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A544u;
    // 0x10a544: 0x0  nop
    ctx->pc = 0x10a544u;
    // NOP
    // 0x10a548: 0x0  nop
    ctx->pc = 0x10a548u;
    // NOP
    // 0x10a54c: 0x0  nop
    ctx->pc = 0x10a54cu;
    // NOP
    ctx->pc = 0x10a550u;
}
