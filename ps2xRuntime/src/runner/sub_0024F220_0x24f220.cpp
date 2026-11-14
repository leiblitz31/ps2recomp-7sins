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

// Function: sub_0024F220
// Address: 0x24f220 - 0x24f270
void sub_0024F220_0x24f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F220_0x24f220");
#endif

    switch (ctx->pc) {
        case 0x24f244u: goto label_24f244;
        default: break;
    }

    ctx->pc = 0x24f220u;

    // 0x24f220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24f224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24f228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24f22c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x24f230: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x24f230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x24f234: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24f234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f238: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x24f238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f23c: 0xc093538  jal         func_24D4E0
    ctx->pc = 0x24F23Cu;
    SET_GPR_U32(ctx, 31, 0x24F244u);
    ctx->pc = 0x24D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D4E0u, 0x24F23Cu, 0x24F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F244u;
label_24f244:
    // 0x24f244: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f248: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24f248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f24c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f250: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x24f250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x24f254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f25c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24f25cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24f260: 0x3e00008  jr          $ra
    ctx->pc = 0x24F260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F268u;
    // 0x24f268: 0x0  nop
    ctx->pc = 0x24f268u;
    // NOP
    // 0x24f26c: 0x0  nop
    ctx->pc = 0x24f26cu;
    // NOP
    ctx->pc = 0x24f270u;
}
