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

// Function: sub_001890D0
// Address: 0x1890d0 - 0x189150
void sub_001890D0_0x1890d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001890D0_0x1890d0");
#endif

    switch (ctx->pc) {
        case 0x189104u: goto label_189104;
        case 0x189114u: goto label_189114;
        case 0x189134u: goto label_189134;
        default: break;
    }

    ctx->pc = 0x1890d0u;

    // 0x1890d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1890d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1890d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1890d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1890d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1890d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1890dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1890dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1890e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1890e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1890e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1890E4u;
    {
        const bool branch_taken_0x1890e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1890e4) {
            ctx->pc = 0x189134u;
            goto label_189134;
        }
    }
    ctx->pc = 0x1890ECu;
    // 0x1890ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1890ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1890f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1890f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1890f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1890f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1890f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1890f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1890fc: 0xc06247c  jal         func_1891F0
    ctx->pc = 0x1890FCu;
    SET_GPR_U32(ctx, 31, 0x189104u);
    ctx->pc = 0x1891F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891F0u, 0x1890FCu, 0x189104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189104u;
label_189104:
    // 0x189104: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18910c: 0xc062454  jal         func_189150
    ctx->pc = 0x18910Cu;
    SET_GPR_U32(ctx, 31, 0x189114u);
    ctx->pc = 0x189150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189150u, 0x18910Cu, 0x189114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189114u;
label_189114:
    // 0x189114: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x189114u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189118: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x189118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18911c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18911cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x189120: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189120u;
    {
        const bool branch_taken_0x189120 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x189120) {
            ctx->pc = 0x189134u;
            goto label_189134;
        }
    }
    ctx->pc = 0x189128u;
    // 0x189128: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18912c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x18912Cu;
    SET_GPR_U32(ctx, 31, 0x189134u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x18912Cu, 0x189134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189134u;
label_189134:
    // 0x189134: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18913c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18913cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x189140: 0x3e00008  jr          $ra
    ctx->pc = 0x189140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189148u;
    // 0x189148: 0x0  nop
    ctx->pc = 0x189148u;
    // NOP
    // 0x18914c: 0x0  nop
    ctx->pc = 0x18914cu;
    // NOP
    ctx->pc = 0x189150u;
}
