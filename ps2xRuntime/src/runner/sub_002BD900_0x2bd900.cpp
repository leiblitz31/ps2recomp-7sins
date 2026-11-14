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

// Function: sub_002BD900
// Address: 0x2bd900 - 0x2bd980
void sub_002BD900_0x2bd900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD900_0x2bd900");
#endif

    switch (ctx->pc) {
        case 0x2bd934u: goto label_2bd934;
        case 0x2bd944u: goto label_2bd944;
        case 0x2bd964u: goto label_2bd964;
        default: break;
    }

    ctx->pc = 0x2bd900u;

    // 0x2bd900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bd900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bd904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bd904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bd908: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bd908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bd90c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2bd90cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2bd910: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bd910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd914: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BD914u;
    {
        const bool branch_taken_0x2bd914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd914) {
            ctx->pc = 0x2BD964u;
            goto label_2bd964;
        }
    }
    ctx->pc = 0x2BD91Cu;
    // 0x2bd91c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2bd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd920: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bd920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd924: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2bd924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd928: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2bd928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bd92c: 0xc0af688  jal         func_2BDA20
    ctx->pc = 0x2BD92Cu;
    SET_GPR_U32(ctx, 31, 0x2BD934u);
    ctx->pc = 0x2BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDA20u, 0x2BD92Cu, 0x2BD934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD934u;
label_2bd934:
    // 0x2bd934: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bd934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bd938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd93c: 0xc0af660  jal         func_2BD980
    ctx->pc = 0x2BD93Cu;
    SET_GPR_U32(ctx, 31, 0x2BD944u);
    ctx->pc = 0x2BD980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD980u, 0x2BD93Cu, 0x2BD944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD944u;
label_2bd944:
    // 0x2bd944: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2bd944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd948: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bd948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bd94c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bd94cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bd950: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD950u;
    {
        const bool branch_taken_0x2bd950 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bd950) {
            ctx->pc = 0x2BD964u;
            goto label_2bd964;
        }
    }
    ctx->pc = 0x2BD958u;
    // 0x2bd958: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bd958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd95c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2BD95Cu;
    SET_GPR_U32(ctx, 31, 0x2BD964u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2BD95Cu, 0x2BD964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD964u;
label_2bd964:
    // 0x2bd964: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bd964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bd968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd96c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bd96cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bd970: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD978u;
    // 0x2bd978: 0x0  nop
    ctx->pc = 0x2bd978u;
    // NOP
    // 0x2bd97c: 0x0  nop
    ctx->pc = 0x2bd97cu;
    // NOP
    ctx->pc = 0x2bd980u;
}
