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

// Function: sub_00190950
// Address: 0x190950 - 0x1909b0
void sub_00190950_0x190950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190950_0x190950");
#endif

    switch (ctx->pc) {
        case 0x190974u: goto label_190974;
        case 0x19099cu: goto label_19099c;
        default: break;
    }

    ctx->pc = 0x190950u;

    // 0x190950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19095c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19095cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x190960: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x190960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x190964: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190968: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x190968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19096c: 0xc064294  jal         func_190A50
    ctx->pc = 0x19096Cu;
    SET_GPR_U32(ctx, 31, 0x190974u);
    ctx->pc = 0x190A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190A50u, 0x19096Cu, 0x190974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190974u;
label_190974:
    // 0x190974: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x190974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190978: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x190978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19097c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190980: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x190980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190984: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x190984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x190988: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x190988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19098c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19098cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x190990: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190994: 0xc06426c  jal         func_1909B0
    ctx->pc = 0x190994u;
    SET_GPR_U32(ctx, 31, 0x19099Cu);
    ctx->pc = 0x1909B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1909B0u, 0x190994u, 0x19099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19099Cu;
label_19099c:
    // 0x19099c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1909a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1909a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1909a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1909a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1909a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1909A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1909A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1909B0u;
}
