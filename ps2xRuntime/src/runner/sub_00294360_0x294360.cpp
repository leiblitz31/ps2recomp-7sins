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

// Function: sub_00294360
// Address: 0x294360 - 0x2943e0
void sub_00294360_0x294360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294360_0x294360");
#endif

    switch (ctx->pc) {
        case 0x294384u: goto label_294384;
        case 0x2943c8u: goto label_2943c8;
        default: break;
    }

    ctx->pc = 0x294360u;

    // 0x294360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x294368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29436c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x29436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294374: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x294374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294378: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x294378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29437c: 0xc0a50f8  jal         func_2943E0
    ctx->pc = 0x29437Cu;
    SET_GPR_U32(ctx, 31, 0x294384u);
    ctx->pc = 0x2943E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2943E0u, 0x29437Cu, 0x294384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294384u;
label_294384:
    // 0x294384: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x294384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294388: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x294388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29438c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294390: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x294390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x294394: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x294394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294398: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x294398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29439c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29439cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2943a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2943a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2943a4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2943a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2943a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2943A8u;
    {
        const bool branch_taken_0x2943a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2943a8) {
            ctx->pc = 0x2943B8u;
            goto label_2943b8;
        }
    }
    ctx->pc = 0x2943B0u;
    // 0x2943b0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2943b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2943b4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2943b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2943b8:
    // 0x2943b8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2943b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2943bc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2943bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2943c0: 0xc0a5bc4  jal         func_296F10
    ctx->pc = 0x2943C0u;
    SET_GPR_U32(ctx, 31, 0x2943C8u);
    ctx->pc = 0x296F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F10u, 0x2943C0u, 0x2943C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2943C8u;
label_2943c8:
    // 0x2943c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2943c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2943cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2943ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2943d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2943D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2943D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2943D8u;
    // 0x2943d8: 0x0  nop
    ctx->pc = 0x2943d8u;
    // NOP
    // 0x2943dc: 0x0  nop
    ctx->pc = 0x2943dcu;
    // NOP
    ctx->pc = 0x2943e0u;
}
