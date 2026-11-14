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

// Function: sub_00108690
// Address: 0x108690 - 0x108710
void sub_00108690_0x108690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108690_0x108690");
#endif

    switch (ctx->pc) {
        case 0x1086b4u: goto label_1086b4;
        case 0x1086f8u: goto label_1086f8;
        default: break;
    }

    ctx->pc = 0x108690u;

    // 0x108690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10869c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1086a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1086a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1086a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1086a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1086a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1086a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1086ac: 0xc042104  jal         func_108410
    ctx->pc = 0x1086ACu;
    SET_GPR_U32(ctx, 31, 0x1086B4u);
    ctx->pc = 0x108410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108410u, 0x1086ACu, 0x1086B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086B4u;
label_1086b4:
    // 0x1086b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1086b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1086b8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1086b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1086bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1086bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1086c0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1086c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1086c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1086c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1086c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1086c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1086cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1086ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1086d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1086d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1086d4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1086d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1086d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1086D8u;
    {
        const bool branch_taken_0x1086d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1086d8) {
            ctx->pc = 0x1086E8u;
            goto label_1086e8;
        }
    }
    ctx->pc = 0x1086E0u;
    // 0x1086e0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1086e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1086e4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1086e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1086e8:
    // 0x1086e8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1086e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1086ec: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1086ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1086f0: 0xc042494  jal         func_109250
    ctx->pc = 0x1086F0u;
    SET_GPR_U32(ctx, 31, 0x1086F8u);
    ctx->pc = 0x109250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109250u, 0x1086F0u, 0x1086F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086F8u;
label_1086f8:
    // 0x1086f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1086f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1086fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1086fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x108700: 0x3e00008  jr          $ra
    ctx->pc = 0x108700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108708u;
    // 0x108708: 0x0  nop
    ctx->pc = 0x108708u;
    // NOP
    // 0x10870c: 0x0  nop
    ctx->pc = 0x10870cu;
    // NOP
    ctx->pc = 0x108710u;
}
