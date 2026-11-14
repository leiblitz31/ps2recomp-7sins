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

// Function: sub_00214360
// Address: 0x214360 - 0x2143e0
void sub_00214360_0x214360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214360_0x214360");
#endif

    switch (ctx->pc) {
        case 0x214384u: goto label_214384;
        case 0x2143c8u: goto label_2143c8;
        default: break;
    }

    ctx->pc = 0x214360u;

    // 0x214360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21436c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214374: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214378: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x214378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21437c: 0xc0850f8  jal         func_2143E0
    ctx->pc = 0x21437Cu;
    SET_GPR_U32(ctx, 31, 0x214384u);
    ctx->pc = 0x2143E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143E0u, 0x21437Cu, 0x214384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214384u;
label_214384:
    // 0x214384: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214388: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x214388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21438c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214390: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x214390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x214394: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214398: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21439c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x21439cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2143a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2143a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2143a4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2143a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2143a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2143A8u;
    {
        const bool branch_taken_0x2143a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2143a8) {
            ctx->pc = 0x2143B8u;
            goto label_2143b8;
        }
    }
    ctx->pc = 0x2143B0u;
    // 0x2143b0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2143b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2143b4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2143b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2143b8:
    // 0x2143b8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2143b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2143bc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2143bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2143c0: 0xc085328  jal         func_214CA0
    ctx->pc = 0x2143C0u;
    SET_GPR_U32(ctx, 31, 0x2143C8u);
    ctx->pc = 0x214CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214CA0u, 0x2143C0u, 0x2143C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2143C8u;
label_2143c8:
    // 0x2143c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2143c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2143cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2143ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2143d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2143D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2143D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2143D8u;
    // 0x2143d8: 0x0  nop
    ctx->pc = 0x2143d8u;
    // NOP
    // 0x2143dc: 0x0  nop
    ctx->pc = 0x2143dcu;
    // NOP
    ctx->pc = 0x2143e0u;
}
