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

// Function: sub_002D2290
// Address: 0x2d2290 - 0x2d2320
void sub_002D2290_0x2d2290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2290_0x2d2290");
#endif

    switch (ctx->pc) {
        case 0x2d22ccu: goto label_2d22cc;
        case 0x2d230cu: goto label_2d230c;
        default: break;
    }

    ctx->pc = 0x2d2290u;

    // 0x2d2290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2298: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d2298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d229c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d229cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d22a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d22a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d22a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d22a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d22ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d22b0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D22B0u;
    {
        const bool branch_taken_0x2d22b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d22b0) {
            ctx->pc = 0x2D22E4u;
            goto label_2d22e4;
        }
    }
    ctx->pc = 0x2D22B8u;
    // 0x2d22b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d22bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d22bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d22c0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d22c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d22c4: 0xc0b496c  jal         func_2D25B0
    ctx->pc = 0x2D22C4u;
    SET_GPR_U32(ctx, 31, 0x2D22CCu);
    ctx->pc = 0x2D25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D25B0u, 0x2D22C4u, 0x2D22CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D22CCu;
label_2d22cc:
    // 0x2d22cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d22ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d22d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d22d4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d22d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d22d8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2d22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2d22dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D22DCu;
    {
        const bool branch_taken_0x2d22dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d22dc) {
            ctx->pc = 0x2D230Cu;
            goto label_2d230c;
        }
    }
    ctx->pc = 0x2D22E4u;
label_2d22e4:
    // 0x2d22e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d22e8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2d22e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d22ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d22ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d22f0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d22f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d22f4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2d22f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d22f8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2d22f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2d22fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d22fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2300: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d2300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2304: 0xc0b48c8  jal         func_2D2320
    ctx->pc = 0x2D2304u;
    SET_GPR_U32(ctx, 31, 0x2D230Cu);
    ctx->pc = 0x2D2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2320u, 0x2D2304u, 0x2D230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D230Cu;
label_2d230c:
    // 0x2d230c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d230cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2310: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d2310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d2314: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D231Cu;
    // 0x2d231c: 0x0  nop
    ctx->pc = 0x2d231cu;
    // NOP
    ctx->pc = 0x2d2320u;
}
