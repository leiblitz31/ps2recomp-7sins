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

// Function: sub_00158530
// Address: 0x158530 - 0x1585c0
void sub_00158530_0x158530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158530_0x158530");
#endif

    switch (ctx->pc) {
        case 0x15856cu: goto label_15856c;
        case 0x1585acu: goto label_1585ac;
        default: break;
    }

    ctx->pc = 0x158530u;

    // 0x158530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x158534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158538: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x158538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15853c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15853cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x158540: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x158540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158544: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x158544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x158548: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x158548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15854c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x158550: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x158550u;
    {
        const bool branch_taken_0x158550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x158550) {
            ctx->pc = 0x158584u;
            goto label_158584;
        }
    }
    ctx->pc = 0x158558u;
    // 0x158558: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x158558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15855c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15855cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x158560: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x158560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158564: 0xc056204  jal         func_158810
    ctx->pc = 0x158564u;
    SET_GPR_U32(ctx, 31, 0x15856Cu);
    ctx->pc = 0x158810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158810u, 0x158564u, 0x15856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15856Cu;
label_15856c:
    // 0x15856c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15856cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158570: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x158570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x158574: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x158574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x158578: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x158578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x15857c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15857Cu;
    {
        const bool branch_taken_0x15857c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15857c) {
            ctx->pc = 0x1585ACu;
            goto label_1585ac;
        }
    }
    ctx->pc = 0x158584u;
label_158584:
    // 0x158584: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x158584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158588: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x158588u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x15858c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158590: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x158590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x158594: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x158594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158598: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x158598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15859c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15859cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1585a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1585a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1585a4: 0xc056170  jal         func_1585C0
    ctx->pc = 0x1585A4u;
    SET_GPR_U32(ctx, 31, 0x1585ACu);
    ctx->pc = 0x1585C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1585C0u, 0x1585A4u, 0x1585ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585ACu;
label_1585ac:
    // 0x1585ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1585acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1585b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1585b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1585b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1585B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1585B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1585BCu;
    // 0x1585bc: 0x0  nop
    ctx->pc = 0x1585bcu;
    // NOP
    ctx->pc = 0x1585c0u;
}
