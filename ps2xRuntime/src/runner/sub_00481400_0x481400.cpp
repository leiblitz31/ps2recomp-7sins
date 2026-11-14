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

// Function: sub_00481400
// Address: 0x481400 - 0x481440
void sub_00481400_0x481400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481400_0x481400");
#endif

    switch (ctx->pc) {
        case 0x481420u: goto label_481420;
        default: break;
    }

    ctx->pc = 0x481400u;

    // 0x481400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48140c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x48140cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x481410: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x481410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x481414: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481418: 0xc0f53a4  jal         func_3D4E90
    ctx->pc = 0x481418u;
    SET_GPR_U32(ctx, 31, 0x481420u);
    ctx->pc = 0x3D4E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E90u, 0x481418u, 0x481420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481420u;
label_481420:
    // 0x481420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481428: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48142c: 0x3e00008  jr          $ra
    ctx->pc = 0x48142Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48142Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481434u;
    // 0x481434: 0x0  nop
    ctx->pc = 0x481434u;
    // NOP
    // 0x481438: 0x0  nop
    ctx->pc = 0x481438u;
    // NOP
    // 0x48143c: 0x0  nop
    ctx->pc = 0x48143cu;
    // NOP
    ctx->pc = 0x481440u;
}
